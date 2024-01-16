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
%token <astNode> LEFT_BRACKETS RIGHT_BRACKETS COLON COMMA SEMICOLON TUPLE
%token <astNode> INTEGER FLOAT DEDENT INDENT NEWLINE KEYWORD_MATCH KEYWORD_CASE
%type  <astNode> prog statements statement simple_statement compound_statement import_statment
%type  <astNode> assignment expression number del_statment return_statement yield_statement assert_statement 
%type  <astNode> raise_statement global_statement nonlocal_statement global_nonlocal_targets match_statement match_block 
%type  <astNode> case try_statement try except finally except_statements with_statment with_stmt class 
%type  <astNode> class_block  class_body function_call function block args member_expression logical_expression
%type  <astNode> conditional_statement elif_else elif_stmts if_statement else_statement elif_statement for_statement while_statement
%error-verbose
%nonassoc EQUAL
%left '+' '-'
%left '*' '/'
%nonassoc '|' UMINUS

%%

prog  :                 { 
                              std::string name = "Program" + std::to_string(++n_nodes);
                              $$ = new EmptyNode(name); 
                        }
      | NEWLINE         { }
      | prog statements {     
                              std::string name = "Program" + std::to_string(++n_nodes);
                              $$ = new StatementsNode(name);
                              $$->add($1);
                              $$->add($2);
                              root = $$;
                              YYACCEPT;
                        }
      ;

statements  :  {
                  std::string name = "Statement" + std::to_string(++n_nodes);
                  $$ = new StatementsNode(name);
            }
            | statements statement NEWLINE     { 
                  $1->add($2);
                  $$ = $1;
            }
            | statements statement  { 
                  $1->add($2);
                  $$ = $1; 
            }
            ;

statement   : compound_statement    { $$ = $1; }
            | simple_statement      { $$ = $1; }
            | NEWLINE
            | COMMENT
            | MULTILINECOMMENT
            ;

simple_statement  : assignment            { $$ = $1; }
                  | return_statement      { $$ = $1; }
                  | yield_statement       { $$ = $1; }
                  | assert_statement      { $$ = $1; }
                  | raise_statement       { $$ = $1; }
                  | global_statement      { $$ = $1; }
                  | nonlocal_statement    { $$ = $1; }
                  | del_statment          { $$ = $1; }
                  | import_statment       { $$ = $1; }
                  | function_call         { $$ = $1; }
                  | with_statment         { $$ = $1; }
                  | KEYWORD_PASS
                  | KEYWORD_BREAK
                  | KEYWORD_CONTINUE
                  ;

compound_statement: function                    { $$ = $1; }
                  | conditional_statement       { $$ = $1; }
                  | class
                  | for_statement
                  | while_statement
                  | match_statement
                  | try_statement
                  ;


import_statment   : KEYWORD_IMPORT member_expression {
                        std::string name = "Import" + std::to_string(++n_nodes);
                        $$ = new ImportNode(name);
                        $$->add($2);
                  }
                  | KEYWORD_FROM member_expression KEYWORD_IMPORT IDENTIFIER {
                        std::string name = "Import" + std::to_string(++n_nodes);
                        $$ = new ImportNode(name);
                        $$->add($2);
                        $$->add($4);
                  }
                  | KEYWORD_FROM member_expression KEYWORD_IMPORT MULTIPLY {
                        std::string name = "Import" + std::to_string(++n_nodes);
                        $$ = new ImportNode(name);
                        $$->add($2);
                  }
                  | KEYWORD_IMPORT member_expression KEYWORD_AS IDENTIFIER {
                        std::string name = "Import" + std::to_string(++n_nodes);
                        $$ = new ImportNode(name);
                        $$->add($2);
                        $$->add($4);
                  }
                  | KEYWORD_FROM member_expression KEYWORD_IMPORT IDENTIFIER KEYWORD_AS IDENTIFIER {
                        std::string name = "Import" + std::to_string(++n_nodes);
                        $$ = new ImportNode(name);
                        $$->add($2);
                        $$->add($4);
                        $$->add($6);
                  }
                  ;

assignment  : member_expression ASSIGN expression {  
                  std::string name = "assignment" + std::to_string(++n_nodes);
                  $$ = new AssignmentStatement(name);
                  $$->add($1);
                  $$->add($3);
            }
            ;

