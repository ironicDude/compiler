/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2013 Free Software Foundation, Inc.

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
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */

#line 67 "parser.cpp" /* yacc.c:339  */

# ifndef YY_NULL
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULL nullptr
#  else
#   define YY_NULL 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 1
#endif

/* In a future release of Bison, this section will be replaced
   by #include "parser.hpp".  */
#ifndef YY_YY_PARSER_HPP_INCLUDED
# define YY_YY_PARSER_HPP_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif
/* "%code requires" blocks.  */
#line 1 "parser.y" /* yacc.c:355  */

      #include "python_ast_node.hpp"
      #include <iostream>
      #include <string>

#line 103 "parser.cpp" /* yacc.c:355  */

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
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
<<<<<<< HEAD
    TUPLE = 346,
    UMINUS = 347
=======
    UMINUS = 346
>>>>>>> main
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE YYSTYPE;
union YYSTYPE
{
#line 6 "parser.y" /* yacc.c:355  */

	AstNode* astNode;

<<<<<<< HEAD
#line 212 "parser.cpp" /* yacc.c:355  */
=======
#line 211 "parser.cpp" /* yacc.c:355  */
>>>>>>> main
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_PARSER_HPP_INCLUDED  */

/* Copy the second part of user declarations.  */
#line 9 "parser.y" /* yacc.c:358  */
<<<<<<< HEAD
    
extern int yylex();
=======

      extern int yylex();
>>>>>>> main
      extern int yyparse();
      extern FILE *yyin;
      void yyerror(const char *);
      AstNode* root = NULL;
      int n_nodes = 0;

<<<<<<< HEAD
#line 235 "parser.cpp" /* yacc.c:358  */
=======
#line 234 "parser.cpp" /* yacc.c:358  */
>>>>>>> main

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
#else
typedef signed char yytype_int8;
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
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef __attribute__
/* This feature is available in gcc versions 2.5 and later.  */
# if (! defined __GNUC__ || __GNUC__ < 2 \
      || (__GNUC__ == 2 && __GNUC_MINOR__ < 5))
#  define __attribute__(Spec) /* empty */
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
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
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
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
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
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

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
<<<<<<< HEAD
#define YYLAST   799

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  99
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  49
/* YYNRULES -- Number of rules.  */
#define YYNRULES  156
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  303
=======
<<<<<<< HEAD
#define YYLAST   655
=======
#define YYLAST   606
>>>>>>> 411c3a392c0af2805a01b80f4949ee4b768aa411

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  100
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  49
/* YYNRULES -- Number of rules.  */
<<<<<<< HEAD
#define YYNRULES  153
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  297
=======
#define YYNRULES  143
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  276
>>>>>>> 411c3a392c0af2805a01b80f4949ee4b768aa411
>>>>>>> main

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
<<<<<<< HEAD
#define YYMAXUTOK   347
=======
#define YYMAXUTOK   346
>>>>>>> main

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
<<<<<<< HEAD
       2,     2,    94,    92,     2,    93,    98,    95,     2,     2,
=======
      97,    98,    93,    91,     2,    92,    99,    94,     2,     2,
>>>>>>> main
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
<<<<<<< HEAD
       2,     2,     2,     2,    96,     2,     2,     2,     2,     2,
=======
       2,     2,     2,     2,    95,     2,     2,     2,     2,     2,
>>>>>>> main
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
<<<<<<< HEAD
      85,    86,    87,    88,    89,    90,    91,    97
=======
      85,    86,    87,    88,    89,    90,    96
>>>>>>> main
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
<<<<<<< HEAD
       0,    51,    51,    52,    53,    59,    60,    61,    64,    65,
      66,    67,    68,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    87,    88,    89,
      90,    91,    92,    93,    96,    97,   100,   101,   102,   103,
     104,   107,   108,   109,   110,   111,   112,   113,   114,   115,
     116,   119,   120,   121,   122,   123,   124,   125,   129,   130,
     131,   132,   133,   134,   135,   136,   137,   138,   139,   142,
     143,   146,   147,   150,   151,   154,   157,   158,   161,   162,
     165,   168,   171,   172,   175,   178,   181,   182,   185,   188,
     189,   190,   191,   192,   195,   198,   199,   200,   203,   206,
     207,   210,   213,   214,   217,   218,   221,   223,   225,   226,
     227,   228,   231,   233,   234,   235,   236,   239,   242,   245,
     246,   247,   248,   249,   252,   253,   256,   257,   258,   259,
     260,   261,   262,   263,   264,   265,   266,   269,   272,   273,
     274,   275,   278,   279,   282,   283,   286,   289,   290,   293,
     294,   295,   296,   297,   298,   301,   302
=======
<<<<<<< HEAD
       0,    52,    52,    53,    54,    64,    65,    66,    69,    70,
      71,    72,    73,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,    89,    92,    93,    94,
      95,    96,    97,    98,   101,   102,   105,   106,   107,   108,
     109,   112,   121,   122,   123,   124,   125,   126,   127,   131,
     132,   133,   134,   135,   136,   137,   138,   141,   142,   145,
     146,   149,   150,   153,   156,   157,   160,   161,   164,   167,
     170,   171,   174,   177,   180,   181,   184,   187,   188,   189,
     190,   191,   194,   197,   198,   201,   204,   205,   208,   211,
     212,   215,   216,   219,   222,   224,   225,   226,   227,   230,
     233,   234,   235,   236,   239,   251,   255,   256,   257,   258,
     259,   262,   263,   264,   267,   268,   269,   270,   271,   272,
     273,   274,   275,   276,   277,   278,   281,   284,   285,   286,
     287,   290,   291,   294,   295,   298,   301,   302,   305,   306,
     307,   308,   309,   310,   313,   314
=======
       0,    52,    52,    57,    58,    67,    68,    69,    72,    73,
      74,    75,    76,    79,    80,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    90,    91,    92,    95,    96,    97,
      98,    99,   100,   101,   104,   105,   108,   109,   110,   111,
     112,   115,   124,   125,   126,   127,   128,   129,   130,   134,
     135,   136,   137,   138,   139,   140,   141,   144,   145,   148,
     149,   152,   153,   156,   159,   160,   163,   164,   167,   170,
     173,   174,   177,   180,   183,   184,   187,   190,   191,   192,
     193,   194,   197,   200,   201,   204,   207,   208,   211,   214,
     215,   218,   219,   222,   225,   227,   228,   229,   230,   233,
     236,   244,   247,   256,   262,   267,   268,   269,   270,   273,
     279,   280,   283,   284,   285,   286,   287,   288,   289,   290,
     291,   292,   293,   294,   297,   300,   301,   302,   303,   306,
     307,   310,   311,   314,   317,   318,   321,   322,   323,   324,
     325,   326,   329,   330
>>>>>>> 411c3a392c0af2805a01b80f4949ee4b768aa411
>>>>>>> main
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 1
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
<<<<<<< HEAD
  "KEYWORD_MATCH", "KEYWORD_CASE", "TUPLE", "'+'", "'-'", "'*'", "'/'",
  "'|'", "UMINUS", "'.'", "$accept", "prog", "statements", "statement",
  "simple_statement", "compound_statement", "import_statments",
  "import_statment", "assignment", "expression", "number", "del_statment",
  "return_statement", "yield_statement", "assert_statement",
  "raise_statement", "global_statement", "nonlocal_statement",
  "global_nonlocal_targets", "match_statement", "match_block", "cases",
  "case", "try_statement", "try", "except", "finally", "except_statements",
  "with_statment", "with_stmt", "class", "class_with_inheritance",
  "class_block", "class_body", "class_without_inheritance",
  "function_call", "function", "block", "args", "member_expression",
  "logical_expression", "conditional_statement", "elif_else", "elif_stmts",
  "if_statement", "else_statement", "elif_statement", "for_statement",
  "while_statement", YY_NULL
=======
  "KEYWORD_MATCH", "KEYWORD_CASE", "'+'", "'-'", "'*'", "'/'", "'|'",
  "UMINUS", "'('", "')'", "'.'", "$accept", "prog", "statements",
  "statement", "simple_statement", "compound_statement",
  "import_statments", "import_statment", "assignment", "expression",
  "number", "del_statment", "return_statement", "yield_statement",
  "assert_statement", "raise_statement", "global_statement",
  "nonlocal_statement", "global_nonlocal_targets", "match_statement",
  "match_block", "cases", "case", "try_statement", "try", "except",
  "finally", "except_statements", "with_statment", "with_stmt", "class",
  "class_with_inheritance", "class_block", "class_body",
  "class_without_inheritance", "function_call", "function", "block",
  "args", "member_expression", "logical_expression",
  "conditional_statement", "elif_else", "elif_stmts", "if_statement",
  "else_statement", "elif_statement", "for_statement", "while_statement", YY_NULL
>>>>>>> main
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
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
<<<<<<< HEAD
     345,   346,    43,    45,    42,    47,   124,   347,    46
};
# endif

