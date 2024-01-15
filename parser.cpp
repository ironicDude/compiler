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
    TUPLE = 339,
    INTEGER = 340,
    FLOAT = 341,
    DEDENT = 342,
    INDENT = 343,
    NEWLINE = 344,
    KEYWORD_MATCH = 345,
    KEYWORD_CASE = 346,
    UMINUS = 347
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE YYSTYPE;
union YYSTYPE
{
#line 6 "parser.y" /* yacc.c:355  */

	AstNode* astNode;

#line 212 "parser.cpp" /* yacc.c:355  */
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

#line 235 "parser.cpp" /* yacc.c:358  */

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
#define YYLAST   595

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  99
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  47
/* YYNRULES -- Number of rules.  */
#define YYNRULES  143
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  277

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   347

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
       2,     2,    94,    92,     2,    93,    98,    95,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,    96,     2,     2,     2,     2,     2,
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
      85,    86,    87,    88,    89,    90,    91,    97
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    51,    51,    55,    56,    66,    72,    78,    81,    82,
      83,    84,    85,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   104,   105,   106,
     107,   108,   109,   110,   113,   114,   117,   118,   119,   120,
     121,   124,   132,   135,   138,   141,   144,   147,   150,   154,
     155,   156,   157,   158,   159,   160,   161,   162,   165,   166,
     169,   170,   173,   174,   177,   180,   181,   184,   185,   188,
     191,   194,   195,   198,   201,   204,   205,   208,   211,   212,
     213,   214,   215,   218,   221,   222,   223,   226,   229,   230,
     233,   236,   237,   240,   249,   259,   263,   268,   273,   277,
     282,   288,   296,   303,   311,   315,   316,   317,   318,   321,
     326,   333,   340,   341,   344,   347,   350,   353,   356,   359,
     362,   365,   368,   369,   372,   378,   382,   386,   389,   394,
     397,   403,   409,   417,   424,   430,   438,   439,   440,   441,
     442,   443,   446,   447
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
  "SEMICOLON", "TUPLE", "INTEGER", "FLOAT", "DEDENT", "INDENT", "NEWLINE",
  "KEYWORD_MATCH", "KEYWORD_CASE", "'+'", "'-'", "'*'", "'/'", "'|'",
  "UMINUS", "'.'", "$accept", "prog", "statements", "statement",
  "simple_statement", "compound_statement", "import_statments",
  "import_statment", "assignment", "expression", "number", "del_statment",
  "return_statement", "yield_statement", "assert_statement",
  "raise_statement", "global_statement", "nonlocal_statement",
  "global_nonlocal_targets", "match_statement", "match_block", "cases",
  "case", "try_statement", "try", "except", "finally", "except_statements",
  "with_statment", "with_stmt", "class", "class_block", "class_body",
  "function_call", "function", "block", "args", "member_expression",
  "logical_expression", "conditional_statement", "elif_else", "elif_stmts",
  "if_statement", "else_statement", "elif_statement", "for_statement",
  "while_statement", YY_NULL
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
     345,   346,    43,    45,    42,    47,   124,   347,    46
};
# endif

#define YYPACT_NINF -95

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-95)))

