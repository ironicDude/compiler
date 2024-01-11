
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
<<<<<<< HEAD
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
     KEYWORD_MATCH = 344,
     KEYWORD_CASE = 345,
=======
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
>>>>>>> main
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
<<<<<<< HEAD
#define YYFINAL  79
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   525
=======
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   378
>>>>>>> main

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  100
/* YYNNTS -- Number of nonterminals.  */
<<<<<<< HEAD
#define YYNNTS  43
/* YYNRULES -- Number of rules.  */
#define YYNRULES  125
/* YYNRULES -- Number of states.  */
#define YYNSTATES  248
=======
#define YYNNTS  34
/* YYNRULES -- Number of rules.  */
#define YYNRULES  110
/* YYNRULES -- Number of states.  */
#define YYNSTATES  222
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
      41,    43,    45,    47,    49,    51,    53,    55,    57,    61,
      65,    69,    73,    77,    81,    85,    88,    92,    95,    97,
      99,   101,   103,   105,   107,   110,   113,   116,   119,   122,
     125,   128,   133,   136,   141,   144,   147,   149,   153,   158,
     163,   166,   168,   173,   176,   179,   183,   187,   192,   196,
     200,   205,   209,   212,   214,   216,   218,   229,   230,   233,
     236,   239,   247,   255,   260,   261,   265,   268,   271,   273,
     275,   278,   281,   282,   285,   287,   289,   291,   294,   299,
     306,   310,   315,   322,   324,   328,   332,   336,   340,   344,
     348,   352,   356,   359,   361,   363,   368,   373,   378,   385,
     392,   401,   408,   416,   426,   431
=======
      41,    43,    45,    47,    49,    51,    53,    55,    57,    60,
      63,    66,    71,    76,    81,    88,    92,    96,   100,   104,
     108,   112,   115,   119,   122,   124,   126,   128,   130,   132,
     135,   139,   142,   145,   148,   151,   156,   160,   166,   168,
     170,   181,   182,   185,   188,   191,   199,   204,   209,   214,
     219,   227,   232,   233,   237,   240,   243,   245,   247,   250,
     252,   256,   260,   264,   268,   272,   276,   280,   284,   287,
     289,   291,   294,   295,   298,   300,   302,   304,   307,   312,
     319,   323,   328,   335,   342,   349,   358,   365,   373,   383,
     388
>>>>>>> main
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
<<<<<<< HEAD
     101,     0,    -1,    -1,    88,    -1,   102,   101,    -1,   102,
     103,    -1,   103,    -1,   102,    88,    -1,    88,    -1,   105,
      -1,   104,    -1,   106,    -1,   109,    -1,   110,    -1,   111,
      -1,   112,    -1,   113,    -1,   114,    -1,    17,    -1,    19,
      -1,    28,    -1,   129,    -1,   133,    -1,   125,    -1,   141,
      -1,   142,    -1,   116,    -1,   120,    -1,   132,    53,   107,
      -1,   107,    47,   107,    -1,   107,    48,   107,    -1,   107,
      49,   107,    -1,   107,    50,   107,    -1,   107,    51,   107,
      -1,   107,    52,   107,    -1,    95,   107,    -1,    97,   107,
      98,    -1,    92,   107,    -1,   108,    -1,     6,    -1,   140,
      -1,     8,    -1,    84,    -1,    85,    -1,    26,   132,    -1,
      26,   107,    -1,    26,    18,    -1,    26,   139,    -1,    44,
     132,    -1,    44,   107,    -1,    37,   139,    -1,    37,   139,
      80,     8,    -1,    22,   140,    -1,    22,   140,    34,     6,
      -1,    39,   115,    -1,    35,   115,    -1,     6,    -1,     6,
      80,   115,    -1,    89,     6,    79,   117,    -1,    88,    87,
     118,    86,    -1,   118,   119,    -1,   119,    -1,    90,   107,
      79,   130,    -1,   121,   123,    -1,   121,   124,    -1,   121,
     124,   123,    -1,   121,   124,   137,    -1,   121,   124,   137,
     123,    -1,    31,    79,   130,    -1,    20,    79,   130,    -1,
      20,   132,    79,   130,    -1,    24,    79,   130,    -1,   124,
     122,    -1,   122,    -1,   126,    -1,   128,    -1,    23,     6,
      73,   131,    74,    79,    88,    87,   127,    86,    -1,    -1,
     127,   106,    -1,   127,   129,    -1,   127,    88,    -1,    23,
       6,    79,    88,    87,   127,    86,    -1,    33,     6,    73,
     131,    74,    79,   130,    -1,    88,    87,   102,    86,    -1,
      -1,   131,   107,    80,    -1,   131,   107,    -1,   107,    80,
      -1,   107,    -1,     6,    -1,   132,     6,    -1,   136,   134,
      -1,    -1,   135,   137,    -1,   135,    -1,   137,    -1,   138,
      -1,   135,   138,    -1,    13,   139,    79,   130,    -1,    13,
      73,   139,    74,    79,   130,    -1,    14,    79,   130,    -1,
      15,   139,    79,   130,    -1,    15,    73,   139,    74,    79,
     130,    -1,   107,    -1,   107,    70,   107,    -1,   107,    69,
     107,    -1,   107,    72,   107,    -1,   107,    71,   107,    -1,
     107,    66,   107,    -1,   107,    68,   107,    -1,   139,    27,
     139,    -1,   139,    43,   139,    -1,    40,   139,    -1,    11,
      -1,    10,    -1,     6,    73,   131,    74,    -1,     6,    73,
     108,    74,    -1,     6,    73,   140,    74,    -1,    29,     6,
      21,   140,    79,   130,    -1,    29,     6,    21,     7,    79,
     130,    -1,    29,    73,   131,    74,    21,   140,    79,   130,
      -1,    29,     6,    21,   132,    79,   130,    -1,    29,     6,
      21,   132,   140,    79,   130,    -1,    29,     6,    21,   132,
     140,    99,     6,    79,   130,    -1,    36,   139,    79,   130,
      -1,    36,    73,   139,    74,    79,   130,    -1