#define YYPACT_NINF -101

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-101)))

#define YYTABLE_NINF -127
=======
     345,    43,    45,    42,    47,   124,   346,    40,    41,    46
};
# endif

<<<<<<< HEAD
#define YYPACT_NINF -248

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-248)))

#define YYTABLE_NINF -123
=======
#define YYPACT_NINF -87

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-87)))

#define YYTABLE_NINF -113
>>>>>>> 411c3a392c0af2805a01b80f4949ee4b768aa411
>>>>>>> main

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
<<<<<<< HEAD
     -72,  -101,   538,  -101,   -56,   103,    23,  -101,  -101,    45,
      79,   240,  -101,     7,    12,   102,    23,   106,   269,   240,
     109,   106,    45,   427,  -101,  -101,  -101,   110,   640,  -101,
    -101,  -101,    13,    32,  -101,  -101,  -101,  -101,  -101,  -101,
    -101,  -101,  -101,  -101,    46,  -101,  -101,  -101,  -101,  -101,
    -101,   473,  -101,    11,  -101,  -101,   475,  -101,  -101,  -101,
    -101,  -101,   240,   427,   240,  -101,  -101,  -101,   427,   725,
    -101,  -101,   113,    -8,  -101,    31,   -56,    86,   -32,   427,
     717,    14,   115,   427,    50,    64,    53,    58,  -101,   240,
       6,    -5,   135,  -101,   -16,   118,   250,    68,  -101,  -101,
    -101,  -101,     8,    73,  -101,  -101,   186,  -101,   427,   427,
     427,   427,   427,   427,   427,   427,   427,   427,    75,   286,
    -101,    11,  -101,  -101,    82,   116,    85,    87,   331,    14,
     250,   682,     3,   250,   427,   427,   427,   427,   427,   427,
     427,   427,   427,   427,   427,   427,   427,   240,   240,    50,
     156,   165,   427,    84,   143,    89,   356,    88,  -101,   427,
      19,   106,    16,    50,   166,  -101,    50,    45,   171,    94,
      50,     2,    50,  -101,  -101,   164,   250,   250,   250,   250,
     250,   250,   250,   250,   250,   250,    50,   240,    10,  -101,
    -101,  -101,  -101,  -101,  -101,  -101,   131,  -101,   119,   250,
     250,   250,   250,   250,   250,   250,   250,   250,   250,   250,
     250,   250,    14,    14,  -101,  -101,  -101,   379,   117,  -101,
     121,   122,     9,   168,   675,   393,   172,  -101,  -101,   127,
    -101,  -101,  -101,   176,  -101,   123,  -101,  -101,   206,    50,
    -101,  -101,  -101,    18,    50,  -101,    50,   134,  -101,    50,
      50,   -56,    50,   -57,    45,   573,   136,   210,    50,   212,
     130,   140,  -101,   142,  -101,  -101,    84,    -2,  -101,  -101,
    -101,    50,   219,   146,  -101,    50,  -101,  -101,  -101,   427,
     -10,  -101,    50,    50,  -101,  -101,  -101,  -101,  -101,  -101,
     149,    50,  -101,   259,  -101,  -101,  -101,  -101,    50,  -101,
      50,  -101,  -101
=======
<<<<<<< HEAD
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
=======
     -45,   -87,   373,   -87,   -26,    84,    76,   -87,   -87,    78,
     100,   212,   -87,     5,    56,   140,    76,   141,   164,   212,
     143,   141,    78,   283,   -87,   -87,   -87,   145,   475,   -87,
     -87,   -87,    10,    64,   -87,   -87,   -87,   -87,   -87,   -87,
     -87,   -87,   -87,   -87,   106,   -87,   -87,   -87,   -87,   -87,
     -87,    28,   -87,    49,   -87,   -87,   283,   -87,   -87,   -87,
     -87,   -87,   212,   212,   -87,   -87,   283,   283,   283,   532,
     -87,   -87,   147,    -7,   -87,    22,   -26,   119,   -37,   523,
       7,   134,   283,    72,    87,    23,    81,   -87,   212,     8,
     -12,   158,   -87,   -15,   133,   426,    86,   -87,   -87,   -87,
     -87,     0,    92,   -87,   -87,   117,   -26,   283,   -87,    96,
     187,   -87,    49,   -87,   -87,   265,   102,     1,     7,    -5,
     426,   426,   138,   283,   283,   283,   283,   283,   283,   283,
     283,   283,   283,   283,   283,   212,   212,    72,   174,   178,
     283,    97,   105,   236,   113,   -87,   283,    18,   141,    25,
      72,   196,   -87,    72,    78,   201,   121,    72,    24,    72,
     -87,   -87,   186,   426,    72,   212,    19,   -87,   -87,   -87,
     -87,   -87,   288,   131,   -87,   426,   426,   426,   426,   426,
     426,   426,   426,   426,   426,   426,   426,     7,     7,   -87,
     -87,   -87,   259,   129,   136,   146,    27,   202,   510,   279,
     193,   -87,   -87,   151,   -87,   -87,   -87,   200,   -87,   148,
     -87,   -87,    72,   -87,   -87,   -87,    82,    72,   -87,    72,
     156,   152,    72,    72,    72,   -39,    78,   408,   165,   241,
      72,   244,   162,   -87,   173,   -87,   -87,   152,   170,   177,
     -87,   -87,   -87,    72,   262,   188,   -87,    72,   -87,   -87,
     -87,   283,    53,   -87,    72,   -87,   -87,   -87,   -87,   189,
      72,   -87,   419,   -87,   -87,   -87,    16,    72,   -87,    72,
     -87,   -87,   -87,   -87,   -87,   -87
>>>>>>> 411c3a392c0af2805a01b80f4949ee4b768aa411
>>>>>>> main
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
<<<<<<< HEAD
       2,     3,     0,     1,   124,     0,     0,    24,    25,     0,
       0,     0,    26,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    11,    12,    10,     0,     4,     6,
       9,     8,    21,     0,    13,    20,    14,    15,    16,    17,
      18,    19,    32,    33,     0,    23,    29,   104,   105,    22,
      27,     0,    28,   138,    30,    31,   119,    64,    63,    68,
      67,    66,     0,     0,     0,    69,    70,    65,     0,   126,
      60,    62,    61,     0,   124,    36,     0,    78,     0,     0,
      73,    74,     0,   119,     0,     0,     0,    82,    81,     0,
       0,    76,    71,    80,     0,     0,    75,     0,     7,     5,
      35,    34,     0,     0,   100,    89,    90,   125,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     137,   140,   141,   142,    63,   123,    60,    62,     0,   136,
      59,   126,     0,    57,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   119,     0,     0,     0,     0,     0,    94,   119,
       0,     0,     0,     0,     0,    72,     0,     0,     0,     0,
       0,     0,     0,    99,    91,    92,    41,    42,    47,    45,
      43,    46,    48,    44,    49,    50,     0,     0,     0,   139,
     143,   115,   122,   114,   116,   113,   121,    58,     0,   133,
      51,    52,    53,    54,    55,    56,   131,   132,   128,   127,
     130,   129,   134,   135,   144,    39,    79,     0,     0,   112,
       0,     0,     0,     0,     0,     0,    37,    38,    83,     0,
     155,    77,   101,     0,   102,     0,    84,    95,     0,     0,
      98,    93,   146,     0,     0,   120,     0,     0,   108,     0,
       0,   125,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    96,     0,   147,   145,     0,     0,   150,   149,
     152,     0,     0,     0,   118,     0,    40,   156,   103,     0,
       0,    87,     0,     0,   106,   107,   111,   109,   110,   153,
       0,     0,   117,     0,    85,    86,    97,   148,     0,   151,
       0,   154,    88
=======
<<<<<<< HEAD
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
=======
       2,     3,     0,     1,   109,     0,     0,    24,    25,     0,
       0,     0,    26,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    11,    12,    10,     0,     4,     6,
       9,     8,    21,     0,    13,    20,    14,    15,    16,    17,
      18,    19,    32,    33,     0,    23,    29,    91,    92,    22,
      27,     0,    28,   125,    30,    31,   104,    55,    54,   123,
     122,    56,     0,     0,    57,    58,     0,     0,     0,   112,
      51,    53,    52,     0,   109,    36,     0,    66,     0,    61,
      62,     0,   104,     0,     0,     0,    70,    69,     0,     0,
      64,    59,    68,     0,     0,    63,     0,     7,     5,    35,
      34,     0,     0,    87,    77,    78,   110,     0,   111,     0,
       0,   124,   127,   128,   129,   108,    53,     0,   121,     0,
      50,    48,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     104,     0,     0,     0,     0,    82,   104,     0,     0,     0,
       0,     0,    60,     0,     0,     0,     0,     0,     0,     0,
      86,    79,    80,    41,     0,     0,     0,   126,   130,   107,
     101,   100,   106,     0,    49,    42,    43,    44,    45,    46,
      47,   117,   118,   114,   113,   116,   115,   119,   120,   131,
      39,    67,     0,     0,     0,     0,     0,     0,     0,     0,
      37,    38,    71,     0,   142,    65,    88,     0,    89,     0,
      72,    83,     0,    85,    81,   133,     0,     0,   105,     0,
       0,     0,     0,     0,     0,   111,     0,     0,     0,     0,
       0,     0,     0,    84,     0,   134,   132,     0,     0,     0,
     137,   136,   139,     0,     0,     0,   103,     0,    40,   143,
      90,     0,     0,    75,     0,    93,    95,    99,   140,     0,
       0,   102,     0,    73,    74,   135,     0,     0,   138,     0,
      94,    98,    96,    97,   141,    76
