
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C
   
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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.4.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Copy the first part of user declarations.  */

/* Line 189 of yacc.c  */
#line 1 "parser.y"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int yydebug=1;
FILE *yyin;
void yyerror(const char *);
extern int yylex();


/* Line 189 of yacc.c  */
#line 84 "parser.tab.c"

/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 1
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif


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
     INTEGER = 339,
     FLOAT = 340,
     DEDENT = 341,
     INDENT = 342,
     NEWLINE = 343,
     KEYWORD_MATCH = 344,
     KEYWORD_CASE = 345,
     UMINUS = 346
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 217 "parser.tab.c"

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
}
#endif

#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
	 || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
<<<<<<< HEAD
#define YYLAST   379
=======
#define YYLAST   665
>>>>>>> main

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  100
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  48
/* YYNRULES -- Number of rules.  */
<<<<<<< HEAD
#define YYNRULES  109
/* YYNRULES -- Number of states.  */
#define YYNSTATES  219
=======
#define YYNRULES  152
/* YYNRULES -- Number of states.  */
#define YYNSTATES  297
>>>>>>> main

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   346

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      97,    98,    93,    91,     2,    92,    99,    94,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,    95,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    96
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     4,     6,     9,    12,    14,    17,    19,
      21,    23,    25,    27,    29,    31,    33,    35,    37,    39,
<<<<<<< HEAD
      41,    43,    45,    47,    49,    51,    53,    55,    57,    60,
      63,    66,    71,    76,    81,    88,    92,    96,   100,   104,
     108,   112,   115,   119,   122,   124,   126,   128,   130,   132,
     135,   139,   142,   145,   150,   154,   160,   162,   164,   175,
     176,   179,   182,   185,   193,   198,   203,   208,   213,   221,
     226,   227,   231,   234,   237,   239,   241,   244,   247,   249,
     253,   257,   261,   265,   269,   273,   277,   281,   284,   286,
     288,   291,   292,   295,   297,   299,   301,   304,   309,   316,
     320,   325,   332,   339,   346,   355,   362,   370,   380,   385
=======
      41,    43,    45,    47,    49,    51,    53,    55,    57,    59,
      61,    63,    65,    67,    69,    73,    77,    81,    85,    89,
      93,    97,   101,   105,   109,   113,   117,   121,   125,   129,
     133,   136,   140,   143,   145,   147,   149,   151,   153,   155,
     157,   159,   162,   166,   169,   172,   175,   178,   183,   186,
     191,   194,   197,   199,   203,   206,   209,   212,   217,   222,
     227,   234,   239,   244,   247,   249,   254,   257,   260,   264,
     268,   273,   277,   281,   286,   290,   293,   295,   300,   304,
     310,   312,   314,   325,   326,   329,   332,   335,   343,   348,
     353,   358,   363,   371,   376,   377,   381,   384,   387,   389,
     391,   394,   396,   400,   404,   408,   412,   416,   420,   424,
     428,   431,   433,   435,   438,   439,   442,   444,   446,   448,
     451,   456,   463,   467,   472,   479,   486,   493,   502,   509,
     517,   527,   532
>>>>>>> main
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
<<<<<<< HEAD
     101,     0,    -1,    -1,    90,    -1,   101,   102,    -1,   102,
     103,    -1,   103,    -1,   102,    90,    -1,   105,    -1,   104,
      -1,    90,    -1,    47,    -1,    51,    -1,   108,    -1,   112,
      -1,   113,    -1,   111,    -1,   106,    -1,   120,    -1,   114,
      -1,    18,    -1,    20,    -1,    29,    -1,   121,    -1,   126,
      -1,   116,    -1,   132,    -1,   133,    -1,   107,    90,    -1,
     106,   107,    -1,    17,   124,    -1,    35,   124,    17,     6,
      -1,    35,   124,    17,    50,    -1,    17,   124,    33,     6,
      -1,    35,   124,    17,     6,    33,     6,    -1,   124,    55,
     109,    -1,   109,    48,   109,    -1,   109,    49,   109,    -1,
     109,    50,   109,    -1,   109,    52,   109,    -1,   109,    53,
     109,    -1,    95,   109,    -1,    97,   109,    98,    -1,    92,
     109,    -1,   110,    -1,   124,    -1,   120,    -1,    86,    -1,
      87,    -1,    39,     6,    -1,    39,     6,     7,    -1,    27,
     109,    -1,    45,   109,    -1,    42,   115,    81,   122,    -1,
     120,    33,     6,    -1,   115,    82,   120,    33,     6,    -1,
     117,    -1,   119,    -1,    24,     6,    75,   123,    76,    81,
      90,    89,   118,    88,    -1,    -1,   118,   108,    -1,   118,
     121,    -1,   118,    90,    -1,    24,     6,    81,    90,    89,
     118,    88,    -1,     6,    75,   123,    76,    -1,     6,    75,
     110,    76,    -1,     6,    75,     8,    76,    -1,     6,    75,
     120,    76,    -1,    34,     6,    75,   123,    76,    81,   122,
      -1,    90,    89,   102,    88,    -1,    -1,   123,     6,    82,
      -1,   123,     6,    -1,     6,    82,    -1,     6,    -1,     6,
      -1,   124,     6,    -1,   124,   120,    -1,   109,    -1,   109,
      72,   109,    -1,   109,    71,   109,    -1,   109,    74,   109,
      -1,   109,    73,   109,    -1,   109,    68,   109,    -1,   109,
      70,   109,    -1,   125,    28,   125,    -1,   125,    44,   125,
      -1,    41,   125,    -1,    11,    -1,    10,    -1,   129,   127,
      -1,    -1,   128,   130,    -1,   128,    -1,   130,    -1,   131,
      -1,   128,   131,    -1,    14,   125,    81,   122,    -1,    14,
      75,   125,    76,    81,   122,    -1,    15,    81,   122,    -1,
      16,   125,    81,   122,    -1,    16,    75,   125,    76,    81,
     122,    -1,    30,     6,    22,   120,    81,   122,    -1,    30,
       6,    22,     7,    81,   122,    -1,    30,    75,   123,    76,
      22,   120,    81,   122,    -1,    30,     6,    22,   124,    81,
     122,    -1,    30,     6,    22,   124,   120,    81,   122,    -1,
      30,     6,    22,   124,   120,    99,     6,    81,   122,    -1,
      37,   125,    81,   122,    -1,    37,    75,   125,    76,    81,
     122,    -1
