%code requires {
      #include "python_ast_node.hpp"
      #include <iostream>
      #include <string>
}
%union{
	AstNode* astNode;
}
%{
      extern int yylex();
      extern int yyparse();
      extern FILE *yyin;
      void yyerror(const char *);
      AstNode* root = NULL;
      int n_nodes = 0;
%}

/* Tokens */
%token <astNode> WHITESPACE LETTER ALPHANUM IDENTIFIER LIST
%token <astNode> LITERALSTRING LITERALCHAR KEYWORD_FALSE KEYWORD_TRUE MULTILINESTRING
%token <astNode> KEYWORD_AWAIT KEYWORD_IF KEYWORD_ELSE KEYWORD_ELSE_IF 
%token <astNode> KEYWORD_IMPORT KEYWORD_PASS KEYWORD_NONE KEYWORD_BREAK
%token <astNode> KEYWORD_EXCEPT KEYWORD_IN KEYWORD_RAISE KEYWORD_CLASS
%token <astNode> KEYWORD_FINALLY KEYWORD_IS KEYWORD_RETURN KEYWORD_AND
%token <astNode> KEYWORD_CONTINUE KEYWORD_FOR KEYWORD_LAMBDA KEYWORD_TRY
%token <astNode> KEYWORD_AS KEYWORD_DEF KEYWORD_FROM KEYWORD_NONLOCAL
%token <astNode> KEYWORD_WHILE KEYWORD_ASSERT KEYWORD_DEL KEYWORD_GLOBAL
%token <astNode> KEYWORD_NOT KEYWORD_WITH KEYWORD_ASYNC KEYWORD_OR
%token <astNode> KEYWORD_YIELD OPERATORS COMMENT ADD MINUS MULTIPLY MULTILINECOMMENT 
%token <astNode> DIVIDE POWER MODULO ASSIGN ASSIGNADD ASSIGNMINUS 
%token <astNode> ASSIGNMULTIPLY ASSIGNDIVIDE ASSIGNMODULO ASSIGNFLOORDIVISION
%token <astNode> ASSIGNEXPONINTIATION ASSIGNBITWISEAND ASSIGNBITWISEOR
%token <astNode> ASSIGNBITWISEXOR ASSIGNRIGHTSHIFT ASSIGNLEFTSHIFT EQUAL NOT
%token <astNode> NOTEQUAL GREATERTHAN GREATEROREQUAL LESSTHAN LESSOREQUAL
%token <astNode> LEFT_PARENTHES RIGHT_PARENTHES LEFT_BRACES RIGHT_BRACES 
%token <astNode> LEFT_BRACKETS RIGHT_BRACKETS COLON COMMA SEMICOLON 
%token <astNode> INTEGER FLOAT DEDENT INDENT NEWLINE KEYWORD_MATCH KEYWORD_CASE
%type  <astNode> prog statements statement simple_statement compound_statement import_statments import_statment
%type  <astNode> assignment expression number del_statment return_statement yield_statement assert_statement 
%type  <astNode> raise_statement global_statement nonlocal_statement global_nonlocal_targets match_statement match_block 
%type  <astNode> cases case try_statement try except finally except_statements with_statment with_stmt class class_with_inheritance 
%type  <astNode> class_block  class_without_inheritance function_call function block args member_expression logical_expression
%type  <astNode> conditional_statement elif_else elif_stmts if_statement else_statement elif_statement for_statement while_statement
%error-verbose
%nonassoc EQUAL
%left '+' '-'
%left '*' '/'
%nonassoc '|' UMINUS

%%

prog  :                 { }
      | NEWLINE         { }
      | prog statements {
                              printf("------------ PROGRAM ACCEPTED ------------\n");
                              $$ = new StatementsNode("prog");
                              $$->add($1);
                              root = $$;
                              YYACCEPT;
                        }
      ;

statements  : statements statement  { $1->add($2); $$ = $1; }
            | statement             { $$ = $1; }
            | statements NEWLINE    { $$ = $1; }
            ;

statement   : compound_statement    { $$ = $1; }
            | simple_statement      { $$ = $1; }
            | NEWLINE
            | COMMENT
            | MULTILINECOMMENT
            ;

