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
%token LITERALSTRING LITERALCHAR KEYWORD_FALSE KEYWORD_TRUE 
%token KEYWORD_AWAIT KEYWORD_IF KEYWORD_ELSE KEYWORD_ELSE_IF 
%token KEYWORD_IMPORT KEYWORD_PASS KEYWORD_NONE KEYWORD_BREAK
%token KEYWORD_EXCEPT KEYWORD_IN KEYWORD_RAISE KEYWORD_CLASS
%token KEYWORD_FINALLY KEYWORD_IS KEYWORD_RETURN KEYWORD_AND
%token KEYWORD_CONTINUE KEYWORD_FOR KEYWORD_LAMBDA KEYWORD_TRY
%token KEYWORD_AS KEYWORD_DEF KEYWORD_FROM KEYWORD_NONLOCAL
%token KEYWORD_WHILE KEYWORD_ASSERT KEYWORD_DEL KEYWORD_GLOBAL
%token KEYWORD_NOT KEYWORD_WITH KEYWORD_ASYNC KEYWORD_OR
%token KEYWORD_YIELD OPERATORS COMMENT ADD MINUS MULTIPLY 
%token DIVIDE POWER MODULO ASSIGN ASSIGNADD ASSIGNMINUS 
%token ASSIGNMULTIPLY ASSIGNDIVIDE ASSIGNMODULO ASSIGNFLOORDIVISION
%token ASSIGNEXPONINTIATION ASSIGNBITWISEAND ASSIGNBITWISEOR
%token ASSIGNBITWISEXOR ASSIGNRIGHTSHIFT ASSIGNLEFTSHIFT EQUAL NOT
%token NOTEQUAL GREATERTHAN GREATEROREQUAL LESSTHAN LESSOREQUAL
%token LEFT_PARENTHES RIGHT_PARENTHES LEFT_BRACES RIGHT_BRACES 
%token LEFT_BRACKETS RIGHT_BRACKETS COLON COMMA SEMICOLON 
%token INCREMENT DECREMENT INTEGER FLOAT DEDENT INDENT NEWLINE

%error-verbose
%nonassoc EQUAL
%left '+' '-'
%left '*' '/'
%nonassoc '|' UMINUS

%%

/* Parser Grammar */
prog        : /*empty */    { /* for empty put % empty */}
            | NEWLINE
            | statements prog {
                              printf("prog accepted:\n");
                              YYACCEPT;
                        }
            ;
            /* | method prog {
                              printf("prog accepted:\n");
                              YYACCEPT;
                        }
            | class prog {
                        printf("prog accepted:\n");
                        YYACCEPT;
                  }
            ;

class       : class_with_inheritance      { }
            | class_without_inheritance   { }
            ;

class_with_inheritance
            : KEYWORD_CLASS IDENTIFIER '(' parent_classes ')' COLON class_body { }
            ;

class_without_inheritance
            : KEYWORD_CLASS IDENTIFIER COLON class_body { 
                        printf("Method successfully parsed:\n"); 
                        YYACCEPT;
                  }
            ;

parent_classes  
            :                 { }
            | parent_classes_ { }
            ;

parent_classes_ 
            : IDENTIFIER                        { }
            | parent_classes_ ',' IDENTIFIER    { }
            ;

class_body  : INDENT class_suite DEDENT { }
            ;

class_suite : NEWLINE member NEWLINE      { }
            | class_suite member NEWLINE  { }
            ;

member      : attribute { }
            | method    { }
            ;

attribute   :  IDENTIFIER ASSIGN expression { }
            ;

method      : KEYWORD_DEF WHITESPACE IDENTIFIER LEFT_PARENTHES args RIGHT_PARENTHES COMMA block {
                        printf("Method successfully parsed:\n"); 
                        YYACCEPT;
                  }
            ;

args        : /* empty params */    /*{ }
            | args_                 { }
            ;

args_       : arg             { }
            | args_ ',' arg   { }
            ;

arg         : IDENTIFIER      { }
            | DIGIT           { }
            | FLOAT           { }
            ;

block       : NEWLINE INDENT statements DEDENT  { }
            ; 
            */

statements  : statements statement
            | statement
            | statements NEWLINE
            ;

statement   : compound_statement | simple_statement {};


simple_statement:
            assignment
            | return_statement
            | KEYWORD_CONTINUE
            | KEYWORD_PASS
            | KEYWORD_BREAK
            ;

compound_statement:
            function
            | if_statement
            | class
            /* | for_statement */
            /* | while_statement */
            /* | try_statement */
            ;
assignment  : member_expression ASSIGN expression  { printf("assignment\n"); }
            ;

expression  : /* empty */
            expression ADD expression     { printf("expression\n"); } 
            | expression MINUS expression     { }
            | expression MULTIPLY expression     { }
            | expression DIVIDE expression     { }
            | '|' expression  %prec UMINUS  { /*The rule for negation includes %prec UMINUS . The only operator in this rule is - , 
                                                which has low precedence, but we want unary minus to have higher precedence than multiplication 
                                                rather than lower. The %prec tells bison to use the precedence of UMINUS for this rule.*/
                                          }
            | '(' expression ')'            { }
            | '-' expression %prec UMINUS   { }
            | INTEGER                       { printf("integer\n"); }
            | FLOAT                         { }
            ;
number : INTEGER | FLOAT;
return_statement : KEYWORD_RETURN number { }
            | KEYWORD_RETURN member_expression { }
            ;
if_statement: KEYWORD_IF 
class: class_with_inheritance | class_without_inheritance;
class_with_inheritance: KEYWORD_CLASS IDENTIFIER LEFT_PARENTHES args RIGHT_PARENTHES COLON NEWLINE INDENT class_block DEDENT;
class_block: 
            | class_block assignment
            | class_block function
            | class_block NEWLINE
            ;
class_without_inheritance: KEYWORD_CLASS IDENTIFIER COLON NEWLINE INDENT class_block DEDENT;
/* for_statement: */
/* while_statement: */
/* try_statement: */
function: KEYWORD_DEF IDENTIFIER LEFT_PARENTHES args RIGHT_PARENTHES COLON block {};
block: NEWLINE INDENT statements DEDENT
args:
      | args IDENTIFIER COMMA
      | args IDENTIFIER 
      | IDENTIFIER COMMA
      | IDENTIFIER 
      ;

member_expression:
                  IDENTIFIER 
                  | member_expression %prec '.' IDENTIFIER 
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