=======
     101,     0,    -1,    -1,    88,    -1,   101,   102,    -1,   102,
     103,    -1,   103,    -1,   102,    88,    -1,   105,    -1,   104,
      -1,    88,    -1,    47,    -1,    51,    -1,   106,    -1,   110,
      -1,   111,    -1,   112,    -1,   113,    -1,   114,    -1,   115,
      -1,   109,    -1,   117,    -1,   134,    -1,   128,    -1,    18,
      -1,    20,    -1,    29,    -1,   135,    -1,   140,    -1,   130,
      -1,   146,    -1,   147,    -1,   119,    -1,   123,    -1,   138,
      55,   107,    -1,   138,    56,   107,    -1,   138,    59,   107,
      -1,   138,    62,   107,    -1,   138,    58,   107,    -1,   138,
      60,   107,    -1,   138,    57,   107,    -1,   138,    61,   107,
      -1,   138,    66,   107,    -1,   138,    67,   107,    -1,   107,
      48,   107,    -1,   107,    49,   107,    -1,   107,    50,   107,
      -1,   107,    52,   107,    -1,   107,    53,   107,    -1,   107,
      54,   107,    -1,    95,   107,    -1,    97,   107,    98,    -1,
      92,   107,    -1,   108,    -1,   138,    -1,   134,    -1,     8,
      -1,     7,    -1,    19,    -1,    84,    -1,    85,    -1,    39,
       6,    -1,    39,     6,     7,    -1,    27,   107,    -1,    27,
     139,    -1,    45,   107,    -1,    38,   139,    -1,    38,   139,
      82,     8,    -1,    23,   134,    -1,    23,   134,    35,     6,
      -1,    40,   116,    -1,    36,   116,    -1,     6,    -1,     6,
      82,   116,    -1,   118,    88,    -1,   117,   118,    -1,    17,
     138,    -1,    35,   138,    17,     6,    -1,    35,   138,    17,
      93,    -1,    17,   138,    33,     6,    -1,    35,   138,    17,
       6,    33,     6,    -1,    89,     6,    81,   120,    -1,    88,
      87,   121,    86,    -1,   121,   122,    -1,   122,    -1,    90,
     107,    81,   136,    -1,   124,   126,    -1,   124,   127,    -1,
     124,   127,   126,    -1,   124,   127,   144,    -1,   124,   127,
     144,   126,    -1,    32,    81,   136,    -1,    21,    81,   136,
      -1,    21,   138,    81,   136,    -1,    25,    81,   136,    -1,
     127,   125,    -1,   125,    -1,    42,   129,    81,   136,    -1,
     134,    33,     6,    -1,   129,    82,   134,    33,     6,    -1,
     131,    -1,   133,    -1,    24,     6,    75,   137,    76,    81,
      88,    87,   132,    86,    -1,    -1,   132,   106,    -1,   132,
     135,    -1,   132,    88,    -1,    24,     6,    81,    88,    87,
     132,    86,    -1,     6,    75,   137,    76,    -1,     6,    75,
     108,    76,    -1,     6,    75,     8,    76,    -1,     6,    75,
     134,    76,    -1,    34,     6,    75,   137,    76,    81,   136,
      -1,    88,    87,   102,    86,    -1,    -1,   137,   107,    82,
      -1,   137,   107,    -1,   107,    82,    -1,   107,    -1,     6,
      -1,   138,     6,    -1,   107,    -1,   107,    72,   107,    -1,
     107,    71,   107,    -1,   107,    74,   107,    -1,   107,    73,
     107,    -1,   107,    68,   107,    -1,   107,    70,   107,    -1,
     139,    28,   139,    -1,   139,    44,   139,    -1,    41,   139,
      -1,    11,    -1,    10,    -1,   143,   141,    -1,    -1,   142,
     144,    -1,   142,    -1,   144,    -1,   145,    -1,   142,   145,
      -1,    14,   139,    81,   136,    -1,    14,    75,   139,    76,
      81,   136,    -1,    15,    81,   136,    -1,    16,   139,    81,
     136,    -1,    16,    75,   139,    76,    81,   136,    -1,    30,
       6,    22,   134,    81,   136,    -1,    30,     6,    22,     7,
      81,   136,    -1,    30,    75,   137,    76,    22,   134,    81,
     136,    -1,    30,     6,    22,   138,    81,   136,    -1,    30,
       6,    22,   138,   134,    81,   136,    -1,    30,     6,    22,
     138,   134,    99,     6,    81,   136,    -1,    37,   139,    81,
     136,    -1,    37,    75,   139,    76,    81,   136,    -1
>>>>>>> main
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
<<<<<<< HEAD
       0,    40,    40,    41,    42,    48,    49,    50,    53,    54,
      55,    56,    57,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    72,    73,    74,    75,    76,    80,    81,
      84,    85,    86,    87,    88,    91,    94,    95,    96,    97,
      98,    99,   103,   104,   105,   106,   107,   110,   111,   114,
     115,   118,   121,   124,   127,   128,   131,   132,   135,   138,
     139,   140,   141,   144,   147,   148,   149,   150,   153,   156,
     159,   160,   161,   162,   163,   166,   167,   168,   171,   172,
     173,   174,   175,   176,   177,   178,   179,   180,   181,   182,
     185,   188,   189,   190,   191,   194,   195,   198,   199,   202,
     205,   206,   209,   210,   211,   212,   213,   214,   217,   218
=======
       0,    41,    41,    42,    43,    59,    60,    61,    64,    65,
      66,    67,    68,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    87,    88,    89,
      90,    91,    92,    93,    95,    96,    97,    98,    99,   100,
     101,   102,   103,   104,   107,   108,   109,   110,   111,   112,
     113,   117,   118,   119,   120,   121,   122,   123,   124,   127,
     128,   131,   132,   135,   136,   139,   142,   143,   145,   146,
     149,   151,   154,   155,   158,   159,   162,   163,   164,   165,
     166,   170,   172,   174,   175,   177,   179,   180,   181,   182,
     183,   186,   187,   188,   190,   192,   193,   196,   199,   200,
     203,   204,   207,   210,   211,   212,   213,   216,   219,   220,
     221,   222,   225,   228,   231,   232,   233,   234,   235,   238,
     239,   242,   243,   244,   245,   246,   247,   248,   249,   250,
     251,   252,   253,   256,   259,   260,   261,   262,   265,   266,
     269,   270,   273,   276,   277,   280,   281,   282,   283,   284,
     285,   288,   289