#define YYTABLE_NINF -113

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -64,   -95,   273,   -95,   -26,   141,    53,   -95,   -95,    74,
      77,   159,   -95,     3,    26,    98,    53,   104,   315,   159,
     133,   104,    74,    12,   -95,   -95,   -95,   134,   469,    54,
     -95,   -95,     7,    55,   -95,   -95,   -95,   -95,   -95,   -95,
     -95,   -95,   -95,   -95,    48,   -95,   -95,   -95,   -95,    16,
     -95,    87,   -95,   -95,    12,   -95,   -95,   -95,   -95,   -95,
     159,    12,   159,   -95,   -95,   -95,    12,   521,   -95,   -95,
     136,   -14,   -95,    23,   -26,    58,   -27,    12,   482,    -5,
     123,    12,    61,    78,    28,    73,   -95,   159,     0,    -7,
     152,   -95,    44,   128,   215,    83,   -95,   -95,   -95,   -95,
      -2,    90,   -95,   -95,   109,   -26,    12,   -95,    91,   329,
     -95,    87,   -95,   -95,   157,    92,   322,    -5,   215,   492,
      18,   215,    12,    12,    12,    12,    12,    12,    12,    12,
      12,    12,    12,    12,   159,   159,    61,   167,   168,    12,
      86,   297,   130,   346,    88,   -95,    12,    10,   104,    57,
      61,   171,   -95,    61,    74,   177,    96,    61,     5,    61,
     -95,   -95,   163,   215,    61,   159,    19,   -95,   -95,   -95,
     -95,   -95,   165,   -95,   111,   215,   215,   215,   215,   215,
     215,   215,   215,   215,   215,   215,   215,    -5,    -5,   -95,
     -95,   -95,   353,   105,   -95,   113,   114,    11,   174,   469,
     360,   164,   -95,   -95,   118,   -95,   -95,   -95,   169,   -95,
     124,   -95,   -95,   214,    61,   -95,   -95,   -95,    62,    61,
     -95,    61,   140,   -95,    61,    61,    61,   -46,    74,   434,
     142,   216,    61,   218,   138,   149,   -95,   150,   -95,   -95,
      86,     2,   -95,   -95,   -95,    61,   229,   155,   -95,    61,
     -95,   -95,   -95,    12,    36,   -95,    61,    61,   -95,   -95,
     -95,   -95,   -95,   -95,   173,    61,   -95,   208,   -95,   -95,
     -95,   -95,    61,   -95,    61,   -95,   -95
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       2,     3,     0,     1,   109,     0,     0,    24,    25,     0,
       0,     0,    26,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    11,    12,    10,     0,     4,     5,
       9,     8,    21,     0,    13,    20,    14,    15,    16,    17,
      18,    19,    32,    33,     0,    23,    29,    22,    27,     0,
      28,   125,    30,    31,   104,    51,    57,   123,   122,    53,
       0,     0,     0,    52,    58,    59,     0,   112,    54,    56,
      55,     0,   109,    36,     0,    67,     0,     0,    62,    63,
       0,   104,     0,     0,     0,    71,    70,     0,     0,    65,
      60,    69,     0,     0,    64,     0,     7,     6,    35,    34,
       0,     0,    89,    78,    79,   110,     0,   111,     0,     0,
     124,   127,   128,   129,   108,    56,     0,   121,    50,   112,
       0,    48,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   104,
       0,     0,     0,     0,     0,    83,   104,     0,     0,     0,
       0,     0,    61,     0,     0,     0,     0,     0,     0,     0,
      88,    80,    81,    41,     0,     0,     0,   126,   130,   107,
     101,   100,   106,    49,     0,    42,    43,    44,    45,    46,
      47,   117,   118,   114,   113,   116,   115,   119,   120,   131,
      39,    68,     0,     0,    94,     0,     0,     0,     0,     0,
       0,    37,    38,    72,     0,   142,    66,    90,     0,    91,
       0,    73,    84,     0,     0,    87,    82,   133,     0,     0,
     105,     0,     0,    96,     0,     0,     0,   111,     0,     0,
       0,     0,     0,     0,     0,     0,    85,     0,   134,   132,
       0,     0,   137,   136,   139,     0,     0,     0,   103,     0,
      40,   143,    92,     0,     0,    76,     0,     0,    93,    95,
      99,    98,    97,   140,     0,     0,   102,     0,    74,    75,
      86,   135,     0,   138,     0,   141,    77
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -95,   -95,    39,   -25,   -95,   -95,   -95,   217,     9,   -11,
     -95,   -95,   -95,   -95,   -95,   -95,   -95,   -95,   -19,   -95,
     -95,   -95,    17,   -95,   -95,   162,   -94,   -95,   -95,   -95,
     -95,    30,   -95,     4,    33,    27,   -74,    -1,    22,   -95,
     -95,   -95,   -95,   -47,   166,   -95,   -95
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,    28,    29,    30,    31,    32,    33,    34,    67,
      68,    35,    36,    37,    38,    39,    40,    41,    86,    42,
     211,   254,   255,    43,    44,   102,   103,   104,    45,    92,
      46,   194,   241,    69,    48,   145,   116,    70,    71,    50,
     110,   111,    51,   112,   113,    52,    53
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      78,    49,    91,    96,    72,    73,    47,   143,    72,    80,
     161,   105,    94,    75,   134,    84,   201,   105,     4,    55,
      56,   134,   105,   134,     6,     1,    93,    49,   134,   105,
     135,    59,    47,    79,   105,   245,    15,   135,   213,   135,
      88,    89,    16,   114,   135,   147,   134,   134,   139,    54,
     118,   119,   246,   107,   140,   121,   137,   162,   115,    72,
     202,    61,   135,   135,   167,   192,   141,   136,   216,   100,
     114,   106,   200,   101,   107,   151,   119,   107,    81,   157,
      74,   150,   117,    76,   120,   134,   214,    77,   107,   259,
     134,   260,   226,   138,   174,   163,    63,    64,    65,   158,
     219,   135,   108,   109,    83,   172,   135,    82,    66,   149,
      85,   175,   176,   177,   178,   179,   180,   181,   182,   183,
     184,   185,   186,   268,   108,   153,   154,   253,   114,   203,
     100,   166,   172,   204,   101,   114,     4,   195,   237,    90,
      95,   197,   105,    97,    99,   142,   196,     4,    55,    56,
     144,    57,    58,   146,   119,   148,   187,   188,   208,   152,
      59,   155,   107,   189,   156,     4,    55,    56,   170,    57,
      58,   159,   164,   190,   191,   193,   199,   205,    59,   206,
     207,   172,    60,   209,   212,   210,   215,   218,   101,   172,
      61,   217,   221,   223,   224,   225,   228,   231,    49,   232,
      60,   227,   233,    47,    96,   122,   123,   124,    61,   125,
     126,   127,   234,   122,   123,   124,    62,   125,   126,   127,
     235,   240,   250,   249,   252,    63,    64,    65,    49,   253,
     256,   257,   247,    47,    77,   264,   265,    66,   229,   169,
      49,   236,   267,    63,    64,    65,   238,   220,   239,    98,
     261,   242,   243,   244,   272,    66,   122,   123,   124,   251,
     125,   126,   127,   122,   123,   124,   160,   125,   126,   127,
     258,   269,   263,     3,   262,     0,   266,   168,     0,     4,
       0,     0,     0,   270,   271,     0,     0,     5,     0,   274,
       6,     7,   273,     8,     0,     0,     9,    10,     0,   275,
      11,   276,    12,    13,     0,    14,     0,    15,    16,    17,
      18,    19,    20,    21,     0,    22,     0,     0,    23,     0,
      24,     4,    55,    56,    25,    57,    58,     0,     4,    55,
      56,     0,     0,     0,    59,     4,    55,    56,     0,    57,
      58,    59,     0,     0,     0,   122,   123,   124,    59,   125,
     126,   127,     4,    55,    56,     0,    60,     0,     0,     4,
      55,    56,    26,    27,    61,    59,     4,    55,    56,     0,
      60,    61,    59,   173,     0,     0,     0,     0,    61,    59,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      87,     0,     0,     0,     0,    61,     0,    77,   171,    63,
      64,    65,    61,     0,   165,     0,    63,    64,    65,    61,
       0,    66,     0,    63,    64,    65,     0,     0,    66,     0,
       0,    77,   198,     0,     0,    66,     0,     0,    77,   222,
      63,    64,    65,     0,     0,    77,   230,    63,    64,    65,
       4,     0,    66,     0,    63,    64,    65,     0,     5,    66,
       0,     6,     7,     0,     8,     0,    66,     9,    10,     0,
       0,    11,     0,    12,    13,     0,    14,     0,    15,    16,
      17,    18,    19,    20,    21,     4,    22,     0,     0,    23,
       0,    24,     0,     5,     0,    25,     6,     7,     0,     8,
       0,     0,     9,    10,     0,     0,    11,     0,    12,    13,
       0,    14,     0,    15,    16,    17,    18,    19,    20,    21,
    -112,    22,     0,     0,    23,     0,    24,     0,     0,     0,
      25,   248,     0,    26,    27,     0,  -112,     0,     0,     0,
     122,   123,   124,     0,   125,   126,   127,     0,     0,     0,
     122,   123,   124,     0,   125,   126,   127,     0,     0,     0,
     128,     0,   129,   130,   131,   132,   133,     0,    26,    27,
     128,     0,   129,   130,   131,   132,   133,     0,   173,   122,
     123,   124,     0,   125,   126,   127,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   128,
       0,   129,   130,   131,   132,   133
};

