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
    UMINUS = 346
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE YYSTYPE;
union YYSTYPE
{
#line 6 "parser.y" /* yacc.c:355  */

	AstNode* astNode;

#line 211 "parser.cpp" /* yacc.c:355  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_PARSER_HPP_INCLUDED  */

/* Copy the second part of user declarations.  */
#line 9 "parser.y" /* yacc.c:358  */

      extern int yylex();
      extern int yyparse();
      extern FILE *yyin;
      void yyerror(const char *);
      AstNode* root = NULL;
      int n_nodes = 0;

#line 234 "parser.cpp" /* yacc.c:358  */

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
#define YYLAST   468

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  98
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  46
/* YYNRULES -- Number of rules.  */
#define YYNRULES  139
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  274

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   346

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
       2,     2,    93,    91,     2,    92,    97,    94,     2,     2,
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
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
<<<<<<< HEAD
       0,    51,    51,    55,    56,    66,    70,    76,    77,    78,
      79,    80,    83,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    93,    94,    95,    96,    99,   100,   101,   102,
     103,   104,   105,   109,   114,   120,   125,   131,   140,   148,
     151,   154,   157,   160,   163,   166,   170,   171,   172,   173,
     174,   175,   176,   177,   180,   181,   184,   189,   197,   202,
     209,   216,   221,   225,   230,   238,   245,   252,   255,   261,
     269,   273,   280,   288,   292,   296,   301,   306,   314,   321,
     326,   332,   341,   348,   349,   352,   360,   361,   364,   371,
     379,   383,   390,   394,   398,   402,   409,   415,   423,   430,
     437,   441,   448,   452,   456,   462,   465,   470,   477,   478,
     481,   484,   487,   490,   493,   496,   499,   502,   505,   506,
     509,   515,   519,   523,   526,   531,   534,   540,   546,   554,
     561,   567,   575,   576,   577,   578,   579,   580,   583,   589
=======
       0,    51,    51,    55,    56,    66,    70,    74,    80,    81,
      82,    83,    84,    87,    88,    89,    90,    91,    92,    93,
      94,    95,    96,    97,    98,    99,   100,   103,   104,   105,
     106,   107,   108,   109,   113,   118,   124,   129,   135,   144,
     152,   155,   158,   161,   164,   167,   170,   174,   175,   176,
     177,   178,   179,   180,   181,   182,   185,   186,   189,   194,
     202,   207,   214,   221,   226,   230,   235,   243,   250,   257,
     260,   266,   274,   277,   284,   292,   296,   300,   305,   310,
     318,   325,   330,   336,   345,   352,   356,   361,   369,   370,
     373,   381,   391,   395,   400,   404,   408,   413,   419,   427,
     434,   442,   446,   451,   456,   461,   468,   473,   480,   487,
     488,   491,   494,   497,   500,   503,   506,   509,   512,   515,
     516,   519,   525,   529,   533,   536,   541,   544,   550,   556,
     564,   571,   577,   585,   592,   599,   606,   613,   621,   632,
     638
>>>>>>> bc6b282237893be9c9804cb3f37b2539f5959754
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
  "KEYWORD_MATCH", "KEYWORD_CASE", "'+'", "'-'", "'*'", "'/'", "'|'",
  "UMINUS", "'.'", "$accept", "prog", "statements", "statement",
  "simple_statement", "compound_statement", "import_statment",
  "assignment", "expression", "number", "del_statment", "return_statement",
  "yield_statement", "assert_statement", "raise_statement",
  "global_statement", "nonlocal_statement", "global_nonlocal_targets",
  "match_statement", "match_block", "case", "try_statement", "try",
  "except", "finally", "except_statements", "with", "with_statements",
  "class", "class_block", "class_body", "function_call", "function",
<<<<<<< HEAD
  "block", "args", "arg", "member_expression", "logical_expression",
=======
  "block", "args", "member_expression", "logical_expression",
>>>>>>> bc6b282237893be9c9804cb3f37b2539f5959754
  "conditional_statement", "elif_else", "elif_stmts", "if_statement",
  "else_statement", "elif_statement", "for_statement", "while_statement", YY_NULL
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
     345,    43,    45,    42,    47,   124,   346,    46
};
# endif

#define YYPACT_NINF -211

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-211)))

#define YYTABLE_NINF -109

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -82,  -211,    37,  -211,   379,   -21,   162,    51,  -211,  -211,
      56,    70,   179,  -211,     3,    15,    75,    51,    99,   259,
     179,   125,    99,    56,    81,  -211,  -211,  -211,   135,  -211,
    -211,  -211,  -211,  -211,  -211,  -211,  -211,  -211,  -211,  -211,
    -211,  -211,  -211,    73,  -211,  -211,  -211,  -211,    18,  -211,
     108,  -211,  -211,    56,  -211,  -211,  -211,  -211,  -211,   179,
      81,   179,  -211,  -211,    81,   390,  -211,  -211,   137,   -13,
    -211,    22,   -21,   101,    26,    81,   249,     4,   123,  -211,
      59,    78,    30,    66,  -211,   179,   -11,    -3,   147,  -211,
     -42,   122,   173,    77,    12,    79,  -211,  -211,   112,   -21,
      81,  -211,    80,   265,  -211,   108,  -211,  -211,    86,    87,
      81,     4,   173,   383,    -1,   173,    81,    81,    81,    81,
      81,    81,    81,    81,    81,    81,    81,    81,   179,   179,
      59,   158,   161,  -211,    83,   276,   133,    98,    88,  -211,
    -211,    24,    99,     6,    59,   169,  -211,    59,    56,   185,
     104,    59,     5,    59,  -211,  -211,   168,   173,    59,   179,
      14,  -211,  -211,  -211,  -211,    81,   130,  -211,   113,   173,
     173,   173,   173,   173,   173,   173,   173,   173,   173,   173,
     173,     4,     4,  -211,  -211,  -211,   119,   109,   118,   120,
      16,   178,  -211,   129,   177,  -211,  -211,   132,  -211,  -211,
    -211,   181,  -211,   144,  -211,   200,    59,  -211,  -211,  -211,
      76,    59,  -211,    59,   143,  -211,    59,    59,    59,   -32,
      56,   339,   151,   210,    59,   228,   145,   155,  -211,   163,
    -211,  -211,   154,   153,    -5,  -211,  -211,  -211,    59,   239,
     167,  -211,    59,  -211,  -211,  -211,    81,    36,  -211,    59,
      59,   156,  -211,    -5,  -211,  -211,  -211,  -211,   170,    59,
    -211,   237,  -211,  -211,  -211,  -211,  -211,    59,  -211,    59,
     166,  -211,  -211,  -211
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       2,     3,     5,     1,     4,   105,     0,     0,    23,    24,
       0,     0,     0,    25,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    10,    11,     9,     0,     6,
       8,     7,    20,    12,    19,    13,    14,    15,    16,    17,
      18,    31,    32,     0,    22,    28,    21,    26,     0,    27,
     121,    29,    30,   102,    48,    53,   119,   118,    49,     0,
       0,     0,    54,    55,     0,   108,    50,    52,    51,     0,
     105,    33,     0,    63,     0,     0,    58,    59,     0,   102,
       0,     0,     0,    67,    66,     0,     0,    61,    56,    65,
       0,     0,    60,     0,     0,     0,    84,    73,    74,   106,
       0,   107,     0,     0,   120,   123,   124,   125,     0,   102,
     101,   117,    47,   108,     0,    45,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   102,     0,     0,     0,   102,     0,    78,
     102,     0,     0,     0,     0,     0,    57,     0,     0,     0,
       0,     0,     0,     0,    83,    75,    76,    38,     0,     0,
       0,   122,   126,    97,    96,   100,   103,    46,     0,    39,
      40,    41,    42,    43,    44,   113,   114,   110,   109,   112,
     111,   115,   116,   127,    36,    64,   102,     0,     0,     0,
       0,     0,     5,   102,    34,    35,    68,     0,   138,    62,
      85,     0,    86,     0,    79,     0,     0,    82,    77,   129,
       0,     0,   104,     0,     0,    92,     0,     0,     0,   107,
       0,     0,     0,     0,     0,     0,     0,     0,    80,     0,
     130,   128,     0,    92,    91,   133,   132,   135,     0,     0,
       0,    99,     0,    37,   139,    87,     0,     0,    71,     0,
       0,     0,    89,    90,    95,    94,    93,   136,     0,     0,
      98,     0,    69,    70,    81,   131,    92,     0,   134,     0,
      92,   137,    72,    88
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -211,  -211,    61,  -211,  -211,  -211,  -211,  -208,    -8,  -211,
    -211,  -211,  -211,  -211,  -211,  -211,  -211,   -17,  -211,  -211,
       8,  -211,  -211,   164,   -84,  -211,  -211,  -211,  -211,   -10,
    -210,    -2,  -190,    -9,   -69,  -102,    -4,     0,  -211,  -211,
    -211,  -211,     1,   174,  -211,  -211
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     4,    29,    30,    31,    32,    33,    65,    66,
      34,    35,    36,    37,    38,    39,    40,    84,    41,   247,
     248,    42,    43,    96,    97,    98,    44,    90,    45,   233,
     234,    67,    47,   139,   109,   110,    68,    69,    49,   104,
     105,    50,   106,   107,    51,    52
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      48,    70,    46,    71,    76,    89,     1,   165,    73,    78,
     137,    99,    77,    82,   155,   128,    92,   128,    70,    86,
      87,    91,    99,   253,    99,   128,   255,   128,    99,    16,
     194,   129,   128,   129,   128,   165,    99,     3,   205,   147,
     148,   129,   128,   129,   256,   255,   101,   141,   129,   238,
     129,   108,   112,   113,    53,   131,   115,    70,   129,   111,
     253,   114,    72,   256,   186,   239,   101,   135,   130,   101,
     144,   193,   208,   100,   195,   168,    74,   113,    79,   145,
     101,    81,   197,   254,   165,   143,   206,     5,    54,    55,
     152,   165,   157,   151,    94,   211,    80,   218,    95,   156,
      58,   133,   166,   160,   128,    83,   161,   134,   169,   170,
     171,   172,   173,   174,   175,   176,   177,   178,   179,   180,
     129,   183,   262,   102,   103,   196,   246,   102,   181,   182,
      60,    88,   190,    94,   189,   198,   132,    95,   200,     5,
     188,    93,   204,    99,   207,   136,   201,   138,   142,   209,
     101,   113,   229,   140,   146,   149,    75,   166,   150,   210,
     153,   158,   163,   164,   184,    62,    63,   185,     5,    54,
      55,   187,    56,    57,   191,   192,    64,   199,   116,   117,
     118,    58,   119,   120,   121,     5,    54,    55,   219,    56,
      57,   202,   203,    95,   213,   214,   215,   228,    58,   216,
     220,   217,   230,    59,   231,   222,   227,   235,   236,   237,
     223,    60,   212,   224,   225,   244,   243,    48,   240,    46,
      59,   116,   117,   118,   232,   119,   120,   121,    60,   257,
      48,   226,   242,   260,   245,   246,   249,    61,   261,   252,
     264,   265,   251,   266,   250,   258,    62,    63,   259,    48,
     268,   267,   273,   221,    75,   263,   270,    64,   271,     0,
     272,     0,   154,    62,    63,     5,    54,    55,     0,    56,
      57,     5,    54,    55,    64,    56,    57,  -108,    58,   162,
       0,     0,     0,     0,    58,   116,   117,   118,     0,   119,
     120,   121,     0,  -108,     0,     0,     0,   116,   117,   118,
      59,   119,   120,   121,     0,     0,    59,     0,    60,     0,
       0,     0,     0,     0,    60,     0,     0,   122,   269,   123,
     124,   125,   126,   127,   116,   117,   118,     0,   119,   120,
     121,     0,     0,     0,    85,     0,     0,     0,     0,     0,
     159,     0,     0,    62,    63,     5,     0,     0,     0,    62,
      63,     0,   167,     6,    64,     0,     7,     8,     0,     9,
      64,     0,    10,    11,     0,     0,    12,     0,    13,    14,
       0,    15,     0,    16,    17,    18,    19,    20,    21,    22,
       0,    23,     0,     0,    24,     5,    25,     0,     0,     0,
      26,     0,     0,     6,     0,     0,     7,     8,     0,     9,
       0,     0,    10,    11,     0,     0,    12,     0,    13,    14,
       0,    15,     0,    16,    17,    18,    19,    20,    21,    22,
       0,    23,     0,     0,    24,   241,    25,    27,    28,     0,
      26,   116,   117,   118,     0,   119,   120,   121,   116,   117,
     118,     0,   119,   120,   121,     0,     0,     0,     0,     0,
       0,   122,     0,   123,   124,   125,   126,   127,   122,   167,
     123,   124,   125,   126,   127,     0,     0,    27,    28
};

