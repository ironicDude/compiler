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
#define YYLAST   579

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  99
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  47
/* YYNRULES -- Number of rules.  */
#define YYNRULES  143
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  276

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
       0,    51,    51,    55,    56,    66,    70,    74,    80,    81,
      82,    83,    84,    87,    88,    89,    90,    91,    92,    93,
      94,    95,    96,    97,    98,    99,   100,   103,   104,   105,
     106,   107,   108,   109,   112,   113,   116,   117,   118,   119,
     120,   123,   131,   134,   137,   140,   143,   146,   149,   153,
     154,   155,   156,   157,   158,   159,   160,   161,   164,   165,
     168,   173,   181,   186,   193,   200,   201,   204,   205,   208,
     211,   214,   215,   218,   221,   224,   225,   228,   231,   232,
     233,   234,   235,   238,   241,   242,   243,   246,   249,   250,
     253,   256,   257,   260,   269,   279,   283,   288,   293,   297,
     302,   308,   316,   323,   331,   335,   336,   337,   338,   341,
     346,   353,   360,   361,   364,   367,   370,   373,   376,   379,
     382,   385,   388,   389,   392,   398,   402,   406,   409,   414,
     417,   423,   429,   437,   444,   450,   458,   459,   460,   461,
     462,   463,   466,   472
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
     -59,   -95,    32,   -95,   453,   -19,   157,    58,   -95,   -95,
      91,    96,   252,   -95,    14,    27,   115,    58,   117,   269,
     252,   125,   117,    91,   344,   -95,   -95,   -95,   131,    50,
     -95,   -95,     8,    51,   -95,   -95,   -95,   -95,   -95,   -95,
     -95,   -95,   -95,   -95,     6,   -95,   -95,   -95,   -95,    11,
     -95,    44,   -95,   -95,   344,   -95,   -95,   -95,   -95,   -95,
     252,   344,   252,   -95,   -95,   -95,   344,   505,   -95,   -95,
     135,    -7,   -95,    22,   -19,   107,    23,   344,   466,    -6,
     121,   344,    57,    70,    41,    68,   -95,   252,    -4,   -10,
     144,   -95,    25,   120,   167,    81,   -95,   -95,   -95,     9,
      85,   -95,   -95,    80,   -19,   344,   -95,    89,   298,   -95,
      44,   -95,   -95,   276,    78,    73,    -6,   167,   476,    -5,
     167,   344,   344,   344,   344,   344,   344,   344,   344,   344,
     344,   344,   344,   252,   252,    57,   165,   166,   344,    84,
     368,   122,   128,    86,   -95,   344,    35,   117,    18,    57,
     172,   -95,    57,    91,   175,    94,    57,     2,    57,   -95,
     -95,   160,   167,    57,   252,     1,   -95,   -95,   -95,   -95,
     -95,   318,   -95,   105,   167,   167,   167,   167,   167,   167,
     167,   167,   167,   167,   167,   167,    -6,    -6,   -95,   -95,
     -95,   313,   100,   -95,   112,   116,    10,   178,   -95,   327,
     168,   -95,   -95,   124,   -95,   -95,   -95,   169,   -95,   119,
     -95,   -95,   202,    57,   -95,   -95,   -95,    56,    57,   -95,
      57,   129,   -95,    57,    57,    57,   -62,    91,   418,   130,
     203,    57,   212,   136,   141,   -95,   145,   -95,   -95,    84,
      -1,   -95,   -95,   -95,    57,   222,   148,   -95,    57,   -95,
     -95,   -95,   344,   -43,   -95,    57,    57,   -95,   -95,   -95,
     -95,   -95,   -95,   152,    57,   -95,   142,   -95,   -95,   -95,
     -95,    57,   -95,    57,   -95,   -95
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       2,     3,     5,     1,     4,   109,     0,     0,    24,    25,
       0,     0,     0,    26,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    11,    12,    10,     0,     7,
       9,     8,    21,     0,    13,    20,    14,    15,    16,    17,
      18,    19,    32,    33,     0,    23,    29,    22,    27,     0,
      28,   125,    30,    31,   104,    51,    57,   123,   122,    53,
       0,     0,     0,    52,    58,    59,     0,   112,    54,    56,
      55,     0,   109,    36,     0,    67,     0,     0,    62,    63,
       0,   104,     0,     0,     0,    71,    70,     0,     0,    65,
      60,    69,     0,     0,    64,     0,     6,    35,    34,     0,
       0,    89,    78,    79,   110,     0,   111,     0,     0,   124,
     127,   128,   129,   108,    56,     0,   121,    50,   112,     0,
      48,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   104,     0,
       0,     0,     0,     0,    83,   104,     0,     0,     0,     0,
       0,    61,     0,     0,     0,     0,     0,     0,     0,    88,
      80,    81,    41,     0,     0,     0,   126,   130,   107,   101,
     100,   106,    49,     0,    42,    43,    44,    45,    46,    47,
     117,   118,   114,   113,   116,   115,   119,   120,   131,    39,
      68,     0,     0,    94,     0,     0,     0,     0,     5,     0,
      37,    38,    72,     0,   142,    66,    90,     0,    91,     0,
      73,    84,     0,     0,    87,    82,   133,     0,     0,   105,
       0,     0,    96,     0,     0,     0,   111,     0,     0,     0,
       0,     0,     0,     0,     0,    85,     0,   134,   132,     0,
       0,   137,   136,   139,     0,     0,     0,   103,     0,    40,
     143,    92,     0,     0,    76,     0,     0,    93,    95,    99,
      98,    97,   140,     0,     0,   102,     0,    74,    75,    86,
     135,     0,   138,     0,   141,    77
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -95,   -95,    36,   -95,   -95,   -95,   -95,   204,    -2,   -12,
     -95,   -95,   -95,   -95,   -95,   -95,   -95,   -95,   -20,   -95,
     -95,   -95,   -18,   -95,   -95,   149,   -94,   -95,   -95,   -95,
     -95,    15,   -95,     3,     5,    26,   -75,    -3,    -9,   -95,
     -95,   -95,   -95,   -42,   137,   -95,   -95
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     4,    29,    30,    31,    32,    33,    34,    67,
      68,    35,    36,    37,    38,    39,    40,    41,    86,    42,
     210,   253,   254,    43,    44,   101,   102,   103,    45,    92,
      46,   193,   240,    69,    48,   144,   115,    70,    71,    50,
     109,   110,    51,   111,   112,    52,    53
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      78,    49,    91,    79,    73,    72,   142,    47,   104,   160,
      88,    89,    94,    75,    84,    72,   104,   104,   133,   244,
      80,   133,   133,   133,   133,     7,    93,    99,   104,   133,
       1,   100,     3,    16,   134,   212,   245,   134,   134,   134,
     134,   200,   113,    17,   267,   134,   133,   104,   252,   117,
     118,   116,   106,   119,   120,   136,    54,   114,   146,   107,
     108,   161,   134,   191,    72,   140,   105,   215,   166,   113,
     199,   173,   150,   106,   135,   118,   106,   149,   148,     5,
      55,    56,   218,   213,   133,   201,   258,   106,   259,    81,
     156,   225,    59,   162,   203,   107,   157,    74,   138,   165,
     134,    99,    76,   171,   139,   100,   152,   153,    82,   174,
     175,   176,   177,   178,   179,   180,   181,   182,   183,   184,
     185,    83,    61,    85,   186,   187,   113,   202,     5,   194,
     171,    90,   236,   113,     5,    55,    56,    95,   196,    96,
      98,   104,   137,   141,   195,   145,   143,    59,    77,   170,
     147,   151,   118,   154,   169,   217,   207,    63,    64,    65,
     106,   188,   155,     5,    55,    56,   158,    57,    58,    66,
     163,   189,   190,   192,   198,   204,    59,    61,   206,   171,
     205,   208,   211,   209,   214,   100,   220,   171,   222,   216,
     121,   122,   123,   223,   124,   125,   126,   224,    60,   226,
     227,   230,   232,    77,   197,   231,    61,   233,   234,   249,
     239,   248,    63,    64,    65,   121,   122,   123,   251,   124,
     125,   126,   255,   273,    66,    49,   256,   252,   263,   264,
     246,    47,    62,   271,   228,   268,    97,    49,   260,   235,
     266,    63,    64,    65,   237,   261,   238,   167,     0,   241,
     242,   243,   159,    66,   257,     0,     0,   250,     5,    55,
      56,     0,    57,    58,     0,     0,     0,     0,     0,     0,
     262,    59,     0,     0,   265,     5,    55,    56,     0,    57,
      58,   269,   270,     0,     0,     0,     0,     0,    59,     0,
     272,     0,     0,    60,     0,     0,     0,   274,     0,   275,
       0,    61,     0,     0,     5,    55,    56,     0,    57,    58,
      60,     0,     0,     0,     0,     0,     0,    59,    61,     5,
      55,    56,     0,     0,   121,   122,   123,    77,   124,   125,
     126,     0,    59,     5,    55,    56,    63,    64,    65,    60,
       0,     0,     0,     0,    87,     0,    59,    61,    66,     0,
       5,    55,    56,    63,    64,    65,     0,     0,   168,     0,
       0,     0,    61,    59,     0,    66,   121,   122,   123,     0,
     124,   125,   126,   164,     0,     0,    61,     0,     0,     0,
       0,     0,    63,    64,    65,     0,     0,     0,    77,   221,
       0,     0,     0,    61,    66,     0,     0,    63,    64,    65,
     219,     0,    77,   229,     0,     0,     0,     0,     0,    66,
       0,    63,    64,    65,     0,     0,   121,   122,   123,    77,
     124,   125,   126,    66,     5,     0,     0,     0,    63,    64,
      65,     0,     6,     0,     0,     7,     8,     0,     9,     0,
      66,    10,    11,     0,   172,    12,     0,    13,    14,     0,
      15,     0,    16,    17,    18,    19,    20,    21,    22,     5,
      23,     0,     0,    24,     0,    25,     0,     6,     0,    26,
       7,     8,     0,     9,     0,     0,    10,    11,     0,     0,
      12,     0,    13,    14,     0,    15,     0,    16,    17,    18,
      19,    20,    21,    22,  -112,    23,     0,     0,    24,     0,
      25,     0,     0,     0,    26,   247,     0,    27,    28,     0,
    -112,     0,     0,     0,   121,   122,   123,     0,   124,   125,
     126,     0,     0,     0,   121,   122,   123,     0,   124,   125,
     126,     0,     0,     0,   127,     0,   128,   129,   130,   131,
     132,     0,    27,    28,   127,     0,   128,   129,   130,   131,
     132,     0,   172,   121,   122,   123,     0,   124,   125,   126,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   127,     0,   128,   129,   130,   131,   132
};