=======
     101,     0,    -1,    -1,    90,    -1,   101,   102,    -1,   102,
     103,    -1,   103,    -1,   102,    90,    -1,   105,    -1,   104,
      -1,    90,    -1,    47,    -1,    51,    -1,   108,    -1,   112,
      -1,   113,    -1,   111,    -1,   106,    -1,   120,    -1,   114,
      -1,    18,    -1,    20,    -1,    29,    -1,   121,    -1,   126,
      -1,   116,    -1,   132,    -1,   133,    -1,   107,    90,    -1,
     106,   107,    -1,    17,   124,    -1,    35,   124,    17,     6,
      -1,    35,   124,    17,    93,    -1,    17,   124,    33,     6,
      -1,    35,   124,    17,     6,    33,     6,    -1,   124,    55,
     109,    -1,   109,    48,   109,    -1,   109,    49,   109,    -1,
     109,    50,   109,    -1,   109,    52,   109,    -1,   109,    53,
     109,    -1,    95,   109,    -1,    97,   109,    98,    -1,    92,
     109,    -1,   110,    -1,     6,    -1,   120,    -1,    86,    -1,
      87,    -1,    39,     6,    -1,    39,     6,     7,    -1,    27,
     124,    -1,    27,   109,    -1,    45,   124,    -1,    45,   109,
      -1,    42,   115,    81,   122,    -1,   120,    33,     6,    -1,
     115,    82,   120,    33,     6,    -1,   117,    -1,   119,    -1,
      24,     6,    75,   123,    76,    81,    90,    89,   118,    88,
      -1,    -1,   118,   108,    -1,   118,   121,    -1,   118,    90,
      -1,    24,     6,    81,    90,    89,   118,    88,    -1,     6,
      75,   123,    76,    -1,     6,    75,   110,    76,    -1,     6,
      75,     8,    76,    -1,     6,    75,   120,    76,    -1,    34,
       6,    75,   123,    76,    81,   122,    -1,    90,    89,   102,
      88,    -1,    -1,   123,     6,    82,    -1,   123,     6,    -1,
       6,    82,    -1,     6,    -1,     6,    -1,   124,     6,    -1,
     109,    -1,   109,    72,   109,    -1,   109,    71,   109,    -1,
     109,    74,   109,    -1,   109,    73,   109,    -1,   109,    68,
     109,    -1,   109,    70,   109,    -1,   125,    28,   125,    -1,
     125,    44,   125,    -1,    41,   125,    -1,    11,    -1,    10,
      -1,   129,   127,    -1,    -1,   128,   130,    -1,   128,    -1,
     130,    -1,   131,    -1,   128,   131,    -1,    14,   125,    81,
     122,    -1,    14,    75,   125,    76,    81,   122,    -1,    15,
      81,   122,    -1,    16,   125,    81,   122,    -1,    16,    75,
     125,    76,    81,   122,    -1,    30,     6,    22,   120,    81,
     122,    -1,    30,     6,    22,     7,    81,   122,    -1,    30,
      75,   123,    76,    22,   120,    81,   122,    -1,    30,     6,
      22,   124,    81,   122,    -1,    30,     6,    22,   124,   120,
      81,   122,    -1,    30,     6,    22,   124,   120,    99,     6,
      81,   122,    -1,    37,   125,    81,   122,    -1,    37,    75,
     125,    76,    81,   122,    -1
>>>>>>> main
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
<<<<<<< HEAD
       0,    41,    41,    42,    43,   120,   121,   122,   123,   126,
     127,   130,   131,   132,   133,   134,   135,   136,   137,   138,
     139,   142,   143,   144,   145,   146,   147,   148,   151,   154,
     155,   156,   157,   158,   159,   160,   164,   165,   166,   167,
     168,   169,   172,   173,   177,   178,   179,   180,   183,   184,
     187,   188,   190,   191,   194,   196,   199,   200,   203,   205,
     207,   208,   210,   212,   213,   214,   215,   216,   219,   220,
     221,   223,   225,   226,   229,   230,   233,   236,   237,   238,
     239,   242,   245,   248,   250,   251,   252,   253,   254,   257,
     258,   261,   264,   265,   266,   267,   270,   271,   274,   275,
     278,   281,   282,   285,   286,   287,   288,   289,   290,   291,
     292,   293,   294,   295,   296,   299,   300,   301,   304,   305,
     306,   307,   308,   309,   312,   313
