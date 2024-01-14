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
#define YYLAST   597

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  100
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  49
/* YYNRULES -- Number of rules.  */
#define YYNRULES  145
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  281

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
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
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
     233,   234,   235,   236,   239,   248,   252,   253,   254,   255,
     256,   259,   260,   261,   264,   265,   266,   267,   268,   269,
     270,   271,   272,   273,   274,   275,   278,   281,   282,   283,
     284,   287,   288,   291,   292,   295,   298,   299,   302,   303,
     304,   305,   306,   307,   310,   311
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
     345,    43,    45,    42,    47,   124,   346,    40,    41,    46
};
# endif

#define YYPACT_NINF -83

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-83)))

#define YYTABLE_NINF -115

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -58,   -83,   364,   -83,    -9,     9,    29,   -83,   -83,    38,
      53,   208,   -83,    -1,   -44,    91,    29,    93,   156,   208,
     102,    93,    38,   268,   -83,   -83,   -83,   105,   466,   -83,
     -83,   -83,    14,     0,   -83,   -83,   -83,   -83,   -83,   -83,
     -83,   -83,   -83,   -83,    46,   -83,   -83,   -83,   -83,   -83,
     -83,   -83,    27,   -83,   -83,   -16,   277,    64,   -83,   -83,
     -83,   -83,   -83,   208,   208,   -83,   -83,   268,   268,   268,
     523,   -83,   -83,   136,    -6,   -83,    28,    64,   110,   -48,
     514,    81,   125,   268,    72,    95,    23,    89,   -83,   208,
       8,    20,   166,   -83,    55,   141,   425,    99,   -83,   -83,
     -83,   -83,     1,   103,   -83,   -83,   119,   106,   171,   -83,
      27,   -83,   -83,   -83,   112,   176,   115,   117,   194,    81,
      -3,   425,   425,   282,   268,   268,   268,   268,   268,   268,
     268,   268,   268,   268,   268,   268,    64,   -83,   208,   208,
      72,   180,   188,   268,   107,   149,   214,   116,   -83,   268,
      12,    93,    19,    72,   191,   -83,    72,    38,   201,   120,
      72,     5,    72,   -83,   -83,   184,    72,   208,    11,   -83,
     -83,   -83,   -83,   -83,   -83,   -83,   409,   129,   -83,   425,
     425,   425,   425,   425,   425,   425,   425,   425,   425,   425,
     425,    81,    81,   -83,   -83,   -83,   231,   124,   142,   151,
      15,   195,   501,   253,   203,   -83,   -83,   161,   -83,   -83,
     -83,   210,   -83,   158,   -83,   -83,    72,   -83,   -83,   -83,
      82,    72,   -83,    72,   173,   159,    72,    72,    72,    31,
      38,   399,   181,   246,    72,   251,   174,   -83,   186,   -83,
     -83,   159,   178,   183,   -83,   -83,   -83,    72,   265,   192,
     -83,    72,   -83,   -83,   -83,   268,    41,   -83,    72,   -83,
     -83,   -83,   -83,   196,    72,   -83,   416,   -83,   -83,   -83,
      17,    72,   -83,    72,   225,   -83,   -83,   -83,   -83,   -83,
     -83
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       2,     3,     0,     1,     0,     0,     0,    24,    25,     0,
       0,     0,    26,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    11,    12,    10,     0,     4,     6,
       9,     8,    21,     0,    13,    20,    14,    15,    16,    17,
      18,    19,    32,    33,     0,    23,    29,    91,    92,    22,
      27,    28,   127,    30,    31,     0,   106,   111,    55,    54,
     125,   124,    56,     0,     0,    57,    58,     0,     0,     0,
     114,    51,    53,    52,     0,   111,    36,     0,    66,     0,
      61,    62,     0,   106,     0,     0,     0,    70,    69,     0,
       0,    64,    59,    68,     0,     0,    63,     0,     7,     5,
      35,    34,     0,     0,    87,    77,    78,     0,     0,   126,
     129,   130,   131,    41,    54,   110,    51,    53,     0,   123,
       0,    50,    48,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   112,   113,     0,     0,
       0,     0,     0,   106,     0,     0,     0,     0,    82,   106,
       0,     0,     0,     0,     0,    60,     0,     0,     0,     0,
       0,     0,     0,    86,    79,    80,     0,     0,     0,   128,
     132,   102,   109,   101,   103,   100,   108,     0,    49,    42,
      43,    44,    45,    46,    47,   119,   120,   116,   115,   118,
     117,   121,   122,   133,    39,    67,     0,     0,     0,     0,
       0,     0,     0,     0,    37,    38,    71,     0,   144,    65,
      88,     0,    89,     0,    72,    83,     0,    85,    81,   135,
       0,     0,   107,     0,     0,     0,     0,     0,     0,   113,
       0,     0,     0,     0,     0,     0,     0,    84,     0,   136,
     134,     0,     0,     0,   139,   138,   141,     0,     0,     0,
     105,     0,    40,   145,    90,     0,     0,    75,     0,    93,
      95,    99,   142,     0,     0,   104,     0,    73,    74,   137,
       0,     0,   140,     0,     0,    94,    98,    96,    97,   143,
      76
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -83,   -83,    79,   -26,   -83,   -83,   -83,   250,    18,   -11,
     113,   -83,   -83,   -83,   -83,   -83,   -83,   -83,   -18,   -83,
     -83,   -83,    39,   -83,   -83,   198,   -82,   -83,   -83,   -83,
     -83,   -83,    56,   -83,   -83,     4,    24,   -75,   -73,    -2,
     -10,   -83,   -83,   -83,   -83,    44,   200,   -83,   -83
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,    28,    29,    30,    31,    32,    33,    34,    70,
      71,    35,    36,    37,    38,    39,    40,    41,    88,    42,
     214,   256,   257,    43,    44,   104,   105,   106,    45,    94,
      46,    47,   243,   270,    48,    72,    50,   148,   118,    73,
      74,    51,   109,   110,    52,   111,   112,    53,    54
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      80,    81,    99,    93,    76,    82,    49,    75,    90,    91,
     146,   136,    96,    78,    86,    57,    58,    59,   204,    60,
      61,   136,   138,   274,   164,   138,    95,   143,    62,   136,
       1,     6,    49,   144,   136,    75,   138,    84,   139,   138,
     150,   139,   107,   108,    77,   115,    55,   138,   138,    16,
      63,    15,   139,   119,   120,   139,   121,   122,   123,    79,
     117,   141,   205,   139,   139,   193,    56,   102,    65,    66,
     196,   103,   115,   177,    83,   140,   203,   137,   208,   152,
     137,   210,   160,   218,    64,   215,   216,   217,   101,   153,
     137,   219,   221,    65,    66,   207,   228,    85,   168,    87,
     161,    67,   154,   275,    68,   276,    69,   176,    92,   138,
     138,    97,   247,   179,   180,   181,   182,   183,   184,   185,
     186,   187,   188,   189,   190,   139,   139,   267,   191,   192,
     248,   255,   115,   206,   107,   176,   156,   157,   115,    56,
     102,   237,   136,   200,   103,   142,   239,   145,   240,   199,
     165,   244,   245,   246,   169,    57,   198,   220,   238,   253,
     147,   211,    57,    58,    59,   137,    60,    61,   113,   116,
     149,   151,   262,   155,   158,    62,   265,    57,    58,    59,
     159,    60,    61,   269,   162,   176,   194,   166,   171,   272,
      62,   173,   176,   174,   195,   197,   279,    63,   280,   209,
      57,    58,    59,   202,   229,    99,    49,   212,   213,   103,
     223,   225,    63,    62,    57,    58,    59,   230,    60,    61,
      57,    58,    59,   226,   124,   125,   126,    62,   127,   128,
     129,    89,   227,    62,   249,    49,   233,    57,    58,    59,
      65,    66,   234,   235,   266,   236,   167,   242,    67,    63,
      62,    68,   252,    69,   241,    65,    66,   254,   172,    57,
      58,    59,   251,    67,   255,   260,    68,   258,    69,   261,
     175,   263,    62,   264,    57,    58,    59,   271,    65,    66,
      55,   231,   100,    57,    58,   114,    67,    62,   277,    68,
     201,    69,    65,    66,   278,   268,    62,   259,    65,    66,
      67,     0,     0,    68,   163,    69,    67,   224,     0,    68,
     170,    69,     0,     0,     0,    65,    66,     0,     0,     0,
       0,     0,     0,    67,     0,     0,    68,     0,    69,   232,
     124,   125,   126,     0,   127,   128,   129,    65,    66,     0,
       0,     0,     0,     0,     0,    67,     0,     0,    68,     0,
      69,     0,    65,    66,     0,     0,     0,     0,     0,     0,
      67,    65,    66,    68,     3,    69,     0,     0,     0,    67,
       4,     0,    68,     0,    69,     0,     0,     0,     5,     0,
     178,     6,     7,     0,     8,     0,     0,     9,    10,     0,
       0,    11,     0,    12,    13,     0,    14,     0,    15,    16,
      17,    18,    19,    20,    21,     4,    22,     0,     0,    23,
       0,    24,     0,     5,     0,    25,     6,     7,     0,     8,
       0,     0,     9,    10,     0,     0,    11,     0,    12,    13,
       0,    14,     0,    15,    16,    17,    18,    19,    20,    21,
       0,    22,     0,     0,    23,     0,    24,     0,     0,     0,
      25,     0,    26,    27,     0,     0,     0,   124,   125,   126,
       0,   127,   128,   129,   124,   125,   126,     0,   127,   128,
     129,     0,     4,   124,   125,   126,     0,   127,   128,   129,
       5,     0,     0,     6,     7,   250,     8,    98,    27,     9,
      10,   222,     0,    11,     0,    12,    13,   273,    14,     0,
      15,    16,    17,    18,    19,    20,    21,     4,    22,     0,
       0,    23,     0,    24,     0,     5,     0,    25,     6,     7,
       0,     8,     0,     0,     9,    10,     0,     0,    11,     0,
      12,    13,     0,    14,     0,    15,    16,    17,    18,    19,
      20,    21,  -114,    22,     0,     0,    23,     0,    24,     0,
       0,     0,    25,     0,    98,    27,     0,     0,  -114,     0,
       0,     0,   124,   125,   126,     0,   127,   128,   129,     0,
       0,   124,   125,   126,     0,   127,   128,   129,     0,     0,
       0,     0,   130,     0,   131,   132,   133,   134,   135,    26,
      27,   130,     0,   131,   132,   133,   134,   135
};

