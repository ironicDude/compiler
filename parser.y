%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int yydebug=1;
FILE *yyin;
void yyerror(const char *);
extern int yylex();
%}

/* Tokens */
%token WHITESPACE LETTER ALPHANUM IDENTIFIER LIST
%token LITERALSTRING LITERALCHAR KEYWORD_FALSE KEYWORD_TRUE MULTILINESTRING
%token KEYWORD_AWAIT KEYWORD_IF KEYWORD_ELSE KEYWORD_ELSE_IF 
%token KEYWORD_IMPORT KEYWORD_PASS KEYWORD_NONE KEYWORD_BREAK
%token KEYWORD_EXCEPT KEYWORD_IN KEYWORD_RAISE KEYWORD_CLASS
%token KEYWORD_FINALLY KEYWORD_IS KEYWORD_RETURN KEYWORD_AND
%token KEYWORD_CONTINUE KEYWORD_FOR KEYWORD_LAMBDA KEYWORD_TRY
%token KEYWORD_AS KEYWORD_DEF KEYWORD_FROM KEYWORD_NONLOCAL
%token KEYWORD_WHILE KEYWORD_ASSERT KEYWORD_DEL KEYWORD_GLOBAL
%token KEYWORD_NOT KEYWORD_WITH KEYWORD_ASYNC KEYWORD_OR
%token KEYWORD_YIELD OPERATORS COMMENT ADD MINUS MULTIPLY MULTILINECOMMENT 
%token DIVIDE POWER MODULO ASSIGN ASSIGNADD ASSIGNMINUS 
%token ASSIGNMULTIPLY ASSIGNDIVIDE ASSIGNMODULO ASSIGNFLOORDIVISION
%token ASSIGNEXPONINTIATION ASSIGNBITWISEAND ASSIGNBITWISEOR
%token ASSIGNBITWISEXOR ASSIGNRIGHTSHIFT ASSIGNLEFTSHIFT EQUAL NOT
%token NOTEQUAL GREATERTHAN GREATEROREQUAL LESSTHAN LESSOREQUAL
%token LEFT_PARENTHES RIGHT_PARENTHES LEFT_BRACES RIGHT_BRACES 
%token LEFT_BRACKETS RIGHT_BRACKETS COLON COMMA SEMICOLON 
%token INTEGER FLOAT DEDENT INDENT NEWLINE KEYWORD_MATCH KEYWORD_CASE

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
                              YYACCEPT;
                        }
      ;

statements  : statements statement
            | statement
            | statements NEWLINE
            ;

statement   : compound_statement 
            | simple_statement
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
                  | KEYWORD_PASS
                  | KEYWORD_BREAK
                  | KEYWORD_CONTINUE
                  ;

compound_statement: function
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

class_with_inheritance  : KEYWORD_CLASS IDENTIFIER LEFT_PARENTHES args RIGHT_PARENTHES COLON NEWLINE INDENT class_block DEDENT
                        ;

class_block : 
            | class_block assignment
            | class_block function
            | class_block NEWLINE
            ;

class_without_inheritance     : KEYWORD_CLASS IDENTIFIER COLON NEWLINE INDENT class_block DEDENT
                              ;

function_call     : IDENTIFIER LEFT_PARENTHES args RIGHT_PARENTHES
                  | IDENTIFIER LEFT_PARENTHES number RIGHT_PARENTHES
                  | IDENTIFIER LEFT_PARENTHES LITERALSTRING RIGHT_PARENTHES
                  | IDENTIFIER LEFT_PARENTHES function_call RIGHT_PARENTHES
                  ;

function    : KEYWORD_DEF IDENTIFIER LEFT_PARENTHES args RIGHT_PARENTHES COLON block
            ;

block : NEWLINE INDENT statements DEDENT
      ;

args  :
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