=======
       0,    41,    41,    42,    43,   120,   121,   122,   125,   126,
     127,   128,   129,   132,   133,   134,   135,   136,   137,   138,
     139,   140,   141,   144,   145,   146,   147,   148,   152,   153,
     156,   157,   158,   159,   160,   163,   166,   167,   168,   169,
     170,   171,   175,   176,   177,   178,   179,   182,   183,   186,
     187,   190,   191,   194,   195,   198,   201,   202,   205,   206,
     209,   212,   213,   214,   215,   218,   221,   222,   223,   224,
     227,   230,   233,   234,   235,   236,   237,   240,   241,   244,
     245,   246,   247,   248,   249,   250,   251,   252,   253,   254,
     255,   258,   261,   262,   263,   264,   267,   268,   271,   272,
     275,   278,   279,   282,   283,   284,   285,   286,   287,   290,
     291
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
<<<<<<< HEAD
  "KEYWORD_TRUE", "KEYWORD_AWAIT", "KEYWORD_IF", "KEYWORD_ELSE",
  "KEYWORD_ELSE_IF", "KEYWORD_IMPORT", "KEYWORD_PASS", "KEYWORD_NONE",
  "KEYWORD_BREAK", "KEYWORD_EXCEPT", "KEYWORD_IN", "KEYWORD_RAISE",
  "KEYWORD_CLASS", "KEYWORD_FINALLY", "KEYWORD_IS", "KEYWORD_RETURN",
  "KEYWORD_AND", "KEYWORD_CONTINUE", "KEYWORD_FOR", "KEYWORD_LAMBDA",
  "KEYWORD_TRY", "KEYWORD_AS", "KEYWORD_DEF", "KEYWORD_FROM",
  "KEYWORD_NONLOCAL", "KEYWORD_WHILE", "KEYWORD_ASSERT", "KEYWORD_DEL",
  "KEYWORD_GLOBAL", "KEYWORD_NOT", "KEYWORD_WITH", "KEYWORD_ASYNC",
  "KEYWORD_OR", "KEYWORD_YIELD", "OPERATORS", "COMMENT", "ADD", "MINUS",
  "MULTIPLY", "DIVIDE", "POWER", "MODULO", "ASSIGN", "ASSIGNADD",
  "ASSIGNMINUS", "ASSIGNMULTIPLY", "ASSIGNDIVIDE", "ASSIGNMODULO",
  "ASSIGNFLOORDIVISION", "ASSIGNEXPONINTIATION", "ASSIGNBITWISEAND",
  "ASSIGNBITWISEOR", "ASSIGNBITWISEXOR", "ASSIGNRIGHTSHIFT",
  "ASSIGNLEFTSHIFT", "EQUAL", "NOT", "NOTEQUAL", "GREATERTHAN",
  "GREATEROREQUAL", "LESSTHAN", "LESSOREQUAL", "LEFT_PARENTHES",
  "RIGHT_PARENTHES", "LEFT_BRACES", "RIGHT_BRACES", "LEFT_BRACKETS",
  "RIGHT_BRACKETS", "COLON", "COMMA", "SEMICOLON", "INCREMENT",
  "DECREMENT", "INTEGER", "FLOAT", "DEDENT", "INDENT", "NEWLINE",
  "KEYWORD_MATCH", "KEYWORD_CASE", "'+'", "'-'", "'*'", "'/'", "'|'",
  "UMINUS", "'('", "')'", "'.'", "$accept", "prog", "statements",
  "statement", "simple_statement", "compound_statement", "assignment",
  "expression", "number", "return_statement", "yield_statement",
  "assert_statement", "raise_statement", "global_statement",
  "nonlocal_statement", "global_nonlocal_targets", "match_statement",
  "match_block", "cases", "case", "try_statement", "try", "except",
  "finally", "except_statements", "class", "class_with_inheritance",
  "class_block", "class_without_inheritance", "function", "block", "args",
  "member_expression", "conditional_statement", "elif_else", "elif_stmts",
  "if_statement", "else_statement", "elif_statement", "logical_expression",
  "function_call", "for_statement", "while_statement", 0
=======
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
  "SEMICOLON", "INCREMENT", "DECREMENT", "INTEGER", "FLOAT", "DEDENT",
  "INDENT", "NEWLINE", "'+'", "'-'", "'*'", "'/'", "'|'", "UMINUS", "'('",
  "')'", "'.'", "$accept", "prog", "statements", "statement",
  "simple_statement", "compound_statement", "import_statments",
  "import_statment", "assignment", "expression", "number", "del_statment",
  "return_statement", "yield_statement", "with_statment", "with_stmt",
  "class", "class_with_inheritance", "class_block",
  "class_without_inheritance", "function_call", "function", "block",
  "args", "member_expression", "logical_expression",
  "conditional_statement", "elif_else", "elif_stmts", "if_statement",
  "else_statement", "elif_statement", "for_statement", "while_statement", 0
>>>>>>> main
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
<<<<<<< HEAD
       0,   100,   101,   101,   101,   102,   102,   102,   102,   103,
     103,   104,   104,   104,   104,   104,   104,   104,   104,   104,
     104,   105,   105,   105,   105,   105,   105,   105,   106,   107,
     107,   107,   107,   107,   107,   107,   107,   107,   107,   107,
     107,   107,   108,   108,   109,   109,   109,   109,   110,   110,
     111,   111,   112,   112,   113,   114,   115,   115,   116,   117,
     118,   118,   119,   120,   120,   120,   120,   120,   121,   122,
     122,   123,   124,   124,   125,   125,   126,   127,   127,   127,
     127,   128,   129,   130,   131,   131,   131,   131,   131,   132,
     132,   133,   134,   134,   134,   134,   135,   135,   136,   136,
     137,   138,   138,   139,   139,   139,   139,   139,   139,   139,
     139,   139,   139,   139,   139,   140,   140,   140,   141,   141,
     141,   141,   141,   141,   142,   142
=======
       0,   100,   101,   101,   101,   102,   102,   102,   103,   103,
     103,   103,   103,   104,   104,   104,   104,   104,   104,   104,
     104,   104,   104,   105,   105,   105,   105,   105,   106,   106,
     107,   107,   107,   107,   107,   108,   109,   109,   109,   109,
     109,   109,   109,   109,   109,   109,   109,   110,   110,   111,
     111,   112,   112,   113,   113,   114,   115,   115,   116,   116,
     117,   118,   118,   118,   118,   119,   120,   120,   120,   120,
     121,   122,   123,   123,   123,   123,   123,   124,   124,   125,
     125,   125,   125,   125,   125,   125,   125,   125,   125,   125,
     125,   126,   127,   127,   127,   127,   128,   128,   129,   129,
     130,   131,   131,   132,   132,   132,   132,   132,   132,   133,
     133
>>>>>>> main
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     1,     2,     2,     1,     2,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
<<<<<<< HEAD
       1,     1,     1,     1,     1,     1,     1,     1,     3,     3,
       3,     3,     3,     3,     3,     2,     3,     2,     1,     1,
       1,     1,     1,     1,     2,     2,     2,     2,     2,     2,
       2,     4,     2,     4,     2,     2,     1,     3,     4,     4,
       2,     1,     4,     2,     2,     3,     3,     4,     3,     3,
       4,     3,     2,     1,     1,     1,    10,     0,     2,     2,
       2,     7,     7,     4,     0,     3,     2,     2,     1,     1,
       2,     2,     0,     2,     1,     1,     1,     2,     4,     6,
       3,     4,     6,     1,     3,     3,     3,     3,     3,     3,
       3,     3,     2,     1,     1,     4,     4,     4,     6,     6,
       8,     6,     7,     9,     4,     6