static const yytype_int16 yycheck[] =
{
      11,     2,    21,    28,     6,     6,     2,    81,     6,     6,
     104,     6,    23,     9,    28,    16,     6,     6,     6,     7,
       8,    28,     6,    28,    17,    89,    22,    28,    28,     6,
      44,    19,    28,    11,     6,    81,    34,    44,    33,    44,
      18,    19,    35,    54,    44,    17,    28,    28,    75,    75,
      61,    62,    98,    49,    81,    66,    33,   104,    54,     6,
      50,    49,    44,    44,   111,   139,    77,    81,   162,    21,
      81,    55,   146,    25,    70,    82,    87,    73,    75,    81,
       6,    81,    60,     6,    62,    28,    81,    75,    84,    87,
      28,    89,    81,    35,    76,   106,    84,    85,    86,   100,
      81,    44,    15,    16,     6,   116,    44,    81,    96,    87,
       6,   122,   123,   124,   125,   126,   127,   128,   129,   130,
     131,   132,   133,    87,    15,    81,    82,    91,   139,   148,
      21,   109,   143,    76,    25,   146,     6,     7,    76,     6,
       6,   142,     6,    89,    89,    22,   142,     6,     7,     8,
      89,    10,    11,    75,   165,    82,   134,   135,   154,     7,
      19,    33,   158,   136,    81,     6,     7,     8,    76,    10,
      11,    81,    81,     6,     6,    89,    88,   150,    19,     8,
     153,   192,    41,     6,   157,    89,   159,   165,    25,   200,
      49,   164,    81,    88,    81,    81,    22,    33,   199,    81,
      41,   197,    33,   199,   229,    48,    49,    50,    49,    52,
      53,    54,    88,    48,    49,    50,    75,    52,    53,    54,
       6,    81,     6,    81,     6,    84,    85,    86,   229,    91,
      81,    81,   228,   229,    75,     6,    81,    96,   199,    82,
     241,   214,   253,    84,    85,    86,   219,    82,   221,    32,
     241,   224,   225,   226,    81,    96,    48,    49,    50,   232,
      52,    53,    54,    48,    49,    50,   104,    52,    53,    54,
     240,   254,   245,     0,   241,    -1,   249,   111,    -1,     6,
      -1,    -1,    -1,   256,   257,    -1,    -1,    14,    -1,    81,
      17,    18,   265,    20,    -1,    -1,    23,    24,    -1,   272,
      27,   274,    29,    30,    -1,    32,    -1,    34,    35,    36,
      37,    38,    39,    40,    -1,    42,    -1,    -1,    45,    -1,
      47,     6,     7,     8,    51,    10,    11,    -1,     6,     7,
       8,    -1,    -1,    -1,    19,     6,     7,     8,    -1,    10,
      11,    19,    -1,    -1,    -1,    48,    49,    50,    19,    52,
      53,    54,     6,     7,     8,    -1,    41,    -1,    -1,     6,
       7,     8,    89,    90,    49,    19,     6,     7,     8,    -1,
      41,    49,    19,    76,    -1,    -1,    -1,    -1,    49,    19,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      75,    -1,    -1,    -1,    -1,    49,    -1,    75,    76,    84,
      85,    86,    49,    -1,    75,    -1,    84,    85,    86,    49,
      -1,    96,    -1,    84,    85,    86,    -1,    -1,    96,    -1,
      -1,    75,    76,    -1,    -1,    96,    -1,    -1,    75,    76,
      84,    85,    86,    -1,    -1,    75,    76,    84,    85,    86,
       6,    -1,    96,    -1,    84,    85,    86,    -1,    14,    96,
      -1,    17,    18,    -1,    20,    -1,    96,    23,    24,    -1,
      -1,    27,    -1,    29,    30,    -1,    32,    -1,    34,    35,
      36,    37,    38,    39,    40,     6,    42,    -1,    -1,    45,
      -1,    47,    -1,    14,    -1,    51,    17,    18,    -1,    20,
      -1,    -1,    23,    24,    -1,    -1,    27,    -1,    29,    30,
      -1,    32,    -1,    34,    35,    36,    37,    38,    39,    40,
      28,    42,    -1,    -1,    45,    -1,    47,    -1,    -1,    -1,
      51,    87,    -1,    89,    90,    -1,    44,    -1,    -1,    -1,
      48,    49,    50,    -1,    52,    53,    54,    -1,    -1,    -1,
      48,    49,    50,    -1,    52,    53,    54,    -1,    -1,    -1,
      68,    -1,    70,    71,    72,    73,    74,    -1,    89,    90,
      68,    -1,    70,    71,    72,    73,    74,    -1,    76,    48,
      49,    50,    -1,    52,    53,    54,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    68,
      -1,    70,    71,    72,    73,    74
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    89,   100,     0,     6,    14,    17,    18,    20,    23,
      24,    27,    29,    30,    32,    34,    35,    36,    37,    38,
      39,    40,    42,    45,    47,    51,    89,    90,   101,   102,
     103,   104,   105,   106,   107,   110,   111,   112,   113,   114,
     115,   116,   118,   122,   123,   127,   129,   132,   133,   136,
     138,   141,   144,   145,    75,     7,     8,    10,    11,    19,
      41,    49,    75,    84,    85,    86,    96,   108,   109,   132,
     136,   137,     6,   136,     6,   132,     6,    75,   108,   137,
       6,    75,    81,     6,   136,     6,   117,    75,   137,   137,
       6,   117,   128,   132,   108,     6,   102,    89,   106,    89,
      21,    25,   124,   125,   126,     6,    55,   132,    15,    16,
     139,   140,   142,   143,   108,   132,   135,   137,   108,   108,
     137,   108,    48,    49,    50,    52,    53,    54,    68,    70,
      71,    72,    73,    74,    28,    44,    81,    33,    35,    75,
      81,   108,    22,   135,    89,   134,    75,    17,    82,   137,
      81,    82,     7,    81,    82,    33,    81,    81,   136,    81,
     124,   125,   142,   108,    81,    75,   137,   142,   143,    82,
      76,    76,   108,    76,    76,   108,   108,   108,   108,   108,
     108,   108,   108,   108,   108,   108,   108,   137,   137,   134,
       6,     6,   135,    89,   130,     7,   132,   136,    76,    88,
     135,     6,    50,   117,    76,   134,     8,   134,   132,     6,
      89,   119,   134,    33,    81,   134,   125,   134,   137,    81,
      82,    81,    76,    88,    81,    81,    81,   132,    22,   101,
      76,    33,    81,    33,    88,     6,   134,    76,   134,   134,
      81,   131,   134,   134,   134,    81,    98,   132,    87,    81,
       6,   134,     6,    91,   120,   121,    81,    81,   130,    87,
      89,   107,   133,   134,     6,    81,   134,   108,    87,   121,
     134,   134,    81,   134,    81,   134,   134
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    99,   100,   100,   100,   101,   101,   101,   102,   102,
     102,   102,   102,   103,   103,   103,   103,   103,   103,   103,
     103,   103,   103,   103,   103,   103,   103,   104,   104,   104,
     104,   104,   104,   104,   105,   105,   106,   106,   106,   106,
     106,   107,   108,   108,   108,   108,   108,   108,   108,   108,
     108,   108,   108,   108,   108,   108,   108,   108,   109,   109,
     110,   110,   111,   111,   112,   113,   113,   114,   114,   115,
     116,   117,   117,   118,   119,   120,   120,   121,   122,   122,
     122,   122,   122,   123,   124,   124,   124,   125,   126,   126,
     127,   128,   128,   129,   129,   130,   131,   131,   131,   131,
     132,   132,   133,   134,   135,   135,   135,   135,   135,   136,
     136,   136,   137,   137,   137,   137,   137,   137,   137,   137,
     137,   137,   137,   137,   138,   139,   139,   139,   139,   140,
     140,   141,   141,   142,   143,   143,   144,   144,   144,   144,
     144,   144,   145,   145
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     1,     2,     1,     2,     2,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     2,     2,     2,     4,     4,     4,
       6,     3,     3,     3,     3,     3,     3,     3,     2,     3,
       2,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       2,     3,     2,     2,     2,     2,     4,     2,     4,     2,
       2,     1,     3,     4,     4,     2,     1,     4,     2,     2,
       3,     3,     4,     3,     3,     4,     6,     3,     2,     1,
       4,     3,     5,     7,     4,     4,     0,     2,     2,     2,
       4,     4,     7,     4,     0,     3,     2,     2,     1,     1,
       2,     2,     1,     3,     3,     3,     3,     3,     3,     3,
       3,     2,     1,     1,     2,     0,     2,     1,     1,     1,
       2,     4,     6,     3,     4,     6,     6,     6,     8,     6,
       7,     9,     4,     6
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
#line 1582 "parser.cpp" /* yacc.c:1646  */
    break;

  case 3:
#line 55 "parser.y" /* yacc.c:1646  */
    { }
#line 1588 "parser.cpp" /* yacc.c:1646  */
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
#line 1601 "parser.cpp" /* yacc.c:1646  */
    break;

  case 5:
#line 66 "parser.y" /* yacc.c:1646  */
    { 
                  std::string name = "Statement" + std::to_string(n_nodes);
                  ++n_nodes;
                  (yyval.astNode) = new StatementsNode(name);
                  (yyval.astNode)->add((yyvsp[0].astNode));
            }
#line 1612 "parser.cpp" /* yacc.c:1646  */
    break;

  case 6:
#line 72 "parser.y" /* yacc.c:1646  */
    { 
                  std::string name = "Statement" + std::to_string(n_nodes);
                  ++n_nodes;
                  (yyval.astNode) = new StatementsNode(name);
                  (yyval.astNode)->add((yyvsp[-1].astNode));
            }
#line 1623 "parser.cpp" /* yacc.c:1646  */
    break;

  case 7:
#line 78 "parser.y" /* yacc.c:1646  */
    { (yyvsp[-1].astNode)->add((yyvsp[0].astNode)); (yyval.astNode) = (yyvsp[-1].astNode); }
#line 1629 "parser.cpp" /* yacc.c:1646  */
    break;

  case 8:
#line 81 "parser.y" /* yacc.c:1646  */
    { (yyval.astNode) = (yyvsp[0].astNode); }
#line 1635 "parser.cpp" /* yacc.c:1646  */
    break;

  case 9:
#line 82 "parser.y" /* yacc.c:1646  */
    { (yyval.astNode) = (yyvsp[0].astNode); }
#line 1641 "parser.cpp" /* yacc.c:1646  */
    break;

  case 13:
#line 88 "parser.y" /* yacc.c:1646  */
    { (yyval.astNode) = (yyvsp[0].astNode); }
#line 1647 "parser.cpp" /* yacc.c:1646  */
    break;

  case 27:
#line 104 "parser.y" /* yacc.c:1646  */
    { (yyval.astNode) = (yyvsp[0].astNode); }
#line 1653 "parser.cpp" /* yacc.c:1646  */
    break;

  case 28:
#line 105 "parser.y" /* yacc.c:1646  */
    { (yyval.astNode) = (yyvsp[0].astNode); }
#line 1659 "parser.cpp" /* yacc.c:1646  */
    break;

  case 41:
#line 124 "parser.y" /* yacc.c:1646  */
    {  
                  std::string name = "assignment" + std::to_string(++n_nodes);
                  (yyval.astNode) = new AssignmentStatement(name);
                  (yyval.astNode)->add((yyvsp[-2].astNode));
                  (yyval.astNode)->add((yyvsp[0].astNode));
            }
#line 1670 "parser.cpp" /* yacc.c:1646  */
    break;

  case 42:
#line 132 "parser.y" /* yacc.c:1646  */
    { 
                  (yyval.astNode) = new BinaryExpressionNode("+", (yyvsp[-2].astNode), (yyvsp[0].astNode));
            }
#line 1678 "parser.cpp" /* yacc.c:1646  */
    break;

  case 43:
#line 135 "parser.y" /* yacc.c:1646  */
    { 
                  (yyval.astNode) = new BinaryExpressionNode("-", (yyvsp[-2].astNode), (yyvsp[0].astNode));
            }
#line 1686 "parser.cpp" /* yacc.c:1646  */
    break;

  case 44:
#line 138 "parser.y" /* yacc.c:1646  */
    { 
                  (yyval.astNode) = new BinaryExpressionNode("*", (yyvsp[-2].astNode), (yyvsp[0].astNode));
            }
#line 1694 "parser.cpp" /* yacc.c:1646  */
    break;

  case 45:
#line 141 "parser.y" /* yacc.c:1646  */
    { 
                  (yyval.astNode) = new BinaryExpressionNode("/", (yyvsp[-2].astNode), (yyvsp[0].astNode));
            }
#line 1702 "parser.cpp" /* yacc.c:1646  */
    break;

  case 46:
#line 144 "parser.y" /* yacc.c:1646  */
    { 
                  (yyval.astNode) = new BinaryExpressionNode("**", (yyvsp[-2].astNode), (yyvsp[0].astNode));
            }
#line 1710 "parser.cpp" /* yacc.c:1646  */
    break;

  case 47:
#line 147 "parser.y" /* yacc.c:1646  */
    {
                  (yyval.astNode) = new BinaryExpressionNode("%", (yyvsp[-2].astNode), (yyvsp[0].astNode));
            }
#line 1718 "parser.cpp" /* yacc.c:1646  */
    break;

  case 48:
#line 150 "parser.y" /* yacc.c:1646  */
    { /*The rule for negation includes %prec UMINUS . The only operator in this rule is - , 
                                                      which has low precedence, but we want unary minus to have higher precedence than multiplication 
                                                      rather than lower. The %prec tells bison to use the precedence of UMINUS for this rule.*/
                                                }
#line 1727 "parser.cpp" /* yacc.c:1646  */
    break;

  case 49:
#line 154 "parser.y" /* yacc.c:1646  */
    {(yyval.astNode) = (yyvsp[-1].astNode); }
#line 1733 "parser.cpp" /* yacc.c:1646  */
    break;

  case 50:
#line 155 "parser.y" /* yacc.c:1646  */
    { }
#line 1739 "parser.cpp" /* yacc.c:1646  */
    break;

  case 54:
#line 159 "parser.y" /* yacc.c:1646  */
    { (yyval.astNode) = (yyvsp[0].astNode); }
#line 1745 "parser.cpp" /* yacc.c:1646  */
    break;

  case 55:
#line 160 "parser.y" /* yacc.c:1646  */
    { (yyval.astNode) = (yyvsp[0].astNode); }
#line 1751 "parser.cpp" /* yacc.c:1646  */
    break;

  case 56:
#line 161 "parser.y" /* yacc.c:1646  */
    { (yyval.astNode) = (yyvsp[0].astNode); }
#line 1757 "parser.cpp" /* yacc.c:1646  */
    break;

  case 57:
#line 162 "parser.y" /* yacc.c:1646  */
    { (yyval.astNode) = (yyvsp[0].astNode); }
#line 1763 "parser.cpp" /* yacc.c:1646  */
    break;

  case 58:
#line 165 "parser.y" /* yacc.c:1646  */
    { (yyval.astNode) = (yyvsp[0].astNode); }
#line 1769 "parser.cpp" /* yacc.c:1646  */
    break;

  case 59:
#line 166 "parser.y" /* yacc.c:1646  */
    { (yyval.astNode) = (yyvsp[0].astNode); }
#line 1775 "parser.cpp" /* yacc.c:1646  */
    break;

  case 60:
#line 169 "parser.y" /* yacc.c:1646  */
    { }
#line 1781 "parser.cpp" /* yacc.c:1646  */
    break;

  case 61:
#line 170 "parser.y" /* yacc.c:1646  */
    { }
#line 1787 "parser.cpp" /* yacc.c:1646  */
    break;

  case 93:
#line 240 "parser.y" /* yacc.c:1646  */
    {
                  std::string name = "class with inheritance" + std::to_string(n_nodes);
                  ++n_nodes;
                  IdentifierNode* idFunc = dynamic_cast<IdentifierNode*>((yyvsp[-5].astNode));
                  (yyval.astNode) = new ClassNode(idFunc->value);
                  (yyval.astNode)->add((yyvsp[-3].astNode));
                  (yyval.astNode)->add((yyvsp[0].astNode));
                  }
#line 1800 "parser.cpp" /* yacc.c:1646  */
    break;

  case 94:
#line 249 "parser.y" /* yacc.c:1646  */
    {
                  std::string name = "class without inheritance" + std::to_string(n_nodes);
                  ++n_nodes;
                  IdentifierNode* idFunc = dynamic_cast<IdentifierNode*>((yyvsp[-2].astNode));
                  (yyval.astNode) = new ClassNode(idFunc->value);
                  (yyval.astNode)->add((yyvsp[0].astNode));
                  }
#line 1812 "parser.cpp" /* yacc.c:1646  */
    break;

  case 95:
#line 259 "parser.y" /* yacc.c:1646  */
    {
                                                (yyval.astNode) = (yyvsp[-1].astNode);
                                          }
#line 1820 "parser.cpp" /* yacc.c:1646  */
    break;

  case 96:
#line 263 "parser.y" /* yacc.c:1646  */
    { 
            std::string nname = "Classbody" + std::to_string(n_nodes);
            ++n_nodes;
            (yyval.astNode) = new EmptyNode(nname);
            }
#line 1830 "parser.cpp" /* yacc.c:1646  */
    break;

  case 97:
#line 268 "parser.y" /* yacc.c:1646  */
    { 
                  (yyval.astNode) = new ClassBodyNode("ClassBody");
                  (yyval.astNode)->add((yyvsp[0].astNode));

            }
#line 1840 "parser.cpp" /* yacc.c:1646  */
    break;

  case 98:
#line 273 "parser.y" /* yacc.c:1646  */
    { 
                  (yyval.astNode) = new ClassBodyNode("ClassBody");
                  (yyval.astNode)->add((yyvsp[0].astNode));
            }
#line 1849 "parser.cpp" /* yacc.c:1646  */
    break;

  case 99:
#line 277 "parser.y" /* yacc.c:1646  */
    {
                  (yyval.astNode) = (yyvsp[-1].astNode);
            }
#line 1857 "parser.cpp" /* yacc.c:1646  */
    break;

  case 100:
#line 282 "parser.y" /* yacc.c:1646  */
    {
                        std::string name = dynamic_cast<IdentifierNode*>((yyvsp[-3].astNode))->value + std::to_string(++n_nodes);
                        (yyval.astNode) = new FunctionCall(name, (yyvsp[-3].astNode));
                        (yyval.astNode)->add((yyvsp[-3].astNode));
                        (yyval.astNode)->add((yyvsp[-1].astNode));                                         
                  }
#line 1868 "parser.cpp" /* yacc.c:1646  */
    break;

  case 101:
#line 288 "parser.y" /* yacc.c:1646  */
    {
                        std::string name = dynamic_cast<IdentifierNode*>((yyvsp[-3].astNode))->value + std::to_string(++n_nodes);
                        (yyval.astNode) = new FunctionCall(name, (yyvsp[-3].astNode));
                        (yyval.astNode)->add((yyvsp[-3].astNode));
                        (yyval.astNode)->add((yyvsp[-1].astNode));
                  }
#line 1879 "parser.cpp" /* yacc.c:1646  */
    break;

  case 102:
#line 296 "parser.y" /* yacc.c:1646  */
    {
                  IdentifierNode* idFunc = dynamic_cast<IdentifierNode*>((yyvsp[-5].astNode));
                  (yyval.astNode) = new FunctionNode(idFunc->value);
                  (yyval.astNode)->add((yyvsp[-3].astNode));
                  (yyval.astNode)->add((yyvsp[0].astNode));
            }
#line 1890 "parser.cpp" /* yacc.c:1646  */
    break;

  case 103:
#line 303 "parser.y" /* yacc.c:1646  */
    {     
                  std::string name = "block" + std::to_string(n_nodes);
                  ++n_nodes;
                  (yyval.astNode) = new BlockNode(name);
                  (yyval.astNode)->add((yyvsp[-1].astNode));
            }
#line 1901 "parser.cpp" /* yacc.c:1646  */
    break;

  case 104:
#line 311 "parser.y" /* yacc.c:1646  */
    { 
            std::string name = "Args" + std::to_string(++n_nodes);
            (yyval.astNode) = new EmptyNode(name); 
      }
#line 1910 "parser.cpp" /* yacc.c:1646  */
    break;

  case 109:
#line 321 "parser.y" /* yacc.c:1646  */
    {
                        std::string name = "identifire" + std::to_string(++n_nodes);
                        (yyvsp[0].astNode)->name=name;
                        (yyval.astNode) = (yyvsp[0].astNode);
                  }
#line 1920 "parser.cpp" /* yacc.c:1646  */
    break;

  case 110:
#line 326 "parser.y" /* yacc.c:1646  */
    {
                        std::string name = "identifire" + std::to_string(++n_nodes);
                        (yyvsp[0].astNode)->name=name;
                        (yyval.astNode) = new MemberExpression((yyvsp[-1].astNode), (yyvsp[0].astNode));
                        (yyval.astNode)->add((yyvsp[-1].astNode)); 
                        (yyval.astNode)->add((yyvsp[0].astNode)); 
                  }
#line 1932 "parser.cpp" /* yacc.c:1646  */
    break;

  case 111:
#line 333 "parser.y" /* yacc.c:1646  */
    { 
                        (yyval.astNode) = new MemberExpression((yyvsp[-1].astNode), (yyvsp[0].astNode)); 
                        (yyval.astNode)->add((yyvsp[-1].astNode)); 
                        (yyval.astNode)->add((yyvsp[0].astNode)); 
                  }
#line 1942 "parser.cpp" /* yacc.c:1646  */
    break;

  case 112:
#line 340 "parser.y" /* yacc.c:1646  */
    { (yyval.astNode) = (yyvsp[0].astNode); }
#line 1948 "parser.cpp" /* yacc.c:1646  */
    break;

  case 113:
#line 341 "parser.y" /* yacc.c:1646  */
    {
                        (yyval.astNode) = new BinaryLogicalExpression(">=", (yyvsp[-2].astNode), (yyvsp[0].astNode));
                  }
#line 1956 "parser.cpp" /* yacc.c:1646  */
    break;

  case 114:
#line 344 "parser.y" /* yacc.c:1646  */
    {
                        (yyval.astNode) = new BinaryLogicalExpression(">", (yyvsp[-2].astNode), (yyvsp[0].astNode));
                  }
#line 1964 "parser.cpp" /* yacc.c:1646  */
    break;

  case 115:
#line 347 "parser.y" /* yacc.c:1646  */
    {
                        (yyval.astNode) = new BinaryLogicalExpression("<=", (yyvsp[-2].astNode), (yyvsp[0].astNode));
                  }
#line 1972 "parser.cpp" /* yacc.c:1646  */
    break;

  case 116:
#line 350 "parser.y" /* yacc.c:1646  */
    {
                        (yyval.astNode) = new BinaryLogicalExpression("<", (yyvsp[-2].astNode), (yyvsp[0].astNode));
                  }
#line 1980 "parser.cpp" /* yacc.c:1646  */
    break;

  case 117:
#line 353 "parser.y" /* yacc.c:1646  */
    {
                        (yyval.astNode) = new BinaryLogicalExpression("==", (yyvsp[-2].astNode), (yyvsp[0].astNode));
                  }
#line 1988 "parser.cpp" /* yacc.c:1646  */
    break;

  case 118:
#line 356 "parser.y" /* yacc.c:1646  */
    {
                        (yyval.astNode) = new BinaryLogicalExpression("!=", (yyvsp[-2].astNode), (yyvsp[0].astNode));
                  }
#line 1996 "parser.cpp" /* yacc.c:1646  */
    break;

  case 119:
#line 359 "parser.y" /* yacc.c:1646  */
    {
                        (yyval.astNode) = new BinaryLogicalExpression("and", (yyvsp[-2].astNode), (yyvsp[0].astNode));
                  }
#line 2004 "parser.cpp" /* yacc.c:1646  */
    break;

  case 120:
#line 362 "parser.y" /* yacc.c:1646  */
    {
                        (yyval.astNode) = new BinaryLogicalExpression("or", (yyvsp[-2].astNode), (yyvsp[0].astNode));
                  }
#line 2012 "parser.cpp" /* yacc.c:1646  */
    break;

  case 121:
#line 365 "parser.y" /* yacc.c:1646  */
    {
                        (yyval.astNode) = new BinaryLogicalExpression("not", (yyvsp[-1].astNode), (yyvsp[0].astNode));
                  }
#line 2020 "parser.cpp" /* yacc.c:1646  */
    break;

  case 122:
#line 368 "parser.y" /* yacc.c:1646  */
    { (yyval.astNode) = (yyvsp[0].astNode); }
#line 2026 "parser.cpp" /* yacc.c:1646  */
    break;

  case 123:
#line 369 "parser.y" /* yacc.c:1646  */
    { (yyval.astNode) = (yyvsp[0].astNode); }
#line 2032 "parser.cpp" /* yacc.c:1646  */
    break;

  case 124:
#line 372 "parser.y" /* yacc.c:1646  */
    {
                              (yyvsp[-1].astNode)->add((yyvsp[0].astNode));
                              (yyval.astNode) = (yyvsp[-1].astNode);
                        }
#line 2041 "parser.cpp" /* yacc.c:1646  */
    break;

  case 125:
#line 378 "parser.y" /* yacc.c:1646  */
    { 
                  std::string name = "elif_else" + std::to_string(++n_nodes);
                  (yyval.astNode) = new EmptyNode(name); 
            }
#line 2050 "parser.cpp" /* yacc.c:1646  */
    break;

  case 126:
#line 382 "parser.y" /* yacc.c:1646  */
    {
                  (yyvsp[-1].astNode)->add((yyvsp[0].astNode));
                  (yyval.astNode) = (yyvsp[-1].astNode);
            }
#line 2059 "parser.cpp" /* yacc.c:1646  */
    break;

  case 127:
#line 386 "parser.y" /* yacc.c:1646  */
    {
                  (yyval.astNode) = (yyvsp[0].astNode);
            }
#line 2067 "parser.cpp" /* yacc.c:1646  */
    break;

  case 128:
#line 389 "parser.y" /* yacc.c:1646  */
    {
                  (yyval.astNode) = (yyvsp[0].astNode);
            }
#line 2075 "parser.cpp" /* yacc.c:1646  */
    break;

  case 129:
#line 394 "parser.y" /* yacc.c:1646  */
    {
                  (yyval.astNode) = (yyvsp[0].astNode);
            }
#line 2083 "parser.cpp" /* yacc.c:1646  */
    break;

  case 130:
#line 397 "parser.y" /* yacc.c:1646  */
    {
                  (yyvsp[-1].astNode)->add((yyvsp[0].astNode));
                  (yyval.astNode) = (yyvsp[-1].astNode);
            }
#line 2092 "parser.cpp" /* yacc.c:1646  */
    break;

  case 131:
#line 403 "parser.y" /* yacc.c:1646  */
    {
                        std::string name = "if" + std::to_string(++n_nodes);
                        (yyval.astNode) = new ConditionalStatement("if", name);
                        (yyval.astNode)->add((yyvsp[-2].astNode));
                        (yyval.astNode)->add((yyvsp[0].astNode));
                  }
#line 2103 "parser.cpp" /* yacc.c:1646  */
    break;

  case 132:
#line 409 "parser.y" /* yacc.c:1646  */
    {
                        std::string name = "if" + std::to_string(++n_nodes);
                        (yyval.astNode) = new ConditionalStatement("if", name);
                        (yyval.astNode)->add((yyvsp[-3].astNode));
                        (yyval.astNode)->add((yyvsp[0].astNode));
                  }
#line 2114 "parser.cpp" /* yacc.c:1646  */
    break;

  case 133:
#line 417 "parser.y" /* yacc.c:1646  */
    {
                        std::string name = "else" + std::to_string(++n_nodes);
                        (yyval.astNode) = new ConditionalStatement("else", name);
                        (yyval.astNode)->add((yyvsp[0].astNode));
                  }
#line 2124 "parser.cpp" /* yacc.c:1646  */
    break;

  case 134:
#line 424 "parser.y" /* yacc.c:1646  */
    {
                        std::string name = "elif" + std::to_string(++n_nodes);
                        (yyval.astNode) = new ConditionalStatement("elif", name);
                        (yyval.astNode)->add((yyvsp[-2].astNode));
                        (yyval.astNode)->add((yyvsp[0].astNode));
                  }
#line 2135 "parser.cpp" /* yacc.c:1646  */
    break;

  case 135:
#line 430 "parser.y" /* yacc.c:1646  */
    {
                        std::string name = "elif" + std::to_string(++n_nodes);
                        (yyval.astNode) = new ConditionalStatement("elif", name);
                        (yyval.astNode)->add((yyvsp[-3].astNode));
                        (yyval.astNode)->add((yyvsp[0].astNode));
                  }
#line 2146 "parser.cpp" /* yacc.c:1646  */
    break;


#line 2150 "parser.cpp" /* yacc.c:1646  */
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
#line 450 "parser.y" /* yacc.c:1906  */


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
      if (root != NULL) {
            AST ast(root);
            ast.Print();
      }
      return 0;
}


void yyerror(const char* s) {
    std::cerr << "Parser error: " << s << std::endl;
}