>>>>>>> 411c3a392c0af2805a01b80f4949ee4b768aa411
>>>>>>> main
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
<<<<<<< HEAD
    -101,  -101,    17,   -27,  -101,  -101,  -101,   200,   -33,   -11,
     179,  -101,  -101,  -101,  -101,  -101,  -101,  -101,   -18,  -101,
    -101,  -101,   -42,  -101,  -101,   137,  -100,  -101,  -101,  -101,
    -101,  -101,   -26,  -101,  -101,     0,   -25,   -13,   -78,     5,
      -1,  -101,  -101,  -101,  -101,   -66,   128,  -101,  -101
=======
<<<<<<< HEAD
    -248,  -248,    76,   -27,  -248,  -248,  -248,   260,  -247,    -5,
     242,  -248,  -248,  -248,  -248,  -248,  -248,  -248,   -14,  -248,
    -248,  -248,    28,  -248,  -248,   198,  -103,  -248,  -248,  -248,
    -248,  -248,    17,  -248,     1,  -240,     7,   -70,    -2,    -3,
    -248,  -248,  -248,  -248,   -74,   192,  -248,  -248
=======
     -87,   -87,    75,   -25,   -87,   -87,   -87,   242,     9,   -10,
     -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,   -19,   -87,
     -87,   -87,    29,   -87,   -87,   171,   -86,   -87,   -87,   -87,
     -87,   -87,    40,   -87,   -87,     3,    14,    -9,   -67,    -2,
      -1,   -87,   -87,   -87,   -87,   -64,   176,   -87,   -87
>>>>>>> 411c3a392c0af2805a01b80f4949ee4b768aa411
>>>>>>> main
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,    28,    29,    30,    31,    32,    33,    34,    69,
<<<<<<< HEAD
      70,    35,    36,    37,    38,    39,    40,    41,    88,    42,
     236,   280,   281,    43,    44,   104,   105,   106,    45,    94,
      46,    47,   219,   267,    48,    71,    50,   158,   128,    72,
      73,    52,   120,   121,    53,   122,   123,    54,    55
=======
      70,    35,    36,    37,    38,    39,    40,    41,    87,    42,
<<<<<<< HEAD
     232,   273,   274,    43,    44,   103,   104,   105,    45,    93,
      46,    47,   260,    48,    71,    50,   156,   128,    72,    73,
      52,   120,   121,    53,   122,   123,    54,    55
=======
     210,   252,   253,    43,    44,   103,   104,   105,    45,    93,
      46,    47,   239,   266,    48,    71,    50,   145,   117,    72,
      73,    52,   111,   112,    53,   113,   114,    54,    55
>>>>>>> 411c3a392c0af2805a01b80f4949ee4b768aa411
>>>>>>> main
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
<<<<<<< HEAD
      80,    99,    49,    93,    74,   156,   174,    51,   107,    77,
      81,    75,    96,    82,    74,   251,     1,    90,    91,    56,
     147,    86,    95,   147,   271,   226,   118,   119,    49,    74,
       6,   147,    15,    51,   147,   238,   148,   107,   147,   148,
     175,   272,   147,   152,   147,   125,   147,   148,    16,   153,
     148,    76,   130,   131,   148,   189,   127,   133,   148,   107,
     148,   129,   148,   132,   150,   166,   167,   102,   154,   227,
     160,   103,   125,   149,   217,   241,   294,   164,   131,   198,
     279,   225,    83,   239,   285,    78,   286,   163,   162,   170,
     252,   244,   229,    84,   263,     4,   220,   176,   177,   178,
     179,   180,   181,   182,   183,   184,   185,   171,    85,     4,
      57,    58,    87,    59,    60,    92,    97,   196,   188,   107,
     101,   151,    61,   199,   200,   201,   202,   203,   204,   205,
     206,   207,   208,   209,   210,   211,   214,   155,   157,   159,
     161,   125,   165,   228,    62,   196,   212,   213,   125,   169,
     230,   168,    63,   232,   172,   221,   186,   237,   191,   240,
     222,   193,   215,   194,   135,   136,   137,   233,   138,   139,
     140,   216,   218,   242,   231,   224,   131,   234,    64,   135,
     136,   137,   235,   138,   139,   140,   243,    65,    66,   103,
     254,   135,   136,   137,    67,   138,   139,   140,   192,    68,
     246,   118,   249,   250,   248,   257,   196,   102,   258,   259,
     260,   103,   261,   245,   196,   266,   276,   275,   278,   197,
     279,   282,   253,   283,    49,   290,   262,   291,    99,    51,
     298,   264,   100,   265,   287,   126,   268,   269,   295,   270,
     284,   255,   288,   173,     0,   277,     4,    57,    58,   190,
      59,    60,     0,     0,   273,    49,     0,     0,   289,    61,
      51,     0,   292,     0,     0,     0,     0,     0,   293,   296,
     297,     0,    51,     0,     0,     4,    57,    58,   299,    59,
      60,    62,     0,     0,     0,   301,     0,   302,    61,    63,
       0,     0,     4,    57,    58,     0,    59,    60,   135,   136,
     137,     0,   138,   139,   140,    61,     0,   135,   136,   137,
      62,   138,   139,   140,     0,    79,     0,     0,    63,     0,
       0,     0,     0,     0,    65,    66,     0,    62,     0,     0,
       0,    67,     0,     0,     0,    63,    68,     4,    57,    58,
     300,    59,    60,     0,    89,     0,     0,     0,     0,     0,
      61,     0,     0,    65,    66,     0,     0,     0,     0,     0,
      67,   187,     4,    57,    58,    68,    59,    60,     0,     0,
      65,    66,     0,     0,     0,    61,     0,    67,     0,     0,
      63,     0,    68,     0,     0,     4,    57,    58,     0,    59,
      60,     0,     0,     0,     0,     0,     0,     0,    61,     4,
      57,    58,     0,    59,    60,    63,    79,   195,     0,     0,
       0,     0,    61,     0,     0,    65,    66,     0,     0,     0,
       0,     0,    67,     0,     0,     0,     0,    68,    63,     0,
       0,    79,   223,     4,    57,    58,     0,    59,    60,     0,
      65,    66,    63,     0,     0,     0,    61,    67,     0,     0,
       0,     0,    68,     0,    79,   247,     0,     0,     0,     0,
       0,     0,     0,    65,    66,     0,     0,     0,    79,   256,
      67,     0,     0,     0,     0,    68,    63,    65,    66,   107,
       0,     4,    57,   124,    67,    59,    60,     0,     0,    68,
       0,     0,     0,     0,    61,     0,     0,     0,     0,     0,
       0,     0,    79,     0,     0,     0,     0,     0,     0,     0,
       0,    65,    66,     0,     0,     0,     0,     0,    67,     0,
       0,     0,     0,    68,    63,     0,     0,     0,   108,   109,
     110,   111,   112,   113,   114,   115,     0,     0,     3,   116,
     117,     0,     0,     0,     4,     0,     0,     0,     0,     0,
      79,     0,     5,     0,     0,     6,     7,     0,     8,    65,
      66,     9,    10,     0,     0,    11,    67,    12,    13,     0,
      14,    68,    15,    16,    17,    18,    19,    20,    21,     4,
      22,     0,     0,    23,     0,    24,     0,     5,     0,    25,
       6,     7,     0,     8,     0,     0,     9,    10,     0,     0,
      11,     0,    12,    13,     0,    14,     0,    15,    16,    17,
      18,    19,    20,    21,     0,    22,     0,     0,    23,     0,
      24,     0,     0,     0,    25,     0,    26,    27,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     4,     0,     0,     0,
       0,     0,     0,     0,     5,     0,     0,     6,     7,   274,
       8,    98,    27,     9,    10,     0,     0,    11,     0,    12,
      13,     0,    14,     0,    15,    16,    17,    18,    19,    20,
      21,     4,    22,     0,     0,    23,     0,    24,     0,     5,
       0,    25,     6,     7,     0,     8,     0,     0,     9,    10,
       0,     0,    11,     0,    12,    13,     0,    14,   134,    15,
      16,    17,    18,    19,    20,    21,     0,    22,     0,     0,
      23,     0,    24,     0,     0,     0,    25,     0,    98,    27,
     135,   136,   137,     0,   138,   139,   140,     0,     0,     0,
       0,     0,     0,   134,     0,  -126,     0,     0,     0,     0,
     141,   134,   142,   143,   144,   145,   146,     0,   197,     0,
       0,  -126,     0,    26,    27,   135,   136,   137,     0,   138,
     139,   140,     0,   135,   136,   137,     0,   138,   139,   140,
       0,     0,     0,     0,     0,   141,     0,   142,   143,   144,
     145,   146,     0,   141,     0,   142,   143,   144,   145,   146