=======
       1,     1,     1,     1,     1,     1,     1,     1,     2,     2,
       2,     4,     4,     4,     6,     3,     3,     3,     3,     3,
       3,     2,     3,     2,     1,     1,     1,     1,     1,     2,
       3,     2,     2,     2,     2,     4,     3,     5,     1,     1,
      10,     0,     2,     2,     2,     7,     4,     4,     4,     4,
       7,     4,     0,     3,     2,     2,     1,     1,     2,     1,
       3,     3,     3,     3,     3,     3,     3,     3,     2,     1,
       1,     2,     0,     2,     1,     1,     1,     2,     4,     6,
       3,     4,     6,     6,     6,     8,     6,     7,     9,     4,
       6
>>>>>>> main
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
<<<<<<< HEAD
       2,    89,     0,    18,    19,     0,     0,     0,    20,     0,
       0,     0,     0,     0,     0,     0,     0,     8,     0,     0,
       2,     6,    10,     9,    11,    12,    13,    14,    15,    16,
      17,    26,    27,     0,    23,    74,    75,    21,     0,    22,
      92,    24,    25,    39,    41,   114,   113,     0,     0,    42,
      43,     0,     0,     0,   103,    38,     0,    40,     0,    52,
       0,    39,    46,    45,    44,    47,     0,    84,     0,     0,
      56,    55,     0,     0,    50,    54,    49,    48,     0,     1,
       7,     4,     5,     0,     0,    73,    63,    64,    90,     0,
       0,     0,    91,    94,    95,    96,    84,   112,     0,    37,
      35,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    84,     0,
       0,    88,     0,     0,    68,    84,     0,     0,     0,     0,
       0,     0,     0,     0,    72,    65,    66,    28,     0,     0,
       0,    93,    97,    38,     0,    40,     0,    36,    29,    30,
      31,    32,    33,    34,   108,   109,   105,   104,   107,   106,
     110,   111,    98,    53,     0,     0,    89,     0,     0,     0,
      87,     0,    86,     0,     0,    57,     0,   124,    51,     0,
      58,    69,     0,    71,    67,   100,     0,     0,   116,   115,
     117,     0,     0,    77,     0,    90,     0,     0,     0,     0,
      85,     8,     0,     0,     0,     0,    70,     0,   101,    99,
       0,     0,   119,   121,     0,     0,   118,     0,    83,     7,
       5,     0,   125,     0,     0,    61,     0,     0,    81,    80,
      78,    79,   122,     0,     0,    82,     0,    59,    60,   102,
      77,     0,   120,     0,     0,   123,    62,    76
=======
       2,     3,     0,     1,    77,     0,     0,    20,    21,     0,
       0,    22,     0,     0,     0,     0,     0,     0,     0,    11,
      12,    10,     4,     6,     9,     8,    17,     0,    13,    16,
      14,    15,    19,    25,    58,    59,    18,    23,     0,    24,
      92,    26,    27,    72,    45,    90,    89,     0,     0,    47,
      48,     0,     0,     0,    79,    44,    46,     0,    77,    30,
       0,    45,    52,    51,     0,    72,     0,     0,     0,     0,
      49,     0,     0,     0,    54,    53,     7,     5,    29,    28,
      78,     0,     0,     0,    91,    94,    95,    96,    76,     0,
       0,     0,     0,    88,     0,    43,    41,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    72,     0,     0,    76,     0,    72,     0,
       0,     0,    50,     0,     0,     0,    35,     0,     0,     0,
      93,    97,    75,    68,    67,    69,    74,    66,     0,    42,
      36,    37,    38,    39,    40,    84,    85,    81,    80,    83,
      82,    86,    87,     0,    98,    33,     0,     0,     0,     0,
       0,     0,     0,    31,    32,     0,   109,    55,     0,    56,
     100,     0,     0,    73,     0,     0,     0,    61,     0,     0,
      78,     0,     0,     0,     0,     0,     0,     0,     0,   101,
      99,     0,     0,     0,   104,   103,   106,     0,     0,     0,
       0,    34,   110,    57,     0,    71,     0,    65,    64,    62,
      63,   107,     0,     0,    70,   102,    61,     0,   105,     0,
     108,    60
>>>>>>> main
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
<<<<<<< HEAD
      -1,    19,    20,    21,    22,    23,    24,    54,    55,    25,
      26,    27,    28,    29,    30,    71,    31,   180,   224,   225,
      32,    33,    85,    86,    87,    34,    35,   211,    36,    37,
     124,   122,    38,    39,    92,    93,    40,    94,    95,    56,
      57,    41,    42
=======
      -1,     2,    22,    23,    24,    25,    26,    27,    28,    54,
      55,    29,    30,    31,    32,    72,    33,    34,   193,    35,
      56,    37,   154,    92,    38,    57,    39,    84,    85,    40,
      86,    87,    41,    42
