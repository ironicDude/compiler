
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
#define YYFINAL  81
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   526

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  100
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  43
/* YYNRULES -- Number of rules.  */
#define YYNRULES  126
/* YYNRULES -- Number of states.  */
#define YYNSTATES  249

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
      41,    43,    45,    47,    49,    51,    53,    55,    59,    63,
      67,    71,    75,    79,    83,    86,    90,    93,    95,    97,
      99,   101,   103,   105,   108,   111,   114,   117,   120,   123,
     126,   129,   132,   137,   140,   145,   148,   151,   153,   157,
     162,   167,   170,   172,   177,   180,   183,   187,   191,   196,
     200,   204,   209,   213,   216,   218,   220,   222,   233,   234,
     237,   240,   243,   251,   259,   264,   265,   269,   272,   275,
     277,   279,   282,   285,   286,   289,   291,   293,   295,   298,
     303,   310,   314,   319,   326,   328,   332,   336,   340,   344,
     348,   352,   356,   360,   363,   365,   367,   372,   377,   382,
     389,   396,   405,   412,   420,   430,   435
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     101,     0,    -1,    -1,    88,    -1,   102,   101,    -1,   102,
     103,    -1,   103,    -1,   102,    88,    -1,   105,    -1,   104,
      -1,   106,    -1,   109,    -1,   110,    -1,   111,    -1,   112,
      -1,   113,    -1,   114,    -1,    17,    -1,    19,    -1,    28,
      -1,   129,    -1,   133,    -1,   125,    -1,   141,    -1,   142,
      -1,   116,    -1,   120,    -1,   132,    53,   107,    -1,   107,
      47,   107,    -1,   107,    48,   107,    -1,   107,    49,   107,
      -1,   107,    50,   107,    -1,   107,    51,   107,    -1,   107,
      52,   107,    -1,    95,   107,    -1,    97,   107,    98,    -1,
      92,   107,    -1,   108,    -1,     6,    -1,   140,    -1,     8,
      -1,    84,    -1,    85,    -1,    26,   132,    -1,    26,   107,
      -1,    26,    11,    -1,    26,    10,    -1,    26,    18,    -1,
      26,   139,    -1,    44,   132,    -1,    44,   107,    -1,    37,
     139,    -1,    37,   139,    80,     8,    -1,    22,   140,    -1,
      22,   140,    34,     6,    -1,    39,   115,    -1,    35,   115,
      -1,     6,    -1,     6,    80,   115,    -1,    89,     6,    79,
     117,    -1,    88,    87,   118,    86,    -1,   118,   119,    -1,
     119,    -1,    90,   107,    79,   130,    -1,   121,   123,    -1,
     121,   124,    -1,   121,   124,   123,    -1,   121,   124,   137,
      -1,   121,   124,   137,   123,    -1,    31,    79,   130,    -1,
      20,    79,   130,    -1,    20,   132,    79,   130,    -1,    24,
      79,   130,    -1,   124,   122,    -1,   122,    -1,   126,    -1,
     128,    -1,    23,     6,    73,   131,    74,    79,    88,    87,
     127,    86,    -1,    -1,   127,   106,    -1,   127,   129,    -1,
     127,    88,    -1,    23,     6,    79,    88,    87,   127,    86,
      -1,    33,     6,    73,   131,    74,    79,   130,    -1,    88,
      87,   102,    86,    -1,    -1,   131,   107,    80,    -1,   131,
     107,    -1,   107,    80,    -1,   107,    -1,     6,    -1,   132,
       6,    -1,   136,   134,    -1,    -1,   135,   137,    -1,   135,
      -1,   137,    -1,   138,    -1,   135,   138,    -1,    13,   139,
      79,   130,    -1,    13,    73,   139,    74,    79,   130,    -1,
      14,    79,   130,    -1,    15,   139,    79,   130,    -1,    15,
      73,   139,    74,    79,   130,    -1,   107,    -1,   107,    70,
     107,    -1,   107,    69,   107,    -1,   107,    72,   107,    -1,
     107,    71,   107,    -1,   107,    66,   107,    -1,   107,    68,
     107,    -1,   139,    27,   139,    -1,   139,    43,   139,    -1,
      40,   139,    -1,    11,    -1,    10,    -1,     6,    73,   131,
      74,    -1,     6,    73,   108,    74,    -1,     6,    73,   140,
      74,    -1,    29,     6,    21,   140,    79,   130,    -1,    29,
       6,    21,     7,    79,   130,    -1,    29,    73,   131,    74,
      21,   140,    79,   130,    -1,    29,     6,    21,   132,    79,
     130,    -1,    29,     6,    21,   132,   140,    79,   130,    -1,
      29,     6,    21,   132,   140,    99,     6,    79,   130,    -1,
      36,   139,    79,   130,    -1,    36,    73,   139,    74,    79,
     130,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    41,    41,    42,    43,   120,   121,   122,   125,   126,
     129,   130,   131,   132,   133,   134,   135,   136,   137,   138,
     141,   142,   143,   144,   145,   146,   147,   150,   153,   154,
     155,   156,   157,   158,   159,   163,   164,   165,   166,   167,
     168,   171,   172,   176,   177,   178,   179,   180,   181,   184,
     185,   188,   189,   191,   192,   195,   197,   200,   201,   204,
     206,   208,   209,   211,   213,   214,   215,   216,   217,   220,
     221,   222,   224,   226,   227,   230,   231,   234,   237,   238,
     239,   240,   243,   246,   249,   251,   252,   253,   254,   255,
     258,   259,   262,   265,   266,   267,   268,   271,   272,   275,
     276,   279,   282,   283,   286,   287,   288,   289,   290,   291,
     292,   293,   294,   295,   296,   297,   300,   301,   302,   305,
     306,   307,   308,   309,   310,   313,   314
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "WHITESPACE", "LETTER", "ALPHANUM",
  "IDENTIFIER", "LIST", "LITERALSTRING", "LITERALCHAR", "KEYWORD_FALSE",
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
     104,   104,   104,   104,   104,   104,   104,   104,   104,   104,
     105,   105,   105,   105,   105,   105,   105,   106,   107,   107,
     107,   107,   107,   107,   107,   107,   107,   107,   107,   107,
     107,   108,   108,   109,   109,   109,   109,   109,   109,   110,
     110,   111,   111,   112,   112,   113,   114,   115,   115,   116,
     117,   118,   118,   119,   120,   120,   120,   120,   120,   121,
     122,   122,   123,   124,   124,   125,   125,   126,   127,   127,
     127,   127,   128,   129,   130,   131,   131,   131,   131,   131,
     132,   132,   133,   134,   134,   134,   134,   135,   135,   136,
     136,   137,   138,   138,   139,   139,   139,   139,   139,   139,
     139,   139,   139,   139,   139,   139,   140,   140,   140,   141,
     141,   141,   141,   141,   141,   142,   142
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     1,     2,     2,     1,     2,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     3,     3,     3,
       3,     3,     3,     3,     2,     3,     2,     1,     1,     1,
       1,     1,     1,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     4,     2,     4,     2,     2,     1,     3,     4,
       4,     2,     1,     4,     2,     2,     3,     3,     4,     3,
       3,     4,     3,     2,     1,     1,     1,    10,     0,     2,
       2,     2,     7,     7,     4,     0,     3,     2,     2,     1,
       1,     2,     2,     0,     2,     1,     1,     1,     2,     4,
       6,     3,     4,     6,     1,     3,     3,     3,     3,     3,
       3,     3,     3,     2,     1,     1,     4,     4,     4,     6,
       6,     8,     6,     7,     9,     4,     6
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       2,    90,     0,    17,    18,     0,     0,     0,    19,     0,
       0,     0,     0,     0,     0,     0,     0,     3,     0,     0,
       2,     6,     9,     8,    10,    11,    12,    13,    14,    15,
      16,    25,    26,     0,    22,    75,    76,    20,     0,    21,
      93,    23,    24,    38,    40,   115,   114,     0,     0,    41,
      42,     0,     0,     0,   104,    37,     0,    39,     0,    53,
       0,    38,    46,    45,    47,    44,    43,    48,     0,    85,
       0,     0,    57,    56,     0,     0,    51,    55,    50,    49,
       0,     1,     7,     4,     5,     0,     0,    74,    64,    65,
      91,     0,     0,     0,    92,    95,    96,    97,    85,   113,
       0,    36,    34,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      85,     0,     0,    89,     0,     0,    69,    85,     0,     0,
       0,     0,     0,     0,     0,     0,    73,    66,    67,    27,
       0,     0,     0,    94,    98,    37,     0,    39,     0,    35,
      28,    29,    30,    31,    32,    33,   109,   110,   106,   105,
     108,   107,   111,   112,    99,    54,     0,     0,    90,     0,
       0,     0,    88,     0,    87,     0,     0,    58,     0,   125,
      52,     0,    59,    70,     0,    72,    68,   101,     0,     0,
     117,   116,   118,     0,     0,    78,     0,    91,     0,     0,
       0,     0,    86,     0,     0,     0,     0,    71,     0,   102,
     100,     0,     0,   120,   122,     0,     0,   119,     0,    84,
       7,     5,     0,   126,     0,     0,    62,     0,     0,    82,
      81,    79,    80,   123,     0,     0,    83,     0,    60,    61,
     103,    78,     0,   121,     0,     0,   124,    63,    77
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    19,    20,    21,    22,    23,    24,    54,    55,    25,
      26,    27,    28,    29,    30,    73,    31,   182,   225,   226,
      32,    33,    87,    88,    89,    34,    35,   212,    36,    37,
     126,   124,    38,    39,    94,    95,    40,    96,    97,    56,
      57,    41,    42
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -198
static const yytype_int16 yypact[] =
{
     343,  -198,   104,  -198,  -198,    18,    34,   144,  -198,     6,
     -51,    48,    51,   118,   184,    51,   225,  -198,    69,    52,
     383,  -198,  -198,  -198,  -198,  -198,  -198,  -198,  -198,  -198,
    -198,  -198,  -198,    23,  -198,  -198,  -198,  -198,     8,  -198,
     131,  -198,  -198,    20,  -198,  -198,  -198,   184,   184,  -198,
    -198,   234,   234,   234,   454,  -198,    -9,  -198,    20,    61,
     -53,    20,    12,    24,  -198,   426,   105,    26,   109,   234,
      54,    64,    60,  -198,   184,    -5,    -8,  -198,   415,   105,
      70,  -198,   151,  -198,  -198,     1,    77,  -198,  -198,     7,
    -198,   234,    82,   164,  -198,   131,  -198,  -198,   234,    26,
      15,   415,   415,   409,   234,   234,   234,   234,   234,   234,
     234,   234,   234,   234,   234,   234,   184,   184,    54,   157,
     234,    76,   141,   171,   170,    80,  -198,   234,    51,    22,
      54,   160,    83,    54,     2,    54,  -198,  -198,   155,   415,
      54,   184,    -2,  -198,  -198,   107,   199,   112,   108,  -198,
     415,   415,   415,   415,   415,   415,   415,   415,   415,   415,
     415,   415,    26,    26,  -198,  -198,   203,    96,    20,   114,
       4,   119,  -198,   179,   432,   411,   219,  -198,   127,  -198,
    -198,   121,  -198,  -198,    54,  -198,  -198,  -198,    49,    54,
    -198,  -198,  -198,    54,   133,  -198,    54,    20,    54,   -63,
      54,    18,  -198,   315,   135,    54,   126,  -198,   147,  -198,
    -198,   142,    -1,  -198,  -198,    54,   226,  -198,   156,  -198,
    -198,  -198,    54,  -198,   234,    35,  -198,    54,   158,  -198,
    -198,  -198,  -198,  -198,   159,    54,  -198,   438,  -198,  -198,
    -198,  -198,    54,  -198,    54,     0,  -198,  -198,  -198
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -198,   214,    68,   -18,  -198,  -198,  -197,    -7,   148,  -198,
    -198,  -198,  -198,  -198,  -198,   -12,  -198,  -198,  -198,    25,
    -198,  -198,   163,   -78,  -198,  -198,  -198,    17,  -198,  -195,
     -62,   -61,    -3,  -198,  -198,  -198,  -198,    46,   152,    16,
      -4,  -198,  -198
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -116
static const yytype_int16 yytable[] =
{
      65,    59,    84,    77,    66,     1,     1,     1,    90,    78,
     197,   137,    68,    79,    90,   231,   215,   232,   116,   116,
     120,    92,   116,    67,    58,   116,   121,    85,    70,    75,
      76,    86,    11,    11,   117,   117,   216,   146,   117,  -115,
      60,   117,   116,    85,   101,   102,   103,    86,   231,   116,
     232,  -114,    81,   116,    71,  -115,   164,    72,   117,   166,
     186,    91,   123,    99,   100,   117,   176,  -114,   179,   117,
     118,   183,   131,   185,   130,    80,   116,   189,   187,    69,
     133,   184,   134,   198,   139,   229,   248,   230,   230,   148,
     129,   123,   117,    98,   147,   119,   178,   150,   151,   152,
     153,   154,   155,   156,   157,   158,   159,   160,   161,   142,
      43,    90,    44,   123,    45,    46,   177,   174,   171,   170,
     123,   238,   207,   208,    43,   224,    44,   209,    45,    46,
     122,   210,   162,   163,   213,   138,   214,   127,   217,   174,
     128,   143,   125,   223,    47,    92,    93,   168,   169,   132,
      61,    -3,    44,   233,    62,    63,   135,   188,    47,   174,
     236,   140,    64,   165,   167,   240,   199,   175,   180,   174,
      43,   181,    44,   243,    45,    46,    43,    48,    44,    86,
     246,   190,   247,   195,    47,   221,   192,   193,    49,    50,
      43,    74,    44,   196,    45,    46,    51,   218,   200,    52,
     201,    53,    49,    50,    47,    43,   205,    44,   206,    43,
      51,    44,   211,    52,   222,    53,   224,   237,   104,   105,
     106,   107,   108,   109,    47,    43,   227,    44,    49,    50,
     228,    61,   234,    44,    83,   235,    51,   141,   242,    52,
      43,    53,    44,   203,   173,   241,   145,   144,    49,    50,
     239,   172,   136,     0,    49,    50,    51,     0,   245,    52,
       0,    53,    51,     0,     0,    52,     0,    53,    49,    50,
       0,     0,     0,   191,     0,     0,    51,   194,     0,    52,
       0,    53,     0,    49,    50,     0,     0,    49,    50,     0,
       0,    51,     0,   204,    52,    51,    53,     0,    52,     0,
      53,     0,     0,    49,    50,     0,     0,     0,     0,    49,
      50,    51,     0,     0,    52,     0,    53,    51,    49,    50,
      52,     1,    53,     0,     0,     0,    51,     0,     2,    52,
       0,    53,     3,     0,     4,     0,     0,     5,     6,     0,
       0,     7,     0,     8,     9,     0,    10,     0,    11,     1,
      12,    13,    14,     0,    15,     0,     2,     0,     0,    16,
       3,     0,     4,     0,     0,     5,     6,     0,     0,     7,
       0,     8,     9,     0,    10,     0,    11,     0,    12,    13,
      14,     0,    15,     0,     0,     0,     0,    16,     0,     1,
       0,     0,     0,     0,     0,     0,     2,     0,     0,     0,
       3,   219,     4,   220,    18,     5,     6,     0,     0,     7,
       0,     8,     9,     0,    10,     0,    11,     1,    12,    13,
      14,     0,    15,     0,     2,     0,     0,    16,     3,     0,
       4,    17,    18,     5,     6,     0,     0,     7,     0,     8,
       9,     0,    10,     0,    11,     0,    12,    13,    14,     0,
      15,     0,     0,  -104,     0,    16,   104,   105,   106,   107,
     108,   109,   104,   105,   106,   107,   108,   109,     0,  -104,
       0,    82,    18,   104,   105,   106,   107,   108,   109,   104,
     105,   106,   107,   108,   109,   104,   105,   106,   107,   108,
     109,     0,   110,     0,   111,   112,   113,   114,   115,     0,
      18,   104,   105,   106,   107,   108,   109,   149,     0,     0,
       0,     0,   202,     0,     0,     0,     0,   244,     0,     0,
     110,     0,   111,   112,   113,   114,   115
};

static const yytype_int16 yycheck[] =
{
       7,     5,    20,    15,     7,     6,     6,     6,     6,    16,
       6,    89,     6,    16,     6,   212,    79,   212,    27,    27,
      73,    14,    27,     7,     6,    27,    79,    20,    79,    13,
      14,    24,    33,    33,    43,    43,    99,    98,    43,    27,
       6,    43,    27,    20,    51,    52,    53,    24,   245,    27,
     245,    27,     0,    27,     6,    43,   118,     6,    43,   120,
     138,    53,    69,    47,    48,    43,   127,    43,   130,    43,
      79,   133,    80,   135,    79,     6,    27,    79,   140,    73,
      79,    79,    85,    79,    91,    86,    86,    88,    88,    74,
      74,    98,    43,    73,    98,    34,    74,   104,   105,   106,
     107,   108,   109,   110,   111,   112,   113,   114,   115,    93,
       6,     6,     8,   120,    10,    11,   128,   124,   122,   122,
     127,    86,   184,    74,     6,    90,     8,   189,    10,    11,
      21,   193,   116,   117,   196,    89,   198,    73,   200,   146,
      80,    95,    88,   205,    40,    14,    15,     6,     7,    79,
       6,     0,     8,   215,    10,    11,    79,   141,    40,   166,
     222,    79,    18,     6,    88,   227,   170,    87,     8,   176,
       6,    88,     8,   235,    10,    11,     6,    73,     8,    24,
     242,    74,   244,    87,    40,   203,    74,    79,    84,    85,
       6,    73,     8,    79,    10,    11,    92,   201,    79,    95,
      21,    97,    84,    85,    40,     6,    79,     8,    87,     6,
      92,     8,    79,    95,    79,    97,    90,   224,    47,    48,
      49,    50,    51,    52,    40,     6,    79,     8,    84,    85,
      88,     6,     6,     8,    20,    79,    92,    73,    79,    95,
       6,    97,     8,   175,    74,    87,    98,    95,    84,    85,
     225,    80,    89,    -1,    84,    85,    92,    -1,   241,    95,
      -1,    97,    92,    -1,    -1,    95,    -1,    97,    84,    85,
      -1,    -1,    -1,    74,    -1,    -1,    92,    74,    -1,    95,
      -1,    97,    -1,    84,    85,    -1,    -1,    84,    85,    -1,
      -1,    92,    -1,    74,    95,    92,    97,    -1,    95,    -1,
      97,    -1,    -1,    84,    85,    -1,    -1,    -1,    -1,    84,
      85,    92,    -1,    -1,    95,    -1,    97,    92,    84,    85,
      95,     6,    97,    -1,    -1,    -1,    92,    -1,    13,    95,
      -1,    97,    17,    -1,    19,    -1,    -1,    22,    23,    -1,
      -1,    26,    -1,    28,    29,    -1,    31,    -1,    33,     6,
      35,    36,    37,    -1,    39,    -1,    13,    -1,    -1,    44,
      17,    -1,    19,    -1,    -1,    22,    23,    -1,    -1,    26,
      -1,    28,    29,    -1,    31,    -1,    33,    -1,    35,    36,
      37,    -1,    39,    -1,    -1,    -1,    -1,    44,    -1,     6,
      -1,    -1,    -1,    -1,    -1,    -1,    13,    -1,    -1,    -1,
      17,    86,    19,    88,    89,    22,    23,    -1,    -1,    26,
      -1,    28,    29,    -1,    31,    -1,    33,     6,    35,    36,
      37,    -1,    39,    -1,    13,    -1,    -1,    44,    17,    -1,
      19,    88,    89,    22,    23,    -1,    -1,    26,    -1,    28,
      29,    -1,    31,    -1,    33,    -1,    35,    36,    37,    -1,
      39,    -1,    -1,    27,    -1,    44,    47,    48,    49,    50,
      51,    52,    47,    48,    49,    50,    51,    52,    -1,    43,
      -1,    88,    89,    47,    48,    49,    50,    51,    52,    47,
      48,    49,    50,    51,    52,    47,    48,    49,    50,    51,
      52,    -1,    66,    -1,    68,    69,    70,    71,    72,    -1,
      89,    47,    48,    49,    50,    51,    52,    98,    -1,    -1,
      -1,    -1,    80,    -1,    -1,    -1,    -1,    79,    -1,    -1,
      66,    -1,    68,    69,    70,    71,    72
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     6,    13,    17,    19,    22,    23,    26,    28,    29,
      31,    33,    35,    36,    37,    39,    44,    88,    89,   101,
     102,   103,   104,   105,   106,   109,   110,   111,   112,   113,
     114,   116,   120,   121,   125,   126,   128,   129,   132,   133,
     136,   141,   142,     6,     8,    10,    11,    40,    73,    84,
      85,    92,    95,    97,   107,   108,   139,   140,     6,   140,
       6,     6,    10,    11,    18,   107,   132,   139,     6,    73,
      79,     6,     6,   115,    73,   139,   139,   115,   107,   132,
       6,     0,    88,   101,   103,    20,    24,   122,   123,   124,
       6,    53,    14,    15,   134,   135,   137,   138,    73,   139,
     139,   107,   107,   107,    47,    48,    49,    50,    51,    52,
      66,    68,    69,    70,    71,    72,    27,    43,    79,    34,
      73,    79,    21,   107,   131,    88,   130,    73,    80,   139,
      79,    80,    79,    79,   132,    79,   122,   123,   137,   107,
      79,    73,   139,   137,   138,   108,   131,   140,    74,    98,
     107,   107,   107,   107,   107,   107,   107,   107,   107,   107,
     107,   107,   139,   139,   130,     6,   131,    88,     6,     7,
     132,   140,    80,    74,   107,    87,   131,   115,    74,   130,
       8,    88,   117,   130,    79,   130,   123,   130,   139,    79,
      74,    74,    74,    79,    74,    87,    79,     6,    79,   140,
      79,    21,    80,   102,    74,    79,    87,   130,    74,   130,
     130,    79,   127,   130,   130,    79,    99,   130,   140,    86,
      88,   103,    79,   130,    90,   118,   119,    79,    88,    86,
      88,   106,   129,   130,     6,    79,   130,   107,    86,   119,
     130,    87,    79,   130,    79,   127,   130,   130,    86
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

  case 28:

/* Line 1455 of yacc.c  */
#line 153 "parser.y"
    { ;}
    break;

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

  case 34:

/* Line 1455 of yacc.c  */
#line 159 "parser.y"
    { /*The rule for negation includes %prec UMINUS . The only operator in this rule is - , 
                                                      which has low precedence, but we want unary minus to have higher precedence than multiplication 
                                                      rather than lower. The %prec tells bison to use the precedence of UMINUS for this rule.*/
                                                ;}
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 163 "parser.y"
    { ;}
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 164 "parser.y"
    { ;}
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 165 "parser.y"
    { ;}
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 176 "parser.y"
    { ;}
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 184 "parser.y"
    { ;}
    break;



/* Line 1455 of yacc.c  */
#line 1815 "parser.tab.c"
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
#line 317 "parser.y"


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
