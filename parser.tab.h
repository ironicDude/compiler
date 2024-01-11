
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton interface for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.
   
   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.
   
   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.
   
   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.
   
   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     WHITESPACE = 258,
     LETTER = 259,
     ALPHANUM = 260,
     IDENTIFIER = 261,
     LIST = 262,
     LITERALSTRING = 263,
     LITERALCHAR = 264,
     KEYWORD_FALSE = 265,
     KEYWORD_TRUE = 266,
     MULTILINESTRING = 267,
     KEYWORD_AWAIT = 268,
     KEYWORD_IF = 269,
     KEYWORD_ELSE = 270,
     KEYWORD_ELSE_IF = 271,
     KEYWORD_IMPORT = 272,
     KEYWORD_PASS = 273,
     KEYWORD_NONE = 274,
     KEYWORD_BREAK = 275,
     KEYWORD_EXCEPT = 276,
     KEYWORD_IN = 277,
     KEYWORD_RAISE = 278,
     KEYWORD_CLASS = 279,
     KEYWORD_FINALLY = 280,
     KEYWORD_IS = 281,
     KEYWORD_RETURN = 282,
     KEYWORD_AND = 283,
     KEYWORD_CONTINUE = 284,
     KEYWORD_FOR = 285,
     KEYWORD_LAMBDA = 286,
     KEYWORD_TRY = 287,
     KEYWORD_AS = 288,
     KEYWORD_DEF = 289,
     KEYWORD_FROM = 290,
     KEYWORD_NONLOCAL = 291,
     KEYWORD_WHILE = 292,
     KEYWORD_ASSERT = 293,
     KEYWORD_DEL = 294,
     KEYWORD_GLOBAL = 295,
     KEYWORD_NOT = 296,
     KEYWORD_WITH = 297,
     KEYWORD_ASYNC = 298,
     KEYWORD_OR = 299,
     KEYWORD_YIELD = 300,
     OPERATORS = 301,
     COMMENT = 302,
     ADD = 303,
     MINUS = 304,
     MULTIPLY = 305,
     MULTILINECOMMENT = 306,
     DIVIDE = 307,
     POWER = 308,
     MODULO = 309,
     ASSIGN = 310,
     ASSIGNADD = 311,
     ASSIGNMINUS = 312,
     ASSIGNMULTIPLY = 313,
     ASSIGNDIVIDE = 314,
     ASSIGNMODULO = 315,
     ASSIGNFLOORDIVISION = 316,
     ASSIGNEXPONINTIATION = 317,
     ASSIGNBITWISEAND = 318,
     ASSIGNBITWISEOR = 319,
     ASSIGNBITWISEXOR = 320,
     ASSIGNRIGHTSHIFT = 321,
     ASSIGNLEFTSHIFT = 322,
     EQUAL = 323,
     NOT = 324,
     NOTEQUAL = 325,
     GREATERTHAN = 326,
     GREATEROREQUAL = 327,
     LESSTHAN = 328,
     LESSOREQUAL = 329,
     LEFT_PARENTHES = 330,
     RIGHT_PARENTHES = 331,
     LEFT_BRACES = 332,
     RIGHT_BRACES = 333,
     LEFT_BRACKETS = 334,
     RIGHT_BRACKETS = 335,
     COLON = 336,
     COMMA = 337,
     SEMICOLON = 338,
     INCREMENT = 339,
     DECREMENT = 340,
     INTEGER = 341,
     FLOAT = 342,
     DEDENT = 343,
     INDENT = 344,
     NEWLINE = 345,
     UMINUS = 346
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;