expression  : expression ADD expression   { 
                  $$ = new BinaryExpressionNode("+", $1, $3);
            } 
            | expression MINUS expression       { 
                  $$ = new BinaryExpressionNode("-", $1, $3);
            }
            | expression MULTIPLY expression    { 
                  $$ = new BinaryExpressionNode("*", $1, $3);
            }
            | expression DIVIDE expression      { 
                  $$ = new BinaryExpressionNode("/", $1, $3);
            }
            | expression POWER expression       { 
                  $$ = new BinaryExpressionNode("**", $1, $3);
            }
            | expression MODULO expression      {
                  $$ = new BinaryExpressionNode("%", $1, $3);
            }
            | '|' expression  %prec UMINUS      { /*The rule for negation includes %prec UMINUS . The only operator in this rule is - , 
                                                      which has low precedence, but we want unary minus to have higher precedence than multiplication 
                                                      rather than lower. The %prec tells bison to use the precedence of UMINUS for this rule.*/
                                                }
            | LEFT_PARENTHES expression RIGHT_PARENTHES                {$$ = $2; }
            | MINUS expression %prec UMINUS       { }
            | LIST
            | TUPLE
            | KEYWORD_NONE
            | number                            { $$ = $1; }
            | member_expression                 { $$ = $1; }
            | function_call                     { $$ = $1; }
            | LITERALSTRING                     { $$ = $1; }
            ;

number: INTEGER { $$ = $1; }
      | FLOAT   { $$ = $1; }
      ;

del_statment      : KEYWORD_DEL IDENTIFIER      {
                        std::string name = "Del" + std::to_string(++n_nodes);
                        $$ = new DelNode(name);
                        $$->add($2);
                  }
                  | KEYWORD_DEL IDENTIFIER LIST { 
                        std::string name = "Del" + std::to_string(++n_nodes);
                        $$ = new DelNode(name);
                        $$->add($2);
                        $$->add($3);
                  }
                  ;

return_statement  : KEYWORD_RETURN expression {
                        std::string name = "Return" + std::to_string(++n_nodes);
                        $$ = new ReturnNode(name);
                        $$->add($2);
                  }
                  | KEYWORD_RETURN logical_expression {
                        std::string name = "Return" + std::to_string(++n_nodes);
                        $$ = new ReturnNode(name);
                        $$->add($2);
                  }
                  ;

yield_statement  :  KEYWORD_YIELD expression    {
                        std::string name = "Yield" + std::to_string(++n_nodes);
                        $$ = new YieldNode(name);
                        $$->add($2);
                  }
                  ;

assert_statement  : KEYWORD_ASSERT logical_expression {
                        std::string name = "Assert" + std::to_string(++n_nodes);
                        $$ = new AssertNode(name);
                        $$->add($2);
                  }
                  | KEYWORD_ASSERT logical_expression COMMA LITERALSTRING {
                  }
                  ;

raise_statement   : KEYWORD_RAISE function_call {
                        std::string name = "Raise" + std::to_string(++n_nodes);
                        $$ = new RaiseNode(name);
                        $$->add($2);
                  }
                  | KEYWORD_RAISE function_call KEYWORD_FROM IDENTIFIER {
                        std::string name = "Raise" + std::to_string(++n_nodes);
                        $$ = new RaiseNode(name);
                        $$->add($2);
                        $$->add($4);
                  }
                  ;

global_statement  : KEYWORD_GLOBAL global_nonlocal_targets {
                        std::string name = "Global" + std::to_string(++n_nodes);
                        $$ = new GlobalNode(name);
                        $$->add($2);
                  }
                  ;

nonlocal_statement      : KEYWORD_NONLOCAL global_nonlocal_targets {
                        std::string name = "NonLocal" + std::to_string(++n_nodes);
                        $$ = new NonLocalNode(name);
                        $$->add($2);
                  }
                        ;

global_nonlocal_targets : IDENTIFIER {
                              $$ = $1;
                        }
                        | IDENTIFIER COMMA global_nonlocal_targets { 
                              $1->add($3);
                              $$ = $1;
                        }
                        ;

match_statement   : KEYWORD_MATCH IDENTIFIER COLON NEWLINE INDENT match_block DEDENT {
                        std::string name = dynamic_cast<IdentifierNode*>($2)->value;
                        $$ = new MatchNode(name);
                        $$->add($2);
                        $$->add($6);
                  }
                  ;

match_block : match_block case      { 
                  $1->add($2);
            }
            | case      {
                  std::string name = "MatchBlock" + std::to_string(++n_nodes);
                  $$ = new MatchBlock(name);
                  $$->add($1);
            }
            ;