>>>>>>> main
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
<<<<<<< HEAD
#define YYPACT_NINF -198
static const yytype_int16 yypact[] =
{
     353,  -198,   102,  -198,  -198,    19,    22,   133,  -198,     4,
     -38,    43,    45,   139,   197,    45,   233,    57,    63,    72,
     393,  -198,  -198,  -198,  -198,  -198,  -198,  -198,  -198,  -198,
    -198,  -198,  -198,    30,  -198,  -198,  -198,  -198,     9,  -198,
      24,  -198,  -198,     6,  -198,  -198,  -198,   197,   197,  -198,
    -198,   248,   248,   248,   451,  -198,    -8,  -198,     6,    83,
     -37,     6,  -198,   419,   115,   -16,   101,   248,    35,    53,
      47,  -198,   197,    -3,   -21,  -198,   464,   115,    49,  -198,
      57,  -198,  -198,     2,    55,  -198,  -198,    54,  -198,   248,
      69,   182,  -198,    24,  -198,  -198,   248,   -16,    -9,   464,
     464,   195,   248,   248,   248,   248,   248,   248,   248,   248,
     248,   248,   248,   248,   197,   197,    35,   126,   248,    64,
      60,   425,    85,    66,  -198,   248,    45,    92,    35,   146,
      70,    35,    11,    35,  -198,  -198,   136,   464,    35,   197,
      82,  -198,  -198,    91,   166,    97,   110,  -198,   464,   464,
     464,   464,   464,   464,   464,   464,   464,   464,   464,   464,
     -16,   -16,  -198,  -198,   213,    94,     6,   112,    15,   117,
    -198,   177,   445,   421,   227,  -198,   121,  -198,  -198,   114,
    -198,  -198,    35,  -198,  -198,  -198,   135,    35,  -198,  -198,
    -198,    35,   123,  -198,    35,     6,    35,   -66,    35,    19,
    -198,  -198,   325,   125,    35,   116,  -198,   131,  -198,  -198,
     127,    -2,  -198,  -198,    35,   205,  -198,   134,  -198,  -198,
    -198,    35,  -198,   248,   -34,  -198,    35,   140,  -198,  -198,
    -198,  -198,  -198,   141,    35,  -198,   221,  -198,  -198,  -198,
    -198,    35,  -198,    35,    -1,  -198,  -198,  -198
=======
#define YYPACT_NINF -158
static const yytype_int16 yypact[] =
{
     -86,  -158,   198,  -158,   -46,    -3,    26,  -158,  -158,    36,
      62,  -158,    13,    43,    26,    34,    51,    68,    62,  -158,
    -158,  -158,   250,  -158,  -158,  -158,    11,    53,  -158,  -158,
    -158,  -158,  -158,  -158,  -158,  -158,  -158,  -158,    21,  -158,
     137,  -158,  -158,    50,   -46,  -158,  -158,   134,   134,  -158,
    -158,    74,    74,    74,   286,  -158,  -158,   -14,  -158,    17,
      66,   -46,   130,    84,   150,   168,    81,    60,   134,    95,
     170,   -46,    83,   151,   130,    84,  -158,  -158,  -158,  -158,
    -158,    74,   104,   122,  -158,   137,  -158,  -158,   -49,   110,
     112,   114,    10,    41,   -22,   130,   130,   280,    74,    74,
      74,    74,    74,    74,    74,    74,    74,    74,    74,   134,
     134,   101,   186,   168,   103,   161,   113,    15,   168,    18,
       3,   101,  -158,   101,    68,   190,   130,   101,   134,   106,
    -158,  -158,  -158,  -158,  -158,  -158,   117,  -158,   119,  -158,
     130,   130,   130,   130,   130,   130,   130,   130,   130,   130,
     130,    41,    41,   116,  -158,  -158,    42,   121,   120,   125,
       6,   180,    54,   174,  -158,   132,  -158,  -158,   178,  -158,
    -158,   118,   101,  -158,   101,   276,   142,  -158,   101,   101,
     -46,   101,   -17,    68,   143,   197,   101,   228,   155,  -158,
    -158,   224,   149,     5,  -158,  -158,  -158,   101,   240,   166,
     101,  -158,  -158,  -158,   101,  -158,   163,  -158,  -158,  -158,
    -158,  -158,   169,   101,  -158,  -158,  -158,   101,  -158,    37,
    -158,  -158
>>>>>>> main
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
<<<<<<< HEAD
    -198,   194,    56,   -18,  -198,  -198,  -197,    -7,   130,  -198,
    -198,  -198,  -198,  -198,  -198,   -12,  -198,  -198,  -198,     8,
    -198,  -198,   151,   -75,  -198,  -198,  -198,    12,  -198,  -191,
     -58,   -70,     0,  -198,  -198,  -198,  -198,   -50,   155,    16,
      -4,  -198,  -198
=======
    -158,  -158,    80,   -21,  -158,  -158,  -158,   231,  -157,     0,
     217,  -158,  -158,  -158,  -158,  -158,  -158,  -158,    46,  -158,
      -2,  -156,   -62,   -40,    -1,   -13,  -158,  -158,  -158,  -158,
     187,   188,  -158,  -158
>>>>>>> main
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
<<<<<<< HEAD
#define YYTABLE_NINF -104
static const yytype_int16 yytable[] =
{
      63,    59,    82,    75,     1,     1,   114,    64,     1,    76,
      66,   114,   135,   214,   230,    88,    77,    88,   114,   114,
     231,   195,   115,    65,   114,    58,   144,   115,    60,    73,
      74,    11,    11,   215,   115,   115,   118,   136,    90,    91,
     115,    68,   119,   141,    99,   100,   101,   230,   164,    69,
      83,    70,   237,   231,    84,   174,   223,    -3,   162,   129,
     121,   184,    89,    97,    98,   146,   166,   167,    90,    78,
     177,   116,    79,   181,    83,   183,   128,    67,    84,    96,
     185,   131,   137,   132,   228,   247,   229,   229,   127,   121,
     182,    43,   145,    44,   196,   148,   149,   150,   151,   152,
     153,   154,   155,   156,   157,   158,   159,   140,    43,   114,
      44,   121,    45,    46,   175,   172,   169,   117,   121,   114,
     168,    88,   120,   123,   206,   115,   125,   126,   130,   208,
     160,   161,   163,   209,   133,   115,   212,   172,   213,    61,
     216,    44,    47,    45,    46,    43,   222,    44,   138,    45,
      46,    62,   165,   173,   178,   186,   232,   172,   179,   171,
      84,   187,   114,   235,   197,   188,   176,   172,   239,    49,
      50,   190,    43,    47,    44,    48,   242,    51,   115,    47,
      52,   193,    53,   245,   220,   246,    49,    50,    43,   191,
      44,   194,    45,    46,    51,   217,   198,    52,   199,    53,
     204,   205,   210,    43,   221,    44,   223,    45,    46,   207,
     226,   233,    72,   234,    81,   227,   236,    49,    50,    43,
     241,    44,    47,    49,    50,    51,   143,   240,    52,   202,
      53,    51,   238,    43,    52,    44,    53,    47,   134,    61,
     189,    44,   102,   103,   104,   105,   106,   107,   142,     0,
      49,    50,   244,     0,    43,   139,    44,     0,    51,     0,
       0,    52,     0,    53,     0,     0,    49,    50,   102,   103,
     104,   105,   106,   107,    51,     0,     0,    52,     0,    53,
       0,    49,    50,     0,     0,     0,     0,   192,     0,    51,
       0,     0,    52,   147,    53,     0,     0,    49,    50,     0,
     243,   203,     0,     0,     0,    51,     0,     0,    52,     0,
      53,    49,    50,     0,     0,     0,     0,    49,    50,    51,
       0,     0,    52,     0,    53,    51,     0,     0,    52,     0,
      53,     1,    49,    50,     0,     0,     0,     0,     2,     0,
      51,     0,     3,    52,     4,    53,     0,     5,     6,     0,
       0,     7,     0,     8,     9,     0,    10,     0,    11,     1,
      12,    13,    14,     0,    15,     0,     2,     0,     0,    16,
       3,     0,     4,     0,     0,     5,     6,     0,     0,     7,
       0,     8,     9,     0,    10,     0,    11,     0,    12,    13,
      14,     0,    15,     0,     0,     0,     0,    16,     0,     1,
       0,     0,     0,     0,     0,     0,     2,     0,     0,     0,
       3,   218,     4,   219,    18,     5,     6,     0,     0,     7,
       0,     8,     9,     0,    10,     0,    11,     1,    12,    13,
      14,     0,    15,     0,     2,     0,     0,    16,     3,     0,
       4,    17,    18,     5,     6,     0,  -103,     7,     0,     8,
       9,     0,    10,     0,    11,     0,    12,    13,    14,     0,
      15,     0,  -103,     0,     0,    16,   102,   103,   104,   105,
     106,   107,   102,   103,   104,   105,   106,   107,     0,     0,
       0,    80,    18,     0,     0,   108,     0,   109,   110,   111,
     112,   113,   102,   103,   104,   105,   106,   107,   102,   103,
     104,   105,   106,   107,     0,   170,     0,     0,     0,   201,
      18,   102,   103,   104,   105,   106,   107,   108,     0,   109,
     110,   111,   112,   113,     0,   200
=======
#define YYTABLE_NINF -1
static const yytype_uint8 yytable[] =
{
      36,    77,    69,    44,     1,    59,   109,    45,    46,    63,
      62,    58,   180,    67,   109,    73,   136,    75,    74,    64,
      36,   136,   110,    80,   163,   117,    43,    80,     6,    43,
     110,   109,    58,   132,    93,    94,   209,   210,    47,    13,
      44,    91,    60,    58,    45,    46,    14,   110,   136,    66,
     112,    95,    96,    97,   138,   120,    88,    70,    89,   166,
     136,   167,   209,   210,   197,   170,    80,   111,    61,   109,
     129,    13,    48,   156,    71,    47,    81,   119,   162,   165,
      44,   126,   198,    49,    50,   110,   137,   181,    65,    51,
      80,   161,    52,   207,    53,   208,   151,   152,   140,   141,
     142,   143,   144,   145,   146,   147,   148,   149,   150,    68,
     189,   164,   190,   159,   160,   171,   194,   195,   176,   196,
      49,    50,   168,   109,   202,   221,    51,   208,    44,    52,
     184,    53,    45,    46,   109,   211,    49,    50,   214,   110,
      44,   113,   215,    79,    45,    46,   109,   114,    49,    50,
     110,   218,    82,    83,    51,   220,   118,    52,   182,    53,
      49,    50,   110,    47,   123,   124,    51,     4,   158,    52,
      77,    53,   115,    36,   116,    47,   121,   122,    98,    99,
     100,   199,   101,   102,   125,   127,   133,   172,   134,    36,
     135,   153,   155,   157,   188,   132,   169,   128,     3,   173,
     174,   178,   183,   201,     4,   175,   179,   185,    49,    50,
     177,   187,     5,   186,    51,     6,     7,    52,     8,    53,
      49,    50,     9,   192,   200,    10,    51,    11,    12,    52,
       4,    53,    13,    14,   203,    15,   204,    16,     5,   206,
      17,     6,     7,    18,     8,    19,   212,   213,     9,    20,
     217,    10,   216,    11,    12,   191,     4,    78,    13,    14,
      90,    15,   219,    16,     5,     0,    17,     6,     7,    18,
       8,    19,   130,   131,     9,    20,     0,    10,     0,    11,
      12,     0,     4,     0,    13,    14,     0,    15,    21,    16,
       5,     0,    17,     6,     7,    18,     8,    19,     0,     0,
       9,    20,     0,    10,     0,    11,    12,     0,     0,     0,
      13,    14,   205,    15,    76,    16,     0,     0,    17,     0,
       0,    18,     0,    19,     0,     0,     0,    20,    98,    99,
     100,     0,   101,   102,    98,    99,   100,     0,   101,   102,
      76,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   103,     0,   104,   105,   106,   107,
     108,     0,     0,     0,     0,     0,    21,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   139
>>>>>>> main
};

static const yytype_int16 yycheck[] =
{
<<<<<<< HEAD
       7,     5,    20,    15,     6,     6,    27,     7,     6,    16,
       6,    27,    87,    79,   211,     6,    16,     6,    27,    27,
     211,     6,    43,     7,    27,     6,    96,    43,     6,    13,
      14,    33,    33,    99,    43,    43,    73,    87,    14,    15,
      43,    79,    79,    93,    51,    52,    53,   244,   118,     6,
      20,     6,    86,   244,    24,   125,    90,     0,   116,    80,
      67,   136,    53,    47,    48,    74,     6,     7,    14,     6,
     128,    79,     0,   131,    20,   133,    79,    73,    24,    73,
     138,    79,    89,    83,    86,    86,    88,    88,    72,    96,
      79,     6,    96,     8,    79,   102,   103,   104,   105,   106,
     107,   108,   109,   110,   111,   112,   113,    91,     6,    27,
       8,   118,    10,    11,   126,   122,   120,    34,   125,    27,
     120,     6,    21,    88,   182,    43,    73,    80,    79,   187,
     114,   115,     6,   191,    79,    43,   194,   144,   196,     6,
     198,     8,    40,    10,    11,     6,   204,     8,    79,    10,
      11,    18,    88,    87,     8,   139,   214,   164,    88,    74,
      24,    79,    27,   221,   168,    74,    74,   174,   226,    84,
      85,    74,     6,    40,     8,    73,   234,    92,    43,    40,
      95,    87,    97,   241,   202,   243,    84,    85,     6,    79,
       8,    79,    10,    11,    92,   199,    79,    95,    21,    97,
      79,    87,    79,     6,    79,     8,    90,    10,    11,    74,
      79,     6,    73,    79,    20,    88,   223,    84,    85,     6,
      79,     8,    40,    84,    85,    92,    96,    87,    95,   173,
      97,    92,   224,     6,    95,     8,    97,    40,    87,     6,
      74,     8,    47,    48,    49,    50,    51,    52,    93,    -1,
      84,    85,   240,    -1,     6,    73,     8,    -1,    92,    -1,
      -1,    95,    -1,    97,    -1,    -1,    84,    85,    47,    48,
      49,    50,    51,    52,    92,    -1,    -1,    95,    -1,    97,
      -1,    84,    85,    -1,    -1,    -1,    -1,    74,    -1,    92,
      -1,    -1,    95,    98,    97,    -1,    -1,    84,    85,    -1,
      79,    74,    -1,    -1,    -1,    92,    -1,    -1,    95,    -1,
      97,    84,    85,    -1,    -1,    -1,    -1,    84,    85,    92,
      -1,    -1,    95,    -1,    97,    92,    -1,    -1,    95,    -1,
      97,     6,    84,    85,    -1,    -1,    -1,    -1,    13,    -1,
      92,    -1,    17,    95,    19,    97,    -1,    22,    23,    -1,
      -1,    26,    -1,    28,    29,    -1,    31,    -1,    33,     6,
      35,    36,    37,    -1,    39,    -1,    13,    -1,    -1,    44,
      17,    -1,    19,    -1,    -1,    22,    23,    -1,    -1,    26,
      -1,    28,    29,    -1,    31,    -1,    33,    -1,    35,    36,
      37,    -1,    39,    -1,    -1,    -1,    -1,    44,    -1,     6,
      -1,    -1,    -1,    -1,    -1,    -1,    13,    -1,    -1,    -1,
      17,    86,    19,    88,    89,    22,    23,    -1,    -1,    26,
      -1,    28,    29,    -1,    31,    -1,    33,     6,    35,    36,
      37,    -1,    39,    -1,    13,    -1,    -1,    44,    17,    -1,
      19,    88,    89,    22,    23,    -1,    27,    26,    -1,    28,
      29,    -1,    31,    -1,    33,    -1,    35,    36,    37,    -1,
      39,    -1,    43,    -1,    -1,    44,    47,    48,    49,    50,
      51,    52,    47,    48,    49,    50,    51,    52,    -1,    -1,
      -1,    88,    89,    -1,    -1,    66,    -1,    68,    69,    70,
      71,    72,    47,    48,    49,    50,    51,    52,    47,    48,
      49,    50,    51,    52,    -1,    80,    -1,    -1,    -1,    88,
      89,    47,    48,    49,    50,    51,    52,    66,    -1,    68,
      69,    70,    71,    72,    -1,    80
=======
       2,    22,    15,     6,    90,     6,    28,    10,    11,    10,
      10,     6,     6,    14,    28,    17,     6,    18,    18,     6,
      22,     6,    44,     6,     6,    65,    75,     6,    17,    75,
      44,    28,     6,    82,    47,    48,   193,   193,    41,    34,
       6,    43,     6,     6,    10,    11,    35,    44,     6,     6,
      33,    51,    52,    53,    76,    68,     6,     6,     8,   121,
       6,   123,   219,   219,    81,   127,     6,    81,     6,    28,
      83,    34,    75,   113,     6,    41,    55,    17,   118,    76,
       6,    81,    99,    86,    87,    44,    76,    81,    75,    92,
       6,    76,    95,    88,    97,    90,   109,   110,    98,    99,
     100,   101,   102,   103,   104,   105,   106,   107,   108,    75,
     172,    93,   174,   115,   115,   128,   178,   179,    76,   181,
      86,    87,   124,    28,   186,    88,    92,    90,     6,    95,
      76,    97,    10,    11,    28,   197,    86,    87,   200,    44,
       6,    75,   204,    90,    10,    11,    28,    81,    86,    87,
      44,   213,    15,    16,    92,   217,    75,    95,   160,    97,
      86,    87,    44,    41,    81,    82,    92,     6,     7,    95,
     191,    97,    22,   175,     6,    41,    81,     7,    48,    49,
      50,   183,    52,    53,    33,    81,    76,    81,    76,   191,
      76,    90,     6,    90,    76,    82,     6,    75,     0,    82,
      81,    81,    22,     6,     6,    89,    81,    33,    86,    87,
      89,    33,    14,    81,    92,    17,    18,    95,    20,    97,
      86,    87,    24,    81,    81,    27,    92,    29,    30,    95,
       6,    97,    34,    35,     6,    37,    81,    39,    14,    90,
      42,    17,    18,    45,    20,    47,     6,    81,    24,    51,
      81,    27,    89,    29,    30,   175,     6,    26,    34,    35,
      43,    37,   216,    39,    14,    -1,    42,    17,    18,    45,
      20,    47,    85,    85,    24,    51,    -1,    27,    -1,    29,
      30,    -1,     6,    -1,    34,    35,    -1,    37,    90,    39,
      14,    -1,    42,    17,    18,    45,    20,    47,    -1,    -1,
      24,    51,    -1,    27,    -1,    29,    30,    -1,    -1,    -1,
      34,    35,    88,    37,    90,    39,    -1,    -1,    42,    -1,
      -1,    45,    -1,    47,    -1,    -1,    -1,    51,    48,    49,
      50,    -1,    52,    53,    48,    49,    50,    -1,    52,    53,
      90,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    68,    -1,    70,    71,    72,    73,
      74,    -1,    -1,    -1,    -1,    -1,    90,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    98
>>>>>>> main
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
<<<<<<< HEAD
       0,     6,    13,    17,    19,    22,    23,    26,    28,    29,
      31,    33,    35,    36,    37,    39,    44,    88,    89,   101,
     102,   103,   104,   105,   106,   109,   110,   111,   112,   113,
     114,   116,   120,   121,   125,   126,   128,   129,   132,   133,
     136,   141,   142,     6,     8,    10,    11,    40,    73,    84,
      85,    92,    95,    97,   107,   108,   139,   140,     6,   140,
       6,     6,    18,   107,   132,   139,     6,    73,    79,     6,
       6,   115,    73,   139,   139,   115,   107,   132,     6,     0,
      88,   101,   103,    20,    24,   122,   123,   124,     6,    53,
      14,    15,   134,   135,   137,   138,    73,   139,   139,   107,
     107,   107,    47,    48,    49,    50,    51,    52,    66,    68,
      69,    70,    71,    72,    27,    43,    79,    34,    73,    79,
      21,   107,   131,    88,   130,    73,    80,   139,    79,    80,
      79,    79,   132,    79,   122,   123,   137,   107,    79,    73,
     139,   137,   138,   108,   131,   140,    74,    98,   107,   107,
     107,   107,   107,   107,   107,   107,   107,   107,   107,   107,
     139,   139,   130,     6,   131,    88,     6,     7,   132,   140,
      80,    74,   107,    87,   131,   115,    74,   130,     8,    88,
     117,   130,    79,   130,   123,   130,   139,    79,    74,    74,
      74,    79,    74,    87,    79,     6,    79,   140,    79,    21,
      80,    88,   102,    74,    79,    87,   130,    74,   130,   130,
      79,   127,   130,   130,    79,    99,   130,   140,    86,    88,
     103,    79,   130,    90,   118,   119,    79,    88,    86,    88,
     106,   129,   130,     6,    79,   130,   107,    86,   119,   130,
      87,    79,   130,    79,   127,   130,   130,    86
=======
       0,    90,   101,     0,     6,    14,    17,    18,    20,    24,
      27,    29,    30,    34,    35,    37,    39,    42,    45,    47,
      51,    90,   102,   103,   104,   105,   106,   107,   108,   111,
     112,   113,   114,   116,   117,   119,   120,   121,   124,   126,
     129,   132,   133,    75,     6,    10,    11,    41,    75,    86,
      87,    92,    95,    97,   109,   110,   120,   125,     6,   124,
       6,     6,   109,   124,     6,    75,     6,   124,    75,   125,
       6,     6,   115,   120,   109,   124,    90,   103,   107,    90,
       6,    55,    15,    16,   127,   128,   130,   131,     6,     8,
     110,   120,   123,   125,   125,   109,   109,   109,    48,    49,
      50,    52,    53,    68,    70,    71,    72,    73,    74,    28,
      44,    81,    33,    75,    81,    22,     6,   123,    75,    17,
     125,    81,     7,    81,    82,    33,   109,    81,    75,   125,
     130,   131,    82,    76,    76,    76,     6,    76,    76,    98,
     109,   109,   109,   109,   109,   109,   109,   109,   109,   109,
     109,   125,   125,    90,   122,     6,   123,    90,     7,   120,
     124,    76,   123,     6,    93,    76,   122,   122,   120,     6,
     122,   125,    81,    82,    81,    89,    76,    89,    81,    81,
       6,    81,   120,    22,    76,    33,    81,    33,    76,   122,
     122,   102,    81,   118,   122,   122,   122,    81,    99,   120,
      81,     6,   122,     6,    81,    88,    90,    88,    90,   108,
     121,   122,     6,    81,   122,   122,    89,    81,   122,   118,
     122,    88
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
#line 41 "parser.y"
    { /* for empty put % empty */;}
    break;

  case 4:

/* Line 1455 of yacc.c  */
#line 43 "parser.y"
    {
                              printf("------------ PROGRAM ACCEPTED ------------\n");
                              YYACCEPT;
                        ;}
    break;

<<<<<<< HEAD
  case 29:

/* Line 1455 of yacc.c  */
#line 154 "parser.y"
    { ;}
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 155 "parser.y"
    { ;}
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 156 "parser.y"
    { ;}
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 157 "parser.y"
    { ;}
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 158 "parser.y"
    { ;}
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 160 "parser.y"
    { /*The rule for negation includes %prec UMINUS . The only operator in this rule is - , 
                                                      which has low precedence, but we want unary minus to have higher precedence than multiplication 
                                                      rather than lower. The %prec tells bison to use the precedence of UMINUS for this rule.*/
                                                ;}
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 164 "parser.y"
=======
  case 36:

/* Line 1455 of yacc.c  */
#line 166 "parser.y"
>>>>>>> main
    { ;}
    break;

  case 37:

/* Line 1455 of yacc.c  */
<<<<<<< HEAD
#line 165 "parser.y"
=======
#line 167 "parser.y"
>>>>>>> main
    { ;}
    break;

  case 38:

/* Line 1455 of yacc.c  */
<<<<<<< HEAD
#line 166 "parser.y"
=======
#line 168 "parser.y"
    { ;}
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 169 "parser.y"
    { ;}
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 170 "parser.y"
    { ;}
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 171 "parser.y"
    { /*The rule for negation includes %prec UMINUS . The only operator in this rule is - , 
                                                      which has low precedence, but we want unary minus to have higher precedence than multiplication 
                                                      rather than lower. The %prec tells bison to use the precedence of UMINUS for this rule.*/
                                                ;}
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 175 "parser.y"
    { ;}
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 176 "parser.y"
>>>>>>> main
    { ;}
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 177 "parser.y"
    { ;}
    break;

<<<<<<< HEAD
  case 48:

/* Line 1455 of yacc.c  */
#line 183 "parser.y"
=======
  case 51:

/* Line 1455 of yacc.c  */
#line 190 "parser.y"
    { ;}
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 194 "parser.y"
>>>>>>> main
    { ;}
    break;



/* Line 1455 of yacc.c  */
<<<<<<< HEAD
#line 1814 "parser.tab.c"
=======
#line 1766 "parser.tab.c"
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
#line 316 "parser.y"
=======
#line 294 "parser.y"
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