=======
<<<<<<< HEAD
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
=======
      51,    79,    92,    98,    75,    49,    74,     4,    57,    58,
      80,    81,    77,    95,    85,   143,   135,    89,    90,   161,
      61,   135,    74,   135,   200,    94,    51,     6,   106,   106,
     106,    49,   136,   106,   106,   135,   135,   136,   140,   136,
     147,   162,   243,     1,   141,    16,   115,   135,   167,    56,
      15,   136,   136,   135,   108,   138,   120,   121,   122,   116,
     244,   118,   119,   136,   109,   110,   153,   154,   201,   136,
     151,   173,   115,   192,   137,   108,   214,   171,   108,   199,
      82,   157,    74,   107,    76,    64,    65,   149,   108,   150,
       4,    57,    58,    66,    59,    60,    67,   163,    68,   158,
     217,   203,   270,    61,   271,   212,    78,   172,   224,   166,
     135,     4,   194,   175,   176,   177,   178,   179,   180,   181,
     182,   183,   184,   185,   186,    62,   136,   101,   189,   202,
     115,   102,   109,   172,   187,   188,   115,    83,   101,   263,
     196,   204,   102,   251,   206,   195,    84,    86,   211,    91,
     213,    96,   100,   106,   139,   215,   142,   207,   234,    63,
     144,   108,   146,   148,   216,   152,   155,   156,    64,    65,
       4,    57,    58,   159,    59,    60,    66,   164,   170,    67,
     190,    68,   172,    61,   191,   193,   123,   124,   125,   172,
     126,   127,   128,     4,    57,    58,    51,    59,    60,   225,
     198,    49,    98,   233,   205,    62,    61,   208,   235,   209,
     236,   102,   219,   240,   241,   242,   221,   222,     4,    57,
      58,   249,    59,    60,   226,    51,   229,   223,    62,   245,
      49,    61,   230,   231,   258,   232,   174,   237,   261,    88,
     238,   262,     4,    57,    58,   265,   247,   248,    64,    65,
     250,   268,   251,    62,   254,    61,    66,   256,   274,    67,
     275,    68,   165,   257,    51,     4,    57,    58,   259,   260,
     267,    64,    65,   227,    99,   272,   160,   255,    61,    66,
     273,   264,    67,     0,    68,     4,    57,    58,   168,     4,
      57,    58,     0,     0,     0,     0,    64,    65,    61,     0,
       0,     0,    61,     0,    66,     0,     0,    67,     0,    68,
       0,     0,   197,   123,   124,   125,     0,   126,   127,   128,
      64,    65,     0,     0,     0,     0,     0,     0,    66,     0,
       0,    67,     0,    68,     0,   220,   123,   124,   125,     0,
     126,   127,   128,    64,    65,     0,     0,   169,     0,     0,
       0,    66,     0,     0,    67,   228,    68,     0,     0,     0,
       0,     0,     0,    64,    65,     0,     0,    64,    65,     0,
     218,    66,     0,     3,    67,    66,    68,     0,    67,     4,
      68,     0,     0,     0,     0,     0,     0,     5,     0,     0,
       6,     7,     0,     8,     0,     0,     9,    10,     0,     0,
      11,     0,    12,    13,     0,    14,     0,    15,    16,    17,
      18,    19,    20,    21,     4,    22,     0,     0,    23,     0,
      24,     0,     5,     0,    25,     6,     7,     0,     8,     0,
       0,     9,    10,     0,     0,    11,     0,    12,    13,     0,
      14,     0,    15,    16,    17,    18,    19,    20,    21,     0,
      22,     0,     0,    23,     0,    24,     0,     0,     0,    25,
       0,    26,    27,     0,     0,     0,     0,   123,   124,   125,
       0,   126,   127,   128,   123,   124,   125,     0,   126,   127,
     128,     4,     0,     0,     0,     0,     0,     0,     0,     5,
       0,     0,     6,     7,   246,     8,    97,    27,     9,    10,
     269,     0,    11,     0,    12,    13,     0,    14,     0,    15,
      16,    17,    18,    19,    20,    21,     4,    22,     0,     0,
      23,     0,    24,     0,     5,     0,    25,     6,     7,     0,
       8,     0,     0,     9,    10,     0,     0,    11,     0,    12,
      13,     0,    14,     0,    15,    16,    17,    18,    19,    20,
      21,  -112,    22,     0,     0,    23,     0,    24,     0,     0,
       0,    25,     0,    97,    27,     0,     0,  -112,     0,     0,
       0,   123,   124,   125,     0,   126,   127,   128,     0,     0,
     123,   124,   125,     0,   126,   127,   128,     0,     0,     0,
       0,   129,     0,   130,   131,   132,   133,   134,    26,    27,
     129,     0,   130,   131,   132,   133,   134
>>>>>>> 411c3a392c0af2805a01b80f4949ee4b768aa411
>>>>>>> main
};