>>>>>>> main
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "WHITESPACE", "LETTER", "ALPHANUM",
  "IDENTIFIER", "LIST", "LITERALSTRING", "LITERALCHAR", "KEYWORD_FALSE",
  "KEYWORD_TRUE", "MULTILINESTRING", "KEYWORD_AWAIT", "KEYWORD_IF",
  "KEYWORD_ELSE", "KEYWORD_ELSE_IF", "KEYWORD_IMPORT", "KEYWORD_PASS",
  "KEYWORD_NONE", "KEYWORD_BREAK", "KEYWORD_EXCEPT", "KEYWORD_IN",
  "KEYWORD_RAISE", "KEYWORD_CLASS", "KEYWORD_FINALLY", "KEYWORD_IS",
  "KEYWORD_RETURN", "KEYWORD_AND", "KEYWORD_CONTINUE", "KEYWORD_FOR",
  "KEYWORD_LAMBDA", "KEYWORD_TRY", "KEYWORD_AS", "KEYWORD_DEF",
  "KEYWORD_FROM", "KEYWORD_NONLOCAL", "KEYWORD_WHILE", "KEYWORD_ASSERT",
  "KEYWORD_DEL", "KEYWORD_GLOBAL", "KEYWORD_NOT", "KEYWORD_WITH",
  "KEYWORD_ASYNC", "KEYWORD_OR", "KEYWORD_YIELD", "OPERATORS", "COMMENT",
  "ADD", "MINUS", "MULTIPLY", "MULTILINECOMMENT", "DIVIDE", "POWER",
  "MODULO", "ASSIGN", "ASSIGNADD", "ASSIGNMINUS", "ASSIGNMULTIPLY",
  "ASSIGNDIVIDE", "ASSIGNMODULO", "ASSIGNFLOORDIVISION",
  "ASSIGNEXPONINTIATION", "ASSIGNBITWISEAND", "ASSIGNBITWISEOR",
  "ASSIGNBITWISEXOR", "ASSIGNRIGHTSHIFT", "ASSIGNLEFTSHIFT", "EQUAL",
  "NOT", "NOTEQUAL", "GREATERTHAN", "GREATEROREQUAL", "LESSTHAN",
  "LESSOREQUAL", "LEFT_PARENTHES", "RIGHT_PARENTHES", "LEFT_BRACES",
  "RIGHT_BRACES", "LEFT_BRACKETS", "RIGHT_BRACKETS", "COLON", "COMMA",
  "SEMICOLON", "INTEGER", "FLOAT", "DEDENT", "INDENT", "NEWLINE",
  "KEYWORD_MATCH", "KEYWORD_CASE", "'+'", "'-'", "'*'", "'/'", "'|'",
  "UMINUS", "'('", "')'", "'.'", "$accept", "prog", "statements",
  "statement", "simple_statement", "compound_statement", "assignment",
  "expression", "number", "del_statment", "return_statement",
  "yield_statement", "assert_statement", "raise_statement",
  "global_statement", "nonlocal_statement", "global_nonlocal_targets",
  "import_statments", "import_statment", "match_statement", "match_block",
  "cases", "case", "try_statement", "try", "except", "finally",
  "except_statements", "with_statment", "with_stmt", "class",
  "class_with_inheritance", "class_block", "class_without_inheritance",
  "function_call", "function", "block", "args", "member_expression",
  "logical_expression", "conditional_statement", "elif_else", "elif_stmts",
  "if_statement", "else_statement", "elif_statement", "for_statement",
  "while_statement", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,    43,    45,    42,    47,   124,   346,    40,    41,    46
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,   100,   101,   101,   101,   102,   102,   102,   103,   103,
     103,   103,   103,   104,   104,   104,   104,   104,   104,   104,
<<<<<<< HEAD
     104,   104,   104,   105,   105,   105,   105,   105,   106,   106,
     107,   107,   107,   107,   107,   108,   109,   109,   109,   109,
     109,   109,   109,   109,   109,   109,   109,   110,   110,   111,
     111,   112,   113,   114,   115,   115,   116,   116,   117,   118,
     118,   118,   118,   119,   120,   120,   120,   120,   121,   122,
     123,   123,   123,   123,   123,   124,   124,   124,   125,   125,
     125,   125,   125,   125,   125,   125,   125,   125,   125,   125,
     126,   127,   127,   127,   127,   128,   128,   129,   129,   130,
     131,   131,   132,   132,   132,   132,   132,   132,   133,   133
=======
     104,   104,   104,   104,   104,   104,   104,   105,   105,   105,
     105,   105,   105,   105,   106,   106,   106,   106,   106,   106,
     106,   106,   106,   106,   107,   107,   107,   107,   107,   107,
     107,   107,   107,   107,   107,   107,   107,   107,   107,   108,
     108,   109,   109,   110,   110,   111,   112,   112,   113,   113,
     114,   115,   116,   116,   117,   117,   118,   118,   118,   118,
     118,   119,   120,   121,   121,   122,   123,   123,   123,   123,
     123,   124,   125,   125,   126,   127,   127,   128,   129,   129,
     130,   130,   131,   132,   132,   132,   132,   133,   134,   134,
     134,   134,   135,   136,   137,   137,   137,   137,   137,   138,
     138,   139,   139,   139,   139,   139,   139,   139,   139,   139,
     139,   139,   139,   140,   141,   141,   141,   141,   142,   142,
     143,   143,   144,   145,   145,   146,   146,   146,   146,   146,
     146,   147,   147
>>>>>>> main
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     1,     2,     2,     1,     2,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
<<<<<<< HEAD
       1,     1,     1,     1,     1,     1,     1,     1,     2,     2,
       2,     4,     4,     4,     6,     3,     3,     3,     3,     3,
       3,     2,     3,     2,     1,     1,     1,     1,     1,     2,
       3,     2,     2,     4,     3,     5,     1,     1,    10,     0,
       2,     2,     2,     7,     4,     4,     4,     4,     7,     4,
       0,     3,     2,     2,     1,     1,     2,     2,     1,     3,
       3,     3,     3,     3,     3,     3,     3,     2,     1,     1,
       2,     0,     2,     1,     1,     1,     2,     4,     6,     3,
       4,     6,     6,     6,     8,     6,     7,     9,     4,     6
=======
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       2,     3,     2,     1,     1,     1,     1,     1,     1,     1,
       1,     2,     3,     2,     2,     2,     2,     4,     2,     4,
       2,     2,     1,     3,     2,     2,     2,     4,     4,     4,
       6,     4,     4,     2,     1,     4,     2,     2,     3,     3,
       4,     3,     3,     4,     3,     2,     1,     4,     3,     5,
       1,     1,    10,     0,     2,     2,     2,     7,     4,     4,
       4,     4,     7,     4,     0,     3,     2,     2,     1,     1,
       2,     1,     3,     3,     3,     3,     3,     3,     3,     3,
       2,     1,     1,     2,     0,     2,     1,     1,     1,     2,
       4,     6,     3,     4,     6,     6,     6,     8,     6,     7,
       9,     4,     6
