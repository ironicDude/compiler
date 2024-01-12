
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
#define YYLAST   655

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  100
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  48
/* YYNRULES -- Number of rules.  */
#define YYNRULES  153
/* YYNRULES -- Number of states.  */
#define YYNSTATES  297

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
      41,    43,    45,    47,    49,    51,    53,    55,    57,    59,
      61,    63,    65,    67,    69,    72,    75,    78,    83,    88,
      93,   100,   104,   108,   112,   116,   120,   124,   128,   132,
     136,   140,   144,   148,   152,   156,   160,   164,   167,   171,
     174,   176,   178,   180,   182,   184,   186,   188,   190,   193,
     197,   200,   203,   206,   209,   214,   217,   222,   225,   228,
     230,   234,   239,   244,   247,   249,   254,   257,   260,   264,
     268,   273,   277,   281,   286,   290,   293,   295,   300,   304,
     310,   312,   314,   325,   326,   329,   332,   335,   343,   348,
     353,   358,   363,   371,   376,   377,   381,   384,   387,   389,
     391,   394,   397,   399,   403,   407,   411,   415,   419,   423,
     427,   431,   434,   436,   438,   441,   442,   445,   447,   449,
     451,   454,   459,   466,   470,   475,   482,   489,   496,   505,
     512,   520,   530,   535
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     101,     0,    -1,    -1,    88,    -1,   101,   102,    -1,   102,
     103,    -1,   103,    -1,   102,    88,    -1,   105,    -1,   104,
      -1,    88,    -1,    47,    -1,    51,    -1,   108,    -1,   112,
      -1,   113,    -1,   114,    -1,   115,    -1,   116,    -1,   117,
      -1,   111,    -1,   106,    -1,   134,    -1,   128,    -1,    18,
      -1,    20,    -1,    29,    -1,   135,    -1,   140,    -1,   130,
      -1,   146,    -1,   147,    -1,   119,    -1,   123,    -1,   107,
      88,    -1,   106,   107,    -1,    17,   138,    -1,    35,   138,
      17,     6,    -1,    35,   138,    17,    50,    -1,    17,   138,
      33,     6,    -1,    35,   138,    17,     6,    33,     6,    -1,
     138,    55,   109,    -1,   138,    56,   109,    -1,   138,    59,
     109,    -1,   138,    62,   109,    -1,   138,    58,   109,    -1,
     138,    60,   109,    -1,   138,    57,   109,    -1,   138,    61,
     109,    -1,   138,    66,   109,    -1,   138,    67,   109,    -1,
     109,    48,   109,    -1,   109,    49,   109,    -1,   109,    50,
     109,    -1,   109,    52,   109,    -1,   109,    53,   109,    -1,
     109,    54,   109,    -1,    95,   109,    -1,    97,   109,    98,
      -1,    92,   109,    -1,   110,    -1,   138,    -1,   134,    -1,
       8,    -1,     7,    -1,    19,    -1,    84,    -1,    85,    -1,
      39,     6,    -1,    39,     6,     7,    -1,    27,   109,    -1,
      27,   139,    -1,    45,   109,    -1,    38,   139,    -1,    38,
     139,    82,     8,    -1,    23,   134,    -1,    23,   134,    35,
       6,    -1,    40,   118,    -1,    36,   118,    -1,     6,    -1,
       6,    82,   118,    -1,    89,     6,    81,   120,    -1,    88,
      87,   121,    86,    -1,   121,   122,    -1,   122,    -1,    90,
     109,    81,   136,    -1,   124,   126,    -1,   124,   127,    -1,
     124,   127,   126,    -1,   124,   127,   144,    -1,   124,   127,
     144,   126,    -1,    32,    81,   136,    -1,    21,    81,   136,
      -1,    21,   138,    81,   136,    -1,    25,    81,   136,    -1,
     127,   125,    -1,   125,    -1,    42,   129,    81,   136,    -1,
     134,    33,     6,    -1,   129,    82,   134,    33,     6,    -1,
     131,    -1,   133,    -1,    24,     6,    75,   137,    76,    81,
      88,    87,   132,    86,    -1,    -1,   132,   108,    -1,   132,
     135,    -1,   132,    88,    -1,    24,     6,    81,    88,    87,
     132,    86,    -1,     6,    75,   137,    76,    -1,     6,    75,
     110,    76,    -1,     6,    75,     8,    76,    -1,     6,    75,
     134,    76,    -1,    34,     6,    75,   137,    76,    81,   136,
      -1,    88,    87,   102,    86,    -1,    -1,   137,   109,    82,
      -1,   137,   109,    -1,   109,    82,    -1,   109,    -1,     6,
      -1,   138,     6,    -1,   138,   134,    -1,   109,    -1,   109,
      72,   109,    -1,   109,    71,   109,    -1,   109,    74,   109,
      -1,   109,    73,   109,    -1,   109,    68,   109,    -1,   109,
      70,   109,    -1,   139,    28,   139,    -1,   139,    44,   139,
      -1,    41,   139,    -1,    11,    -1,    10,    -1,   143,   141,
      -1,    -1,   142,   144,    -1,   142,    -1,   144,    -1,   145,
      -1,   142,   145,    -1,    14,   139,    81,   136,    -1,    14,
      75,   139,    76,    81,   136,    -1,    15,    81,   136,    -1,
      16,   139,    81,   136,    -1,    16,    75,   139,    76,    81,
     136,    -1,    30,     6,    22,   134,    81,   136,    -1,    30,
       6,    22,     7,    81,   136,    -1,    30,    75,   137,    76,
      22,   134,    81,   136,    -1,    30,     6,    22,   138,    81,
     136,    -1,    30,     6,    22,   138,   134,    81,   136,    -1,
      30,     6,    22,   138,   134,    99,     6,    81,   136,    -1,
      37,   139,    81,   136,    -1,    37,    75,   139,    76,    81,
     136,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    40,    40,    41,    42,    48,    49,    50,    53,    54,
      55,    56,    57,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    76,    77,    78,
      79,    80,    81,    82,    85,    86,    89,    90,    91,    92,
      93,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   108,   109,   110,   111,   112,   113,   114,   118,   119,
     120,   121,   122,   123,   124,   125,   128,   129,   132,   133,
     136,   137,   140,   143,   144,   147,   148,   151,   154,   157,
     158,   161,   164,   167,   168,   171,   174,   175,   176,   177,
     178,   181,   184,   185,   188,   191,   192,   195,   198,   199,
     202,   203,   206,   209,   210,   211,   212,   215,   218,   219,
     220,   221,   224,   227,   230,   231,   232,   233,   234,   237,
     238,   239,   242,   243,   244,   245,   246,   247,   248,   249,
     250,   251,   252,   253,   256,   259,   260,   261,   262,   265,
     266,   269,   270,   273,   276,   277,   280,   281,   282,   283,
     284,   285,   288,   289
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
  "statement", "simple_statement", "compound_statement",
  "import_statments", "import_statment", "assignment", "expression",
  "number", "del_statment", "return_statement", "yield_statement",
  "assert_statement", "raise_statement", "global_statement",
  "nonlocal_statement", "global_nonlocal_targets", "match_statement",
  "match_block", "cases", "case", "try_statement", "try", "except",
  "finally", "except_statements", "with_statment", "with_stmt", "class",
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
     104,   104,   104,   104,   104,   104,   104,   105,   105,   105,
     105,   105,   105,   105,   106,   106,   107,   107,   107,   107,
     107,   108,   108,   108,   108,   108,   108,   108,   108,   108,
     108,   109,   109,   109,   109,   109,   109,   109,   109,   109,
     109,   109,   109,   109,   109,   109,   110,   110,   111,   111,
     112,   112,   113,   114,   114,   115,   115,   116,   117,   118,
     118,   119,   120,   121,   121,   122,   123,   123,   123,   123,
     123,   124,   125,   125,   126,   127,   127,   128,   129,   129,
     130,   130,   131,   132,   132,   132,   132,   133,   134,   134,
     134,   134,   135,   136,   137,   137,   137,   137,   137,   138,
     138,   138,   139,   139,   139,   139,   139,   139,   139,   139,
     139,   139,   139,   139,   140,   141,   141,   141,   141,   142,
     142,   143,   143,   144,   145,   145,   146,   146,   146,   146,
     146,   146,   147,   147
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     1,     2,     2,     1,     2,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     2,     2,     2,     4,     4,     4,
       6,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     2,     3,     2,
       1,     1,     1,     1,     1,     1,     1,     1,     2,     3,
       2,     2,     2,     2,     4,     2,     4,     2,     2,     1,
       3,     4,     4,     2,     1,     4,     2,     2,     3,     3,
       4,     3,     3,     4,     3,     2,     1,     4,     3,     5,
       1,     1,    10,     0,     2,     2,     2,     7,     4,     4,
       4,     4,     7,     4,     0,     3,     2,     2,     1,     1,
       2,     2,     1,     3,     3,     3,     3,     3,     3,     3,
       3,     2,     1,     1,     2,     0,     2,     1,     1,     1,
       2,     4,     6,     3,     4,     6,     6,     6,     8,     6,
       7,     9,     4,     6
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       2,     3,     0,     1,   119,     0,     0,    24,    25,     0,
       0,     0,    26,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    11,    12,    10,     0,     4,     6,
       9,     8,    21,     0,    13,    20,    14,    15,    16,    17,
      18,    19,    32,    33,     0,    23,    29,   100,   101,    22,
      27,     0,    28,   135,    30,    31,   114,    64,    63,   133,
     132,    65,     0,     0,    66,    67,     0,     0,     0,   122,
      60,    62,    61,     0,   119,    36,     0,    75,     0,    70,
      71,     0,   114,     0,     0,     0,    79,    78,     0,     0,
      73,    68,    77,     0,     0,    72,     0,     7,     5,    35,
      34,     0,     0,    96,    86,    87,   120,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   121,     0,     0,
     134,   137,   138,   139,    63,   118,    60,    62,     0,   131,
       0,    59,    57,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   114,     0,     0,     0,     0,    91,   114,     0,     0,
       0,     0,     0,    69,     0,     0,     0,     0,     0,     0,
       0,    95,    88,    89,    41,    42,    47,    45,    43,    46,
      48,    44,    49,    50,     0,     0,     0,   136,   140,   110,
     117,   109,   111,   108,   116,     0,    58,    51,    52,    53,
      54,    55,    56,   127,   128,   124,   123,   126,   125,   129,
     130,   141,    39,    76,     0,     0,     0,     0,     0,     0,
       0,     0,    37,    38,    80,     0,   152,    74,    97,     0,
      98,     0,    81,    92,     0,    94,    90,   143,     0,     0,
     115,     0,     0,   103,     0,     0,     0,   121,     0,     0,
       0,     0,     0,     0,     0,    93,     0,   144,   142,     0,
       0,   147,   146,   149,     0,     0,     0,   113,     0,    40,
     153,    99,     0,     0,    84,     0,     0,   107,   106,   104,
     105,   150,     0,     0,   112,     0,    82,    83,   145,   103,
       0,   148,     0,     0,   151,    85,   102
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,    28,    29,    30,    31,    32,    33,    34,    69,
      70,    35,    36,    37,    38,    39,    40,    41,    87,    42,
     232,   273,   274,    43,    44,   103,   104,   105,    45,    93,
      46,    47,   260,    48,    71,    50,   156,   128,    72,    73,
      52,   120,   121,    53,   122,   123,    54,    55
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -248
static const yytype_int16 yypact[] =
{
     -55,  -248,   402,  -248,   -40,    72,    50,  -248,  -248,    91,
      94,    30,  -248,    -1,   -36,   135,    50,   142,   188,    30,
     144,   142,    91,   258,  -248,  -248,  -248,   155,   504,  -248,
    -248,  -248,     8,     2,  -248,  -248,  -248,  -248,  -248,  -248,
    -248,  -248,  -248,  -248,     9,  -248,  -248,  -248,  -248,  -248,
    -248,   439,  -248,    39,  -248,  -248,   320,  -248,  -248,  -248,
    -248,  -248,    30,    30,  -248,  -248,   258,   258,   258,   581,
    -248,  -248,   166,    14,  -248,    63,   -40,    85,   -53,   552,
     134,   151,   258,    86,   111,    15,   105,  -248,    30,    20,
     -17,   182,  -248,    36,   160,   152,   116,  -248,  -248,  -248,
    -248,     3,   122,  -248,  -248,   138,   -40,   258,   258,   258,
     258,   258,   258,   258,   258,   258,   258,  -248,   129,   220,
    -248,    39,  -248,  -248,   136,   131,   139,   141,   226,   134,
      22,   152,   152,   463,   258,   258,   258,   258,   258,   258,
     258,   258,   258,   258,   258,   258,    30,    30,    86,   205,
     208,   258,   137,    82,   249,   133,  -248,   258,    18,   142,
     114,    86,   215,  -248,    86,    91,   218,   147,    86,    11,
      86,  -248,  -248,   211,   152,   152,   152,   152,   152,   152,
     152,   152,   152,   152,    86,    30,    84,  -248,  -248,  -248,
    -248,  -248,  -248,  -248,   310,   156,  -248,   152,   152,   152,
     152,   152,   152,   152,   152,   152,   152,   152,   152,   134,
     134,  -248,  -248,  -248,   281,   153,   157,   161,    13,   221,
     539,   301,   227,  -248,  -248,   163,  -248,  -248,  -248,   229,
    -248,   167,  -248,  -248,    86,  -248,  -248,  -248,   132,    86,
    -248,    86,   189,  -248,    86,    86,    86,    -6,    91,   437,
     193,   263,    86,   270,   191,  -248,   197,  -248,  -248,   196,
      33,  -248,  -248,  -248,    86,   273,   212,  -248,    86,  -248,
    -248,  -248,   258,   102,  -248,    86,   199,  -248,  -248,  -248,
    -248,  -248,   213,    86,  -248,   559,  -248,  -248,  -248,  -248,
      86,  -248,    86,    38,  -248,  -248,  -248
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -248,  -248,    76,   -27,  -248,  -248,  -248,   260,  -247,    -5,
     242,  -248,  -248,  -248,  -248,  -248,  -248,  -248,   -14,  -248,
    -248,  -248,    28,  -248,  -248,   198,  -103,  -248,  -248,  -248,
    -248,  -248,    17,  -248,     1,  -240,     7,   -70,    -2,    -3,
    -248,  -248,  -248,  -248,   -74,   192,  -248,  -248
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -123
static const yytype_int16 yytable[] =
{
      51,    98,   172,    49,    75,    81,    79,    92,    80,    74,
      77,   146,   154,   279,    85,    89,    90,   106,    95,   106,
     280,   106,   151,    94,   222,     6,    51,   147,   152,    49,
     101,   173,   158,     1,   102,    56,     4,    57,    58,    74,
      59,    60,   146,    16,    74,    83,   279,   187,   146,    61,
     146,   125,   117,   280,   118,   119,    74,   127,   147,   129,
     130,   131,   132,   133,   147,   162,   147,    15,   223,   106,
     236,    62,    15,   117,    82,   264,   117,   125,     4,    57,
      58,   214,    59,    60,   168,   160,   117,   221,     4,   216,
     100,    61,   234,   265,   246,   148,   149,    76,   195,   169,
      78,   161,   174,   175,   176,   177,   178,   179,   180,   181,
     182,   183,   146,    62,    64,    65,   186,   164,   165,   277,
     150,   278,    66,   194,   296,    67,   278,    68,   147,   197,
     198,   199,   200,   201,   202,   203,   204,   205,   206,   207,
     208,    84,   146,   209,   210,   224,   125,    63,    86,   194,
      91,   218,   125,   118,   217,   211,    64,    65,   147,   101,
     146,    96,   146,   102,    66,   239,   229,    67,   226,    68,
     117,   228,   106,   153,   155,   233,   147,   235,   147,   134,
     135,   136,   238,   137,   138,   139,   157,   159,   286,   163,
     225,   237,   272,   166,     4,    57,    58,   167,    59,    60,
     134,   135,   136,   170,   137,   138,   139,    61,   256,   194,
     184,   212,   189,   190,   213,   191,   194,   192,    51,   247,
     220,    49,    98,   227,   230,   215,     4,    57,    58,    62,
      59,    60,     4,    57,    58,   231,   102,   241,   244,    61,
     243,   255,   245,   248,   252,    61,   257,    51,   258,   266,
      49,   261,   262,   263,   254,     4,    57,    58,    51,   270,
     251,    62,   253,    88,     4,    57,    58,   285,    61,   269,
     259,   281,    64,    65,   268,   284,   271,    61,   275,   282,
      66,   272,   288,    67,   276,    68,   289,     4,    57,    58,
     291,    51,    99,   283,   290,   185,   249,   294,   126,   295,
      61,   287,   193,   171,    64,    65,   293,     4,    57,    58,
      64,    65,    66,   188,     0,    67,     0,    68,    66,     0,
      61,    67,     0,    68,     0,   219,     4,    57,   124,     0,
       0,     0,     0,    64,    65,     0,     0,     0,     0,    61,
       0,    66,    64,    65,    67,     0,    68,     0,     0,     0,
      66,     0,     0,    67,     0,    68,     0,   242,   134,   135,
     136,     0,   137,   138,   139,    64,    65,     0,     0,     0,
       0,     0,     0,    66,     0,     0,    67,   250,    68,     0,
       0,     0,     0,     0,     0,    64,    65,     0,     0,     0,
       0,     0,   240,    66,     0,     0,    67,     0,    68,     0,
       0,     0,     3,     0,    64,    65,     0,     0,     4,     0,
       0,     0,    66,     0,     0,    67,     5,    68,     0,     6,
       7,     0,     8,     0,     0,     9,    10,     0,     0,    11,
       0,    12,    13,     0,    14,     0,    15,    16,    17,    18,
      19,    20,    21,     4,    22,   106,     0,    23,     0,    24,
       0,     5,     0,    25,     6,     7,     0,     8,     0,     0,
       9,    10,     0,     0,    11,     0,    12,    13,     0,    14,
       0,    15,    16,    17,    18,    19,    20,    21,     0,    22,
       0,     0,    23,     0,    24,     0,     0,     0,    25,     0,
      26,    27,     0,     0,   107,   108,   109,   110,   111,   112,
     113,   114,     0,     0,     0,   115,   116,     0,     0,     0,
       4,   134,   135,   136,     0,   137,   138,   139,     5,     0,
       0,     6,     7,   267,     8,    97,    27,     9,    10,     0,
       0,    11,     0,    12,    13,     0,    14,     0,    15,    16,
      17,    18,    19,    20,    21,     4,    22,     0,     0,    23,
       0,    24,     0,     5,     0,    25,     6,     7,     0,     8,
       0,   196,     9,    10,     0,     0,    11,     0,    12,    13,
       0,    14,     0,    15,    16,    17,    18,    19,    20,    21,
    -122,    22,     0,     0,    23,     0,    24,     0,     0,     0,
      25,     0,    97,    27,     0,     0,  -122,     0,     0,     0,
     134,   135,   136,     0,   137,   138,   139,   134,   135,   136,
       0,   137,   138,   139,     0,     0,     0,     0,     0,     0,
     140,     0,   141,   142,   143,   144,   145,    26,    27,   134,
     135,   136,     0,   137,   138,   139,     0,     0,     0,     0,
     292,     0,     0,     0,     0,     0,     0,     0,     0,   140,
       0,   141,   142,   143,   144,   145
};

static const yytype_int16 yycheck[] =
{
       2,    28,   105,     2,     6,     6,    11,    21,    11,     6,
       9,    28,    82,   260,    16,    18,    19,     6,    23,     6,
     260,     6,    75,    22,     6,    17,    28,    44,    81,    28,
      21,   105,    17,    88,    25,    75,     6,     7,     8,     6,
      10,    11,    28,    35,     6,    81,   293,   121,    28,    19,
      28,    56,    51,   293,    15,    16,     6,    56,    44,    62,
      63,    66,    67,    68,    44,    82,    44,    34,    50,     6,
     173,    41,    34,    72,    75,    81,    75,    82,     6,     7,
       8,   151,    10,    11,    81,    88,    85,   157,     6,     7,
      88,    19,    81,    99,    81,    81,    33,     6,    76,   101,
       6,    81,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,    28,    41,    84,    85,   119,    81,    82,    86,
      35,    88,    92,   128,    86,    95,    88,    97,    44,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,     6,    28,   146,   147,   159,   151,    75,     6,   154,
       6,   153,   157,    15,   153,   148,    84,    85,    44,    21,
      28,     6,    28,    25,    92,    81,   165,    95,   161,    97,
     169,   164,     6,    22,    88,   168,    44,   170,    44,    48,
      49,    50,   185,    52,    53,    54,    75,    82,    86,     7,
      76,   184,    90,    33,     6,     7,     8,    81,    10,    11,
      48,    49,    50,    81,    52,    53,    54,    19,    76,   214,
      81,     6,    76,    82,     6,    76,   221,    76,   220,   218,
      87,   220,   249,     8,     6,    88,     6,     7,     8,    41,
      10,    11,     6,     7,     8,    88,    25,    81,    81,    19,
      87,   234,    81,    22,    81,    19,   239,   249,   241,   248,
     249,   244,   245,   246,    87,     6,     7,     8,   260,   252,
      33,    41,    33,    75,     6,     7,     8,   272,    19,     6,
      81,   264,    84,    85,    81,   268,     6,    19,    81,     6,
      92,    90,   275,    95,    88,    97,    87,     6,     7,     8,
     283,   293,    32,    81,    81,    75,   220,   290,    56,   292,
      19,   273,    76,   105,    84,    85,   289,     6,     7,     8,
      84,    85,    92,   121,    -1,    95,    -1,    97,    92,    -1,
      19,    95,    -1,    97,    -1,    76,     6,     7,     8,    -1,
      -1,    -1,    -1,    84,    85,    -1,    -1,    -1,    -1,    19,
      -1,    92,    84,    85,    95,    -1,    97,    -1,    -1,    -1,
      92,    -1,    -1,    95,    -1,    97,    -1,    76,    48,    49,
      50,    -1,    52,    53,    54,    84,    85,    -1,    -1,    -1,
      -1,    -1,    -1,    92,    -1,    -1,    95,    76,    97,    -1,
      -1,    -1,    -1,    -1,    -1,    84,    85,    -1,    -1,    -1,
      -1,    -1,    82,    92,    -1,    -1,    95,    -1,    97,    -1,
      -1,    -1,     0,    -1,    84,    85,    -1,    -1,     6,    -1,
      -1,    -1,    92,    -1,    -1,    95,    14,    97,    -1,    17,
      18,    -1,    20,    -1,    -1,    23,    24,    -1,    -1,    27,
      -1,    29,    30,    -1,    32,    -1,    34,    35,    36,    37,
      38,    39,    40,     6,    42,     6,    -1,    45,    -1,    47,
      -1,    14,    -1,    51,    17,    18,    -1,    20,    -1,    -1,
      23,    24,    -1,    -1,    27,    -1,    29,    30,    -1,    32,
      -1,    34,    35,    36,    37,    38,    39,    40,    -1,    42,
      -1,    -1,    45,    -1,    47,    -1,    -1,    -1,    51,    -1,
      88,    89,    -1,    -1,    55,    56,    57,    58,    59,    60,
      61,    62,    -1,    -1,    -1,    66,    67,    -1,    -1,    -1,
       6,    48,    49,    50,    -1,    52,    53,    54,    14,    -1,
      -1,    17,    18,    86,    20,    88,    89,    23,    24,    -1,
      -1,    27,    -1,    29,    30,    -1,    32,    -1,    34,    35,
      36,    37,    38,    39,    40,     6,    42,    -1,    -1,    45,
      -1,    47,    -1,    14,    -1,    51,    17,    18,    -1,    20,
      -1,    98,    23,    24,    -1,    -1,    27,    -1,    29,    30,
      -1,    32,    -1,    34,    35,    36,    37,    38,    39,    40,
      28,    42,    -1,    -1,    45,    -1,    47,    -1,    -1,    -1,
      51,    -1,    88,    89,    -1,    -1,    44,    -1,    -1,    -1,
      48,    49,    50,    -1,    52,    53,    54,    48,    49,    50,
      -1,    52,    53,    54,    -1,    -1,    -1,    -1,    -1,    -1,
      68,    -1,    70,    71,    72,    73,    74,    88,    89,    48,
      49,    50,    -1,    52,    53,    54,    -1,    -1,    -1,    -1,
      81,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    68,
      -1,    70,    71,    72,    73,    74
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    88,   101,     0,     6,    14,    17,    18,    20,    23,
      24,    27,    29,    30,    32,    34,    35,    36,    37,    38,
      39,    40,    42,    45,    47,    51,    88,    89,   102,   103,
     104,   105,   106,   107,   108,   111,   112,   113,   114,   115,
     116,   117,   119,   123,   124,   128,   130,   131,   133,   134,
     135,   138,   140,   143,   146,   147,    75,     7,     8,    10,
      11,    19,    41,    75,    84,    85,    92,    95,    97,   109,
     110,   134,   138,   139,     6,   138,     6,   134,     6,   109,
     139,     6,    75,    81,     6,   138,     6,   118,    75,   139,
     139,     6,   118,   129,   134,   109,     6,    88,   103,   107,
      88,    21,    25,   125,   126,   127,     6,    55,    56,    57,
      58,    59,    60,    61,    62,    66,    67,   134,    15,    16,
     141,   142,   144,   145,     8,   109,   110,   134,   137,   139,
     139,   109,   109,   109,    48,    49,    50,    52,    53,    54,
      68,    70,    71,    72,    73,    74,    28,    44,    81,    33,
      35,    75,    81,    22,   137,    88,   136,    75,    17,    82,
     139,    81,    82,     7,    81,    82,    33,    81,    81,   138,
      81,   125,   126,   144,   109,   109,   109,   109,   109,   109,
     109,   109,   109,   109,    81,    75,   139,   144,   145,    76,
      82,    76,    76,    76,   109,    76,    98,   109,   109,   109,
     109,   109,   109,   109,   109,   109,   109,   109,   109,   139,
     139,   136,     6,     6,   137,    88,     7,   134,   138,    76,
      87,   137,     6,    50,   118,    76,   136,     8,   136,   134,
       6,    88,   120,   136,    81,   136,   126,   136,   139,    81,
      82,    81,    76,    87,    81,    81,    81,   134,    22,   102,
      76,    33,    81,    33,    87,   136,    76,   136,   136,    81,
     132,   136,   136,   136,    81,    99,   134,    86,    81,     6,
     136,     6,    90,   121,   122,    81,    88,    86,    88,   108,
     135,   136,     6,    81,   136,   109,    86,   122,   136,    87,
      81,   136,    81,   132,   136,   136,    86
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
    { ;}
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

  case 51:

/* Line 1455 of yacc.c  */
#line 108 "parser.y"
    { ;}
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 109 "parser.y"
    { ;}
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 110 "parser.y"
    { ;}
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 111 "parser.y"
    { ;}
    break;

  case 55:

/* Line 1455 of yacc.c  */
#line 112 "parser.y"
    { ;}
    break;

  case 57:

/* Line 1455 of yacc.c  */
#line 114 "parser.y"
    { /*The rule for negation includes %prec UMINUS . The only operator in this rule is - , 
                                                      which has low precedence, but we want unary minus to have higher precedence than multiplication 
                                                      rather than lower. The %prec tells bison to use the precedence of UMINUS for this rule.*/
                                                ;}
    break;

  case 58:

/* Line 1455 of yacc.c  */
#line 118 "parser.y"
    { ;}
    break;

  case 59:

/* Line 1455 of yacc.c  */
#line 119 "parser.y"
    { ;}
    break;

  case 60:

/* Line 1455 of yacc.c  */
#line 120 "parser.y"
    { ;}
    break;

  case 61:

/* Line 1455 of yacc.c  */
#line 121 "parser.y"
    { ;}
    break;

  case 62:

/* Line 1455 of yacc.c  */
#line 122 "parser.y"
    { ;}
    break;

  case 68:

/* Line 1455 of yacc.c  */
#line 132 "parser.y"
    { ;}
    break;

  case 69:

/* Line 1455 of yacc.c  */
#line 133 "parser.y"
    { ;}
    break;



/* Line 1455 of yacc.c  */
#line 1901 "parser.tab.c"
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
#line 292 "parser.y"


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