static const yytype_int16 yycheck[] =
{
      11,    11,    28,    21,     6,     6,     2,     6,    18,    19,
      83,     6,    23,     9,    16,     6,     7,     8,     6,    10,
      11,     6,    28,     6,   106,    28,    22,    75,    19,     6,
      88,    17,    28,    81,     6,     6,    28,    81,    44,    28,
      17,    44,    15,    16,     6,    56,    55,    28,    28,    35,
      41,    34,    44,    63,    64,    44,    67,    68,    69,     6,
      56,    33,    50,    44,    44,   140,    75,    21,    84,    85,
     143,    25,    83,    76,    75,    81,   149,    73,   153,    89,
      76,   156,    81,   165,    75,   160,    81,   162,    88,    81,
      86,   166,    81,    84,    85,    76,    81,     6,   108,     6,
     102,    92,    82,    86,    95,    88,    97,   118,     6,    28,
      28,     6,    81,   124,   125,   126,   127,   128,   129,   130,
     131,   132,   133,   134,   135,    44,    44,    86,   138,   139,
      99,    90,   143,   151,    15,   146,    81,    82,   149,    75,
      21,   216,     6,   145,    25,    35,   221,    22,   223,   145,
     106,   226,   227,   228,   110,     6,     7,   167,    76,   234,
      88,   157,     6,     7,     8,   161,    10,    11,    55,    56,
      75,    82,   247,     7,    33,    19,   251,     6,     7,     8,
      81,    10,    11,   258,    81,   196,     6,    81,    76,   264,
      19,    76,   203,    76,     6,    88,   271,    41,   273,     8,
       6,     7,     8,    87,   200,   231,   202,     6,    88,    25,
      81,    87,    41,    19,     6,     7,     8,    22,    10,    11,
       6,     7,     8,    81,    48,    49,    50,    19,    52,    53,
      54,    75,    81,    19,   230,   231,    33,     6,     7,     8,
      84,    85,    81,    33,   255,    87,    75,    88,    92,    41,
      19,    95,     6,    97,    81,    84,    85,     6,    82,     6,
       7,     8,    81,    92,    90,    87,    95,    81,    97,    86,
      76,     6,    19,    81,     6,     7,     8,    81,    84,    85,
      55,   202,    32,     6,     7,     8,    92,    19,   270,    95,
      76,    97,    84,    85,   270,   256,    19,   241,    84,    85,
      92,    -1,    -1,    95,   106,    97,    92,    76,    -1,    95,
     110,    97,    -1,    -1,    -1,    84,    85,    -1,    -1,    -1,
      -1,    -1,    -1,    92,    -1,    -1,    95,    -1,    97,    76,
      48,    49,    50,    -1,    52,    53,    54,    84,    85,    -1,
      -1,    -1,    -1,    -1,    -1,    92,    -1,    -1,    95,    -1,
      97,    -1,    84,    85,    -1,    -1,    -1,    -1,    -1,    -1,
      92,    84,    85,    95,     0,    97,    -1,    -1,    -1,    92,
       6,    -1,    95,    -1,    97,    -1,    -1,    -1,    14,    -1,
      98,    17,    18,    -1,    20,    -1,    -1,    23,    24,    -1,
      -1,    27,    -1,    29,    30,    -1,    32,    -1,    34,    35,
      36,    37,    38,    39,    40,     6,    42,    -1,    -1,    45,
      -1,    47,    -1,    14,    -1,    51,    17,    18,    -1,    20,
      -1,    -1,    23,    24,    -1,    -1,    27,    -1,    29,    30,
      -1,    32,    -1,    34,    35,    36,    37,    38,    39,    40,
      -1,    42,    -1,    -1,    45,    -1,    47,    -1,    -1,    -1,
      51,    -1,    88,    89,    -1,    -1,    -1,    48,    49,    50,
      -1,    52,    53,    54,    48,    49,    50,    -1,    52,    53,
      54,    -1,     6,    48,    49,    50,    -1,    52,    53,    54,
      14,    -1,    -1,    17,    18,    86,    20,    88,    89,    23,
      24,    82,    -1,    27,    -1,    29,    30,    81,    32,    -1,
      34,    35,    36,    37,    38,    39,    40,     6,    42,    -1,
      -1,    45,    -1,    47,    -1,    14,    -1,    51,    17,    18,
      -1,    20,    -1,    -1,    23,    24,    -1,    -1,    27,    -1,
      29,    30,    -1,    32,    -1,    34,    35,    36,    37,    38,
      39,    40,    28,    42,    -1,    -1,    45,    -1,    47,    -1,
      -1,    -1,    51,    -1,    88,    89,    -1,    -1,    44,    -1,
      -1,    -1,    48,    49,    50,    -1,    52,    53,    54,    -1,
      -1,    48,    49,    50,    -1,    52,    53,    54,    -1,    -1,
      -1,    -1,    68,    -1,    70,    71,    72,    73,    74,    88,
      89,    68,    -1,    70,    71,    72,    73,    74
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    88,   101,     0,     6,    14,    17,    18,    20,    23,
      24,    27,    29,    30,    32,    34,    35,    36,    37,    38,
      39,    40,    42,    45,    47,    51,    88,    89,   102,   103,
     104,   105,   106,   107,   108,   111,   112,   113,   114,   115,
     116,   117,   119,   123,   124,   128,   130,   131,   134,   135,
     136,   141,   144,   147,   148,    55,    75,     6,     7,     8,
      10,    11,    19,    41,    75,    84,    85,    92,    95,    97,
     109,   110,   135,   139,   140,     6,   139,     6,   135,     6,
     109,   140,     6,    75,    81,     6,   139,     6,   118,    75,
     140,   140,     6,   118,   129,   135,   109,     6,    88,   103,
     107,    88,    21,    25,   125,   126,   127,    15,    16,   142,
     143,   145,   146,   110,     8,   109,   110,   135,   138,   140,
     140,   109,   109,   109,    48,    49,    50,    52,    53,    54,
      68,    70,    71,    72,    73,    74,     6,   135,    28,    44,
      81,    33,    35,    75,    81,    22,   138,    88,   137,    75,
      17,    82,   140,    81,    82,     7,    81,    82,    33,    81,
      81,   139,    81,   125,   126,   145,    81,    75,   140,   145,
     146,    76,    82,    76,    76,    76,   109,    76,    98,   109,
     109,   109,   109,   109,   109,   109,   109,   109,   109,   109,
     109,   140,   140,   137,     6,     6,   138,    88,     7,   135,
     139,    76,    87,   138,     6,    50,   118,    76,   137,     8,
     137,   135,     6,    88,   120,   137,    81,   137,   126,   137,
     140,    81,    82,    81,    76,    87,    81,    81,    81,   135,
      22,   102,    76,    33,    81,    33,    87,   137,    76,   137,
     137,    81,    88,   132,   137,   137,   137,    81,    99,   135,
      86,    81,     6,   137,     6,    90,   121,   122,    81,   132,
      87,    86,   137,     6,    81,   137,   109,    86,   122,   137,
     133,    81,   137,    81,     6,    86,    88,   108,   136,   137,
     137
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,   100,   101,   101,   101,   102,   102,   102,   103,   103,
     103,   103,   103,   104,   104,   104,   104,   104,   104,   104,
     104,   104,   104,   104,   104,   104,   104,   105,   105,   105,
     105,   105,   105,   105,   106,   106,   107,   107,   107,   107,
     107,   108,   109,   109,   109,   109,   109,   109,   109,   109,
     109,   109,   109,   109,   109,   109,   109,   110,   110,   111,
     111,   112,   112,   113,   114,   114,   115,   115,   116,   117,
     118,   118,   119,   120,   121,   121,   122,   123,   123,   123,
     123,   123,   124,   125,   125,   126,   127,   127,   128,   129,
     129,   130,   130,   131,   132,   133,   133,   133,   133,   134,
     135,   135,   135,   135,   136,   137,   138,   138,   138,   138,
     138,   139,   139,   139,   140,   140,   140,   140,   140,   140,
     140,   140,   140,   140,   140,   140,   141,   142,   142,   142,
     142,   143,   143,   144,   144,   145,   146,   146,   147,   147,
     147,   147,   147,   147,   148,   148
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     1,     2,     2,     1,     2,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     2,     2,     2,     4,     4,     4,
       6,     3,     3,     3,     3,     3,     3,     3,     2,     3,
       2,     1,     1,     1,     1,     1,     1,     1,     1,     2,
       3,     2,     2,     2,     2,     4,     2,     4,     2,     2,
       1,     3,     4,     4,     2,     1,     4,     2,     2,     3,
       3,     4,     3,     3,     4,     3,     2,     1,     4,     3,
       5,     1,     1,     7,     4,     0,     2,     2,     2,     7,
       4,     4,     4,     4,     7,     4,     0,     3,     2,     2,
       1,     1,     2,     2,     1,     3,     3,     3,     3,     3,
       3,     3,     3,     2,     1,     1,     2,     0,     2,     1,
       1,     1,     2,     4,     6,     3,     4,     6,     6,     6,
       8,     6,     7,     9,     4,     6
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
#line 52 "parser.y" /* yacc.c:1646  */
    { (yyval.astNode) = NULL; }
#line 1582 "parser.cpp" /* yacc.c:1646  */
    break;

  case 3:
#line 53 "parser.y" /* yacc.c:1646  */
    { }
#line 1588 "parser.cpp" /* yacc.c:1646  */
    break;

  case 4:
#line 54 "parser.y" /* yacc.c:1646  */
    {
                              printf("------------ PROGRAM ACCEPTED ------------\n");
                              (yyval.astNode) = new StatementsNode("prog");
                              (yyval.astNode)->add((yyvsp[-1].astNode));
                              (yyval.astNode)->add((yyvsp[0].astNode));
                              root = (yyval.astNode);
                              YYACCEPT;
                        }
#line 1601 "parser.cpp" /* yacc.c:1646  */
    break;

  case 5:
#line 64 "parser.y" /* yacc.c:1646  */
    { (yyvsp[-1].astNode)->add((yyvsp[0].astNode)); (yyval.astNode) = (yyvsp[-1].astNode); }
#line 1607 "parser.cpp" /* yacc.c:1646  */
    break;

  case 6:
#line 65 "parser.y" /* yacc.c:1646  */
    { (yyval.astNode) = (yyvsp[0].astNode); }
#line 1613 "parser.cpp" /* yacc.c:1646  */
    break;

  case 7:
#line 66 "parser.y" /* yacc.c:1646  */
    { (yyval.astNode) = (yyvsp[-1].astNode); }
#line 1619 "parser.cpp" /* yacc.c:1646  */
    break;

  case 8:
#line 69 "parser.y" /* yacc.c:1646  */
    { (yyval.astNode) = (yyvsp[0].astNode); }
#line 1625 "parser.cpp" /* yacc.c:1646  */
    break;

  case 9:
#line 70 "parser.y" /* yacc.c:1646  */
    { (yyval.astNode) = (yyvsp[0].astNode); }
#line 1631 "parser.cpp" /* yacc.c:1646  */
    break;

  case 13:
#line 76 "parser.y" /* yacc.c:1646  */
    { (yyval.astNode) = (yyvsp[0].astNode); }
#line 1637 "parser.cpp" /* yacc.c:1646  */
    break;

  case 27:
#line 92 "parser.y" /* yacc.c:1646  */
    { (yyval.astNode) = (yyvsp[0].astNode); }
#line 1643 "parser.cpp" /* yacc.c:1646  */
    break;

  case 41:
#line 112 "parser.y" /* yacc.c:1646  */
    {  (yyval.astNode) = new assignmentStatement("assign1");
                                          std::string nname = "iden" + std::to_string(n_nodes);
                                          ++n_nodes;
                                          (yyvsp[-2].astNode)->name=nname;
                                          (yyval.astNode)->add((yyvsp[-2].astNode));
                                          (yyval.astNode)->add((yyvsp[0].astNode));
                                    }
#line 1655 "parser.cpp" /* yacc.c:1646  */
    break;

  case 42:
#line 121 "parser.y" /* yacc.c:1646  */
    { }
#line 1661 "parser.cpp" /* yacc.c:1646  */
    break;

  case 43:
#line 122 "parser.y" /* yacc.c:1646  */
    { }
#line 1667 "parser.cpp" /* yacc.c:1646  */
    break;

  case 44:
#line 123 "parser.y" /* yacc.c:1646  */
    { }
#line 1673 "parser.cpp" /* yacc.c:1646  */
    break;

  case 45:
#line 124 "parser.y" /* yacc.c:1646  */
    { }
#line 1679 "parser.cpp" /* yacc.c:1646  */
    break;

  case 46:
#line 125 "parser.y" /* yacc.c:1646  */
    { }
#line 1685 "parser.cpp" /* yacc.c:1646  */
    break;

  case 48:
#line 127 "parser.y" /* yacc.c:1646  */
    { /*The rule for negation includes %prec UMINUS . The only operator in this rule is - , 
                                                      which has low precedence, but we want unary minus to have higher precedence than multiplication 
                                                      rather than lower. The %prec tells bison to use the precedence of UMINUS for this rule.*/
                                                }
#line 1694 "parser.cpp" /* yacc.c:1646  */
    break;

  case 49:
#line 131 "parser.y" /* yacc.c:1646  */
    { }
#line 1700 "parser.cpp" /* yacc.c:1646  */
    break;

  case 50:
#line 132 "parser.y" /* yacc.c:1646  */
    { }
#line 1706 "parser.cpp" /* yacc.c:1646  */
    break;

  case 51:
#line 133 "parser.y" /* yacc.c:1646  */
    { }
#line 1712 "parser.cpp" /* yacc.c:1646  */
    break;

  case 52:
#line 134 "parser.y" /* yacc.c:1646  */
    { }
#line 1718 "parser.cpp" /* yacc.c:1646  */
    break;

  case 53:
#line 135 "parser.y" /* yacc.c:1646  */
    { }
#line 1724 "parser.cpp" /* yacc.c:1646  */
    break;

  case 54:
#line 136 "parser.y" /* yacc.c:1646  */
    { }
#line 1730 "parser.cpp" /* yacc.c:1646  */
    break;

  case 55:
#line 137 "parser.y" /* yacc.c:1646  */
    { }
#line 1736 "parser.cpp" /* yacc.c:1646  */
    break;

  case 56:
#line 138 "parser.y" /* yacc.c:1646  */
    { }
#line 1742 "parser.cpp" /* yacc.c:1646  */
    break;

  case 57:
#line 141 "parser.y" /* yacc.c:1646  */
    { (yyval.astNode) = (yyvsp[0].astNode); }
#line 1748 "parser.cpp" /* yacc.c:1646  */
    break;

  case 58:
#line 142 "parser.y" /* yacc.c:1646  */
    { (yyval.astNode) = (yyvsp[0].astNode); }
#line 1754 "parser.cpp" /* yacc.c:1646  */
    break;

  case 59:
#line 145 "parser.y" /* yacc.c:1646  */
    { }
#line 1760 "parser.cpp" /* yacc.c:1646  */
    break;

  case 60:
#line 146 "parser.y" /* yacc.c:1646  */
    { }
#line 1766 "parser.cpp" /* yacc.c:1646  */
    break;

  case 104:
#line 239 "parser.y" /* yacc.c:1646  */
    {
                  std::string name = "function" + std::to_string(n_nodes);
                  ++n_nodes;
                  IdentifierNode* idFunc = dynamic_cast<IdentifierNode*>((yyvsp[-5].astNode));
                  (yyval.astNode) = new FunctionNode(idFunc->value);
                  (yyval.astNode)->add((yyvsp[-3].astNode));
                  (yyval.astNode)->add((yyvsp[0].astNode));
            }
#line 1779 "parser.cpp" /* yacc.c:1646  */
    break;

  case 105:
#line 248 "parser.y" /* yacc.c:1646  */
    {
            (yyval.astNode) = (yyvsp[-1].astNode);
      }
#line 1787 "parser.cpp" /* yacc.c:1646  */
    break;

  case 106:
#line 252 "parser.y" /* yacc.c:1646  */
    { (yyval.astNode) = NULL; }
#line 1793 "parser.cpp" /* yacc.c:1646  */
    break;


#line 1797 "parser.cpp" /* yacc.c:1646  */
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
#line 314 "parser.y" /* yacc.c:1906  */


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