case  : KEYWORD_CASE expression COLON block {
            std::string name = "Case" + std::to_string(++n_nodes);
            $$ = new CaseNode(name);
            $$->add($2);
            $$->add($4);
      }
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
      | KEYWORD_EXCEPT member_expression KEYWORD_AS IDENTIFIER COLON block
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

class : KEYWORD_CLASS IDENTIFIER LEFT_PARENTHES args RIGHT_PARENTHES COLON class_block {
                  std::string name = "classWithInheritance" + std::to_string(n_nodes);
                  ++n_nodes;
                  $$ = new ClassNode(name);
                  $$->add($2);
                  $$->add($4);
                  $$->add($7);
                  }
      | KEYWORD_CLASS IDENTIFIER COLON class_block {
                  std::string name = "classWithoutInheritance" + std::to_string(n_nodes);
                  ++n_nodes;
                  $$ = new ClassNode(name);
                  $$->add($2);
                  $$->add($4);
                  }
      ;


class_block: NEWLINE INDENT class_body DEDENT{
                                                $$ = $3;
                                          };

class_body  : /* Empty */ { 
            std::string nname = "Classbody" + std::to_string(n_nodes);
            ++n_nodes;
            $$ = new EmptyNode(nname);
            }
            | class_body function { 
                  $$ = new ClassBodyNode("ClassBody");
                  $$->add($2);
            }
            | class_body assignment { 
                  $$ = new ClassBodyNode("ClassBody");
                  $$->add($2);
            }
            | class_body NEWLINE{
                  $$ = $1;
            }
            ;

function_call     : IDENTIFIER LEFT_PARENTHES args RIGHT_PARENTHES {
                        std::string name = dynamic_cast<IdentifierNode*>($1)->value + std::to_string(++n_nodes);
                        $$ = new FunctionCall(name, $1);
                        $$->add($1);
                        $$->add($3);                                         
                  }
                  | IDENTIFIER LEFT_PARENTHES function_call RIGHT_PARENTHES {
                        std::string name = dynamic_cast<IdentifierNode*>($1)->value + std::to_string(++n_nodes);
                        $$ = new FunctionCall(name, $1);
                        $$->add($1);
                        $$->add($3);
                  }
                  ;

function    : KEYWORD_DEF IDENTIFIER LEFT_PARENTHES args RIGHT_PARENTHES COLON block {
                  IdentifierNode* idFunc = dynamic_cast<IdentifierNode*>($2);
                  $$ = new FunctionNode(idFunc->value);
                  $$->add($4);
                  $$->add($7);
            };

block : NEWLINE INDENT statements DEDENT  {     
                  std::string name = "block" + std::to_string(n_nodes);
                  ++n_nodes;
                  $$ = new BlockNode(name);
                  $$->add($3);
            }
      ;

args  : /* EMPTY */     { 
            std::string name = "Args" + std::to_string(++n_nodes);
            $$ = new EmptyNode(name); 
      }
      | args expression COMMA 
      | args expression 
      | expression COMMA
      | expression
      ;

member_expression : IDENTIFIER      {
                        std::string name = "identifire" + std::to_string(++n_nodes);
                        $1->name=name;
                        $$ = $1;
                  }
                  | member_expression %prec '.' IDENTIFIER  {
                        std::string name = "identifire" + std::to_string(++n_nodes);
                        $2->name=name;
                        $$ = new MemberExpression($1, $2);
                        $$->add($1); 
                        $$->add($2); 
                  }
                  | member_expression %prec '.' function_call     { 
                        $$ = new MemberExpression($1, $2); 
                        $$->add($1); 
                        $$->add($2); 
                  }
                  ;

logical_expression: expression      { $$ = $1; }
                  | expression GREATEROREQUAL expression    {
                        $$ = new BinaryLogicalExpression(">=", $1, $3);
                  }
                  | expression GREATERTHAN expression {
                        $$ = new BinaryLogicalExpression(">", $1, $3);
                  }
                  | expression LESSOREQUAL expression {
                        $$ = new BinaryLogicalExpression("<=", $1, $3);
                  }
                  | expression LESSTHAN expression    {
                        $$ = new BinaryLogicalExpression("<", $1, $3);
                  }
                  | expression EQUAL expression {
                        $$ = new BinaryLogicalExpression("==", $1, $3);
                  }
                  | expression NOTEQUAL expression    {
                        $$ = new BinaryLogicalExpression("!=", $1, $3);
                  }
                  | logical_expression KEYWORD_AND logical_expression   {
                        $$ = new BinaryLogicalExpression("and", $1, $3);
                  }
                  | logical_expression KEYWORD_OR logical_expression    {
                        $$ = new BinaryLogicalExpression("or", $1, $3);
                  }
                  | KEYWORD_NOT logical_expression    {
                        $$ = new BinaryLogicalExpression("not", $1, $2);
                  }
                  | KEYWORD_TRUE    { $$ = $1; }
                  | KEYWORD_FALSE   { $$ = $1; }
                  ;