static const yytype_int16 yycheck[] =
{
<<<<<<< HEAD
      11,    28,     2,    21,     6,    83,   106,     2,     6,     9,
      11,     6,    23,     6,     6,     6,    88,    18,    19,    75,
      28,    16,    22,    28,    81,     6,    15,    16,    28,     6,
      17,    28,    34,    28,    28,    33,    44,     6,    28,    44,
     106,    98,    28,    75,    28,    56,    28,    44,    35,    81,
      44,     6,    63,    64,    44,   121,    56,    68,    44,     6,
      44,    62,    44,    64,    33,    81,    82,    21,    79,    50,
      17,    25,    83,    81,   152,   175,    86,    82,    89,    76,
      90,   159,    75,    81,    86,     6,    88,    81,    89,    81,
      81,    81,    76,    81,    76,     6,     7,   108,   109,   110,
     111,   112,   113,   114,   115,   116,   117,   102,     6,     6,
       7,     8,     6,    10,    11,     6,     6,   128,   119,     6,
      88,    35,    19,   134,   135,   136,   137,   138,   139,   140,
     141,   142,   143,   144,   145,   146,   149,    22,    88,    75,
      82,   152,     7,   161,    41,   156,   147,   148,   159,    81,
     163,    33,    49,   166,    81,   155,    81,   170,    76,   172,
     155,    76,     6,    76,    48,    49,    50,   167,    52,    53,
      54,     6,    88,   186,     8,    87,   187,     6,    75,    48,
      49,    50,    88,    52,    53,    54,   187,    84,    85,    25,
      22,    48,    49,    50,    91,    52,    53,    54,    82,    96,
      81,    15,    81,    81,    87,    33,   217,    21,    81,    33,
      87,    25,     6,    82,   225,    81,     6,    81,     6,    76,
      90,    81,   222,    81,   224,     6,   239,    81,   255,   224,
      81,   244,    32,   246,   267,    56,   249,   250,   280,   252,
     266,   224,   267,   106,    -1,   258,     6,     7,     8,   121,
      10,    11,    -1,    -1,   254,   255,    -1,    -1,   271,    19,
     255,    -1,   275,    -1,    -1,    -1,    -1,    -1,   279,   282,
     283,    -1,   267,    -1,    -1,     6,     7,     8,   291,    10,
      11,    41,    -1,    -1,    -1,   298,    -1,   300,    19,    49,
      -1,    -1,     6,     7,     8,    -1,    10,    11,    48,    49,
      50,    -1,    52,    53,    54,    19,    -1,    48,    49,    50,
      41,    52,    53,    54,    -1,    75,    -1,    -1,    49,    -1,
      -1,    -1,    -1,    -1,    84,    85,    -1,    41,    -1,    -1,
      -1,    91,    -1,    -1,    -1,    49,    96,     6,     7,     8,
      81,    10,    11,    -1,    75,    -1,    -1,    -1,    -1,    -1,
      19,    -1,    -1,    84,    85,    -1,    -1,    -1,    -1,    -1,
      91,    75,     6,     7,     8,    96,    10,    11,    -1,    -1,
      84,    85,    -1,    -1,    -1,    19,    -1,    91,    -1,    -1,
      49,    -1,    96,    -1,    -1,     6,     7,     8,    -1,    10,
      11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    19,     6,
       7,     8,    -1,    10,    11,    49,    75,    76,    -1,    -1,
      -1,    -1,    19,    -1,    -1,    84,    85,    -1,    -1,    -1,
      -1,    -1,    91,    -1,    -1,    -1,    -1,    96,    49,    -1,
      -1,    75,    76,     6,     7,     8,    -1,    10,    11,    -1,
      84,    85,    49,    -1,    -1,    -1,    19,    91,    -1,    -1,
      -1,    -1,    96,    -1,    75,    76,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    84,    85,    -1,    -1,    -1,    75,    76,
      91,    -1,    -1,    -1,    -1,    96,    49,    84,    85,     6,
      -1,     6,     7,     8,    91,    10,    11,    -1,    -1,    96,
      -1,    -1,    -1,    -1,    19,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    75,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    84,    85,    -1,    -1,    -1,    -1,    -1,    91,    -1,
      -1,    -1,    -1,    96,    49,    -1,    -1,    -1,    55,    56,
      57,    58,    59,    60,    61,    62,    -1,    -1,     0,    66,
      67,    -1,    -1,    -1,     6,    -1,    -1,    -1,    -1,    -1,
      75,    -1,    14,    -1,    -1,    17,    18,    -1,    20,    84,
      85,    23,    24,    -1,    -1,    27,    91,    29,    30,    -1,
      32,    96,    34,    35,    36,    37,    38,    39,    40,     6,
      42,    -1,    -1,    45,    -1,    47,    -1,    14,    -1,    51,
      17,    18,    -1,    20,    -1,    -1,    23,    24,    -1,    -1,
      27,    -1,    29,    30,    -1,    32,    -1,    34,    35,    36,
      37,    38,    39,    40,    -1,    42,    -1,    -1,    45,    -1,
      47,    -1,    -1,    -1,    51,    -1,    88,    89,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     6,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    14,    -1,    -1,    17,    18,    86,
      20,    88,    89,    23,    24,    -1,    -1,    27,    -1,    29,
      30,    -1,    32,    -1,    34,    35,    36,    37,    38,    39,
      40,     6,    42,    -1,    -1,    45,    -1,    47,    -1,    14,
      -1,    51,    17,    18,    -1,    20,    -1,    -1,    23,    24,
      -1,    -1,    27,    -1,    29,    30,    -1,    32,    26,    34,
      35,    36,    37,    38,    39,    40,    -1,    42,    -1,    -1,
      45,    -1,    47,    -1,    -1,    -1,    51,    -1,    88,    89,
      48,    49,    50,    -1,    52,    53,    54,    -1,    -1,    -1,
      -1,    -1,    -1,    26,    -1,    28,    -1,    -1,    -1,    -1,
      68,    26,    70,    71,    72,    73,    74,    -1,    76,    -1,
      -1,    44,    -1,    88,    89,    48,    49,    50,    -1,    52,
      53,    54,    -1,    48,    49,    50,    -1,    52,    53,    54,
      -1,    -1,    -1,    -1,    -1,    68,    -1,    70,    71,    72,
      73,    74,    -1,    68,    -1,    70,    71,    72,    73,    74
=======
<<<<<<< HEAD
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
=======
       2,    11,    21,    28,     6,     2,     6,     6,     7,     8,
      11,     6,     9,    23,    16,    82,    28,    18,    19,   105,
      19,    28,     6,    28,     6,    22,    28,    17,     6,     6,
       6,    28,    44,     6,     6,    28,    28,    44,    75,    44,
      17,   105,    81,    88,    81,    35,    56,    28,   112,    75,
      34,    44,    44,    28,    51,    33,    66,    67,    68,    56,
      99,    62,    63,    44,    15,    16,    81,    82,    50,    44,
      82,    76,    82,   140,    81,    72,   162,    76,    75,   146,
      75,    81,     6,    55,     6,    84,    85,    88,    85,    81,
       6,     7,     8,    92,    10,    11,    95,   107,    97,   101,
      81,    76,    86,    19,    88,    81,     6,   117,    81,   110,
      28,     6,     7,   123,   124,   125,   126,   127,   128,   129,
     130,   131,   132,   133,   134,    41,    44,    21,   137,   148,
     140,    25,    15,   143,   135,   136,   146,    81,    21,    86,
     142,   150,    25,    90,   153,   142,     6,     6,   157,     6,
     159,     6,    88,     6,    35,   164,    22,   154,    76,    75,
      88,   158,    75,    82,   165,     7,    33,    81,    84,    85,
       6,     7,     8,    81,    10,    11,    92,    81,    76,    95,
       6,    97,   192,    19,     6,    88,    48,    49,    50,   199,
      52,    53,    54,     6,     7,     8,   198,    10,    11,   196,
      87,   198,   227,   212,     8,    41,    19,     6,   217,    88,
     219,    25,    81,   222,   223,   224,    87,    81,     6,     7,
       8,   230,    10,    11,    22,   227,    33,    81,    41,   226,
     227,    19,    81,    33,   243,    87,    98,    81,   247,    75,
      88,   251,     6,     7,     8,   254,    81,     6,    84,    85,
       6,   260,    90,    41,    81,    19,    92,    87,   267,    95,
     269,    97,    75,    86,   266,     6,     7,     8,     6,    81,
      81,    84,    85,   198,    32,   266,   105,   237,    19,    92,
     266,   252,    95,    -1,    97,     6,     7,     8,   112,     6,
       7,     8,    -1,    -1,    -1,    -1,    84,    85,    19,    -1,
      -1,    -1,    19,    -1,    92,    -1,    -1,    95,    -1,    97,
      -1,    -1,    76,    48,    49,    50,    -1,    52,    53,    54,
      84,    85,    -1,    -1,    -1,    -1,    -1,    -1,    92,    -1,
      -1,    95,    -1,    97,    -1,    76,    48,    49,    50,    -1,
      52,    53,    54,    84,    85,    -1,    -1,    82,    -1,    -1,
      -1,    92,    -1,    -1,    95,    76,    97,    -1,    -1,    -1,
      -1,    -1,    -1,    84,    85,    -1,    -1,    84,    85,    -1,
      82,    92,    -1,     0,    95,    92,    97,    -1,    95,     6,
      97,    -1,    -1,    -1,    -1,    -1,    -1,    14,    -1,    -1,
      17,    18,    -1,    20,    -1,    -1,    23,    24,    -1,    -1,
      27,    -1,    29,    30,    -1,    32,    -1,    34,    35,    36,
      37,    38,    39,    40,     6,    42,    -1,    -1,    45,    -1,
      47,    -1,    14,    -1,    51,    17,    18,    -1,    20,    -1,
      -1,    23,    24,    -1,    -1,    27,    -1,    29,    30,    -1,
      32,    -1,    34,    35,    36,    37,    38,    39,    40,    -1,
      42,    -1,    -1,    45,    -1,    47,    -1,    -1,    -1,    51,
      -1,    88,    89,    -1,    -1,    -1,    -1,    48,    49,    50,
      -1,    52,    53,    54,    48,    49,    50,    -1,    52,    53,
      54,     6,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    14,
      -1,    -1,    17,    18,    86,    20,    88,    89,    23,    24,
      81,    -1,    27,    -1,    29,    30,    -1,    32,    -1,    34,
      35,    36,    37,    38,    39,    40,     6,    42,    -1,    -1,
      45,    -1,    47,    -1,    14,    -1,    51,    17,    18,    -1,
      20,    -1,    -1,    23,    24,    -1,    -1,    27,    -1,    29,
      30,    -1,    32,    -1,    34,    35,    36,    37,    38,    39,
      40,    28,    42,    -1,    -1,    45,    -1,    47,    -1,    -1,
      -1,    51,    -1,    88,    89,    -1,    -1,    44,    -1,    -1,
      -1,    48,    49,    50,    -1,    52,    53,    54,    -1,    -1,
      48,    49,    50,    -1,    52,    53,    54,    -1,    -1,    -1,
      -1,    68,    -1,    70,    71,    72,    73,    74,    88,    89,
      68,    -1,    70,    71,    72,    73,    74
>>>>>>> 411c3a392c0af2805a01b80f4949ee4b768aa411
>>>>>>> main
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
<<<<<<< HEAD
       0,    88,   100,     0,     6,    14,    17,    18,    20,    23,
      24,    27,    29,    30,    32,    34,    35,    36,    37,    38,
      39,    40,    42,    45,    47,    51,    88,    89,   101,   102,
     103,   104,   105,   106,   107,   110,   111,   112,   113,   114,
     115,   116,   118,   122,   123,   127,   129,   130,   133,   134,
     135,   138,   140,   143,   146,   147,    75,     7,     8,    10,
      11,    19,    41,    49,    75,    84,    85,    91,    96,   108,
     109,   134,   138,   139,     6,   138,     6,   134,     6,    75,
     108,   139,     6,    75,    81,     6,   138,     6,   117,    75,
     139,   139,     6,   117,   128,   134,   108,     6,    88,   102,
     106,    88,    21,    25,   124,   125,   126,     6,    55,    56,
      57,    58,    59,    60,    61,    62,    66,    67,    15,    16,
     141,   142,   144,   145,     8,   108,   109,   134,   137,   139,
     108,   108,   139,   108,    26,    48,    49,    50,    52,    53,
      54,    68,    70,    71,    72,    73,    74,    28,    44,    81,
      33,    35,    75,    81,   108,    22,   137,    88,   136,    75,
      17,    82,   139,    81,    82,     7,    81,    82,    33,    81,
      81,   138,    81,   124,   125,   144,   108,   108,   108,   108,
     108,   108,   108,   108,   108,   108,    81,    75,   139,   144,
     145,    76,    82,    76,    76,    76,   108,    76,    76,   108,
     108,   108,   108,   108,   108,   108,   108,   108,   108,   108,
     108,   108,   139,   139,   136,     6,     6,   137,    88,   131,
       7,   134,   138,    76,    87,   137,     6,    50,   117,    76,
     136,     8,   136,   134,     6,    88,   119,   136,    33,    81,
     136,   125,   136,   139,    81,    82,    81,    76,    87,    81,
      81,     6,    81,   134,    22,   101,    76,    33,    81,    33,
      87,     6,   136,    76,   136,   136,    81,   132,   136,   136,
     136,    81,    98,   134,    86,    81,     6,   136,     6,    90,
     120,   121,    81,    81,   131,    86,    88,   107,   135,   136,
       6,    81,   136,   108,    86,   121,   136,   136,    81,   136,
      81,   136,   136
=======
       0,    88,   101,     0,     6,    14,    17,    18,    20,    23,
      24,    27,    29,    30,    32,    34,    35,    36,    37,    38,
      39,    40,    42,    45,    47,    51,    88,    89,   102,   103,
     104,   105,   106,   107,   108,   111,   112,   113,   114,   115,
<<<<<<< HEAD
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
=======
     116,   117,   119,   123,   124,   128,   130,   131,   134,   135,
     136,   139,   141,   144,   147,   148,    75,     7,     8,    10,
      11,    19,    41,    75,    84,    85,    92,    95,    97,   109,
     110,   135,   139,   140,     6,   139,     6,   135,     6,   109,
     140,     6,    75,    81,     6,   139,     6,   118,    75,   140,
     140,     6,   118,   129,   135,   109,     6,    88,   103,   107,
      88,    21,    25,   125,   126,   127,     6,    55,   135,    15,
      16,   142,   143,   145,   146,   109,   135,   138,   140,   140,
     109,   109,   109,    48,    49,    50,    52,    53,    54,    68,
      70,    71,    72,    73,    74,    28,    44,    81,    33,    35,
      75,    81,    22,   138,    88,   137,    75,    17,    82,   140,
      81,    82,     7,    81,    82,    33,    81,    81,   139,    81,
     125,   126,   145,   109,    81,    75,   140,   145,   146,    82,
      76,    76,   109,    76,    98,   109,   109,   109,   109,   109,
     109,   109,   109,   109,   109,   109,   109,   140,   140,   137,
       6,     6,   138,    88,     7,   135,   139,    76,    87,   138,
       6,    50,   118,    76,   137,     8,   137,   135,     6,    88,
     120,   137,    81,   137,   126,   137,   140,    81,    82,    81,
      76,    87,    81,    81,    81,   135,    22,   102,    76,    33,
      81,    33,    87,   137,    76,   137,   137,    81,    88,   132,
     137,   137,   137,    81,    99,   135,    86,    81,     6,   137,
       6,    90,   121,   122,    81,   132,    87,    86,   137,     6,
      81,   137,   109,    86,   122,   137,   133,    81,   137,    81,
      86,    88,   108,   136,   137,   137
>>>>>>> 411c3a392c0af2805a01b80f4949ee4b768aa411
>>>>>>> main
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
<<<<<<< HEAD
       0,    99,   100,   100,   100,   101,   101,   101,   102,   102,
     102,   102,   102,   103,   103,   103,   103,   103,   103,   103,
     103,   103,   103,   103,   103,   103,   103,   104,   104,   104,
     104,   104,   104,   104,   105,   105,   106,   106,   106,   106,
     106,   107,   107,   107,   107,   107,   107,   107,   107,   107,
     107,   108,   108,   108,   108,   108,   108,   108,   108,   108,
     108,   108,   108,   108,   108,   108,   108,   108,   108,   109,
     109,   110,   110,   111,   111,   112,   113,   113,   114,   114,
     115,   116,   117,   117,   118,   119,   120,   120,   121,   122,
     122,   122,   122,   122,   123,   124,   124,   124,   125,   126,
     126,   127,   128,   128,   129,   129,   130,   131,   132,   132,
     132,   132,   133,   134,   134,   134,   134,   135,   136,   137,
     137,   137,   137,   137,   138,   138,   139,   139,   139,   139,
     139,   139,   139,   139,   139,   139,   139,   140,   141,   141,
     141,   141,   142,   142,   143,   143,   144,   145,   145,   146,
     146,   146,   146,   146,   146,   147,   147
=======
       0,   100,   101,   101,   101,   102,   102,   102,   103,   103,
     103,   103,   103,   104,   104,   104,   104,   104,   104,   104,
     104,   104,   104,   104,   104,   104,   104,   105,   105,   105,
     105,   105,   105,   105,   106,   106,   107,   107,   107,   107,
<<<<<<< HEAD
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
=======
     107,   108,   109,   109,   109,   109,   109,   109,   109,   109,
     109,   109,   109,   109,   109,   109,   109,   110,   110,   111,
     111,   112,   112,   113,   114,   114,   115,   115,   116,   117,
     118,   118,   119,   120,   121,   121,   122,   123,   123,   123,
     123,   123,   124,   125,   125,   126,   127,   127,   128,   129,
     129,   130,   130,   131,   132,   133,   133,   133,   133,   134,
     135,   135,   136,   137,   138,   138,   138,   138,   138,   139,
     139,   139,   140,   140,   140,   140,   140,   140,   140,   140,
     140,   140,   140,   140,   141,   142,   142,   142,   142,   143,
     143,   144,   144,   145,   146,   146,   147,   147,   147,   147,
     147,   147,   148,   148
>>>>>>> 411c3a392c0af2805a01b80f4949ee4b768aa411
>>>>>>> main
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     1,     2,     2,     1,     2,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     2,     2,     2,     4,     4,     4,
<<<<<<< HEAD
       6,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     2,     3,     2,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     2,     3,     2,     2,     2,     2,     4,     2,     4,
       2,     2,     1,     3,     4,     4,     2,     1,     4,     2,
       2,     3,     3,     4,     3,     3,     4,     6,     3,     2,
       1,     4,     3,     5,     1,     1,     7,     4,     0,     2,
       2,     2,     4,     4,     4,     4,     4,     7,     4,     0,
       3,     2,     2,     1,     1,     2,     1,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     2,     2,     0,     2,
       1,     1,     1,     2,     4,     6,     3,     4,     6,     6,
       6,     8,     6,     7,     9,     4,     6
=======
<<<<<<< HEAD
       6,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     2,     3,     2,
       1,     1,     1,     1,     1,     1,     1,     1,     2,     3,
       2,     2,     2,     2,     4,     2,     4,     2,     2,     1,
       3,     4,     4,     2,     1,     4,     2,     2,     3,     3,
       4,     3,     3,     4,     3,     2,     1,     4,     3,     5,
       1,     1,    10,     0,     2,     2,     2,     7,     4,     4,
=======
       6,     3,     3,     3,     3,     3,     3,     3,     2,     3,
       2,     1,     1,     1,     1,     1,     1,     1,     1,     2,
       3,     2,     2,     2,     2,     4,     2,     4,     2,     2,
       1,     3,     4,     4,     2,     1,     4,     2,     2,     3,
       3,     4,     3,     3,     4,     3,     2,     1,     4,     3,
       5,     1,     1,     7,     4,     0,     2,     2,     2,     7,
>>>>>>> 411c3a392c0af2805a01b80f4949ee4b768aa411
       4,     4,     7,     4,     0,     3,     2,     2,     1,     1,
       2,     2,     1,     3,     3,     3,     3,     3,     3,     3,
       3,     2,     1,     1,     2,     0,     2,     1,     1,     1,
       2,     4,     6,     3,     4,     6,     6,     6,     8,     6,
       7,     9,     4,     6
>>>>>>> main
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
do                                                              \
  if (yychar == YYEMPTY)                                        \
    {                                                           \
      yychar = (Token);                                         \
      yylval = (Value);                                         \
      YYPOPSTACK (yylen);                                       \
      yystate = *yyssp;                                         \
      goto yybackup;                                            \
    }                                                           \
  else                                                          \
    {                                                           \
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;                                                  \
    }                                                           \
while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

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
#ifndef YYINITDEPTH
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
static YYSIZE_T
yystrlen (const char *yystr)
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
static char *
yystpcpy (char *yydest, const char *yysrc)
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

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULL, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULL;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULL, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
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
  int yytoken = 0;
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

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
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
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
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
      if (yytable_value_is_error (yyn))
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
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

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
     '$$ = $1'.

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
<<<<<<< HEAD
#line 51 "parser.y" /* yacc.c:1646  */
    { }
#line 1632 "parser.cpp" /* yacc.c:1646  */
    break;

  case 3:
#line 52 "parser.y" /* yacc.c:1646  */
    { }
#line 1638 "parser.cpp" /* yacc.c:1646  */
    break;

  case 4:
#line 53 "parser.y" /* yacc.c:1646  */
    {
                              printf("------------ PROGRAM ACCEPTED ------------\n");
                              YYACCEPT;
                        }
#line 1647 "parser.cpp" /* yacc.c:1646  */
    break;

  case 51:
#line 119 "parser.y" /* yacc.c:1646  */
    { }
#line 1653 "parser.cpp" /* yacc.c:1646  */
    break;

  case 52:
#line 120 "parser.y" /* yacc.c:1646  */
    { }
#line 1659 "parser.cpp" /* yacc.c:1646  */
    break;

  case 53:
#line 121 "parser.y" /* yacc.c:1646  */
    { }
#line 1665 "parser.cpp" /* yacc.c:1646  */
    break;

  case 54:
#line 122 "parser.y" /* yacc.c:1646  */
    { }
#line 1671 "parser.cpp" /* yacc.c:1646  */
    break;

  case 55:
#line 123 "parser.y" /* yacc.c:1646  */
    { }
#line 1677 "parser.cpp" /* yacc.c:1646  */
    break;

  case 57:
#line 125 "parser.y" /* yacc.c:1646  */
=======
#line 52 "parser.y" /* yacc.c:1646  */
<<<<<<< HEAD
    { (yyval.astNode) = NULL; }
#line 1582 "parser.cpp" /* yacc.c:1646  */
=======
    { 
                              std::string nname = "Program" + std::to_string(n_nodes);
                              ++n_nodes;
                              (yyval.astNode) = new EmptyNode(nname); 
                        }
#line 1585 "parser.cpp" /* yacc.c:1646  */
>>>>>>> 411c3a392c0af2805a01b80f4949ee4b768aa411
    break;

  case 3:
#line 57 "parser.y" /* yacc.c:1646  */
    { }
<<<<<<< HEAD
#line 1606 "parser.cpp" /* yacc.c:1646  */
=======
#line 1591 "parser.cpp" /* yacc.c:1646  */
>>>>>>> 411c3a392c0af2805a01b80f4949ee4b768aa411
    break;

  case 4:
#line 58 "parser.y" /* yacc.c:1646  */
    {
                              (yyval.astNode) = new StatementsNode("Program");
                              (yyval.astNode)->add((yyvsp[-1].astNode));
                              (yyval.astNode)->add((yyvsp[0].astNode));
                              root = (yyval.astNode);
                              YYACCEPT;
                        }
<<<<<<< HEAD
#line 1618 "parser.cpp" /* yacc.c:1646  */
=======
#line 1603 "parser.cpp" /* yacc.c:1646  */
>>>>>>> 411c3a392c0af2805a01b80f4949ee4b768aa411
    break;

  case 5:
#line 67 "parser.y" /* yacc.c:1646  */
    { (yyvsp[-1].astNode)->add((yyvsp[0].astNode)); (yyval.astNode) = (yyvsp[-1].astNode); }
<<<<<<< HEAD
#line 1624 "parser.cpp" /* yacc.c:1646  */
=======
#line 1609 "parser.cpp" /* yacc.c:1646  */
>>>>>>> 411c3a392c0af2805a01b80f4949ee4b768aa411
    break;

  case 6:
#line 68 "parser.y" /* yacc.c:1646  */
    { (yyval.astNode) = (yyvsp[0].astNode); }
<<<<<<< HEAD
#line 1630 "parser.cpp" /* yacc.c:1646  */
=======
#line 1615 "parser.cpp" /* yacc.c:1646  */
>>>>>>> 411c3a392c0af2805a01b80f4949ee4b768aa411
    break;

  case 7:
#line 69 "parser.y" /* yacc.c:1646  */
    { (yyval.astNode) = (yyvsp[-1].astNode); }
<<<<<<< HEAD
#line 1636 "parser.cpp" /* yacc.c:1646  */
=======
#line 1621 "parser.cpp" /* yacc.c:1646  */
>>>>>>> 411c3a392c0af2805a01b80f4949ee4b768aa411
    break;

  case 8:
#line 72 "parser.y" /* yacc.c:1646  */
    { (yyval.astNode) = (yyvsp[0].astNode); }
<<<<<<< HEAD
#line 1642 "parser.cpp" /* yacc.c:1646  */
=======
#line 1627 "parser.cpp" /* yacc.c:1646  */
>>>>>>> 411c3a392c0af2805a01b80f4949ee4b768aa411
    break;

  case 9:
#line 73 "parser.y" /* yacc.c:1646  */
    { (yyval.astNode) = (yyvsp[0].astNode); }
<<<<<<< HEAD
#line 1648 "parser.cpp" /* yacc.c:1646  */
    break;

  case 24:
#line 86 "parser.y" /* yacc.c:1646  */
    {
                        (yyval.astNode) = new StatementsNode("pass");
                        (yyval.astNode)->add((yyvsp[0].astNode));
                  }
#line 1657 "parser.cpp" /* yacc.c:1646  */
=======
#line 1633 "parser.cpp" /* yacc.c:1646  */
    break;

  case 13:
#line 79 "parser.y" /* yacc.c:1646  */
    { (yyval.astNode) = (yyvsp[0].astNode); }
#line 1639 "parser.cpp" /* yacc.c:1646  */
>>>>>>> 411c3a392c0af2805a01b80f4949ee4b768aa411
    break;

  case 27:
#line 95 "parser.y" /* yacc.c:1646  */
    { (yyval.astNode) = (yyvsp[0].astNode); }
<<<<<<< HEAD
#line 1663 "parser.cpp" /* yacc.c:1646  */
=======
#line 1645 "parser.cpp" /* yacc.c:1646  */
>>>>>>> 411c3a392c0af2805a01b80f4949ee4b768aa411
    break;

  case 41:
#line 115 "parser.y" /* yacc.c:1646  */
    {  (yyval.astNode) = new AssignmentStatement("assignment");
                                                      std::string nname = "iden" + std::to_string(n_nodes);
                                                      ++n_nodes;
                                                      (yyvsp[-2].astNode)->name=nname;
                                                      (yyval.astNode)->add((yyvsp[-2].astNode));
                                                      (yyval.astNode)->add((yyvsp[0].astNode));
                                                }
#line 1657 "parser.cpp" /* yacc.c:1646  */
    break;

  case 42:
#line 124 "parser.y" /* yacc.c:1646  */
    { }
<<<<<<< HEAD
#line 1669 "parser.cpp" /* yacc.c:1646  */
=======
#line 1663 "parser.cpp" /* yacc.c:1646  */
>>>>>>> 411c3a392c0af2805a01b80f4949ee4b768aa411
    break;

  case 43:
#line 125 "parser.y" /* yacc.c:1646  */
    { }
<<<<<<< HEAD
#line 1675 "parser.cpp" /* yacc.c:1646  */
=======
#line 1669 "parser.cpp" /* yacc.c:1646  */
>>>>>>> 411c3a392c0af2805a01b80f4949ee4b768aa411
    break;

  case 44:
#line 126 "parser.y" /* yacc.c:1646  */
    { }
<<<<<<< HEAD
#line 1681 "parser.cpp" /* yacc.c:1646  */
=======
#line 1675 "parser.cpp" /* yacc.c:1646  */
>>>>>>> 411c3a392c0af2805a01b80f4949ee4b768aa411
    break;

  case 45:
#line 127 "parser.y" /* yacc.c:1646  */
    { }
<<<<<<< HEAD
#line 1687 "parser.cpp" /* yacc.c:1646  */
=======
#line 1681 "parser.cpp" /* yacc.c:1646  */
>>>>>>> 411c3a392c0af2805a01b80f4949ee4b768aa411
    break;

  case 46:
#line 128 "parser.y" /* yacc.c:1646  */
    { }
<<<<<<< HEAD
#line 1693 "parser.cpp" /* yacc.c:1646  */
=======
#line 1687 "parser.cpp" /* yacc.c:1646  */
>>>>>>> 411c3a392c0af2805a01b80f4949ee4b768aa411
    break;

  case 48:
#line 130 "parser.y" /* yacc.c:1646  */
>>>>>>> main
    { /*The rule for negation includes %prec UMINUS . The only operator in this rule is - , 
                                                      which has low precedence, but we want unary minus to have higher precedence than multiplication 
                                                      rather than lower. The %prec tells bison to use the precedence of UMINUS for this rule.*/
                                                }
<<<<<<< HEAD
#line 1686 "parser.cpp" /* yacc.c:1646  */
    break;

  case 58:
#line 129 "parser.y" /* yacc.c:1646  */
    { }
#line 1692 "parser.cpp" /* yacc.c:1646  */
    break;

  case 59:
#line 130 "parser.y" /* yacc.c:1646  */
    { }
#line 1698 "parser.cpp" /* yacc.c:1646  */
    break;

  case 60:
#line 131 "parser.y" /* yacc.c:1646  */
    { }
#line 1704 "parser.cpp" /* yacc.c:1646  */
    break;

  case 61:
#line 132 "parser.y" /* yacc.c:1646  */
    { }
#line 1710 "parser.cpp" /* yacc.c:1646  */
    break;

  case 62:
#line 133 "parser.y" /* yacc.c:1646  */
    { }
#line 1716 "parser.cpp" /* yacc.c:1646  */
    break;

  case 71:
#line 146 "parser.y" /* yacc.c:1646  */
    { }
#line 1722 "parser.cpp" /* yacc.c:1646  */
    break;

  case 72:
#line 147 "parser.y" /* yacc.c:1646  */
    { }
#line 1728 "parser.cpp" /* yacc.c:1646  */
    break;


#line 1732 "parser.cpp" /* yacc.c:1646  */
=======
<<<<<<< HEAD
#line 1702 "parser.cpp" /* yacc.c:1646  */
=======
#line 1696 "parser.cpp" /* yacc.c:1646  */
>>>>>>> 411c3a392c0af2805a01b80f4949ee4b768aa411
    break;

  case 49:
#line 134 "parser.y" /* yacc.c:1646  */
    { }
#line 1702 "parser.cpp" /* yacc.c:1646  */
    break;

  case 50:
#line 135 "parser.y" /* yacc.c:1646  */
    { }
#line 1708 "parser.cpp" /* yacc.c:1646  */
    break;

  case 51:
#line 136 "parser.y" /* yacc.c:1646  */
    { }
#line 1714 "parser.cpp" /* yacc.c:1646  */
    break;

  case 52:
#line 137 "parser.y" /* yacc.c:1646  */
    { }
#line 1720 "parser.cpp" /* yacc.c:1646  */
    break;

  case 53:
#line 138 "parser.y" /* yacc.c:1646  */
    { }
#line 1726 "parser.cpp" /* yacc.c:1646  */
    break;

  case 54:
#line 139 "parser.y" /* yacc.c:1646  */
    { }
<<<<<<< HEAD
#line 1708 "parser.cpp" /* yacc.c:1646  */
=======
#line 1732 "parser.cpp" /* yacc.c:1646  */
>>>>>>> 411c3a392c0af2805a01b80f4949ee4b768aa411
    break;

  case 55:
#line 140 "parser.y" /* yacc.c:1646  */
    { }
<<<<<<< HEAD
#line 1714 "parser.cpp" /* yacc.c:1646  */
=======
#line 1738 "parser.cpp" /* yacc.c:1646  */
>>>>>>> 411c3a392c0af2805a01b80f4949ee4b768aa411
    break;

  case 56:
#line 141 "parser.y" /* yacc.c:1646  */
    { }
<<<<<<< HEAD
#line 1720 "parser.cpp" /* yacc.c:1646  */
    break;

  case 61:
#line 139 "parser.y" /* yacc.c:1646  */
    { }
#line 1726 "parser.cpp" /* yacc.c:1646  */
    break;

  case 62:
#line 140 "parser.y" /* yacc.c:1646  */
    { }
#line 1732 "parser.cpp" /* yacc.c:1646  */
=======
#line 1744 "parser.cpp" /* yacc.c:1646  */
    break;

  case 57:
#line 144 "parser.y" /* yacc.c:1646  */
    { (yyval.astNode) = (yyvsp[0].astNode); }
#line 1750 "parser.cpp" /* yacc.c:1646  */
    break;

  case 58:
#line 145 "parser.y" /* yacc.c:1646  */
    { (yyval.astNode) = (yyvsp[0].astNode); }
#line 1756 "parser.cpp" /* yacc.c:1646  */
>>>>>>> 411c3a392c0af2805a01b80f4949ee4b768aa411
    break;

  case 59:
#line 148 "parser.y" /* yacc.c:1646  */
    { }
<<<<<<< HEAD
#line 1738 "parser.cpp" /* yacc.c:1646  */
=======
#line 1762 "parser.cpp" /* yacc.c:1646  */
>>>>>>> 411c3a392c0af2805a01b80f4949ee4b768aa411
    break;

  case 60:
#line 149 "parser.y" /* yacc.c:1646  */
    { }
<<<<<<< HEAD
#line 1744 "parser.cpp" /* yacc.c:1646  */
    break;

  case 112:
#line 242 "parser.y" /* yacc.c:1646  */
=======
#line 1768 "parser.cpp" /* yacc.c:1646  */
    break;

  case 100:
#line 236 "parser.y" /* yacc.c:1646  */
    {
                                                                        (yyval.astNode) = new FunctionCall((yyvsp[-3].astNode));
                                                                        std::string nname = "iden" + std::to_string(n_nodes);
                                                                        ++n_nodes;
                                                                        (yyvsp[-3].astNode)->name=nname;
                                                                        (yyval.astNode)->add((yyvsp[-3].astNode));
                                                                        (yyval.astNode)->add((yyvsp[-1].astNode));
                                                                  }
#line 1781 "parser.cpp" /* yacc.c:1646  */
    break;

  case 102:
#line 247 "parser.y" /* yacc.c:1646  */
>>>>>>> 411c3a392c0af2805a01b80f4949ee4b768aa411
    {
                  std::string name = "function" + std::to_string(n_nodes);
                  ++n_nodes;
                  IdentifierNode* idFunc = dynamic_cast<IdentifierNode*>((yyvsp[-5].astNode));
                  (yyval.astNode) = new FunctionNode(idFunc->value);
                  (yyval.astNode)->add((yyvsp[-3].astNode));
                  (yyval.astNode)->add((yyvsp[0].astNode));
            }
<<<<<<< HEAD
#line 1782 "parser.cpp" /* yacc.c:1646  */
    break;

  case 105:
#line 251 "parser.y" /* yacc.c:1646  */
    {
            (yyval.astNode) = (yyvsp[-1].astNode);
      }
#line 1790 "parser.cpp" /* yacc.c:1646  */
    break;

  case 106:
#line 255 "parser.y" /* yacc.c:1646  */
    { (yyval.astNode) = NULL; }
#line 1796 "parser.cpp" /* yacc.c:1646  */
    break;


#line 1775 "parser.cpp" /* yacc.c:1646  */
=======
#line 1794 "parser.cpp" /* yacc.c:1646  */
    break;

  case 103:
#line 256 "parser.y" /* yacc.c:1646  */
    { 
                                                (yyval.astNode) = new BlockNode("functionBlock");
                                                (yyval.astNode)->add((yyvsp[-1].astNode));
                                          }
#line 1803 "parser.cpp" /* yacc.c:1646  */
    break;

  case 104:
#line 262 "parser.y" /* yacc.c:1646  */
    { 
                                    std::string nname = "Args" + std::to_string(n_nodes);
                                    ++n_nodes;
                                    (yyval.astNode) = new EmptyNode(nname); 
                              }
#line 1813 "parser.cpp" /* yacc.c:1646  */
    break;

  case 109:
#line 273 "parser.y" /* yacc.c:1646  */
    {
                                    std::string nname = "iden" + std::to_string(n_nodes);
                                    ++n_nodes;
                                    (yyvsp[0].astNode)->name=nname;
                                    (yyval.astNode) = (yyvsp[0].astNode);
                              }
#line 1824 "parser.cpp" /* yacc.c:1646  */
    break;

  case 110:
#line 279 "parser.y" /* yacc.c:1646  */
    { (yyval.astNode) = new MemberExpression((yyvsp[-1].astNode), (yyvsp[0].astNode)); }
#line 1830 "parser.cpp" /* yacc.c:1646  */
    break;

  case 111:
#line 280 "parser.y" /* yacc.c:1646  */
    { (yyval.astNode) = new MemberExpression((yyvsp[-1].astNode), (yyvsp[0].astNode)); (yyval.astNode)->add((yyvsp[0].astNode)); }
#line 1836 "parser.cpp" /* yacc.c:1646  */
    break;


#line 1840 "parser.cpp" /* yacc.c:1646  */
>>>>>>> 411c3a392c0af2805a01b80f4949ee4b768aa411
>>>>>>> main
      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
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

  /* Do not reclaim the symbols of the rule whose action triggered
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
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
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

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


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

#if !defined yyoverflow || YYERROR_VERBOSE
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
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
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
  return yyresult;
}
<<<<<<< HEAD
#line 305 "parser.y" /* yacc.c:1906  */


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

      // AST is constructed, you can print it now
=======
#line 333 "parser.y" /* yacc.c:1906  */


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
>>>>>>> main
      if (root != NULL) {
            AST ast(root);
            ast.Print();
      }
      return 0;
}

<<<<<<< HEAD

void yyerror(const char* s) {
    std::cerr << "Parser error: " << s << std::endl;
=======
void yyerror(const char *msg) {
      printf(" %s \n", msg);
>>>>>>> main
}
