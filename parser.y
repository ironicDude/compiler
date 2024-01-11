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
            | prog statements {
                              printf("------------ PROGRAM ACCEPTED ------------\n");
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

statement   : compound_statement 
            | simple_statement
            | NEWLINE
            | COMMENT
            | MULTILINECOMMENT
            ;

simple_statement  : assignment
                  | return_statement
                  | yield_statement
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
                  /* | try_statement */
                  ;

import_statments  : import_statment NEWLINE
                  | import_statments import_statment
                  ;

import_statment   : KEYWORD_IMPORT member_expression 
                  | KEYWORD_FROM member_expression KEYWORD_IMPORT IDENTIFIER
                  | KEYWORD_FROM member_expression KEYWORD_IMPORT '*'
                  | KEYWORD_IMPORT member_expression KEYWORD_AS IDENTIFIER
                  | KEYWORD_FROM member_expression KEYWORD_IMPORT IDENTIFIER KEYWORD_AS IDENTIFIER
                  ;

assignment  : member_expression ASSIGN expression
            ;

expression  : expression ADD expression         { } 
            | expression MINUS expression       { }
            | expression MULTIPLY expression    { }
            | expression DIVIDE expression      { }
            | expression POWER expression      { }
            | '|' expression  %prec UMINUS      { /*The rule for negation includes %prec UMINUS . The only operator in this rule is - , 
                                                      which has low precedence, but we want unary minus to have higher precedence than multiplication 
                                                      rather than lower. The %prec tells bison to use the precedence of UMINUS for this rule.*/
                                                }
            | '(' expression ')'                { }
            | '-' expression %prec UMINUS       { }
            | number                            { }
            | IDENTIFIER
            | function_call
            ;

number: INTEGER 
      | FLOAT
      ;

del_statment      : KEYWORD_DEL IDENTIFIER
                  | KEYWORD_DEL IDENTIFIER LIST
                  ;

return_statement  : KEYWORD_RETURN member_expression { }
                  | KEYWORD_RETURN expression
                  ;

yield_statement  : KEYWORD_YIELD member_expression { }
                  | KEYWORD_YIELD expression
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

class_block: 
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
      | args IDENTIFIER COMMA
      | args IDENTIFIER 
      | IDENTIFIER COMMA
      | IDENTIFIER 
      ;

member_expression : IDENTIFIER 
                  | member_expression %prec '.' IDENTIFIER 
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