static const yytype_int16 yycheck[] =
{
       4,     6,     4,     7,    12,    22,    88,   109,    10,     6,
      79,     6,    12,    17,    98,    28,    24,    28,     6,    19,
      20,    23,     6,   233,     6,    28,   234,    28,     6,    34,
       6,    44,    28,    44,    28,   137,     6,     0,    33,    81,
      82,    44,    28,    44,   234,   253,    48,    17,    44,    81,
      44,    53,    60,    61,    75,    33,    64,     6,    44,    59,
     270,    61,     6,   253,   133,    97,    68,    75,    81,    71,
      81,   140,   156,    55,    50,    76,     6,    85,    75,    82,
      82,     6,    76,    88,   186,    85,    81,     6,     7,     8,
      94,   193,   100,    81,    21,    81,    81,    81,    25,    98,
      19,    75,   110,   103,    28,     6,   105,    81,   116,   117,
     118,   119,   120,   121,   122,   123,   124,   125,   126,   127,
      44,   130,    86,    15,    16,   142,    90,    15,   128,   129,
      49,     6,   136,    21,   136,   144,    35,    25,   147,     6,
       7,     6,   151,     6,   153,    22,   148,    88,    82,   158,
     152,   159,    76,    75,     7,    33,    75,   165,    81,   159,
      81,    81,    76,    76,     6,    84,    85,     6,     6,     7,
       8,    88,    10,    11,    76,    87,    95,     8,    48,    49,
      50,    19,    52,    53,    54,     6,     7,     8,   190,    10,
      11,     6,    88,    25,    81,    76,    87,   206,    19,    81,
      22,    81,   211,    41,   213,    76,     6,   216,   217,   218,
      33,    49,    82,    81,    33,   224,     6,   221,   220,   221,
      41,    48,    49,    50,    81,    52,    53,    54,    49,   238,
     234,    87,    81,   242,     6,    90,    81,    75,   246,    86,
     249,   250,    88,    87,    81,     6,    84,    85,    81,   253,
     259,    81,    86,   192,    75,   247,   266,    95,   267,    -1,
     269,    -1,    98,    84,    85,     6,     7,     8,    -1,    10,
      11,     6,     7,     8,    95,    10,    11,    28,    19,   105,
      -1,    -1,    -1,    -1,    19,    48,    49,    50,    -1,    52,
      53,    54,    -1,    44,    -1,    -1,    -1,    48,    49,    50,
      41,    52,    53,    54,    -1,    -1,    41,    -1,    49,    -1,
      -1,    -1,    -1,    -1,    49,    -1,    -1,    68,    81,    70,
      71,    72,    73,    74,    48,    49,    50,    -1,    52,    53,
      54,    -1,    -1,    -1,    75,    -1,    -1,    -1,    -1,    -1,
      75,    -1,    -1,    84,    85,     6,    -1,    -1,    -1,    84,
      85,    -1,    76,    14,    95,    -1,    17,    18,    -1,    20,
      95,    -1,    23,    24,    -1,    -1,    27,    -1,    29,    30,
      -1,    32,    -1,    34,    35,    36,    37,    38,    39,    40,
      -1,    42,    -1,    -1,    45,     6,    47,    -1,    -1,    -1,
      51,    -1,    -1,    14,    -1,    -1,    17,    18,    -1,    20,
      -1,    -1,    23,    24,    -1,    -1,    27,    -1,    29,    30,
      -1,    32,    -1,    34,    35,    36,    37,    38,    39,    40,
      -1,    42,    -1,    -1,    45,    86,    47,    88,    89,    -1,
      51,    48,    49,    50,    -1,    52,    53,    54,    48,    49,
      50,    -1,    52,    53,    54,    -1,    -1,    -1,    -1,    -1,
      -1,    68,    -1,    70,    71,    72,    73,    74,    68,    76,
      70,    71,    72,    73,    74,    -1,    -1,    88,    89
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    88,    99,     0,   100,     6,    14,    17,    18,    20,
      23,    24,    27,    29,    30,    32,    34,    35,    36,    37,
      38,    39,    40,    42,    45,    47,    51,    88,    89,   101,
     102,   103,   104,   105,   108,   109,   110,   111,   112,   113,
     114,   116,   119,   120,   124,   126,   129,   130,   134,   136,
     139,   142,   143,    75,     7,     8,    10,    11,    19,    41,
      49,    75,    84,    85,    95,   106,   107,   129,   134,   135,
       6,   134,     6,   129,     6,    75,   106,   135,     6,    75,
      81,     6,   134,     6,   115,    75,   135,   135,     6,   115,
     125,   129,   106,     6,    21,    25,   121,   122,   123,     6,
      55,   129,    15,    16,   137,   138,   140,   141,   129,   132,
     133,   135,   106,   106,   135,   106,    48,    49,    50,    52,
      53,    54,    68,    70,    71,    72,    73,    74,    28,    44,
      81,    33,    35,    75,    81,   106,    22,   132,    88,   131,
      75,    17,    82,   135,    81,    82,     7,    81,    82,    33,
      81,    81,   134,    81,   121,   122,   140,   106,    81,    75,
     135,   140,   141,    76,    76,   133,   106,    76,    76,   106,
     106,   106,   106,   106,   106,   106,   106,   106,   106,   106,
     106,   135,   135,   131,     6,     6,   132,    88,     7,   129,
     134,    76,    87,   132,     6,    50,   115,    76,   131,     8,
     131,   129,     6,    88,   131,    33,    81,   131,   122,   131,
     135,    81,    82,    81,    76,    87,    81,    81,    81,   129,
      22,   100,    76,    33,    81,    33,    87,     6,   131,    76,
     131,   131,    81,   127,   128,   131,   131,   131,    81,    97,
     129,    86,    81,     6,   131,     6,    90,   117,   118,    81,
      81,    88,    86,   128,    88,   105,   130,   131,     6,    81,
     131,   106,    86,   118,   131,   131,    87,    81,   131,    81,
     127,   131,   131,    86
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    98,    99,    99,    99,   100,   100,   101,   101,   101,
     101,   101,   102,   102,   102,   102,   102,   102,   102,   102,
     102,   102,   102,   102,   102,   102,   103,   103,   103,   103,
     103,   103,   103,   104,   104,   104,   104,   104,   105,   106,
     106,   106,   106,   106,   106,   106,   106,   106,   106,   106,
     106,   106,   106,   106,   107,   107,   108,   108,   109,   109,
     110,   111,   111,   112,   112,   113,   114,   115,   115,   116,
     117,   117,   118,   119,   119,   119,   119,   119,   120,   121,
     121,   121,   122,   123,   123,   124,   125,   125,   126,   126,
     127,   127,   128,   128,   128,   128,   129,   129,   130,   131,
     132,   132,   133,   133,   133,   134,   134,   134,   135,   135,
     135,   135,   135,   135,   135,   135,   135,   135,   135,   135,
     136,   137,   137,   137,   137,   138,   138,   139,   139,   140,
     141,   141,   142,   142,   142,   142,   142,   142,   143,   143
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     1,     2,     0,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     2,     4,     4,     4,     6,     3,     3,
       3,     3,     3,     3,     3,     2,     3,     2,     1,     1,
       1,     1,     1,     1,     1,     1,     2,     3,     2,     2,
       2,     2,     4,     2,     4,     2,     2,     1,     3,     7,
       2,     1,     4,     2,     2,     3,     3,     4,     3,     3,
       4,     6,     3,     2,     1,     4,     3,     5,    10,     7,
       2,     1,     0,     2,     2,     2,     4,     4,     7,     4,
       2,     1,     0,     2,     3,     1,     2,     2,     1,     3,
       3,     3,     3,     3,     3,     3,     3,     2,     1,     1,
       2,     0,     2,     1,     1,     1,     2,     4,     6,     3,
       4,     6,     6,     6,     8,     6,     7,     9,     4,     6
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
#line 51 "parser.y" /* yacc.c:1646  */
    { 
            std::string name = "Program" + std::to_string(++n_nodes);
            (yyval.astNode) = new EmptyNode(name); 
      }
#line 1551 "parser.cpp" /* yacc.c:1646  */
    break;

  case 3:
#line 55 "parser.y" /* yacc.c:1646  */
    { }
#line 1557 "parser.cpp" /* yacc.c:1646  */
    break;

  case 4:
#line 56 "parser.y" /* yacc.c:1646  */
    {     
            std::string name = "Program" + std::to_string(++n_nodes);
            (yyval.astNode) = new StatementsNode(name);
            (yyval.astNode)->add((yyvsp[-1].astNode));
            (yyval.astNode)->add((yyvsp[0].astNode));
            root = (yyval.astNode);
            YYACCEPT;
      }
#line 1570 "parser.cpp" /* yacc.c:1646  */
    break;

  case 5:
#line 66 "parser.y" /* yacc.c:1646  */
    {
                  std::string name = "Statement" + std::to_string(++n_nodes);
                  (yyval.astNode) = new StatementsNode(name);
            }
#line 1579 "parser.cpp" /* yacc.c:1646  */
    break;

  case 6:
#line 70 "parser.y" /* yacc.c:1646  */
    { 
                  (yyvsp[-1].astNode)->add((yyvsp[0].astNode));
                  (yyval.astNode) = (yyvsp[-1].astNode); 
            }
#line 1588 "parser.cpp" /* yacc.c:1646  */
    break;

  case 7:
#line 76 "parser.y" /* yacc.c:1646  */
    { (yyval.astNode) = (yyvsp[0].astNode); }
#line 1594 "parser.cpp" /* yacc.c:1646  */
    break;

  case 8:
#line 77 "parser.y" /* yacc.c:1646  */
    { (yyval.astNode) = (yyvsp[0].astNode); }
#line 1600 "parser.cpp" /* yacc.c:1646  */
    break;

  case 12:
#line 83 "parser.y" /* yacc.c:1646  */
    { (yyval.astNode) = (yyvsp[0].astNode); }
#line 1606 "parser.cpp" /* yacc.c:1646  */
    break;

  case 13:
#line 84 "parser.y" /* yacc.c:1646  */
    { (yyval.astNode) = (yyvsp[0].astNode); }
#line 1612 "parser.cpp" /* yacc.c:1646  */
    break;

  case 14:
#line 85 "parser.y" /* yacc.c:1646  */
    { (yyval.astNode) = (yyvsp[0].astNode); }
#line 1618 "parser.cpp" /* yacc.c:1646  */
    break;

  case 15:
#line 86 "parser.y" /* yacc.c:1646  */
    { (yyval.astNode) = (yyvsp[0].astNode); }
#line 1624 "parser.cpp" /* yacc.c:1646  */
    break;

  case 16:
#line 87 "parser.y" /* yacc.c:1646  */
    { (yyval.astNode) = (yyvsp[0].astNode); }
#line 1630 "parser.cpp" /* yacc.c:1646  */
    break;

  case 17:
#line 88 "parser.y" /* yacc.c:1646  */
    { (yyval.astNode) = (yyvsp[0].astNode); }
#line 1636 "parser.cpp" /* yacc.c:1646  */
    break;

  case 18:
#line 89 "parser.y" /* yacc.c:1646  */
    { (yyval.astNode) = (yyvsp[0].astNode); }
#line 1642 "parser.cpp" /* yacc.c:1646  */
    break;

  case 19:
#line 90 "parser.y" /* yacc.c:1646  */
    { (yyval.astNode) = (yyvsp[0].astNode); }
#line 1648 "parser.cpp" /* yacc.c:1646  */
    break;

  case 20:
#line 91 "parser.y" /* yacc.c:1646  */
    { (yyval.astNode) = (yyvsp[0].astNode); }
#line 1654 "parser.cpp" /* yacc.c:1646  */
    break;

  case 21:
#line 92 "parser.y" /* yacc.c:1646  */
    { (yyval.astNode) = (yyvsp[0].astNode); }
#line 1660 "parser.cpp" /* yacc.c:1646  */
    break;

  case 22:
#line 93 "parser.y" /* yacc.c:1646  */
    { (yyval.astNode) = (yyvsp[0].astNode); }
#line 1666 "parser.cpp" /* yacc.c:1646  */
    break;

  case 26:
#line 99 "parser.y" /* yacc.c:1646  */
    { (yyval.astNode) = (yyvsp[0].astNode); }
#line 1672 "parser.cpp" /* yacc.c:1646  */
    break;

  case 27:
#line 100 "parser.y" /* yacc.c:1646  */
    { (yyval.astNode) = (yyvsp[0].astNode); }
#line 1678 "parser.cpp" /* yacc.c:1646  */
    break;

  case 33:
#line 109 "parser.y" /* yacc.c:1646  */
    {
                        std::string name = "Import" + std::to_string(++n_nodes);
                        (yyval.astNode) = new ImportNode(name);
                        (yyval.astNode)->add((yyvsp[0].astNode));
                  }
#line 1688 "parser.cpp" /* yacc.c:1646  */
    break;

  case 34:
#line 114 "parser.y" /* yacc.c:1646  */
    {
                        std::string name = "Import" + std::to_string(++n_nodes);
                        (yyval.astNode) = new ImportNode(name);
                        (yyval.astNode)->add((yyvsp[-2].astNode));
                        (yyval.astNode)->add((yyvsp[0].astNode));
                  }
#line 1699 "parser.cpp" /* yacc.c:1646  */
    break;

  case 35:
#line 120 "parser.y" /* yacc.c:1646  */
    {
                        std::string name = "Import" + std::to_string(++n_nodes);
                        (yyval.astNode) = new ImportNode(name);
                        (yyval.astNode)->add((yyvsp[-2].astNode));
                  }
#line 1709 "parser.cpp" /* yacc.c:1646  */
    break;

  case 36:
#line 125 "parser.y" /* yacc.c:1646  */
    {
                        std::string name = "Import" + std::to_string(++n_nodes);
                        (yyval.astNode) = new ImportNode(name);
                        (yyval.astNode)->add((yyvsp[-2].astNode));
                        (yyval.astNode)->add((yyvsp[0].astNode));
                  }
#line 1720 "parser.cpp" /* yacc.c:1646  */
    break;

  case 37:
#line 131 "parser.y" /* yacc.c:1646  */
    {
                        std::string name = "Import" + std::to_string(++n_nodes);
                        (yyval.astNode) = new ImportNode(name);
                        (yyval.astNode)->add((yyvsp[-4].astNode));
                        (yyval.astNode)->add((yyvsp[-2].astNode));
                        (yyval.astNode)->add((yyvsp[0].astNode));
                  }
#line 1732 "parser.cpp" /* yacc.c:1646  */
    break;

  case 38:
#line 140 "parser.y" /* yacc.c:1646  */
    {  
                  std::string name = "assignment" + std::to_string(++n_nodes);
                  (yyval.astNode) = new AssignmentStatement(name);
                  (yyval.astNode)->add((yyvsp[-2].astNode));
                  (yyval.astNode)->add((yyvsp[0].astNode));
            }
#line 1743 "parser.cpp" /* yacc.c:1646  */
    break;

  case 39:
#line 148 "parser.y" /* yacc.c:1646  */
    { 
                  (yyval.astNode) = new BinaryExpressionNode("+", (yyvsp[-2].astNode), (yyvsp[0].astNode));
            }
#line 1751 "parser.cpp" /* yacc.c:1646  */
    break;

  case 40:
#line 151 "parser.y" /* yacc.c:1646  */
    { 
                  (yyval.astNode) = new BinaryExpressionNode("-", (yyvsp[-2].astNode), (yyvsp[0].astNode));
            }
#line 1759 "parser.cpp" /* yacc.c:1646  */
    break;

  case 41:
#line 154 "parser.y" /* yacc.c:1646  */
    { 
                  (yyval.astNode) = new BinaryExpressionNode("*", (yyvsp[-2].astNode), (yyvsp[0].astNode));
            }
#line 1767 "parser.cpp" /* yacc.c:1646  */
    break;

  case 42:
#line 157 "parser.y" /* yacc.c:1646  */
    { 
                  (yyval.astNode) = new BinaryExpressionNode("/", (yyvsp[-2].astNode), (yyvsp[0].astNode));
            }
#line 1775 "parser.cpp" /* yacc.c:1646  */
    break;

  case 43:
#line 160 "parser.y" /* yacc.c:1646  */
    { 
                  (yyval.astNode) = new BinaryExpressionNode("**", (yyvsp[-2].astNode), (yyvsp[0].astNode));
            }
#line 1783 "parser.cpp" /* yacc.c:1646  */
    break;

  case 44:
#line 163 "parser.y" /* yacc.c:1646  */
    {
                  (yyval.astNode) = new BinaryExpressionNode("%", (yyvsp[-2].astNode), (yyvsp[0].astNode));
            }
#line 1791 "parser.cpp" /* yacc.c:1646  */
    break;

  case 45:
#line 166 "parser.y" /* yacc.c:1646  */
    { /*The rule for negation includes %prec UMINUS . The only operator in this rule is - , 
                                                      which has low precedence, but we want unary minus to have higher precedence than multiplication 
                                                      rather than lower. The %prec tells bison to use the precedence of UMINUS for this rule.*/
                                                }
#line 1800 "parser.cpp" /* yacc.c:1646  */
    break;

  case 46:
#line 170 "parser.y" /* yacc.c:1646  */
    {(yyval.astNode) = (yyvsp[-1].astNode); }
#line 1806 "parser.cpp" /* yacc.c:1646  */
    break;

  case 47:
#line 171 "parser.y" /* yacc.c:1646  */
    { }
#line 1812 "parser.cpp" /* yacc.c:1646  */
    break;

  case 50:
#line 174 "parser.y" /* yacc.c:1646  */
    { (yyval.astNode) = (yyvsp[0].astNode); }
#line 1818 "parser.cpp" /* yacc.c:1646  */
    break;

  case 51:
#line 175 "parser.y" /* yacc.c:1646  */
    { (yyval.astNode) = (yyvsp[0].astNode); }
#line 1824 "parser.cpp" /* yacc.c:1646  */
    break;

  case 52:
#line 176 "parser.y" /* yacc.c:1646  */
    { (yyval.astNode) = (yyvsp[0].astNode); }
#line 1830 "parser.cpp" /* yacc.c:1646  */
    break;

  case 53:
#line 177 "parser.y" /* yacc.c:1646  */
    { (yyval.astNode) = (yyvsp[0].astNode); }
#line 1836 "parser.cpp" /* yacc.c:1646  */
    break;

  case 54:
#line 180 "parser.y" /* yacc.c:1646  */
    { (yyval.astNode) = (yyvsp[0].astNode); }
#line 1842 "parser.cpp" /* yacc.c:1646  */
    break;

  case 55:
#line 181 "parser.y" /* yacc.c:1646  */
    { (yyval.astNode) = (yyvsp[0].astNode); }
#line 1848 "parser.cpp" /* yacc.c:1646  */
    break;

  case 56:
#line 184 "parser.y" /* yacc.c:1646  */
    {
                        std::string name = "Del" + std::to_string(++n_nodes);
                        (yyval.astNode) = new DelNode(name);
                        (yyval.astNode)->add((yyvsp[0].astNode));
                  }
#line 1858 "parser.cpp" /* yacc.c:1646  */
    break;

  case 57:
#line 189 "parser.y" /* yacc.c:1646  */
    { 
                        std::string name = "Del" + std::to_string(++n_nodes);
                        (yyval.astNode) = new DelNode(name);
                        (yyval.astNode)->add((yyvsp[-1].astNode));
                        (yyval.astNode)->add((yyvsp[0].astNode));
                  }
#line 1869 "parser.cpp" /* yacc.c:1646  */
    break;

  case 58:
#line 197 "parser.y" /* yacc.c:1646  */
    {
                        std::string name = "Return" + std::to_string(++n_nodes);
                        (yyval.astNode) = new ReturnNode(name);
                        (yyval.astNode)->add((yyvsp[0].astNode));
                  }
#line 1879 "parser.cpp" /* yacc.c:1646  */
    break;

  case 59:
#line 202 "parser.y" /* yacc.c:1646  */
    {
                        std::string name = "Return" + std::to_string(++n_nodes);
                        (yyval.astNode) = new ReturnNode(name);
                        (yyval.astNode)->add((yyvsp[0].astNode));
                  }
#line 1889 "parser.cpp" /* yacc.c:1646  */
    break;

  case 60:
#line 209 "parser.y" /* yacc.c:1646  */
    {
                        std::string name = "Yield" + std::to_string(++n_nodes);
                        (yyval.astNode) = new YieldNode(name);
                        (yyval.astNode)->add((yyvsp[0].astNode));
                  }
#line 1899 "parser.cpp" /* yacc.c:1646  */
    break;

  case 61:
#line 216 "parser.y" /* yacc.c:1646  */
    {
                        std::string name = "Assert" + std::to_string(++n_nodes);
                        (yyval.astNode) = new AssertNode(name);
                        (yyval.astNode)->add((yyvsp[0].astNode));
                  }
#line 1909 "parser.cpp" /* yacc.c:1646  */
    break;

  case 62:
#line 221 "parser.y" /* yacc.c:1646  */
    {
                  }
#line 1916 "parser.cpp" /* yacc.c:1646  */
    break;

  case 63:
#line 225 "parser.y" /* yacc.c:1646  */
    {
                        std::string name = "Raise" + std::to_string(++n_nodes);
                        (yyval.astNode) = new RaiseNode(name);
                        (yyval.astNode)->add((yyvsp[0].astNode));
                  }
#line 1926 "parser.cpp" /* yacc.c:1646  */
    break;

  case 64:
#line 230 "parser.y" /* yacc.c:1646  */
    {
                        std::string name = "Raise" + std::to_string(++n_nodes);
                        (yyval.astNode) = new RaiseNode(name);
                        (yyval.astNode)->add((yyvsp[-2].astNode));
                        (yyval.astNode)->add((yyvsp[0].astNode));
                  }
#line 1937 "parser.cpp" /* yacc.c:1646  */
    break;

  case 65:
#line 238 "parser.y" /* yacc.c:1646  */
    {
                        std::string name = "Global" + std::to_string(++n_nodes);
                        (yyval.astNode) = new GlobalNode(name);
                        (yyval.astNode)->add((yyvsp[0].astNode));
                  }
#line 1947 "parser.cpp" /* yacc.c:1646  */
    break;

  case 66:
#line 245 "parser.y" /* yacc.c:1646  */
    {
                        std::string name = "NonLocal" + std::to_string(++n_nodes);
                        (yyval.astNode) = new NonLocalNode(name);
                        (yyval.astNode)->add((yyvsp[0].astNode));
                  }
#line 1957 "parser.cpp" /* yacc.c:1646  */
    break;

  case 67:
#line 252 "parser.y" /* yacc.c:1646  */
    {
                              (yyval.astNode) = (yyvsp[0].astNode);
                        }
#line 1965 "parser.cpp" /* yacc.c:1646  */
    break;

  case 68:
#line 255 "parser.y" /* yacc.c:1646  */
    { 
                              (yyvsp[-2].astNode)->add((yyvsp[0].astNode));
                              (yyval.astNode) = (yyvsp[-2].astNode);
                        }
#line 1974 "parser.cpp" /* yacc.c:1646  */
    break;

  case 69:
#line 261 "parser.y" /* yacc.c:1646  */
    {
                        std::string name = dynamic_cast<IdentifierNode*>((yyvsp[-5].astNode))->value;
                        (yyval.astNode) = new MatchNode(name);
                        (yyval.astNode)->add((yyvsp[-5].astNode));
                        (yyval.astNode)->add((yyvsp[-1].astNode));
                  }
#line 1985 "parser.cpp" /* yacc.c:1646  */
    break;

  case 70:
#line 269 "parser.y" /* yacc.c:1646  */
    { 
                  (yyvsp[-1].astNode)->add((yyvsp[0].astNode));
                  (yyval.astNode) = (yyvsp[-1].astNode);
            }
#line 1994 "parser.cpp" /* yacc.c:1646  */
    break;

  case 71:
#line 273 "parser.y" /* yacc.c:1646  */
    {
                  std::string name = "MatchBlock" + std::to_string(++n_nodes);
                  (yyval.astNode) = new MatchBlock(name);
                  (yyval.astNode)->add((yyvsp[0].astNode));
            }
#line 2004 "parser.cpp" /* yacc.c:1646  */
    break;

<<<<<<< HEAD
  case 72:
#line 280 "parser.y" /* yacc.c:1646  */
=======
  case 74:
#line 284 "parser.y" /* yacc.c:1646  */
>>>>>>> bc6b282237893be9c9804cb3f37b2539f5959754
    {
            std::string name = "Case" + std::to_string(++n_nodes);
            (yyval.astNode) = new CaseNode(name);
            (yyval.astNode)->add((yyvsp[-2].astNode));
            (yyval.astNode)->add((yyvsp[0].astNode));
      }
#line 2015 "parser.cpp" /* yacc.c:1646  */
    break;

<<<<<<< HEAD
  case 73:
#line 288 "parser.y" /* yacc.c:1646  */
=======
  case 75:
#line 292 "parser.y" /* yacc.c:1646  */
    {
      (yyval.astNode)->add((yyvsp[-1].astNode));
      (yyval.astNode)->add((yyvsp[0].astNode));
}
#line 2060 "parser.cpp" /* yacc.c:1646  */
    break;

  case 76:
#line 296 "parser.y" /* yacc.c:1646  */
    {
      (yyval.astNode)->add((yyvsp[-1].astNode));
      (yyval.astNode)->add((yyvsp[0].astNode));
}
#line 2069 "parser.cpp" /* yacc.c:1646  */
    break;

  case 77:
#line 300 "parser.y" /* yacc.c:1646  */
    {
      (yyval.astNode)->add((yyvsp[-2].astNode));
      (yyval.astNode)->add((yyvsp[-1].astNode));
      (yyval.astNode)->add((yyvsp[0].astNode));
}
#line 2079 "parser.cpp" /* yacc.c:1646  */
    break;

  case 78:
#line 305 "parser.y" /* yacc.c:1646  */
    {
      (yyval.astNode)->add((yyvsp[-2].astNode));
      (yyval.astNode)->add((yyvsp[-1].astNode));
      (yyval.astNode)->add((yyvsp[0].astNode));
}
#line 2089 "parser.cpp" /* yacc.c:1646  */
    break;

  case 79:
#line 310 "parser.y" /* yacc.c:1646  */
    {
      (yyval.astNode)->add((yyvsp[-3].astNode));
      (yyval.astNode)->add((yyvsp[-2].astNode));
      (yyval.astNode)->add((yyvsp[-1].astNode));
      (yyval.astNode)->add((yyvsp[0].astNode));
}
#line 2100 "parser.cpp" /* yacc.c:1646  */
    break;

  case 80:
#line 318 "parser.y" /* yacc.c:1646  */
    {
                        std::string name = "Try" + std::to_string(++n_nodes);
                        (yyval.astNode) = new TryNode(name);
                        (yyval.astNode)->add((yyvsp[0].astNode));
                  }
#line 2110 "parser.cpp" /* yacc.c:1646  */
    break;

  case 81:
#line 325 "parser.y" /* yacc.c:1646  */
    {
                        std::string name = "Except" + std::to_string(++n_nodes);
                        (yyval.astNode) = new ExceptNode(name);
                        (yyval.astNode)->add((yyvsp[0].astNode));
                  }
#line 2120 "parser.cpp" /* yacc.c:1646  */
    break;

  case 82:
#line 330 "parser.y" /* yacc.c:1646  */
    {
                        std::string name = "Except" + std::to_string(++n_nodes);
                        (yyval.astNode) = new ExceptNode(name);
                        (yyval.astNode)->add((yyvsp[0].astNode));
                        (yyval.astNode)->add((yyvsp[-2].astNode));
                  }
#line 2131 "parser.cpp" /* yacc.c:1646  */
    break;

  case 83:
#line 336 "parser.y" /* yacc.c:1646  */
    {
                        std::string name = "Except" + std::to_string(++n_nodes);
                        (yyval.astNode) = new ExceptNode(name);
                        (yyval.astNode)->add((yyvsp[-2].astNode));
                        (yyval.astNode)->add((yyvsp[-4].astNode));
                        (yyval.astNode)->add((yyvsp[0].astNode));
                  }
#line 2143 "parser.cpp" /* yacc.c:1646  */
    break;

  case 84:
#line 345 "parser.y" /* yacc.c:1646  */
    {
                        std::string name = "Finally" + std::to_string(++n_nodes);
                        (yyval.astNode) = new FinallyNode(name);
                        (yyval.astNode)->add((yyvsp[0].astNode));
                  }
#line 2153 "parser.cpp" /* yacc.c:1646  */
    break;

  case 85:
#line 352 "parser.y" /* yacc.c:1646  */
    {
                  (yyvsp[-1].astNode)->add((yyvsp[0].astNode));
                  (yyval.astNode) = (yyvsp[-1].astNode);
}
#line 2162 "parser.cpp" /* yacc.c:1646  */
    break;

  case 86:
#line 356 "parser.y" /* yacc.c:1646  */
    {
                        (yyval.astNode) = (yyvsp[0].astNode);
                  }
#line 2170 "parser.cpp" /* yacc.c:1646  */
    break;

  case 87:
#line 361 "parser.y" /* yacc.c:1646  */
    {
                        std::string name = "With" + std::to_string(++n_nodes);
                        (yyval.astNode) = new WithNode(name);
                        (yyval.astNode)->add((yyvsp[-2].astNode));
                        (yyval.astNode)->add((yyvsp[0].astNode));
                  }
#line 2181 "parser.cpp" /* yacc.c:1646  */
    break;

  case 90:
#line 373 "parser.y" /* yacc.c:1646  */
>>>>>>> bc6b282237893be9c9804cb3f37b2539f5959754
    {
                        (yyval.astNode)->add((yyvsp[-1].astNode));
                        (yyval.astNode)->add((yyvsp[0].astNode));
                  }
<<<<<<< HEAD
#line 2024 "parser.cpp" /* yacc.c:1646  */
    break;

  case 74:
#line 292 "parser.y" /* yacc.c:1646  */
    {
                        (yyval.astNode)->add((yyvsp[-1].astNode));
                        (yyval.astNode)->add((yyvsp[0].astNode));
                  }
#line 2033 "parser.cpp" /* yacc.c:1646  */
    break;

  case 75:
#line 296 "parser.y" /* yacc.c:1646  */
    {
                        (yyval.astNode)->add((yyvsp[-2].astNode));
                        (yyval.astNode)->add((yyvsp[-1].astNode));
                        (yyval.astNode)->add((yyvsp[0].astNode));
                  }
#line 2043 "parser.cpp" /* yacc.c:1646  */
    break;

  case 76:
#line 301 "parser.y" /* yacc.c:1646  */
    {
                        (yyval.astNode)->add((yyvsp[-2].astNode));
                        (yyval.astNode)->add((yyvsp[-1].astNode));
                        (yyval.astNode)->add((yyvsp[0].astNode));
                  }
#line 2053 "parser.cpp" /* yacc.c:1646  */
    break;

  case 77:
#line 306 "parser.y" /* yacc.c:1646  */
    {
                        (yyval.astNode)->add((yyvsp[-3].astNode));
                        (yyval.astNode)->add((yyvsp[-2].astNode));
                        (yyval.astNode)->add((yyvsp[-1].astNode));
                        (yyval.astNode)->add((yyvsp[0].astNode));
                  }
#line 2064 "parser.cpp" /* yacc.c:1646  */
    break;

  case 78:
#line 314 "parser.y" /* yacc.c:1646  */
    {
            std::string name = "Try" + std::to_string(++n_nodes);
            (yyval.astNode) = new TryNode(name);
            (yyval.astNode)->add((yyvsp[0].astNode));
      }
#line 2074 "parser.cpp" /* yacc.c:1646  */
    break;

  case 79:
#line 321 "parser.y" /* yacc.c:1646  */
    {
            std::string name = "Except" + std::to_string(++n_nodes);
            (yyval.astNode) = new ExceptNode(name);
            (yyval.astNode)->add((yyvsp[0].astNode));
      }
#line 2084 "parser.cpp" /* yacc.c:1646  */
    break;

  case 80:
#line 326 "parser.y" /* yacc.c:1646  */
    {
            std::string name = "Except" + std::to_string(++n_nodes);
            (yyval.astNode) = new ExceptNode(name);
            (yyval.astNode)->add((yyvsp[0].astNode));
            (yyval.astNode)->add((yyvsp[-2].astNode));
      }
#line 2095 "parser.cpp" /* yacc.c:1646  */
    break;

  case 81:
#line 332 "parser.y" /* yacc.c:1646  */
    {
            std::string name = "Except" + std::to_string(++n_nodes);
            (yyval.astNode) = new ExceptNode(name);
            (yyval.astNode)->add((yyvsp[-2].astNode));
            (yyval.astNode)->add((yyvsp[-4].astNode));
            (yyval.astNode)->add((yyvsp[0].astNode));
      }
#line 2107 "parser.cpp" /* yacc.c:1646  */
    break;

  case 82:
#line 341 "parser.y" /* yacc.c:1646  */
    {
                  std::string name = "Finally" + std::to_string(++n_nodes);
                  (yyval.astNode) = new FinallyNode(name);
                  (yyval.astNode)->add((yyvsp[0].astNode));
            }
#line 2117 "parser.cpp" /* yacc.c:1646  */
    break;

  case 85:
#line 352 "parser.y" /* yacc.c:1646  */
    {
            std::string name = "With" + std::to_string(++n_nodes);
            (yyval.astNode) = new WithNode(name);
            (yyval.astNode)->add((yyvsp[-2].astNode));
            (yyval.astNode)->add((yyvsp[0].astNode));
      }
#line 2128 "parser.cpp" /* yacc.c:1646  */
    break;

  case 88:
#line 364 "parser.y" /* yacc.c:1646  */
    {
            std::string name = "classWithInheritance" + std::to_string(++n_nodes);
            (yyval.astNode) = new ClassNode(name);
            (yyval.astNode)->add((yyvsp[-8].astNode));
            (yyval.astNode)->add((yyvsp[-6].astNode));
            (yyval.astNode)->add((yyvsp[-1].astNode));
      }
#line 2140 "parser.cpp" /* yacc.c:1646  */
    break;

  case 89:
#line 371 "parser.y" /* yacc.c:1646  */
    {
            std::string name = "classWithoutInheritance" + std::to_string(++n_nodes);
            (yyval.astNode) = new ClassNode(name);
            (yyval.astNode)->add((yyvsp[-5].astNode));
            (yyval.astNode)->add((yyvsp[-1].astNode));
      }
#line 2151 "parser.cpp" /* yacc.c:1646  */
    break;

  case 90:
#line 379 "parser.y" /* yacc.c:1646  */
    {
                  (yyvsp[-1].astNode)->add((yyvsp[0].astNode));
                  (yyval.astNode) = (yyvsp[-1].astNode);
            }
#line 2160 "parser.cpp" /* yacc.c:1646  */
    break;

  case 91:
#line 383 "parser.y" /* yacc.c:1646  */
    {
                  std::string name = "ClassBlock" + std::to_string(++n_nodes);
                  (yyval.astNode) = new ClassBlock(name);
                  (yyval.astNode)->add((yyvsp[0].astNode));
            }
#line 2170 "parser.cpp" /* yacc.c:1646  */
    break;

  case 92:
#line 390 "parser.y" /* yacc.c:1646  */
    { 
                  std::string name = "Classbody" + std::to_string(++n_nodes);
                  (yyval.astNode) = new ClassBodyNode(name);
            }
#line 2179 "parser.cpp" /* yacc.c:1646  */
    break;

  case 93:
#line 394 "parser.y" /* yacc.c:1646  */
    { 
                  (yyvsp[-1].astNode)->add((yyvsp[0].astNode));
                  (yyval.astNode) = (yyvsp[-1].astNode);
            }
#line 2188 "parser.cpp" /* yacc.c:1646  */
    break;

  case 94:
#line 398 "parser.y" /* yacc.c:1646  */
=======
#line 2194 "parser.cpp" /* yacc.c:1646  */
    break;

  case 91:
#line 381 "parser.y" /* yacc.c:1646  */
    {
                  std::string name = "classWithoutInheritance" + std::to_string(n_nodes);
                  ++n_nodes;
                  (yyval.astNode) = new ClassNode(name);
                  (yyval.astNode)->add((yyvsp[-2].astNode));
                  (yyval.astNode)->add((yyvsp[0].astNode));
                  }
#line 2206 "parser.cpp" /* yacc.c:1646  */
    break;

  case 92:
#line 391 "parser.y" /* yacc.c:1646  */
    {
                                                (yyval.astNode) = (yyvsp[-1].astNode);
                                          }
#line 2214 "parser.cpp" /* yacc.c:1646  */
    break;

  case 93:
#line 395 "parser.y" /* yacc.c:1646  */
    { 
            std::string nname = "Classbody" + std::to_string(n_nodes);
            ++n_nodes;
            (yyval.astNode) = new EmptyNode(nname);
            }
#line 2224 "parser.cpp" /* yacc.c:1646  */
    break;

  case 94:
#line 400 "parser.y" /* yacc.c:1646  */
>>>>>>> bc6b282237893be9c9804cb3f37b2539f5959754
    { 
                  (yyvsp[-1].astNode)->add((yyvsp[0].astNode));
                  (yyval.astNode) = (yyvsp[-1].astNode);
            }
<<<<<<< HEAD
#line 2197 "parser.cpp" /* yacc.c:1646  */
    break;

  case 95:
#line 402 "parser.y" /* yacc.c:1646  */
    {
                  std::string name = "Classbody" + std::to_string(++n_nodes);
                  (yyval.astNode) = new ClassBodyNode(name);
                  (yyval.astNode)->add((yyvsp[-1].astNode));
            }
#line 2207 "parser.cpp" /* yacc.c:1646  */
    break;

  case 96:
#line 409 "parser.y" /* yacc.c:1646  */
=======
#line 2233 "parser.cpp" /* yacc.c:1646  */
    break;

  case 95:
#line 404 "parser.y" /* yacc.c:1646  */
    { 
                  (yyval.astNode) = new ClassBodyNode("ClassBody");
                  (yyval.astNode)->add((yyvsp[0].astNode));
            }
#line 2242 "parser.cpp" /* yacc.c:1646  */
    break;

  case 96:
#line 408 "parser.y" /* yacc.c:1646  */
    {
                  (yyval.astNode) = (yyvsp[-1].astNode);
            }
#line 2250 "parser.cpp" /* yacc.c:1646  */
    break;

  case 97:
#line 413 "parser.y" /* yacc.c:1646  */
>>>>>>> bc6b282237893be9c9804cb3f37b2539f5959754
    {
                        std::string name = dynamic_cast<IdentifierNode*>((yyvsp[-3].astNode))->value + std::to_string(++n_nodes);
                        (yyval.astNode) = new FunctionCall(name, (yyvsp[-3].astNode));
                        (yyval.astNode)->add((yyvsp[-3].astNode));
                        (yyval.astNode)->add((yyvsp[-1].astNode));                                         
                  }
<<<<<<< HEAD
#line 2218 "parser.cpp" /* yacc.c:1646  */
    break;

  case 97:
#line 415 "parser.y" /* yacc.c:1646  */
=======
#line 2261 "parser.cpp" /* yacc.c:1646  */
    break;

  case 98:
#line 419 "parser.y" /* yacc.c:1646  */
>>>>>>> bc6b282237893be9c9804cb3f37b2539f5959754
    {
                        std::string name = dynamic_cast<IdentifierNode*>((yyvsp[-3].astNode))->value + std::to_string(++n_nodes);
                        (yyval.astNode) = new FunctionCall(name, (yyvsp[-3].astNode));
                        (yyval.astNode)->add((yyvsp[-3].astNode));
                        (yyval.astNode)->add((yyvsp[-1].astNode));
                  }
<<<<<<< HEAD
#line 2229 "parser.cpp" /* yacc.c:1646  */
    break;

  case 98:
#line 423 "parser.y" /* yacc.c:1646  */
=======
#line 2272 "parser.cpp" /* yacc.c:1646  */
    break;

  case 99:
#line 427 "parser.y" /* yacc.c:1646  */
>>>>>>> bc6b282237893be9c9804cb3f37b2539f5959754
    {
                  IdentifierNode* idFunc = dynamic_cast<IdentifierNode*>((yyvsp[-5].astNode));
                  (yyval.astNode) = new FunctionNode(idFunc->value);
                  (yyval.astNode)->add((yyvsp[-3].astNode));
                  (yyval.astNode)->add((yyvsp[0].astNode));
            }
<<<<<<< HEAD
#line 2240 "parser.cpp" /* yacc.c:1646  */
    break;

  case 99:
#line 430 "parser.y" /* yacc.c:1646  */
    {     
            std::string name = "block" + std::to_string(++n_nodes);
            (yyval.astNode) = new BlockNode(name);
            (yyval.astNode)->add((yyvsp[-1].astNode));
      }
#line 2250 "parser.cpp" /* yacc.c:1646  */
    break;

  case 100:
#line 437 "parser.y" /* yacc.c:1646  */
    {
            (yyvsp[-1].astNode)->add((yyvsp[0].astNode));
            (yyval.astNode) = (yyvsp[-1].astNode);
      }
#line 2259 "parser.cpp" /* yacc.c:1646  */
    break;

  case 101:
#line 441 "parser.y" /* yacc.c:1646  */
=======
#line 2283 "parser.cpp" /* yacc.c:1646  */
    break;

  case 100:
#line 434 "parser.y" /* yacc.c:1646  */
    {     
                  std::string name = "block" + std::to_string(n_nodes);
                  ++n_nodes;
                  (yyval.astNode) = new BlockNode(name);
                  (yyval.astNode)->add((yyvsp[-1].astNode));
            }
#line 2294 "parser.cpp" /* yacc.c:1646  */
    break;

  case 101:
#line 442 "parser.y" /* yacc.c:1646  */
>>>>>>> bc6b282237893be9c9804cb3f37b2539f5959754
    { 
            std::string name = "Args" + std::to_string(++n_nodes);
            (yyval.astNode) = new Args(name);
            (yyval.astNode)->add((yyvsp[0].astNode));
      }
<<<<<<< HEAD
#line 2269 "parser.cpp" /* yacc.c:1646  */
    break;

  case 102:
#line 448 "parser.y" /* yacc.c:1646  */
    { 
            std::string name = "Arg" + std::to_string(++n_nodes);
            (yyval.astNode) = new Arg(name);
      }
#line 2278 "parser.cpp" /* yacc.c:1646  */
    break;

  case 103:
#line 452 "parser.y" /* yacc.c:1646  */
    {
            (yyvsp[-1].astNode)->add((yyvsp[0].astNode));
            (yyval.astNode) = (yyvsp[-1].astNode);
      }
#line 2287 "parser.cpp" /* yacc.c:1646  */
=======
#line 2303 "parser.cpp" /* yacc.c:1646  */
    break;

  case 102:
#line 446 "parser.y" /* yacc.c:1646  */
    { 
            std::string name = "Args" + std::to_string(++n_nodes);
            (yyvsp[-2].astNode) = new Args(name);
            (yyvsp[-2].astNode)->add((yyvsp[-1].astNode));
      }
#line 2313 "parser.cpp" /* yacc.c:1646  */
    break;

  case 103:
#line 451 "parser.y" /* yacc.c:1646  */
    {
            std::string name = "Args" + std::to_string(++n_nodes);
            (yyvsp[-1].astNode) = new Args(name);
            (yyvsp[-1].astNode)->add((yyvsp[0].astNode));
      }
#line 2323 "parser.cpp" /* yacc.c:1646  */
>>>>>>> bc6b282237893be9c9804cb3f37b2539f5959754
    break;

  case 104:
#line 456 "parser.y" /* yacc.c:1646  */
    {
<<<<<<< HEAD
            (yyvsp[-2].astNode)->add((yyvsp[-1].astNode));
            (yyval.astNode) = (yyvsp[-2].astNode);
      }
#line 2296 "parser.cpp" /* yacc.c:1646  */
    break;

  case 105:
#line 462 "parser.y" /* yacc.c:1646  */
    {
                        (yyval.astNode) = (yyvsp[0].astNode);
                  }
#line 2304 "parser.cpp" /* yacc.c:1646  */
    break;

  case 106:
#line 465 "parser.y" /* yacc.c:1646  */
    {
=======
            std::string name = "Args" + std::to_string(++n_nodes);
            (yyval.astNode) = new Args(name);
            (yyvsp[-1].astNode)->add((yyvsp[-1].astNode));
      }
#line 2333 "parser.cpp" /* yacc.c:1646  */
    break;

  case 105:
#line 461 "parser.y" /* yacc.c:1646  */
    {
            std::string name = "Args" + std::to_string(++n_nodes);
            (yyval.astNode) = new Args(name);
            (yyvsp[0].astNode)->add((yyvsp[0].astNode));
      }
#line 2343 "parser.cpp" /* yacc.c:1646  */
    break;

  case 106:
#line 468 "parser.y" /* yacc.c:1646  */
    {
                        std::string name = "identifire" + std::to_string(++n_nodes);
                        (yyvsp[0].astNode)->name=name;
                        (yyval.astNode) = (yyvsp[0].astNode);
                  }
#line 2353 "parser.cpp" /* yacc.c:1646  */
    break;

  case 107:
#line 473 "parser.y" /* yacc.c:1646  */
    {
                        std::string name = "identifire" + std::to_string(++n_nodes);
                        (yyvsp[0].astNode)->name=name;
>>>>>>> bc6b282237893be9c9804cb3f37b2539f5959754
                        (yyval.astNode) = new MemberExpression((yyvsp[-1].astNode), (yyvsp[0].astNode));
                        (yyval.astNode)->add((yyvsp[-1].astNode)); 
                        (yyval.astNode)->add((yyvsp[0].astNode)); 
                  }
<<<<<<< HEAD
#line 2314 "parser.cpp" /* yacc.c:1646  */
    break;

  case 107:
#line 470 "parser.y" /* yacc.c:1646  */
=======
#line 2365 "parser.cpp" /* yacc.c:1646  */
    break;

  case 108:
#line 480 "parser.y" /* yacc.c:1646  */
>>>>>>> bc6b282237893be9c9804cb3f37b2539f5959754
    { 
                        (yyval.astNode) = new MemberExpression((yyvsp[-1].astNode), (yyvsp[0].astNode)); 
                        (yyval.astNode)->add((yyvsp[-1].astNode)); 
                        (yyval.astNode)->add((yyvsp[0].astNode)); 
                  }
<<<<<<< HEAD
#line 2324 "parser.cpp" /* yacc.c:1646  */
    break;

  case 108:
#line 477 "parser.y" /* yacc.c:1646  */
    { (yyval.astNode) = (yyvsp[0].astNode); }
#line 2330 "parser.cpp" /* yacc.c:1646  */
    break;

  case 109:
#line 478 "parser.y" /* yacc.c:1646  */
    {
                        (yyval.astNode) = new BinaryLogicalExpression(">=", (yyvsp[-2].astNode), (yyvsp[0].astNode));
                  }
#line 2338 "parser.cpp" /* yacc.c:1646  */
    break;

  case 110:
#line 481 "parser.y" /* yacc.c:1646  */
    {
                        (yyval.astNode) = new BinaryLogicalExpression(">", (yyvsp[-2].astNode), (yyvsp[0].astNode));
                  }
#line 2346 "parser.cpp" /* yacc.c:1646  */
    break;

  case 111:
#line 484 "parser.y" /* yacc.c:1646  */
    {
                        (yyval.astNode) = new BinaryLogicalExpression("<=", (yyvsp[-2].astNode), (yyvsp[0].astNode));
                  }
#line 2354 "parser.cpp" /* yacc.c:1646  */
    break;

  case 112:
#line 487 "parser.y" /* yacc.c:1646  */
    {
                        (yyval.astNode) = new BinaryLogicalExpression("<", (yyvsp[-2].astNode), (yyvsp[0].astNode));
                  }
#line 2362 "parser.cpp" /* yacc.c:1646  */
    break;

  case 113:
#line 490 "parser.y" /* yacc.c:1646  */
    {
                        (yyval.astNode) = new BinaryLogicalExpression("==", (yyvsp[-2].astNode), (yyvsp[0].astNode));
                  }
#line 2370 "parser.cpp" /* yacc.c:1646  */
    break;

  case 114:
#line 493 "parser.y" /* yacc.c:1646  */
    {
                        (yyval.astNode) = new BinaryLogicalExpression("!=", (yyvsp[-2].astNode), (yyvsp[0].astNode));
                  }
#line 2378 "parser.cpp" /* yacc.c:1646  */
    break;

  case 115:
#line 496 "parser.y" /* yacc.c:1646  */
    {
                        (yyval.astNode) = new BinaryLogicalExpression("and", (yyvsp[-2].astNode), (yyvsp[0].astNode));
                  }
#line 2386 "parser.cpp" /* yacc.c:1646  */
    break;

  case 116:
#line 499 "parser.y" /* yacc.c:1646  */
    {
                        (yyval.astNode) = new BinaryLogicalExpression("or", (yyvsp[-2].astNode), (yyvsp[0].astNode));
                  }
#line 2394 "parser.cpp" /* yacc.c:1646  */
    break;

  case 117:
#line 502 "parser.y" /* yacc.c:1646  */
    {
                        
                  }
#line 2402 "parser.cpp" /* yacc.c:1646  */
    break;

  case 118:
#line 505 "parser.y" /* yacc.c:1646  */
    { (yyval.astNode) = (yyvsp[0].astNode); }
#line 2408 "parser.cpp" /* yacc.c:1646  */
    break;

  case 119:
#line 506 "parser.y" /* yacc.c:1646  */
    { (yyval.astNode) = (yyvsp[0].astNode); }
#line 2414 "parser.cpp" /* yacc.c:1646  */
    break;

  case 120:
#line 509 "parser.y" /* yacc.c:1646  */
=======
#line 2375 "parser.cpp" /* yacc.c:1646  */
    break;

  case 109:
#line 487 "parser.y" /* yacc.c:1646  */
    { (yyval.astNode) = (yyvsp[0].astNode); }
#line 2381 "parser.cpp" /* yacc.c:1646  */
    break;

  case 110:
#line 488 "parser.y" /* yacc.c:1646  */
    {
                        (yyval.astNode) = new BinaryLogicalExpression(">=", (yyvsp[-2].astNode), (yyvsp[0].astNode));
                  }
#line 2389 "parser.cpp" /* yacc.c:1646  */
    break;

  case 111:
#line 491 "parser.y" /* yacc.c:1646  */
    {
                        (yyval.astNode) = new BinaryLogicalExpression(">", (yyvsp[-2].astNode), (yyvsp[0].astNode));
                  }
#line 2397 "parser.cpp" /* yacc.c:1646  */
    break;

  case 112:
#line 494 "parser.y" /* yacc.c:1646  */
    {
                        (yyval.astNode) = new BinaryLogicalExpression("<=", (yyvsp[-2].astNode), (yyvsp[0].astNode));
                  }
#line 2405 "parser.cpp" /* yacc.c:1646  */
    break;

  case 113:
#line 497 "parser.y" /* yacc.c:1646  */
    {
                        (yyval.astNode) = new BinaryLogicalExpression("<", (yyvsp[-2].astNode), (yyvsp[0].astNode));
                  }
#line 2413 "parser.cpp" /* yacc.c:1646  */
    break;

  case 114:
#line 500 "parser.y" /* yacc.c:1646  */
    {
                        (yyval.astNode) = new BinaryLogicalExpression("==", (yyvsp[-2].astNode), (yyvsp[0].astNode));
                  }
#line 2421 "parser.cpp" /* yacc.c:1646  */
    break;

  case 115:
#line 503 "parser.y" /* yacc.c:1646  */
    {
                        (yyval.astNode) = new BinaryLogicalExpression("!=", (yyvsp[-2].astNode), (yyvsp[0].astNode));
                  }
#line 2429 "parser.cpp" /* yacc.c:1646  */
    break;

  case 116:
#line 506 "parser.y" /* yacc.c:1646  */
    {
                        (yyval.astNode) = new BinaryLogicalExpression("and", (yyvsp[-2].astNode), (yyvsp[0].astNode));
                  }
#line 2437 "parser.cpp" /* yacc.c:1646  */
    break;

  case 117:
#line 509 "parser.y" /* yacc.c:1646  */
    {
                        (yyval.astNode) = new BinaryLogicalExpression("or", (yyvsp[-2].astNode), (yyvsp[0].astNode));
                  }
#line 2445 "parser.cpp" /* yacc.c:1646  */
    break;

  case 118:
#line 512 "parser.y" /* yacc.c:1646  */
    {
                        (yyval.astNode) = new BinaryLogicalExpression("not", (yyvsp[-1].astNode), (yyvsp[0].astNode));
                  }
#line 2453 "parser.cpp" /* yacc.c:1646  */
    break;

  case 119:
#line 515 "parser.y" /* yacc.c:1646  */
    { (yyval.astNode) = (yyvsp[0].astNode); }
#line 2459 "parser.cpp" /* yacc.c:1646  */
    break;

  case 120:
#line 516 "parser.y" /* yacc.c:1646  */
    { (yyval.astNode) = (yyvsp[0].astNode); }
#line 2465 "parser.cpp" /* yacc.c:1646  */
    break;

  case 121:
#line 519 "parser.y" /* yacc.c:1646  */
>>>>>>> bc6b282237893be9c9804cb3f37b2539f5959754
    {
                              (yyvsp[-1].astNode)->add((yyvsp[0].astNode));
                              (yyval.astNode) = (yyvsp[-1].astNode);
                        }
<<<<<<< HEAD
#line 2423 "parser.cpp" /* yacc.c:1646  */
    break;

  case 121:
#line 515 "parser.y" /* yacc.c:1646  */
=======
#line 2474 "parser.cpp" /* yacc.c:1646  */
    break;

  case 122:
#line 525 "parser.y" /* yacc.c:1646  */
>>>>>>> bc6b282237893be9c9804cb3f37b2539f5959754
    { 
                  std::string name = "elif_else" + std::to_string(++n_nodes);
                  (yyval.astNode) = new EmptyNode(name); 
            }
<<<<<<< HEAD
#line 2432 "parser.cpp" /* yacc.c:1646  */
    break;

  case 122:
#line 519 "parser.y" /* yacc.c:1646  */
    {
                  (yyvsp[-1].astNode)->add((yyvsp[0].astNode));
                  (yyval.astNode) = (yyvsp[-1].astNode);
            }
#line 2441 "parser.cpp" /* yacc.c:1646  */
    break;

  case 123:
#line 523 "parser.y" /* yacc.c:1646  */
=======
#line 2483 "parser.cpp" /* yacc.c:1646  */
    break;

  case 123:
#line 529 "parser.y" /* yacc.c:1646  */
>>>>>>> bc6b282237893be9c9804cb3f37b2539f5959754
    {
                  (yyval.astNode) = (yyvsp[0].astNode);
            }
<<<<<<< HEAD
#line 2449 "parser.cpp" /* yacc.c:1646  */
    break;

  case 124:
#line 526 "parser.y" /* yacc.c:1646  */
    {
                  (yyval.astNode) = (yyvsp[0].astNode);
            }
#line 2457 "parser.cpp" /* yacc.c:1646  */
    break;

  case 125:
#line 531 "parser.y" /* yacc.c:1646  */
    {
                  (yyval.astNode) = (yyvsp[0].astNode);
            }
#line 2465 "parser.cpp" /* yacc.c:1646  */
    break;

  case 126:
#line 534 "parser.y" /* yacc.c:1646  */
=======
#line 2492 "parser.cpp" /* yacc.c:1646  */
    break;

  case 124:
#line 533 "parser.y" /* yacc.c:1646  */
    {
                  (yyval.astNode) = (yyvsp[0].astNode);
            }
#line 2500 "parser.cpp" /* yacc.c:1646  */
    break;

  case 125:
#line 536 "parser.y" /* yacc.c:1646  */
    {
                  (yyval.astNode) = (yyvsp[0].astNode);
            }
#line 2508 "parser.cpp" /* yacc.c:1646  */
    break;

  case 126:
#line 541 "parser.y" /* yacc.c:1646  */
    {
                  (yyval.astNode) = (yyvsp[0].astNode);
            }
#line 2516 "parser.cpp" /* yacc.c:1646  */
    break;

  case 127:
#line 544 "parser.y" /* yacc.c:1646  */
>>>>>>> bc6b282237893be9c9804cb3f37b2539f5959754
    {
                  (yyvsp[-1].astNode)->add((yyvsp[0].astNode));
                  (yyval.astNode) = (yyvsp[-1].astNode);
            }
<<<<<<< HEAD
#line 2474 "parser.cpp" /* yacc.c:1646  */
    break;

  case 127:
#line 540 "parser.y" /* yacc.c:1646  */
=======
#line 2525 "parser.cpp" /* yacc.c:1646  */
    break;

  case 128:
#line 550 "parser.y" /* yacc.c:1646  */
>>>>>>> bc6b282237893be9c9804cb3f37b2539f5959754
    {
                        std::string name = "if" + std::to_string(++n_nodes);
                        (yyval.astNode) = new ConditionalStatement("if", name);
                        (yyval.astNode)->add((yyvsp[-2].astNode));
                        (yyval.astNode)->add((yyvsp[0].astNode));
                  }
<<<<<<< HEAD
#line 2485 "parser.cpp" /* yacc.c:1646  */
    break;

  case 128:
#line 546 "parser.y" /* yacc.c:1646  */
=======
#line 2536 "parser.cpp" /* yacc.c:1646  */
    break;

  case 129:
#line 556 "parser.y" /* yacc.c:1646  */
>>>>>>> bc6b282237893be9c9804cb3f37b2539f5959754
    {
                        std::string name = "if" + std::to_string(++n_nodes);
                        (yyval.astNode) = new ConditionalStatement("if", name);
                        (yyval.astNode)->add((yyvsp[-3].astNode));
                        (yyval.astNode)->add((yyvsp[0].astNode));
                  }
<<<<<<< HEAD
#line 2496 "parser.cpp" /* yacc.c:1646  */
    break;

  case 129:
#line 554 "parser.y" /* yacc.c:1646  */
=======
#line 2547 "parser.cpp" /* yacc.c:1646  */
    break;

  case 130:
#line 564 "parser.y" /* yacc.c:1646  */
>>>>>>> bc6b282237893be9c9804cb3f37b2539f5959754
    {
                        std::string name = "else" + std::to_string(++n_nodes);
                        (yyval.astNode) = new ConditionalStatement("else", name);
                        (yyval.astNode)->add((yyvsp[0].astNode));
                  }
<<<<<<< HEAD
#line 2506 "parser.cpp" /* yacc.c:1646  */
    break;

  case 130:
#line 561 "parser.y" /* yacc.c:1646  */
    {
                        std::string name = "elif" + std::to_string(++n_nodes);
                        (yyval.astNode) = new ConditionalStatement("elif", name);
                        (yyval.astNode)->add((yyvsp[-2].astNode));
                        (yyval.astNode)->add((yyvsp[0].astNode));
                  }
#line 2517 "parser.cpp" /* yacc.c:1646  */
    break;

  case 131:
#line 567 "parser.y" /* yacc.c:1646  */
=======
#line 2557 "parser.cpp" /* yacc.c:1646  */
    break;

  case 131:
#line 571 "parser.y" /* yacc.c:1646  */
    {
                        std::string name = "elif" + std::to_string(++n_nodes);
                        (yyval.astNode) = new ConditionalStatement("elif", name);
                        (yyval.astNode)->add((yyvsp[-2].astNode));
                        (yyval.astNode)->add((yyvsp[0].astNode));
                  }
#line 2568 "parser.cpp" /* yacc.c:1646  */
    break;

  case 132:
#line 577 "parser.y" /* yacc.c:1646  */
>>>>>>> bc6b282237893be9c9804cb3f37b2539f5959754
    {
                        std::string name = "elif" + std::to_string(++n_nodes);
                        (yyval.astNode) = new ConditionalStatement("elif", name);
                        (yyval.astNode)->add((yyvsp[-3].astNode));
                        (yyval.astNode)->add((yyvsp[0].astNode));
                  }
<<<<<<< HEAD
#line 2528 "parser.cpp" /* yacc.c:1646  */
    break;

  case 138:
#line 583 "parser.y" /* yacc.c:1646  */
=======
#line 2579 "parser.cpp" /* yacc.c:1646  */
    break;

  case 133:
#line 585 "parser.y" /* yacc.c:1646  */
>>>>>>> bc6b282237893be9c9804cb3f37b2539f5959754
    {
                        std::string name = "For" + std::to_string(++n_nodes);
                        (yyval.astNode) = new ForNode(name);
                        (yyval.astNode)->add((yyvsp[-4].astNode));
                        (yyval.astNode)->add((yyvsp[-2].astNode));
                        (yyval.astNode)->add((yyvsp[0].astNode));
                  }
<<<<<<< HEAD
#line 2539 "parser.cpp" /* yacc.c:1646  */
    break;

  case 139:
#line 589 "parser.y" /* yacc.c:1646  */
=======
#line 2591 "parser.cpp" /* yacc.c:1646  */
    break;

  case 134:
#line 592 "parser.y" /* yacc.c:1646  */
    {
                        std::string name = "For" + std::to_string(++n_nodes);
                        (yyval.astNode) = new ForNode(name);
                        (yyval.astNode)->add((yyvsp[-4].astNode));
                        (yyval.astNode)->add((yyvsp[-2].astNode));
                        (yyval.astNode)->add((yyvsp[0].astNode));
                  }
#line 2603 "parser.cpp" /* yacc.c:1646  */
    break;

  case 135:
#line 599 "parser.y" /* yacc.c:1646  */
    {
                        std::string name = "For" + std::to_string(++n_nodes);
                        (yyval.astNode) = new ForNode(name);
                        (yyval.astNode)->add((yyvsp[-5].astNode));
                        (yyval.astNode)->add((yyvsp[-2].astNode));
                        (yyval.astNode)->add((yyvsp[0].astNode));
                  }
#line 2615 "parser.cpp" /* yacc.c:1646  */
    break;

  case 136:
#line 606 "parser.y" /* yacc.c:1646  */
    {
                        std::string name = "For" + std::to_string(++n_nodes);
                        (yyval.astNode) = new ForNode(name);
                        (yyval.astNode)->add((yyvsp[-4].astNode));
                        (yyval.astNode)->add((yyvsp[-2].astNode));
                        (yyval.astNode)->add((yyvsp[0].astNode));
                  }
#line 2627 "parser.cpp" /* yacc.c:1646  */
    break;

  case 137:
#line 613 "parser.y" /* yacc.c:1646  */
    {
                        std::string name = "For" + std::to_string(++n_nodes);
                        (yyval.astNode) = new ForNode(name);
                        (yyval.astNode)->add((yyvsp[-5].astNode));
                        (yyval.astNode)->add((yyvsp[-3].astNode));
                        (yyval.astNode)->add((yyvsp[-2].astNode));
                        (yyval.astNode)->add((yyvsp[0].astNode));
                  }
#line 2640 "parser.cpp" /* yacc.c:1646  */
    break;

  case 138:
#line 621 "parser.y" /* yacc.c:1646  */
    {
                        std::string name = "For" + std::to_string(++n_nodes);
                        (yyval.astNode) = new ForNode(name);
                        (yyval.astNode)->add((yyvsp[-7].astNode));
                        (yyval.astNode)->add((yyvsp[-5].astNode));
                        (yyval.astNode)->add((yyvsp[-4].astNode));
                        (yyval.astNode)->add((yyvsp[-2].astNode));
                        (yyval.astNode)->add((yyvsp[0].astNode));
                  }
#line 2654 "parser.cpp" /* yacc.c:1646  */
    break;

  case 139:
#line 632 "parser.y" /* yacc.c:1646  */
    {
                        std::string name = "While" + std::to_string(++n_nodes);
                        (yyval.astNode) = new WhileNode(name);
                        (yyval.astNode)->add((yyvsp[-2].astNode));
                        (yyval.astNode)->add((yyvsp[0].astNode));
                  }
#line 2665 "parser.cpp" /* yacc.c:1646  */
    break;

  case 140:
#line 638 "parser.y" /* yacc.c:1646  */
>>>>>>> bc6b282237893be9c9804cb3f37b2539f5959754
    {
                        std::string name = "While" + std::to_string(++n_nodes);
                        (yyval.astNode) = new WhileNode(name);
                        (yyval.astNode)->add((yyvsp[-3].astNode));
                        (yyval.astNode)->add((yyvsp[0].astNode));
                  }
<<<<<<< HEAD
#line 2550 "parser.cpp" /* yacc.c:1646  */
    break;


#line 2554 "parser.cpp" /* yacc.c:1646  */
=======
#line 2676 "parser.cpp" /* yacc.c:1646  */
    break;


#line 2680 "parser.cpp" /* yacc.c:1646  */
>>>>>>> bc6b282237893be9c9804cb3f37b2539f5959754
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
#line 597 "parser.y" /* yacc.c:1906  */
=======
#line 646 "parser.y" /* yacc.c:1906  */
>>>>>>> bc6b282237893be9c9804cb3f37b2539f5959754


int main(int argc, char **argv) {
      if (argc > 1)
            for(int i=0;i<argc;i++)
                  yyin=fopen(argv[1],"r");
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