>>>>>>> main
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
<<<<<<< HEAD
       2,     3,     0,     1,    75,     0,     0,    20,    21,     0,
       0,    22,     0,     0,     0,     0,     0,     0,     0,    11,
      12,    10,     4,     6,     9,     8,    17,     0,    13,    16,
      14,    15,    19,    25,    56,    57,    18,    23,     0,    24,
      91,    26,    27,    70,    89,    88,     0,     0,    47,    48,
       0,     0,     0,    78,    44,    46,    45,     0,    75,    30,
       0,    51,     0,    70,     0,     0,     0,     0,    49,     0,
       0,     0,    52,     7,     5,    29,    28,    76,     0,    77,
       0,     0,    90,    93,    94,    95,    74,     0,     0,     0,
       0,    87,     0,    43,    41,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    70,     0,     0,    74,     0,    70,     0,     0,     0,
      50,     0,     0,     0,    35,     0,     0,     0,    92,    96,
      73,    66,    65,    67,    72,    64,     0,    42,    36,    37,
      38,    39,    40,    83,    84,    80,    79,    82,    81,    85,
      86,     0,    97,    33,     0,     0,     0,     0,     0,     0,
       0,    31,    32,     0,   108,    53,     0,    54,    99,     0,
       0,    71,     0,     0,     0,    59,     0,     0,     0,    77,
       0,     0,     0,     0,     0,     0,   100,    98,     0,     0,
       0,   103,   102,   105,     0,     0,     0,     0,    34,   109,
      55,     0,    69,     0,    63,    62,    60,    61,   106,     0,
       0,    68,   101,    59,     0,   104,     0,   107,    58
=======
       2,     3,     0,     1,   119,     0,     0,    24,    25,     0,
       0,     0,    26,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    11,    12,    10,     0,     4,     6,
       9,     8,    13,    20,    14,    15,    16,    17,    18,    19,
      21,     0,    32,    33,     0,    23,    29,   100,   101,    22,
      27,     0,    28,   134,    30,    31,   114,    57,    56,   132,
     131,    58,     0,     0,    59,    60,     0,     0,     0,   121,
      53,    55,    54,     0,   119,    76,     0,    68,     0,    63,
      64,     0,   114,     0,     0,     0,    72,    71,     0,     0,
      66,    61,    70,     0,     0,    65,     0,     7,     5,    75,
      74,     0,     0,    96,    86,    87,   120,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   133,
     136,   137,   138,    56,   118,    53,    55,     0,   130,     0,
      52,    50,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     114,     0,     0,     0,     0,    91,   114,     0,     0,     0,
       0,     0,    62,     0,     0,     0,     0,     0,     0,     0,
      95,    88,    89,    34,    35,    40,    38,    36,    39,    41,
      37,    42,    43,     0,     0,     0,   135,   139,   110,   117,
     109,   111,   108,   116,     0,    51,    44,    45,    46,    47,
      48,    49,   126,   127,   123,   122,   125,   124,   128,   129,
     140,    79,    69,     0,     0,     0,     0,     0,     0,     0,
       0,    77,    78,    73,     0,   151,    67,    97,     0,    98,
       0,    81,    92,     0,    94,    90,   142,     0,     0,   115,
       0,     0,   103,     0,     0,   120,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    93,     0,   143,   141,     0,
       0,   146,   145,   148,     0,     0,     0,   113,     0,    80,
     152,    99,     0,     0,    84,     0,     0,   107,   106,   104,
     105,   149,     0,     0,   112,     0,    82,    83,   144,   103,
       0,   147,     0,     0,   150,    85,   102
>>>>>>> main
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
<<<<<<< HEAD
      -1,     2,    22,    23,    24,    25,    26,    27,    28,    53,
      54,    29,    30,    31,    32,    70,    33,    34,   190,    35,
      55,    37,   152,    90,    56,    57,    39,    82,    83,    40,
      84,    85,    41,    42
=======
      -1,     2,    28,    29,    30,    31,    32,    69,    70,    33,
      34,    35,    36,    37,    38,    39,    87,    40,    41,    42,
     231,   273,   274,    43,    44,   103,   104,   105,    45,    93,
      46,    47,   260,    48,    71,    50,   155,   127,    72,    73,
      52,   119,   120,    53,   121,   122,    54,    55