conditional_statement   : if_statement elif_else      {
                              $1->add($2);
                              $$ = $1;
                        }
                        ;

elif_else   : /* EMPTY */     { 
                  std::string name = "elif_else" + std::to_string(++n_nodes);
                  $$ = new EmptyNode(name); 
            }
            | elif_stmts else_statement {
                  $1->add($2);
                  $$ = $1;
            }
            | elif_stmts      {
                  $$ = $1;
            }
            | else_statement  {
                  $$ = $1;
            }
            ;

elif_stmts  : elif_statement  {
                  $$ = $1;
            }
            | elif_stmts elif_statement   {
                  $1->add($2);
                  $$ = $1;
            }
            ;

if_statement      : KEYWORD_IF logical_expression COLON block     {
                        std::string name = "if" + std::to_string(++n_nodes);
                        $$ = new ConditionalStatement("if", name);
                        $$->add($2);
                        $$->add($4);
                  }
                  | KEYWORD_IF LEFT_PARENTHES logical_expression RIGHT_PARENTHES COLON block {
                        std::string name = "if" + std::to_string(++n_nodes);
                        $$ = new ConditionalStatement("if", name);
                        $$->add($3);
                        $$->add($6);
                  }
                  ;

else_statement    : KEYWORD_ELSE COLON block    {
                        std::string name = "else" + std::to_string(++n_nodes);
                        $$ = new ConditionalStatement("else", name);
                        $$->add($3);
                  }
                  ;

elif_statement    : KEYWORD_ELSE_IF logical_expression COLON block      {
                        std::string name = "elif" + std::to_string(++n_nodes);
                        $$ = new ConditionalStatement("elif", name);
                        $$->add($2);
                        $$->add($4);
                  }
                  | KEYWORD_ELSE_IF LEFT_PARENTHES logical_expression RIGHT_PARENTHES COLON block     {
                        std::string name = "elif" + std::to_string(++n_nodes);
                        $$ = new ConditionalStatement("elif", name);
                        $$->add($3);
                        $$->add($6);
                  }
                  ;

for_statement     : KEYWORD_FOR IDENTIFIER KEYWORD_IN function_call COLON block
                  | KEYWORD_FOR IDENTIFIER KEYWORD_IN LIST COLON block
                  | KEYWORD_FOR LEFT_PARENTHES args RIGHT_PARENTHES KEYWORD_IN function_call COLON block
                  | KEYWORD_FOR IDENTIFIER KEYWORD_IN member_expression COLON block
                  | KEYWORD_FOR IDENTIFIER KEYWORD_IN member_expression function_call COLON block
                  | KEYWORD_FOR IDENTIFIER KEYWORD_IN member_expression function_call '.' IDENTIFIER COLON block
                  ;

while_statement   : KEYWORD_WHILE logical_expression COLON block {
                        std::string name = "While" + std::to_string(++n_nodes);
                        $$ = new WhileNode(name);
                        $$->add($2);
                        $$->add($4);
                  }
                  | KEYWORD_WHILE LEFT_PARENTHES logical_expression RIGHT_PARENTHES COLON block {
                        std::string name = "While" + std::to_string(++n_nodes);
                        $$ = new WhileNode(name);
                        $$->add($3);
                        $$->add($6);
                  }
                  ;

%%

int main(int argc, char **argv)
{
 /*success("This is a valid python expression");
 expression : NUMBER  { }
            ;
                : expression '+' expression     { }
    | expression '-' expression     { }
    | expression '*' expression     { }
    | expression '/' expression     { }*/
     if (argc > 1){
        for(int i=0;i<argc;i++)
            // printf("value of argv[%d] = %s\n\n",i,argv[i]);
            yyin=fopen(argv[1],"r");
      }
      else
        yyin=stdin;
      
      yyparse();
      if (root != NULL) {
            AST ast(root);
            ast.Print();
      }
      return 0;
}


void yyerror(const char* s) {
    std::cerr << "Parser error: " << s << std::endl;
}