simple_statement  : assignment
                  | return_statement
                  | yield_statement
                  | assert_statement
                  | raise_statement
                  | global_statement
                  | nonlocal_statement
                  | del_statment
                  | import_statments
                  | function_call
                  | with_statment
                  | KEYWORD_PASS          {
                        $$ = new StatementsNode("pass");
                        $$->add($1);
                  }
                  | KEYWORD_BREAK
                  | KEYWORD_CONTINUE
                  ;

compound_statement: function                    { $$ = $1; }
                  | conditional_statement
                  | class
                  | for_statement
                  | while_statement
                  | match_statement
                  | try_statement
                  ;

import_statments  : import_statment NEWLINE
                  | import_statments import_statment
                  ;

import_statment   : KEYWORD_IMPORT member_expression 
                  | KEYWORD_FROM member_expression KEYWORD_IMPORT IDENTIFIER
                  | KEYWORD_FROM member_expression KEYWORD_IMPORT MULTIPLY
                  | KEYWORD_IMPORT member_expression KEYWORD_AS IDENTIFIER
                  | KEYWORD_FROM member_expression KEYWORD_IMPORT IDENTIFIER KEYWORD_AS IDENTIFIER
                  ;

assignment  : member_expression ASSIGN expression
            | member_expression ASSIGNADD expression
            | member_expression ASSIGNDIVIDE expression
            | member_expression ASSIGNEXPONINTIATION expression
            | member_expression ASSIGNMULTIPLY expression
            | member_expression ASSIGNMODULO expression
            | member_expression ASSIGNMINUS expression
            | member_expression ASSIGNFLOORDIVISION expression
            | member_expression ASSIGNRIGHTSHIFT expression
            | member_expression ASSIGNLEFTSHIFT expression
            ;

expression  : expression ADD expression         { } 
            | expression MINUS expression       { }
            | expression MULTIPLY expression    { }
            | expression DIVIDE expression      { }
            | expression POWER expression       { }
            | expression MODULO expression
            | '|' expression  %prec UMINUS      { /*The rule for negation includes %prec UMINUS . The only operator in this rule is - , 
                                                      which has low precedence, but we want unary minus to have higher precedence than multiplication 
                                                      rather than lower. The %prec tells bison to use the precedence of UMINUS for this rule.*/
                                                }
            | '(' expression ')'                { }
            | '-' expression %prec UMINUS       { }
            | number                            { }
            | member_expression                 { }
            | function_call                     { }
            | LITERALSTRING
            | LIST
            | KEYWORD_NONE
            ;

number: INTEGER 
      | FLOAT
      ;

del_statment      : KEYWORD_DEL IDENTIFIER      { }
                  | KEYWORD_DEL IDENTIFIER LIST { }
                  ;

return_statement  :KEYWORD_RETURN expression
                  | KEYWORD_RETURN logical_expression
                  ;

yield_statement   :  KEYWORD_YIELD expression
                  ;

assert_statement  : KEYWORD_ASSERT logical_expression
                  | KEYWORD_ASSERT logical_expression COMMA LITERALSTRING
                  ;

raise_statement   : KEYWORD_RAISE function_call
                  | KEYWORD_RAISE function_call KEYWORD_FROM IDENTIFIER
                  ;

global_statement  : KEYWORD_GLOBAL global_nonlocal_targets
                  ;

nonlocal_statement      : KEYWORD_NONLOCAL global_nonlocal_targets
                        ;

global_nonlocal_targets : IDENTIFIER
                        | IDENTIFIER COMMA global_nonlocal_targets
                        ;

match_statement   : KEYWORD_MATCH IDENTIFIER COLON match_block
                  ;

match_block : NEWLINE INDENT cases DEDENT
            ;

cases : cases case
      | case
      ;

case  : KEYWORD_CASE expression COLON block
      ;

try_statement     : try finally
                  | try except_statements
                  | try except_statements finally
                  | try except_statements else_statement
                  | try except_statements else_statement finally
                  ;

try   : KEYWORD_TRY COLON block
      ;

except: KEYWORD_EXCEPT COLON block
      | KEYWORD_EXCEPT member_expression COLON block
      ;

finally     : KEYWORD_FINALLY COLON block
            ;

except_statements : except_statements except
                  | except
                  ;

with_statment     : KEYWORD_WITH with_stmt COLON block
                  ;

with_stmt   : function_call KEYWORD_AS IDENTIFIER
            | with_stmt COMMA function_call KEYWORD_AS IDENTIFIER
            ;