>>>>>>> main
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
<<<<<<< HEAD
#define YYPACT_NINF -161
static const yytype_int16 yypact[] =
{
     -85,  -161,   211,  -161,   -47,    33,    62,  -161,  -161,    80,
      88,  -161,    16,    82,    62,   121,    87,   120,    88,  -161,
    -161,  -161,   263,  -161,  -161,  -161,    15,    54,  -161,  -161,
    -161,  -161,  -161,  -161,  -161,  -161,  -161,  -161,    20,  -161,
     136,  -161,  -161,    23,  -161,  -161,    72,    72,  -161,  -161,
      88,    88,    88,   293,  -161,  -161,   142,   -21,  -161,    12,
      -5,   141,   131,   149,    90,    21,    72,   -19,   154,   -47,
     -33,   130,   141,  -161,  -161,  -161,  -161,   -47,    88,  -161,
      92,   135,  -161,   136,  -161,  -161,    -9,   106,   116,   119,
       4,    19,   105,   141,   141,    86,    88,    88,    88,    88,
      88,    88,    88,    88,    88,    88,    88,    72,    72,   107,
     193,   149,   110,   171,   123,     8,   149,     7,   122,   107,
    -161,   107,   120,   195,   141,   107,    72,    -4,  -161,  -161,
    -161,  -161,  -161,  -161,   124,  -161,   128,  -161,   141,   141,
     141,   141,   141,   141,   141,   141,   141,   141,   141,    19,
      19,   114,  -161,  -161,     9,   115,   134,   138,     0,   190,
      11,   187,  -161,   143,  -161,  -161,   200,  -161,  -161,   126,
     107,  -161,   107,   289,   145,  -161,   107,   107,   107,   -40,
     120,   153,   217,   107,   230,   156,  -161,  -161,   237,   152,
       2,  -161,  -161,  -161,   107,   233,   163,   107,  -161,  -161,
    -161,   107,  -161,   158,  -161,  -161,  -161,  -161,  -161,   168,
     107,  -161,  -161,  -161,   107,  -161,    27,  -161,  -161
=======
#define YYPACT_NINF -242
static const yytype_int16 yypact[] =
{
     -61,  -242,   398,  -242,   -43,   149,    39,  -242,  -242,    61,
      69,    28,  -242,     6,    11,    73,    39,    76,   178,    28,
      91,    76,    61,   300,  -242,  -242,  -242,   112,   500,  -242,
    -242,  -242,  -242,  -242,  -242,  -242,  -242,  -242,  -242,  -242,
       8,    33,  -242,  -242,    49,  -242,  -242,  -242,  -242,  -242,
    -242,   435,  -242,    57,  -242,  -242,   316,  -242,  -242,  -242,
    -242,  -242,    28,    28,  -242,  -242,   300,   300,   300,   591,
    -242,  -242,   120,     2,  -242,    25,   -43,   106,   -26,   548,
      22,   124,   300,    66,    74,   110,    79,  -242,    28,    20,
     -11,   160,  -242,    97,   140,   598,    95,  -242,  -242,  -242,
    -242,    -1,    99,  -242,  -242,   137,  -242,   300,   300,   300,
     300,   300,   300,   300,   300,   300,   300,   101,   219,  -242,
      57,  -242,  -242,   111,   278,   117,   118,   249,    22,     0,
     598,   598,   459,   300,   300,   300,   300,   300,   300,   300,
     300,   300,   300,   300,   300,    28,    28,    66,   190,   192,
     300,   113,   185,   271,   115,  -242,   300,    -4,    76,    12,
      66,   195,  -242,    66,    61,   198,   121,    66,     3,    66,
    -242,  -242,   180,   598,   598,   598,   598,   598,   598,   598,
     598,   598,   598,    66,    28,   119,  -242,  -242,  -242,  -242,
    -242,  -242,  -242,   555,   126,  -242,   598,   598,   598,   598,
     598,   598,   598,   598,   598,   598,   598,   598,    22,    22,
    -242,  -242,  -242,   277,   123,   130,   131,     5,   191,   535,
     291,   183,  -242,  -242,   147,  -242,  -242,  -242,   199,  -242,
     144,  -242,  -242,    66,  -242,  -242,  -242,    96,    66,  -242,
      66,   154,  -242,    66,    66,   -43,    66,   -57,    61,   433,
     155,   231,    66,   233,   150,  -242,   161,  -242,  -242,   157,
       7,  -242,  -242,  -242,    66,   237,   167,  -242,    66,  -242,
    -242,  -242,   300,    80,  -242,    66,   164,  -242,  -242,  -242,
    -242,  -242,   171,    66,  -242,   577,  -242,  -242,  -242,  -242,
      66,  -242,    66,    31,  -242,  -242,  -242
>>>>>>> main
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
<<<<<<< HEAD
    -161,  -161,    79,   -20,  -161,  -161,  -161,   234,  -160,     1,
     216,  -161,  -161,  -161,  -161,  -161,  -161,  -161,    50,  -161,
      -1,  -144,   -54,    26,    -2,   -12,  -161,  -161,  -161,  -161,
     182,   185,  -161,  -161
=======
    -242,  -242,    35,   -27,  -242,  -242,  -241,    -5,   203,  -242,
    -242,  -242,  -242,  -242,  -242,  -242,   -14,  -242,   221,  -242,
    -242,  -242,    -9,  -242,  -242,   166,   -85,  -242,  -242,  -242,
    -242,  -242,   -24,  -242,     1,  -239,   -69,   -60,    -2,    -3,
    -242,  -242,  -242,  -242,   -52,   146,  -242,  -242
>>>>>>> main
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -122
static const yytype_int16 yytable[] =
{
<<<<<<< HEAD
      38,    36,    74,    67,    59,     1,    77,   107,    58,   107,
     134,    61,    65,   161,   134,   134,    71,   134,    77,    72,
      38,    36,    62,   108,   107,   108,    77,    77,    43,    86,
     206,    87,     6,    58,    91,    92,    13,    79,   117,     4,
     108,   194,    89,    44,    45,   110,   207,   107,   121,   122,
      14,    93,    94,    95,   118,    79,   206,   162,    79,   195,
     109,    13,   119,   108,    79,   164,    43,   165,    58,   127,
     111,   168,   207,   130,    46,    78,   112,   170,     4,   124,
     135,   178,    44,    45,   159,   174,    60,   181,    64,   115,
     204,    63,   205,    68,     4,   149,   150,   138,   139,   140,
     141,   142,   143,   144,   145,   146,   147,   148,    47,    48,
      49,   158,   157,    46,   169,   218,   186,   205,   187,    48,
      49,   166,   191,   192,   193,    50,    69,     4,    51,   199,
      52,    44,    45,   107,    96,    97,    98,   154,    99,   100,
     208,     4,   160,   211,    76,    44,    45,   212,    77,   108,
     107,    80,    81,   113,   107,   114,   215,   179,    48,    49,
     217,   120,    46,   123,    50,   116,   108,    51,    74,    52,
     108,    38,    36,   125,    48,    49,    46,     4,   156,   196,
      50,   136,   131,    51,   137,    52,    38,    36,    38,    96,
      97,    98,   132,    99,   100,   133,    66,   151,   163,   153,
     155,   167,   185,   173,   175,   130,   171,    48,    49,   172,
     126,     3,   180,    50,    38,   176,    51,     4,    52,   177,
     182,    48,    49,   198,   183,     5,   189,    50,     6,     7,
      51,     8,    52,   184,   197,     9,   200,   201,    10,   209,
      11,    12,   203,     4,   210,    13,    14,   213,    15,   214,
      16,     5,   188,    17,     6,     7,    18,     8,    19,    88,
      75,     9,    20,   216,    10,   128,    11,    12,   129,     4,
       0,    13,    14,     0,    15,     0,    16,     5,     0,    17,
       6,     7,    18,     8,    19,     0,     0,     9,    20,     0,
      10,     0,    11,    12,     0,     4,     0,    13,    14,     0,
      15,    21,    16,     5,     0,    17,     6,     7,    18,     8,
      19,     0,     0,     9,    20,     0,    10,     0,    11,    12,
       0,     0,     0,    13,    14,   202,    15,    73,    16,     0,
       0,    17,     0,     0,    18,     0,    19,     0,     0,     0,
      20,    96,    97,    98,     0,    99,   100,     0,     0,     0,
       0,     0,     0,    73,     0,     0,     0,     0,     0,     0,
       0,   101,     0,   102,   103,   104,   105,   106,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    21
=======
      51,    98,   221,    49,    75,    74,    79,    92,    80,   106,
      77,   245,    81,    74,    85,    89,    90,   145,    95,   279,
     171,   280,   153,    94,   264,     6,    51,     1,   145,    49,
     145,   106,    56,   146,     4,    57,    58,    74,    59,    60,
     145,    15,   265,    16,   146,    74,   146,    61,   145,   150,
     145,   124,   279,   172,   280,   151,   146,   126,   148,   128,
     129,   130,   131,   132,   146,    15,   146,    76,   186,    62,
     101,   161,   117,   118,   102,    78,   194,   124,   210,    84,
     167,    82,    86,   147,   233,   159,   246,   235,   224,   222,
     213,   225,    83,   277,   227,   278,   220,    91,   232,   168,
     234,   160,   173,   174,   175,   176,   177,   178,   179,   180,
     181,   182,    64,    65,   236,   185,   106,   296,    96,   278,
      66,   100,   193,    67,   145,    68,   106,   157,   196,   197,
     198,   199,   200,   201,   202,   203,   204,   205,   206,   207,
     146,   149,   208,   209,   223,   124,   152,   145,   193,   156,
     217,   124,   117,   216,   154,     4,    57,    58,   101,    59,
      60,   158,   102,   146,   255,   228,   286,   162,    61,   257,
     272,   258,   256,   165,   261,   262,   166,   263,   163,   164,
     169,   237,   183,   270,     4,    57,    58,   188,    59,    60,
      62,     4,   215,   190,   191,   281,   211,    61,   212,   284,
     238,   214,   219,   226,   229,   102,   288,   240,   193,   230,
     242,   243,   244,   248,   291,   193,   251,    51,   247,    62,
      49,   294,    98,   295,    63,     4,    57,    58,   252,    59,
      60,   254,   253,    64,    65,   259,   268,   269,    61,   271,
     272,    66,   275,   282,    67,   276,    68,    51,   283,   266,
      49,   289,   290,    88,   249,     4,    57,    58,    51,   125,
      62,    99,    64,    65,   287,   293,   187,   285,    61,     0,
      66,   170,     0,    67,     0,    68,     0,     4,    57,    58,
       0,     0,     0,     4,    57,    58,     0,     0,     0,     0,
      61,    51,     0,     0,   184,     0,    61,     4,    57,    58,
       0,     0,     0,    64,    65,     0,     4,    57,    58,     0,
      61,    66,     0,     0,    67,     0,    68,     0,     0,    61,
       0,     0,     4,    57,   123,   192,   133,   134,   135,     0,
     136,   137,   138,    64,    65,    61,     0,     0,     0,     0,
       0,    66,     0,     0,    67,     0,    68,   218,     0,     0,
       0,     0,     0,   241,     0,    64,    65,     0,     0,     0,
     189,    64,    65,    66,     0,     0,    67,   250,    68,    66,
       0,     0,    67,     0,    68,    64,    65,     0,     0,     0,
       0,     0,     0,    66,    64,    65,    67,     0,    68,     0,
       0,     0,    66,     0,     0,    67,     0,    68,     3,     0,
      64,    65,     0,     0,     4,     0,     0,     0,    66,     0,
       0,    67,     5,    68,     0,     6,     7,     0,     8,     0,
       0,     9,    10,     0,     0,    11,     0,    12,    13,     0,
      14,     0,    15,    16,    17,    18,    19,    20,    21,     4,
      22,   106,     0,    23,     0,    24,     0,     5,     0,    25,
       6,     7,     0,     8,     0,     0,     9,    10,     0,     0,
      11,     0,    12,    13,     0,    14,     0,    15,    16,    17,
      18,    19,    20,    21,     0,    22,     0,     0,    23,     0,
      24,     0,     0,     0,    25,     0,    26,    27,     0,     0,
     107,   108,   109,   110,   111,   112,   113,   114,     0,     0,
       0,   115,   116,     0,     0,     0,     4,   133,   134,   135,
       0,   136,   137,   138,     5,     0,     0,     6,     7,   267,
       8,    97,    27,     9,    10,     0,     0,    11,     0,    12,
      13,     0,    14,     0,    15,    16,    17,    18,    19,    20,
      21,     4,    22,     0,     0,    23,     0,    24,     0,     5,
       0,    25,     6,     7,     0,     8,     0,   195,     9,    10,
       0,     0,    11,     0,    12,    13,     0,    14,     0,    15,
      16,    17,    18,    19,    20,    21,  -121,    22,     0,     0,
      23,     0,    24,     0,     0,     0,    25,     0,    97,    27,
       0,     0,  -121,     0,     0,     0,   133,   134,   135,     0,
     136,   137,   138,   133,   134,   135,     0,   136,   137,   138,
       0,     0,     0,     0,     0,     0,   139,     0,   140,   141,
     142,   143,   144,    26,    27,   133,   134,   135,     0,   136,
     137,   138,     0,     0,     0,     0,     0,   239,     0,   133,
     134,   135,     0,   136,   137,   138,   133,   134,   135,     0,
     136,   137,   138,     0,     0,     0,     0,     0,   292,   139,
       0,   140,   141,   142,   143,   144
>>>>>>> main
};

static const yytype_int16 yycheck[] =
{
<<<<<<< HEAD
       2,     2,    22,    15,     6,    90,     6,    28,     6,    28,
       6,    10,    14,     6,     6,     6,    17,     6,     6,    18,
      22,    22,     6,    44,    28,    44,     6,     6,    75,     6,
     190,     8,    17,     6,    46,    47,    34,    38,    17,     6,
      44,    81,    43,    10,    11,    33,   190,    28,    81,    82,
      35,    50,    51,    52,    66,    56,   216,    50,    59,    99,
      81,    34,    81,    44,    65,   119,    75,   121,     6,    81,
      75,   125,   216,    82,    41,    55,    81,    81,     6,    78,
      76,    81,    10,    11,    76,    76,     6,    76,     6,    63,
      88,    75,    90,     6,     6,   107,   108,    96,    97,    98,
      99,   100,   101,   102,   103,   104,   105,   106,    75,    86,
      87,   113,   113,    41,   126,    88,   170,    90,   172,    86,
      87,   122,   176,   177,   178,    92,     6,     6,    95,   183,
      97,    10,    11,    28,    48,    49,    50,   111,    52,    53,
     194,     6,   116,   197,    90,    10,    11,   201,     6,    44,
      28,    15,    16,    22,    28,     6,   210,   158,    86,    87,
     214,     7,    41,    33,    92,    75,    44,    95,   188,    97,
      44,   173,   173,    81,    86,    87,    41,     6,     7,   180,
      92,    76,    76,    95,    98,    97,   188,   188,   190,    48,
      49,    50,    76,    52,    53,    76,    75,    90,    76,     6,
      90,     6,    76,    89,    89,    82,    82,    86,    87,    81,
      75,     0,    22,    92,   216,    81,    95,     6,    97,    81,
      33,    86,    87,     6,    81,    14,    81,    92,    17,    18,
      95,    20,    97,    33,    81,    24,     6,    81,    27,     6,
      29,    30,    90,     6,    81,    34,    35,    89,    37,    81,
      39,    14,   173,    42,    17,    18,    45,    20,    47,    43,
      26,    24,    51,   213,    27,    83,    29,    30,    83,     6,
      -1,    34,    35,    -1,    37,    -1,    39,    14,    -1,    42,
      17,    18,    45,    20,    47,    -1,    -1,    24,    51,    -1,
      27,    -1,    29,    30,    -1,     6,    -1,    34,    35,    -1,
      37,    90,    39,    14,    -1,    42,    17,    18,    45,    20,
      47,    -1,    -1,    24,    51,    -1,    27,    -1,    29,    30,
      -1,    -1,    -1,    34,    35,    88,    37,    90,    39,    -1,
      -1,    42,    -1,    -1,    45,    -1,    47,    -1,    -1,    -1,
      51,    48,    49,    50,    -1,    52,    53,    -1,    -1,    -1,
      -1,    -1,    -1,    90,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    68,    -1,    70,    71,    72,    73,    74,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    90
=======
       2,    28,     6,     2,     6,     6,    11,    21,    11,     6,
       9,     6,     6,     6,    16,    18,    19,    28,    23,   260,
     105,   260,    82,    22,    81,    17,    28,    88,    28,    28,
      28,     6,    75,    44,     6,     7,     8,     6,    10,    11,
      28,    34,    99,    35,    44,     6,    44,    19,    28,    75,
      28,    56,   293,   105,   293,    81,    44,    56,    33,    62,
      63,    66,    67,    68,    44,    34,    44,     6,   120,    41,
      21,    82,    15,    16,    25,     6,    76,    82,   147,     6,
      81,    75,     6,    81,    81,    88,    81,   172,    76,    93,
     150,   160,    81,    86,   163,    88,   156,     6,   167,   101,
     169,    81,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,    84,    85,   183,   118,     6,    86,     6,    88,
      92,    88,   127,    95,    28,    97,     6,    17,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
      44,    35,   145,   146,   158,   150,    22,    28,   153,    75,
     152,   156,    15,   152,    88,     6,     7,     8,    21,    10,
      11,    82,    25,    44,   233,   164,    86,     7,    19,   238,
      90,   240,    76,    33,   243,   244,    81,   246,    81,    82,
      81,   184,    81,   252,     6,     7,     8,    76,    10,    11,
      41,     6,     7,    76,    76,   264,     6,    19,     6,   268,
      81,    88,    87,     8,     6,    25,   275,    81,   213,    88,
      87,    81,    81,    22,   283,   220,    33,   219,   217,    41,
     219,   290,   249,   292,    75,     6,     7,     8,    81,    10,
      11,    87,    33,    84,    85,    81,    81,     6,    19,     6,
      90,    92,    81,     6,    95,    88,    97,   249,    81,   248,
     249,    87,    81,    75,   219,     6,     7,     8,   260,    56,
      41,    40,    84,    85,   273,   289,   120,   272,    19,    -1,
      92,   105,    -1,    95,    -1,    97,    -1,     6,     7,     8,
      -1,    -1,    -1,     6,     7,     8,    -1,    -1,    -1,    -1,
      19,   293,    -1,    -1,    75,    -1,    19,     6,     7,     8,
      -1,    -1,    -1,    84,    85,    -1,     6,     7,     8,    -1,
      19,    92,    -1,    -1,    95,    -1,    97,    -1,    -1,    19,
      -1,    -1,     6,     7,     8,    76,    48,    49,    50,    -1,
      52,    53,    54,    84,    85,    19,    -1,    -1,    -1,    -1,
      -1,    92,    -1,    -1,    95,    -1,    97,    76,    -1,    -1,
      -1,    -1,    -1,    76,    -1,    84,    85,    -1,    -1,    -1,
      82,    84,    85,    92,    -1,    -1,    95,    76,    97,    92,
      -1,    -1,    95,    -1,    97,    84,    85,    -1,    -1,    -1,
      -1,    -1,    -1,    92,    84,    85,    95,    -1,    97,    -1,
      -1,    -1,    92,    -1,    -1,    95,    -1,    97,     0,    -1,
      84,    85,    -1,    -1,     6,    -1,    -1,    -1,    92,    -1,
      -1,    95,    14,    97,    -1,    17,    18,    -1,    20,    -1,
      -1,    23,    24,    -1,    -1,    27,    -1,    29,    30,    -1,
      32,    -1,    34,    35,    36,    37,    38,    39,    40,     6,
      42,     6,    -1,    45,    -1,    47,    -1,    14,    -1,    51,
      17,    18,    -1,    20,    -1,    -1,    23,    24,    -1,    -1,
      27,    -1,    29,    30,    -1,    32,    -1,    34,    35,    36,
      37,    38,    39,    40,    -1,    42,    -1,    -1,    45,    -1,
      47,    -1,    -1,    -1,    51,    -1,    88,    89,    -1,    -1,
      55,    56,    57,    58,    59,    60,    61,    62,    -1,    -1,
      -1,    66,    67,    -1,    -1,    -1,     6,    48,    49,    50,
      -1,    52,    53,    54,    14,    -1,    -1,    17,    18,    86,
      20,    88,    89,    23,    24,    -1,    -1,    27,    -1,    29,
      30,    -1,    32,    -1,    34,    35,    36,    37,    38,    39,
      40,     6,    42,    -1,    -1,    45,    -1,    47,    -1,    14,
      -1,    51,    17,    18,    -1,    20,    -1,    98,    23,    24,
      -1,    -1,    27,    -1,    29,    30,    -1,    32,    -1,    34,
      35,    36,    37,    38,    39,    40,    28,    42,    -1,    -1,
      45,    -1,    47,    -1,    -1,    -1,    51,    -1,    88,    89,
      -1,    -1,    44,    -1,    -1,    -1,    48,    49,    50,    -1,
      52,    53,    54,    48,    49,    50,    -1,    52,    53,    54,
      -1,    -1,    -1,    -1,    -1,    -1,    68,    -1,    70,    71,
      72,    73,    74,    88,    89,    48,    49,    50,    -1,    52,
      53,    54,    -1,    -1,    -1,    -1,    -1,    82,    -1,    48,
      49,    50,    -1,    52,    53,    54,    48,    49,    50,    -1,
      52,    53,    54,    -1,    -1,    -1,    -1,    -1,    81,    68,
      -1,    70,    71,    72,    73,    74
>>>>>>> main
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
<<<<<<< HEAD
       0,    90,   101,     0,     6,    14,    17,    18,    20,    24,
      27,    29,    30,    34,    35,    37,    39,    42,    45,    47,
      51,    90,   102,   103,   104,   105,   106,   107,   108,   111,
     112,   113,   114,   116,   117,   119,   120,   121,   124,   126,
     129,   132,   133,    75,    10,    11,    41,    75,    86,    87,
      92,    95,    97,   109,   110,   120,   124,   125,     6,   124,
       6,   109,     6,    75,     6,   124,    75,   125,     6,     6,
     115,   120,   109,    90,   103,   107,    90,     6,    55,   120,
      15,    16,   127,   128,   130,   131,     6,     8,   110,   120,
     123,   125,   125,   109,   109,   109,    48,    49,    50,    52,
      53,    68,    70,    71,    72,    73,    74,    28,    44,    81,
      33,    75,    81,    22,     6,   123,    75,    17,   125,    81,
       7,    81,    82,    33,   109,    81,    75,   125,   130,   131,
      82,    76,    76,    76,     6,    76,    76,    98,   109,   109,
     109,   109,   109,   109,   109,   109,   109,   109,   109,   125,
     125,    90,   122,     6,   123,    90,     7,   120,   124,    76,
     123,     6,    50,    76,   122,   122,   120,     6,   122,   125,
      81,    82,    81,    89,    76,    89,    81,    81,    81,   120,
      22,    76,    33,    81,    33,    76,   122,   122,   102,    81,
     118,   122,   122,   122,    81,    99,   120,    81,     6,   122,
       6,    81,    88,    90,    88,    90,   108,   121,   122,     6,
      81,   122,   122,    89,    81,   122,   118,   122,    88
=======
       0,    88,   101,     0,     6,    14,    17,    18,    20,    23,
      24,    27,    29,    30,    32,    34,    35,    36,    37,    38,
      39,    40,    42,    45,    47,    51,    88,    89,   102,   103,
     104,   105,   106,   109,   110,   111,   112,   113,   114,   115,
     117,   118,   119,   123,   124,   128,   130,   131,   133,   134,
     135,   138,   140,   143,   146,   147,    75,     7,     8,    10,
      11,    19,    41,    75,    84,    85,    92,    95,    97,   107,
     108,   134,   138,   139,     6,   138,     6,   134,     6,   107,
     139,     6,    75,    81,     6,   138,     6,   116,    75,   139,
     139,     6,   116,   129,   134,   107,     6,    88,   103,   118,
      88,    21,    25,   125,   126,   127,     6,    55,    56,    57,
      58,    59,    60,    61,    62,    66,    67,    15,    16,   141,
     142,   144,   145,     8,   107,   108,   134,   137,   139,   139,
     107,   107,   107,    48,    49,    50,    52,    53,    54,    68,
      70,    71,    72,    73,    74,    28,    44,    81,    33,    35,
      75,    81,    22,   137,    88,   136,    75,    17,    82,   139,
      81,    82,     7,    81,    82,    33,    81,    81,   138,    81,
     125,   126,   144,   107,   107,   107,   107,   107,   107,   107,
     107,   107,   107,    81,    75,   139,   144,   145,    76,    82,
      76,    76,    76,   107,    76,    98,   107,   107,   107,   107,
     107,   107,   107,   107,   107,   107,   107,   107,   139,   139,
     136,     6,     6,   137,    88,     7,   134,   138,    76,    87,
     137,     6,    93,   116,    76,   136,     8,   136,   134,     6,
      88,   120,   136,    81,   136,   126,   136,   139,    81,    82,
      81,    76,    87,    81,    81,     6,    81,   134,    22,   102,
      76,    33,    81,    33,    87,   136,    76,   136,   136,    81,
     132,   136,   136,   136,    81,    99,   134,    86,    81,     6,
     136,     6,    90,   121,   122,    81,    88,    86,    88,   106,
     135,   136,     6,    81,   136,   107,    86,   122,   136,    87,
      81,   136,    81,   132,   136,   136,    86
>>>>>>> main
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef	YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif



#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
	switch (*++yyp)
	  {
	  case '\'':
	  case ',':
	    goto do_not_strip_quotes;

	  case '\\':
	    if (*++yyp != '\\')
	      goto do_not_strip_quotes;
	    /* Fall through.  */
	  default:
	    if (yyres)
	      yyres[yyn] = *yyp;
	    yyn++;
	    break;

	  case '"':
	    if (yyres)
	      yyres[yyn] = '\0';
	    return yyn;
	  }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}

/* Prevent warnings from -Wmissing-prototypes.  */
#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */


/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*-------------------------.
| yyparse or yypush_parse.  |
`-------------------------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{


    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.

       Refer to the stacks thru separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yytoken = 0;
  yyss = yyssa;
  yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */
  yyssp = yyss;
  yyvsp = yyvs;

  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack.  Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	yytype_int16 *yyss1 = yyss;

	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),
		    &yystacksize);

	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	yytype_int16 *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyexhaustedlab;
	YYSTACK_RELOCATE (yyss_alloc, yyss);
	YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yyn == 0 || yyn == YYTABLE_NINF)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:

/* Line 1455 of yacc.c  */
#line 40 "parser.y"
    { /* for empty put % empty */;}
    break;

  case 3:

/* Line 1455 of yacc.c  */
#line 41 "parser.y"
    { ;}
    break;

  case 4:

/* Line 1455 of yacc.c  */
#line 42 "parser.y"
    {
                                    printf("------------ PROGRAM ACCEPTED ------------\n");
                                    YYACCEPT;
                              ;}
    break;

  case 44:

/* Line 1455 of yacc.c  */
<<<<<<< HEAD
#line 94 "parser.y"
=======
#line 107 "parser.y"
>>>>>>> main
    { ;}
    break;

  case 45:

/* Line 1455 of yacc.c  */
<<<<<<< HEAD
#line 95 "parser.y"
=======
#line 108 "parser.y"
>>>>>>> main
    { ;}
    break;

  case 46:

/* Line 1455 of yacc.c  */
<<<<<<< HEAD
#line 96 "parser.y"
=======
#line 109 "parser.y"
>>>>>>> main
    { ;}
    break;

  case 47:

/* Line 1455 of yacc.c  */
<<<<<<< HEAD
#line 97 "parser.y"
=======
#line 110 "parser.y"
>>>>>>> main
    { ;}
    break;

  case 48:

/* Line 1455 of yacc.c  */
<<<<<<< HEAD
#line 98 "parser.y"
=======
#line 111 "parser.y"
>>>>>>> main
    { ;}
    break;

  case 50:

/* Line 1455 of yacc.c  */
<<<<<<< HEAD
#line 99 "parser.y"
=======
#line 113 "parser.y"
>>>>>>> main
    { /*The rule for negation includes %prec UMINUS . The only operator in this rule is - , 
                                                      which has low precedence, but we want unary minus to have higher precedence than multiplication 
                                                      rather than lower. The %prec tells bison to use the precedence of UMINUS for this rule.*/
                                                ;}
    break;

<<<<<<< HEAD
  case 42:

/* Line 1455 of yacc.c  */
#line 103 "parser.y"
    { ;}
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 104 "parser.y"
    { ;}
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 105 "parser.y"
    { ;}
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 106 "parser.y"
    { ;}
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 107 "parser.y"
    { ;}
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 114 "parser.y"
    { ;}
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 115 "parser.y"
    { ;}
    break;

  case 51:

/* Line 1455 of yacc.c  */
=======
  case 51:

/* Line 1455 of yacc.c  */
#line 117 "parser.y"
    { ;}
    break;

  case 52:

/* Line 1455 of yacc.c  */
>>>>>>> main
#line 118 "parser.y"
    { ;}
    break;

  case 52:

/* Line 1455 of yacc.c  */
<<<<<<< HEAD
#line 121 "parser.y"
=======
#line 119 "parser.y"
>>>>>>> main
    { ;}
    break;



/* Line 1455 of yacc.c  */
<<<<<<< HEAD
#line 1794 "parser.tab.c"
=======
#line 1867 "parser.tab.c"
>>>>>>> main
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
	 error, discard it.  */

      if (yychar <= YYEOF)
	{
	  /* Return failure if at end of input.  */
	  if (yychar == YYEOF)
	    YYABORT;
	}
      else
	{
	  yydestruct ("Error: discarding",
		      yytoken, &yylval);
	  yychar = YYEMPTY;
	}
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule which action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
	{
	  yyn += YYTERROR;
	  if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
	    {
	      yyn = yytable[yyn];
	      if (0 < yyn)
		break;
	    }
	}

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
	YYABORT;


      yydestruct ("Error: popping",
		  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  *++yyvsp = yylval;


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined(yyoverflow) || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}



/* Line 1675 of yacc.c  */
<<<<<<< HEAD
#line 221 "parser.y"
=======
#line 292 "parser.y"
>>>>>>> main


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