static const yytype_int16 yycheck[] =
{
      12,     4,    22,    12,     7,     6,    81,     4,     6,   103,
      19,    20,    24,    10,    17,     6,     6,     6,    28,    81,
       6,    28,    28,    28,    28,    17,    23,    21,     6,    28,
      89,    25,     0,    34,    44,    33,    98,    44,    44,    44,
      44,     6,    54,    35,    87,    44,    28,     6,    91,    61,
      62,    60,    49,    62,    66,    33,    75,    54,    17,    15,
      16,   103,    44,   138,     6,    77,    55,   161,   110,    81,
     145,    76,    82,    70,    81,    87,    73,    81,    87,     6,
       7,     8,    81,    81,    28,    50,    87,    84,    89,    75,
      81,    81,    19,   105,    76,    15,    99,     6,    75,   108,
      44,    21,     6,   115,    81,    25,    81,    82,    81,   121,
     122,   123,   124,   125,   126,   127,   128,   129,   130,   131,
     132,     6,    49,     6,   133,   134,   138,   147,     6,     7,
     142,     6,    76,   145,     6,     7,     8,     6,   141,    89,
      89,     6,    35,    22,   141,    75,    89,    19,    75,    76,
      82,     7,   164,    33,    76,   164,   153,    84,    85,    86,
     157,   135,    81,     6,     7,     8,    81,    10,    11,    96,
      81,     6,     6,    89,    88,   149,    19,    49,   152,   191,
       8,     6,   156,    89,   158,    25,    81,   199,    88,   163,
      48,    49,    50,    81,    52,    53,    54,    81,    41,   196,
      22,    33,    33,    75,    76,    81,    49,    88,     6,     6,
      81,    81,    84,    85,    86,    48,    49,    50,     6,    52,
      53,    54,    81,    81,    96,   228,    81,    91,     6,    81,
     227,   228,    75,    81,   198,   253,    32,   240,   240,   213,
     252,    84,    85,    86,   218,   240,   220,   110,    -1,   223,
     224,   225,   103,    96,   239,    -1,    -1,   231,     6,     7,
       8,    -1,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,
     244,    19,    -1,    -1,   248,     6,     7,     8,    -1,    10,
      11,   255,   256,    -1,    -1,    -1,    -1,    -1,    19,    -1,
     264,    -1,    -1,    41,    -1,    -1,    -1,   271,    -1,   273,
      -1,    49,    -1,    -1,     6,     7,     8,    -1,    10,    11,
      41,    -1,    -1,    -1,    -1,    -1,    -1,    19,    49,     6,
       7,     8,    -1,    -1,    48,    49,    50,    75,    52,    53,
      54,    -1,    19,     6,     7,     8,    84,    85,    86,    41,
      -1,    -1,    -1,    -1,    75,    -1,    19,    49,    96,    -1,
       6,     7,     8,    84,    85,    86,    -1,    -1,    82,    -1,
      -1,    -1,    49,    19,    -1,    96,    48,    49,    50,    -1,
      52,    53,    54,    75,    -1,    -1,    49,    -1,    -1,    -1,
      -1,    -1,    84,    85,    86,    -1,    -1,    -1,    75,    76,
      -1,    -1,    -1,    49,    96,    -1,    -1,    84,    85,    86,
      82,    -1,    75,    76,    -1,    -1,    -1,    -1,    -1,    96,
      -1,    84,    85,    86,    -1,    -1,    48,    49,    50,    75,
      52,    53,    54,    96,     6,    -1,    -1,    -1,    84,    85,
      86,    -1,    14,    -1,    -1,    17,    18,    -1,    20,    -1,
      96,    23,    24,    -1,    76,    27,    -1,    29,    30,    -1,
      32,    -1,    34,    35,    36,    37,    38,    39,    40,     6,
      42,    -1,    -1,    45,    -1,    47,    -1,    14,    -1,    51,
      17,    18,    -1,    20,    -1,    -1,    23,    24,    -1,    -1,
      27,    -1,    29,    30,    -1,    32,    -1,    34,    35,    36,
      37,    38,    39,    40,    28,    42,    -1,    -1,    45,    -1,
      47,    -1,    -1,    -1,    51,    87,    -1,    89,    90,    -1,
      44,    -1,    -1,    -1,    48,    49,    50,    -1,    52,    53,
      54,    -1,    -1,    -1,    48,    49,    50,    -1,    52,    53,
      54,    -1,    -1,    -1,    68,    -1,    70,    71,    72,    73,
      74,    -1,    89,    90,    68,    -1,    70,    71,    72,    73,
      74,    -1,    76,    48,    49,    50,    -1,    52,    53,    54,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    68,    -1,    70,    71,    72,    73,    74
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    89,   100,     0,   101,     6,    14,    17,    18,    20,
      23,    24,    27,    29,    30,    32,    34,    35,    36,    37,
      38,    39,    40,    42,    45,    47,    51,    89,    90,   102,
     103,   104,   105,   106,   107,   110,   111,   112,   113,   114,
     115,   116,   118,   122,   123,   127,   129,   132,   133,   136,
     138,   141,   144,   145,    75,     7,     8,    10,    11,    19,
      41,    49,    75,    84,    85,    86,    96,   108,   109,   132,
     136,   137,     6,   136,     6,   132,     6,    75,   108,   137,
       6,    75,    81,     6,   136,     6,   117,    75,   137,   137,
       6,   117,   128,   132,   108,     6,    89,   106,    89,    21,
      25,   124,   125,   126,     6,    55,   132,    15,    16,   139,
     140,   142,   143,   108,   132,   135,   137,   108,   108,   137,
     108,    48,    49,    50,    52,    53,    54,    68,    70,    71,
      72,    73,    74,    28,    44,    81,    33,    35,    75,    81,
     108,    22,   135,    89,   134,    75,    17,    82,   137,    81,
      82,     7,    81,    82,    33,    81,    81,   136,    81,   124,
     125,   142,   108,    81,    75,   137,   142,   143,    82,    76,
      76,   108,    76,    76,   108,   108,   108,   108,   108,   108,
     108,   108,   108,   108,   108,   108,   137,   137,   134,     6,
       6,   135,    89,   130,     7,   132,   136,    76,    88,   135,
       6,    50,   117,    76,   134,     8,   134,   132,     6,    89,
     119,   134,    33,    81,   134,   125,   134,   137,    81,    82,
      81,    76,    88,    81,    81,    81,   132,    22,   101,    76,
      33,    81,    33,    88,     6,   134,    76,   134,   134,    81,
     131,   134,   134,   134,    81,    98,   132,    87,    81,     6,
     134,     6,    91,   120,   121,    81,    81,   130,    87,    89,
     107,   133,   134,     6,    81,   134,   108,    87,   121,   134,
     134,    81,   134,    81,   134,   134
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
       0,     2,     0,     1,     2,     0,     3,     2,     1,     1,
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
#line 1578 "parser.cpp" /* yacc.c:1646  */
    break;

  case 3:
#line 55 "parser.y" /* yacc.c:1646  */
    { }
#line 1584 "parser.cpp" /* yacc.c:1646  */
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
#line 1597 "parser.cpp" /* yacc.c:1646  */
    break;

  case 5:
#line 66 "parser.y" /* yacc.c:1646  */
    {
                  std::string name = "Statement" + std::to_string(++n_nodes);
                  (yyval.astNode) = new StatementsNode(name);
            }
#line 1606 "parser.cpp" /* yacc.c:1646  */
    break;

  case 6:
#line 70 "parser.y" /* yacc.c:1646  */
    { 
                  (yyvsp[-2].astNode)->add((yyvsp[-1].astNode));
                  (yyval.astNode) = (yyvsp[-2].astNode);
            }
#line 1615 "parser.cpp" /* yacc.c:1646  */
    break;

  case 7:
#line 74 "parser.y" /* yacc.c:1646  */
    { 
                  (yyvsp[-1].astNode)->add((yyvsp[0].astNode));
                  (yyval.astNode) = (yyvsp[-1].astNode); 
            }
#line 1624 "parser.cpp" /* yacc.c:1646  */
    break;

  case 8:
#line 80 "parser.y" /* yacc.c:1646  */
    { (yyval.astNode) = (yyvsp[0].astNode); }
#line 1630 "parser.cpp" /* yacc.c:1646  */
    break;

  case 9:
#line 81 "parser.y" /* yacc.c:1646  */
    { (yyval.astNode) = (yyvsp[0].astNode); }
#line 1636 "parser.cpp" /* yacc.c:1646  */
    break;

  case 13:
#line 87 "parser.y" /* yacc.c:1646  */
    { (yyval.astNode) = (yyvsp[0].astNode); }
#line 1642 "parser.cpp" /* yacc.c:1646  */
    break;

  case 14:
#line 88 "parser.y" /* yacc.c:1646  */
    { (yyval.astNode) = (yyvsp[0].astNode); }
#line 1648 "parser.cpp" /* yacc.c:1646  */
    break;

  case 15:
#line 89 "parser.y" /* yacc.c:1646  */
    { (yyval.astNode) = (yyvsp[0].astNode); }
#line 1654 "parser.cpp" /* yacc.c:1646  */
    break;

  case 16:
#line 90 "parser.y" /* yacc.c:1646  */
    { (yyval.astNode) = (yyvsp[0].astNode); }
#line 1660 "parser.cpp" /* yacc.c:1646  */
    break;

  case 17:
#line 91 "parser.y" /* yacc.c:1646  */
    { (yyval.astNode) = (yyvsp[0].astNode); }
#line 1666 "parser.cpp" /* yacc.c:1646  */
    break;

  case 18:
#line 92 "parser.y" /* yacc.c:1646  */
    { (yyval.astNode) = (yyvsp[0].astNode); }
#line 1672 "parser.cpp" /* yacc.c:1646  */
    break;

  case 19:
#line 93 "parser.y" /* yacc.c:1646  */
    { (yyval.astNode) = (yyvsp[0].astNode); }
#line 1678 "parser.cpp" /* yacc.c:1646  */
    break;

  case 20:
#line 94 "parser.y" /* yacc.c:1646  */
    { (yyval.astNode) = (yyvsp[0].astNode); }
#line 1684 "parser.cpp" /* yacc.c:1646  */
    break;

  case 21:
#line 95 "parser.y" /* yacc.c:1646  */
    { (yyval.astNode) = (yyvsp[0].astNode); }
#line 1690 "parser.cpp" /* yacc.c:1646  */
    break;

  case 22:
#line 96 "parser.y" /* yacc.c:1646  */
    { (yyval.astNode) = (yyvsp[0].astNode); }
#line 1696 "parser.cpp" /* yacc.c:1646  */
    break;

  case 23:
#line 97 "parser.y" /* yacc.c:1646  */
    { (yyval.astNode) = (yyvsp[0].astNode); }
#line 1702 "parser.cpp" /* yacc.c:1646  */
    break;

  case 27:
#line 103 "parser.y" /* yacc.c:1646  */
    { (yyval.astNode) = (yyvsp[0].astNode); }
#line 1708 "parser.cpp" /* yacc.c:1646  */
    break;

  case 28:
#line 104 "parser.y" /* yacc.c:1646  */
    { (yyval.astNode) = (yyvsp[0].astNode); }
#line 1714 "parser.cpp" /* yacc.c:1646  */
    break;

  case 41:
#line 123 "parser.y" /* yacc.c:1646  */
    {  
                  std::string name = "assignment" + std::to_string(++n_nodes);
                  (yyval.astNode) = new AssignmentStatement(name);
                  (yyval.astNode)->add((yyvsp[-2].astNode));
                  (yyval.astNode)->add((yyvsp[0].astNode));
            }
#line 1725 "parser.cpp" /* yacc.c:1646  */
    break;

  case 42:
#line 131 "parser.y" /* yacc.c:1646  */
    { 
                  (yyval.astNode) = new BinaryExpressionNode("+", (yyvsp[-2].astNode), (yyvsp[0].astNode));
            }
#line 1733 "parser.cpp" /* yacc.c:1646  */
    break;

  case 43:
#line 134 "parser.y" /* yacc.c:1646  */
    { 
                  (yyval.astNode) = new BinaryExpressionNode("-", (yyvsp[-2].astNode), (yyvsp[0].astNode));
            }
#line 1741 "parser.cpp" /* yacc.c:1646  */
    break;

  case 44:
#line 137 "parser.y" /* yacc.c:1646  */
    { 
                  (yyval.astNode) = new BinaryExpressionNode("*", (yyvsp[-2].astNode), (yyvsp[0].astNode));
            }
#line 1749 "parser.cpp" /* yacc.c:1646  */
    break;

  case 45:
#line 140 "parser.y" /* yacc.c:1646  */
    { 
                  (yyval.astNode) = new BinaryExpressionNode("/", (yyvsp[-2].astNode), (yyvsp[0].astNode));
            }
#line 1757 "parser.cpp" /* yacc.c:1646  */
    break;

  case 46:
#line 143 "parser.y" /* yacc.c:1646  */
    { 
                  (yyval.astNode) = new BinaryExpressionNode("**", (yyvsp[-2].astNode), (yyvsp[0].astNode));
            }
#line 1765 "parser.cpp" /* yacc.c:1646  */
    break;

  case 47:
#line 146 "parser.y" /* yacc.c:1646  */
    {
                  (yyval.astNode) = new BinaryExpressionNode("%", (yyvsp[-2].astNode), (yyvsp[0].astNode));
            }
#line 1773 "parser.cpp" /* yacc.c:1646  */
    break;

  case 48:
#line 149 "parser.y" /* yacc.c:1646  */
    { /*The rule for negation includes %prec UMINUS . The only operator in this rule is - , 
                                                      which has low precedence, but we want unary minus to have higher precedence than multiplication 
                                                      rather than lower. The %prec tells bison to use the precedence of UMINUS for this rule.*/
                                                }
#line 1782 "parser.cpp" /* yacc.c:1646  */
    break;

  case 49:
#line 153 "parser.y" /* yacc.c:1646  */
    {(yyval.astNode) = (yyvsp[-1].astNode); }
#line 1788 "parser.cpp" /* yacc.c:1646  */
    break;

  case 50:
#line 154 "parser.y" /* yacc.c:1646  */
    { }
#line 1794 "parser.cpp" /* yacc.c:1646  */
    break;

  case 54:
#line 158 "parser.y" /* yacc.c:1646  */
    { (yyval.astNode) = (yyvsp[0].astNode); }
#line 1800 "parser.cpp" /* yacc.c:1646  */
    break;

  case 55:
#line 159 "parser.y" /* yacc.c:1646  */
    { (yyval.astNode) = (yyvsp[0].astNode); }
#line 1806 "parser.cpp" /* yacc.c:1646  */
    break;

  case 56:
#line 160 "parser.y" /* yacc.c:1646  */
    { (yyval.astNode) = (yyvsp[0].astNode); }
#line 1812 "parser.cpp" /* yacc.c:1646  */
    break;

  case 57:
#line 161 "parser.y" /* yacc.c:1646  */
    { (yyval.astNode) = (yyvsp[0].astNode); }
#line 1818 "parser.cpp" /* yacc.c:1646  */
    break;

  case 58:
#line 164 "parser.y" /* yacc.c:1646  */
    { (yyval.astNode) = (yyvsp[0].astNode); }
#line 1824 "parser.cpp" /* yacc.c:1646  */
    break;

  case 59:
#line 165 "parser.y" /* yacc.c:1646  */
    { (yyval.astNode) = (yyvsp[0].astNode); }
#line 1830 "parser.cpp" /* yacc.c:1646  */
    break;

  case 60:
#line 168 "parser.y" /* yacc.c:1646  */
    {
                        std::string name = "Del" + std::to_string(++n_nodes);
                        (yyval.astNode) = new DelNode(name);
                        (yyval.astNode)->add((yyvsp[0].astNode));
                  }
#line 1840 "parser.cpp" /* yacc.c:1646  */
    break;

  case 61:
#line 173 "parser.y" /* yacc.c:1646  */
    { 
                        std::string name = "Del" + std::to_string(++n_nodes);
                        (yyval.astNode) = new DelNode(name);
                        (yyval.astNode)->add((yyvsp[-1].astNode));
                        (yyval.astNode)->add((yyvsp[0].astNode));
                  }
#line 1851 "parser.cpp" /* yacc.c:1646  */
    break;

  case 62:
#line 181 "parser.y" /* yacc.c:1646  */
    {
                        std::string name = "Return" + std::to_string(++n_nodes);
                        (yyval.astNode) = new ReturnNode(name);
                        (yyval.astNode)->add((yyvsp[0].astNode));
                  }
#line 1861 "parser.cpp" /* yacc.c:1646  */
    break;

  case 63:
#line 186 "parser.y" /* yacc.c:1646  */
    {
                        std::string name = "Return" + std::to_string(++n_nodes);
                        (yyval.astNode) = new ReturnNode(name);
                        (yyval.astNode)->add((yyvsp[0].astNode));
                  }
#line 1871 "parser.cpp" /* yacc.c:1646  */
    break;

  case 64:
#line 193 "parser.y" /* yacc.c:1646  */
    {
                        std::string name = "Yield" + std::to_string(++n_nodes);
                        (yyval.astNode) = new YieldNode(name);
                        (yyval.astNode)->add((yyvsp[0].astNode));
                  }
#line 1881 "parser.cpp" /* yacc.c:1646  */
    break;

  case 93:
#line 260 "parser.y" /* yacc.c:1646  */
    {
                  std::string name = "class with inheritance" + std::to_string(n_nodes);
                  ++n_nodes;
                  IdentifierNode* idFunc = dynamic_cast<IdentifierNode*>((yyvsp[-5].astNode));
                  (yyval.astNode) = new ClassNode(idFunc->value);
                  (yyval.astNode)->add((yyvsp[-3].astNode));
                  (yyval.astNode)->add((yyvsp[0].astNode));
                  }
#line 1894 "parser.cpp" /* yacc.c:1646  */
    break;

  case 94:
#line 269 "parser.y" /* yacc.c:1646  */
    {
                  std::string name = "class without inheritance" + std::to_string(n_nodes);
                  ++n_nodes;
                  IdentifierNode* idFunc = dynamic_cast<IdentifierNode*>((yyvsp[-2].astNode));
                  (yyval.astNode) = new ClassNode(idFunc->value);
                  (yyval.astNode)->add((yyvsp[0].astNode));
                  }
#line 1906 "parser.cpp" /* yacc.c:1646  */
    break;

  case 95:
#line 279 "parser.y" /* yacc.c:1646  */
    {
                                                (yyval.astNode) = (yyvsp[-1].astNode);
                                          }
#line 1914 "parser.cpp" /* yacc.c:1646  */
    break;

  case 96:
#line 283 "parser.y" /* yacc.c:1646  */
    { 
            std::string nname = "Classbody" + std::to_string(n_nodes);
            ++n_nodes;
            (yyval.astNode) = new EmptyNode(nname);
            }
#line 1924 "parser.cpp" /* yacc.c:1646  */
    break;

  case 97:
#line 288 "parser.y" /* yacc.c:1646  */
    { 
                  (yyval.astNode) = new ClassBodyNode("ClassBody");
                  (yyval.astNode)->add((yyvsp[0].astNode));

            }
#line 1934 "parser.cpp" /* yacc.c:1646  */
    break;

  case 98:
#line 293 "parser.y" /* yacc.c:1646  */
    { 
                  (yyval.astNode) = new ClassBodyNode("ClassBody");
                  (yyval.astNode)->add((yyvsp[0].astNode));
            }
#line 1943 "parser.cpp" /* yacc.c:1646  */
    break;

  case 99:
#line 297 "parser.y" /* yacc.c:1646  */
    {
                  (yyval.astNode) = (yyvsp[-1].astNode);
            }
#line 1951 "parser.cpp" /* yacc.c:1646  */
    break;

  case 100:
#line 302 "parser.y" /* yacc.c:1646  */
    {
                        std::string name = dynamic_cast<IdentifierNode*>((yyvsp[-3].astNode))->value + std::to_string(++n_nodes);
                        (yyval.astNode) = new FunctionCall(name, (yyvsp[-3].astNode));
                        (yyval.astNode)->add((yyvsp[-3].astNode));
                        (yyval.astNode)->add((yyvsp[-1].astNode));                                         
                  }
#line 1962 "parser.cpp" /* yacc.c:1646  */
    break;

  case 101:
#line 308 "parser.y" /* yacc.c:1646  */
    {
                        std::string name = dynamic_cast<IdentifierNode*>((yyvsp[-3].astNode))->value + std::to_string(++n_nodes);
                        (yyval.astNode) = new FunctionCall(name, (yyvsp[-3].astNode));
                        (yyval.astNode)->add((yyvsp[-3].astNode));
                        (yyval.astNode)->add((yyvsp[-1].astNode));
                  }
#line 1973 "parser.cpp" /* yacc.c:1646  */
    break;

  case 102:
#line 316 "parser.y" /* yacc.c:1646  */
    {
                  IdentifierNode* idFunc = dynamic_cast<IdentifierNode*>((yyvsp[-5].astNode));
                  (yyval.astNode) = new FunctionNode(idFunc->value);
                  (yyval.astNode)->add((yyvsp[-3].astNode));
                  (yyval.astNode)->add((yyvsp[0].astNode));
            }
#line 1984 "parser.cpp" /* yacc.c:1646  */
    break;

  case 103:
#line 323 "parser.y" /* yacc.c:1646  */
    {     
                  std::string name = "block" + std::to_string(n_nodes);
                  ++n_nodes;
                  (yyval.astNode) = new BlockNode(name);
                  (yyval.astNode)->add((yyvsp[-1].astNode));
            }
#line 1995 "parser.cpp" /* yacc.c:1646  */
    break;

  case 104:
#line 331 "parser.y" /* yacc.c:1646  */
    { 
            std::string name = "Args" + std::to_string(++n_nodes);
            (yyval.astNode) = new EmptyNode(name); 
      }
#line 2004 "parser.cpp" /* yacc.c:1646  */
    break;

  case 109:
#line 341 "parser.y" /* yacc.c:1646  */
    {
                        std::string name = "identifire" + std::to_string(++n_nodes);
                        (yyvsp[0].astNode)->name=name;
                        (yyval.astNode) = (yyvsp[0].astNode);
                  }
#line 2014 "parser.cpp" /* yacc.c:1646  */
    break;

  case 110:
#line 346 "parser.y" /* yacc.c:1646  */
    {
                        std::string name = "identifire" + std::to_string(++n_nodes);
                        (yyvsp[0].astNode)->name=name;
                        (yyval.astNode) = new MemberExpression((yyvsp[-1].astNode), (yyvsp[0].astNode));
                        (yyval.astNode)->add((yyvsp[-1].astNode)); 
                        (yyval.astNode)->add((yyvsp[0].astNode)); 
                  }
#line 2026 "parser.cpp" /* yacc.c:1646  */
    break;

  case 111:
#line 353 "parser.y" /* yacc.c:1646  */
    { 
                        (yyval.astNode) = new MemberExpression((yyvsp[-1].astNode), (yyvsp[0].astNode)); 
                        (yyval.astNode)->add((yyvsp[-1].astNode)); 
                        (yyval.astNode)->add((yyvsp[0].astNode)); 
                  }
#line 2036 "parser.cpp" /* yacc.c:1646  */
    break;

  case 112:
#line 360 "parser.y" /* yacc.c:1646  */
    { (yyval.astNode) = (yyvsp[0].astNode); }
#line 2042 "parser.cpp" /* yacc.c:1646  */
    break;

  case 113:
#line 361 "parser.y" /* yacc.c:1646  */
    {
                        (yyval.astNode) = new BinaryLogicalExpression(">=", (yyvsp[-2].astNode), (yyvsp[0].astNode));
                  }
#line 2050 "parser.cpp" /* yacc.c:1646  */
    break;

  case 114:
#line 364 "parser.y" /* yacc.c:1646  */
    {
                        (yyval.astNode) = new BinaryLogicalExpression(">", (yyvsp[-2].astNode), (yyvsp[0].astNode));
                  }
#line 2058 "parser.cpp" /* yacc.c:1646  */
    break;

  case 115:
#line 367 "parser.y" /* yacc.c:1646  */
    {
                        (yyval.astNode) = new BinaryLogicalExpression("<=", (yyvsp[-2].astNode), (yyvsp[0].astNode));
                  }
#line 2066 "parser.cpp" /* yacc.c:1646  */
    break;

  case 116:
#line 370 "parser.y" /* yacc.c:1646  */
    {
                        (yyval.astNode) = new BinaryLogicalExpression("<", (yyvsp[-2].astNode), (yyvsp[0].astNode));
                  }
#line 2074 "parser.cpp" /* yacc.c:1646  */
    break;

  case 117:
#line 373 "parser.y" /* yacc.c:1646  */
    {
                        (yyval.astNode) = new BinaryLogicalExpression("==", (yyvsp[-2].astNode), (yyvsp[0].astNode));
                  }
#line 2082 "parser.cpp" /* yacc.c:1646  */
    break;

  case 118:
#line 376 "parser.y" /* yacc.c:1646  */
    {
                        (yyval.astNode) = new BinaryLogicalExpression("!=", (yyvsp[-2].astNode), (yyvsp[0].astNode));
                  }
#line 2090 "parser.cpp" /* yacc.c:1646  */
    break;

  case 119:
#line 379 "parser.y" /* yacc.c:1646  */
    {
                        (yyval.astNode) = new BinaryLogicalExpression("and", (yyvsp[-2].astNode), (yyvsp[0].astNode));
                  }
#line 2098 "parser.cpp" /* yacc.c:1646  */
    break;

  case 120:
#line 382 "parser.y" /* yacc.c:1646  */
    {
                        (yyval.astNode) = new BinaryLogicalExpression("or", (yyvsp[-2].astNode), (yyvsp[0].astNode));
                  }
#line 2106 "parser.cpp" /* yacc.c:1646  */
    break;

  case 121:
#line 385 "parser.y" /* yacc.c:1646  */
    {
                        (yyval.astNode) = new BinaryLogicalExpression("not", (yyvsp[-1].astNode), (yyvsp[0].astNode));
                  }
#line 2114 "parser.cpp" /* yacc.c:1646  */
    break;

  case 122:
#line 388 "parser.y" /* yacc.c:1646  */
    { (yyval.astNode) = (yyvsp[0].astNode); }
#line 2120 "parser.cpp" /* yacc.c:1646  */
    break;

  case 123:
#line 389 "parser.y" /* yacc.c:1646  */
    { (yyval.astNode) = (yyvsp[0].astNode); }
#line 2126 "parser.cpp" /* yacc.c:1646  */
    break;

  case 124:
#line 392 "parser.y" /* yacc.c:1646  */
    {
                              (yyvsp[-1].astNode)->add((yyvsp[0].astNode));
                              (yyval.astNode) = (yyvsp[-1].astNode);
                        }
#line 2135 "parser.cpp" /* yacc.c:1646  */
    break;

  case 125:
#line 398 "parser.y" /* yacc.c:1646  */
    { 
                  std::string name = "elif_else" + std::to_string(++n_nodes);
                  (yyval.astNode) = new EmptyNode(name); 
            }
#line 2144 "parser.cpp" /* yacc.c:1646  */
    break;

  case 126:
#line 402 "parser.y" /* yacc.c:1646  */
    {
                  (yyvsp[-1].astNode)->add((yyvsp[0].astNode));
                  (yyval.astNode) = (yyvsp[-1].astNode);
            }
#line 2153 "parser.cpp" /* yacc.c:1646  */
    break;

  case 127:
#line 406 "parser.y" /* yacc.c:1646  */
    {
                  (yyval.astNode) = (yyvsp[0].astNode);
            }
#line 2161 "parser.cpp" /* yacc.c:1646  */
    break;

  case 128:
#line 409 "parser.y" /* yacc.c:1646  */
    {
                  (yyval.astNode) = (yyvsp[0].astNode);
            }
#line 2169 "parser.cpp" /* yacc.c:1646  */
    break;

  case 129:
#line 414 "parser.y" /* yacc.c:1646  */
    {
                  (yyval.astNode) = (yyvsp[0].astNode);
            }
#line 2177 "parser.cpp" /* yacc.c:1646  */
    break;

  case 130:
#line 417 "parser.y" /* yacc.c:1646  */
    {
                  (yyvsp[-1].astNode)->add((yyvsp[0].astNode));
                  (yyval.astNode) = (yyvsp[-1].astNode);
            }
#line 2186 "parser.cpp" /* yacc.c:1646  */
    break;

  case 131:
#line 423 "parser.y" /* yacc.c:1646  */
    {
                        std::string name = "if" + std::to_string(++n_nodes);
                        (yyval.astNode) = new ConditionalStatement("if", name);
                        (yyval.astNode)->add((yyvsp[-2].astNode));
                        (yyval.astNode)->add((yyvsp[0].astNode));
                  }
#line 2197 "parser.cpp" /* yacc.c:1646  */
    break;

  case 132:
#line 429 "parser.y" /* yacc.c:1646  */
    {
                        std::string name = "if" + std::to_string(++n_nodes);
                        (yyval.astNode) = new ConditionalStatement("if", name);
                        (yyval.astNode)->add((yyvsp[-3].astNode));
                        (yyval.astNode)->add((yyvsp[0].astNode));
                  }
#line 2208 "parser.cpp" /* yacc.c:1646  */
    break;

  case 133:
#line 437 "parser.y" /* yacc.c:1646  */
    {
                        std::string name = "else" + std::to_string(++n_nodes);
                        (yyval.astNode) = new ConditionalStatement("else", name);
                        (yyval.astNode)->add((yyvsp[0].astNode));
                  }
#line 2218 "parser.cpp" /* yacc.c:1646  */
    break;

  case 134:
#line 444 "parser.y" /* yacc.c:1646  */
    {
                        std::string name = "elif" + std::to_string(++n_nodes);
                        (yyval.astNode) = new ConditionalStatement("elif", name);
                        (yyval.astNode)->add((yyvsp[-2].astNode));
                        (yyval.astNode)->add((yyvsp[0].astNode));
                  }
#line 2229 "parser.cpp" /* yacc.c:1646  */
    break;

  case 135:
#line 450 "parser.y" /* yacc.c:1646  */
    {
                        std::string name = "elif" + std::to_string(++n_nodes);
                        (yyval.astNode) = new ConditionalStatement("elif", name);
                        (yyval.astNode)->add((yyvsp[-3].astNode));
                        (yyval.astNode)->add((yyvsp[0].astNode));
                  }
#line 2240 "parser.cpp" /* yacc.c:1646  */
    break;

  case 142:
#line 466 "parser.y" /* yacc.c:1646  */
    {
                        std::string name = "While" + std::to_string(++n_nodes);
                        (yyval.astNode) = new WhileNode(name);
                        (yyval.astNode)->add((yyvsp[-2].astNode));
                        (yyval.astNode)->add((yyvsp[0].astNode));
                  }
#line 2251 "parser.cpp" /* yacc.c:1646  */
    break;

  case 143:
#line 472 "parser.y" /* yacc.c:1646  */
    {
                        std::string name = "While" + std::to_string(++n_nodes);
                        (yyval.astNode) = new WhileNode(name);
                        (yyval.astNode)->add((yyvsp[-3].astNode));
                        (yyval.astNode)->add((yyvsp[0].astNode));
                  }
#line 2262 "parser.cpp" /* yacc.c:1646  */
    break;


#line 2266 "parser.cpp" /* yacc.c:1646  */
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
#line 480 "parser.y" /* yacc.c:1906  */


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