class : class_with_inheritance 
      | class_without_inheritance
      ;

class_with_inheritance  : KEYWORD_CLASS IDENTIFIER LEFT_PARENTHES args RIGHT_PARENTHES COLON class_block
                        ;

class_block: NEWLINE INDENT class_body DEDENT;

class_body: | class_body assignment
            | class_body function
            | class_body NEWLINE
            ;

class_without_inheritance     : KEYWORD_CLASS IDENTIFIER COLON NEWLINE INDENT class_block DEDENT
                              ;

function_call     : IDENTIFIER LEFT_PARENTHES args RIGHT_PARENTHES
                  | IDENTIFIER LEFT_PARENTHES number RIGHT_PARENTHES
                  | IDENTIFIER LEFT_PARENTHES LITERALSTRING RIGHT_PARENTHES
                  | IDENTIFIER LEFT_PARENTHES function_call RIGHT_PARENTHES
                  ;

function    : KEYWORD_DEF IDENTIFIER LEFT_PARENTHES args RIGHT_PARENTHES COLON block {
                  std::string name = "function" + std::to_string(n_nodes);
                  ++n_nodes;
                  IdentifierNode* idFunc = dynamic_cast<IdentifierNode*>($2);
                  $$ = new FunctionNode(idFunc->value);
                  $$->add($4);
                  $$->add($7);
            };

block : NEWLINE INDENT statements DEDENT  {
            $$ = $3;
      };

args  :                       { $$ = NULL; }
      | args expression COMMA
      | args expression 
      | expression COMMA
      | expression
      ;

member_expression : IDENTIFIER 
                  | member_expression %prec '.' IDENTIFIER 
                  | member_expression %prec '.' function_call
                  ;

logical_expression: expression
                  | expression GREATEROREQUAL expression
                  | expression GREATERTHAN expression
                  | expression LESSOREQUAL expression
                  | expression LESSTHAN expression
                  | expression EQUAL expression
                  | expression NOTEQUAL expression
                  | logical_expression KEYWORD_AND logical_expression
                  | logical_expression KEYWORD_OR logical_expression
                  | KEYWORD_NOT logical_expression
                  | KEYWORD_TRUE
                  | KEYWORD_FALSE
                  ;

conditional_statement   : if_statement elif_else
                        ;

elif_else   : 
            | elif_stmts else_statement
            | elif_stmts
            | else_statement
            ;

elif_stmts  : elif_statement
            | elif_stmts elif_statement 
            ;

if_statement      : KEYWORD_IF logical_expression COLON block
                  | KEYWORD_IF LEFT_PARENTHES logical_expression RIGHT_PARENTHES COLON block
                  ;

else_statement    : KEYWORD_ELSE COLON block
                  ;

elif_statement    : KEYWORD_ELSE_IF logical_expression COLON block
                  | KEYWORD_ELSE_IF LEFT_PARENTHES logical_expression RIGHT_PARENTHES COLON block
                  ;

for_statement     : KEYWORD_FOR IDENTIFIER KEYWORD_IN function_call COLON block
                  | KEYWORD_FOR IDENTIFIER KEYWORD_IN LIST COLON block
                  | KEYWORD_FOR LEFT_PARENTHES args RIGHT_PARENTHES KEYWORD_IN function_call COLON block
                  | KEYWORD_FOR IDENTIFIER KEYWORD_IN member_expression COLON block
                  | KEYWORD_FOR IDENTIFIER KEYWORD_IN member_expression function_call COLON block
                  | KEYWORD_FOR IDENTIFIER KEYWORD_IN member_expression function_call '.' IDENTIFIER COLON block
                  ;

while_statement   : KEYWORD_WHILE logical_expression COLON block
                  | KEYWORD_WHILE LEFT_PARENTHES logical_expression RIGHT_PARENTHES COLON block
                  ;

%%

int main(int argc, char **argv) {
      /*success("This is a valid python expression");*/
      if (argc > 1){
            for(int i=0;i<argc;i++)
                  printf("value of argv[%d] = %s\n\n",i,argv[i]);
            yyin=fopen(argv[1],"r");
      }
      else
            yyin=stdin;
      yyparse();
      return 0;
}

void yyerror(const char *msg) {
      printf(" %s \n", msg);
}