
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
     KEYWORD_AWAIT = 267,
     KEYWORD_IF = 268,
     KEYWORD_ELSE = 269,
     KEYWORD_ELSE_IF = 270,
     KEYWORD_IMPORT = 271,
     KEYWORD_PASS = 272,
     KEYWORD_NONE = 273,
     KEYWORD_BREAK = 274,
     KEYWORD_EXCEPT = 275,
     KEYWORD_IN = 276,
     KEYWORD_RAISE = 277,
     KEYWORD_CLASS = 278,
     KEYWORD_FINALLY = 279,
     KEYWORD_IS = 280,
     KEYWORD_RETURN = 281,
     KEYWORD_AND = 282,
     KEYWORD_CONTINUE = 283,
     KEYWORD_FOR = 284,
     KEYWORD_LAMBDA = 285,
     KEYWORD_TRY = 286,
     KEYWORD_AS = 287,
     KEYWORD_DEF = 288,
     KEYWORD_FROM = 289,
     KEYWORD_NONLOCAL = 290,
     KEYWORD_WHILE = 291,
     KEYWORD_ASSERT = 292,
     KEYWORD_DEL = 293,
     KEYWORD_GLOBAL = 294,
     KEYWORD_NOT = 295,
     KEYWORD_WITH = 296,
     KEYWORD_ASYNC = 297,
     KEYWORD_OR = 298,
     KEYWORD_YIELD = 299,
     OPERATORS = 300,
     COMMENT = 301,
     ADD = 302,
     MINUS = 303,
     MULTIPLY = 304,
     DIVIDE = 305,
     POWER = 306,
     MODULO = 307,
     ASSIGN = 308,
     ASSIGNADD = 309,
     ASSIGNMINUS = 310,
     ASSIGNMULTIPLY = 311,
     ASSIGNDIVIDE = 312,
     ASSIGNMODULO = 313,
     ASSIGNFLOORDIVISION = 314,
     ASSIGNEXPONINTIATION = 315,
     ASSIGNBITWISEAND = 316,
     ASSIGNBITWISEOR = 317,
     ASSIGNBITWISEXOR = 318,
     ASSIGNRIGHTSHIFT = 319,
     ASSIGNLEFTSHIFT = 320,
     EQUAL = 321,
     NOT = 322,
     NOTEQUAL = 323,
     GREATERTHAN = 324,
     GREATEROREQUAL = 325,
     LESSTHAN = 326,
     LESSOREQUAL = 327,
     LEFT_PARENTHES = 328,
     RIGHT_PARENTHES = 329,
     LEFT_BRACES = 330,
     RIGHT_BRACES = 331,
     LEFT_BRACKETS = 332,
     RIGHT_BRACKETS = 333,
     COLON = 334,
     COMMA = 335,
     SEMICOLON = 336,
     INCREMENT = 337,
     DECREMENT = 338,
     INTEGER = 339,
     FLOAT = 340,
     DEDENT = 341,
     INDENT = 342,
     NEWLINE = 343,
     UMINUS = 344
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;


