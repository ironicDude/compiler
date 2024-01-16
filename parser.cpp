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
#define YYLAST   582

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  99
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  45
/* YYNRULES -- Number of rules.  */
#define YYNRULES  140
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  272

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
     106,   107,   108,   109,   113,   118,   124,   129,   135,   144,
     152,   155,   158,   161,   164,   167,   170,   174,   175,   176,
     177,   178,   179,   180,   181,   182,   185,   186,   189,   194,
     202,   207,   214,   221,   226,   230,   235,   243,   250,   257,
<<<<<<< HEAD
     260,   266,   274,   277,   283,   288,   294,   295,   296,   297,
     298,   301,   304,   305,   306,   309,   312,   313,   316,   324,
     325,   328,   336,   346,   350,   355,   359,   363,   368,   374,
     382,   389,   397,   401,   402,   403,   404,   407,   412,   419,
     426,   427,   430,   433,   436,   439,   442,   445,   448,   451,
     454,   455,   458,   464,   468,   472,   475,   480,   483,   489,
     495,   503,   510,   516,   524,   525,   526,   527,   528,   529,
     532,   538
=======
     260,   266,   274,   277,   284,   292,   293,   294,   295,   296,
     299,   302,   303,   304,   307,   310,   311,   314,   317,   318,
     321,   329,   339,   343,   348,   352,   356,   361,   367,   375,
     382,   390,   394,   395,   396,   397,   400,   405,   412,   419,
     420,   423,   426,   429,   432,   435,   438,   441,   444,   447,
     448,   451,   457,   461,   465,   468,   473,   476,   482,   488,
     496,   503,   509,   517,   518,   519,   520,   521,   522,   525,
     531
>>>>>>> 12d59056a579f28ec5d3fdf187429186bd974547
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
  "simple_statement", "compound_statement", "import_statment",
  "assignment", "expression", "number", "del_statment", "return_statement",
  "yield_statement", "assert_statement", "raise_statement",
  "global_statement", "nonlocal_statement", "global_nonlocal_targets",
<<<<<<< HEAD
  "match_statement", "match_block", "cases", "case", "try_statement",
  "try", "except", "finally", "except_statements", "with",
  "with_statements", "class", "class_block", "class_body", "function_call",
  "function", "block", "args", "member_expression", "logical_expression",
=======
  "match_statement", "match_block", "case", "try_statement", "try",
  "except", "finally", "except_statements", "with_statment", "with_stmt",
  "class", "class_block", "class_body", "function_call", "function",
  "block", "args", "member_expression", "logical_expression",
>>>>>>> 12d59056a579f28ec5d3fdf187429186bd974547
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
     345,   346,    43,    45,    42,    47,   124,   347,    46
};
# endif

#define YYPACT_NINF -92

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-92)))

#define YYTABLE_NINF -110

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -64,   -92,    30,   -92,   485,   -37,   183,    53,   -92,   -92,
      70,    73,   253,   -92,     9,   -15,    75,    53,    88,   277,
     253,    93,    88,    70,    54,   -92,   -92,   -92,    99,    36,
     -92,   -92,   -92,   -92,   -92,   -92,   -92,   -92,   -92,   -92,
     -92,   -92,   -92,    19,   -92,   -92,   -92,   -92,    15,   -92,
      82,   -92,   -92,    54,   -92,   -92,   -92,   -92,   -92,   253,
      54,   253,   -92,   -92,   -92,    54,   508,   -92,   -92,   122,
       1,   -92,    21,   -37,    96,   -53,    54,   498,    -8,   110,
      54,    44,    62,    40,    61,   -92,   253,    11,   -11,   137,
     -92,    20,   112,   151,    65,   -92,     2,    66,   -92,   -92,
      22,   -37,    54,   -92,    67,   293,   -92,    82,   -92,   -92,
     115,    78,   231,    -8,   151,   367,    60,   151,    54,    54,
      54,    54,    54,    54,    54,    54,    54,    54,    54,    54,
     253,   253,    44,   145,   149,    54,    71,   356,   113,   316,
      68,   -92,    54,    13,    88,    90,    44,   153,   -92,    44,
      70,   156,    81,    44,    -1,    44,   -92,   -92,   134,   151,
      44,   253,    14,   -92,   -92,   -92,   -92,   -92,   159,   -92,
      92,   151,   151,   151,   151,   151,   151,   151,   151,   151,
     151,   151,   151,    -8,    -8,   -92,   -92,   -92,   338,    83,
     -92,    97,   101,    10,   155,   -92,   376,   147,   -92,   -92,
     102,   -92,   -92,   -92,   152,   -92,   100,   -92,   181,    44,
     -92,   -92,   -92,    98,    44,   -92,    44,   111,   -92,    44,
      44,    44,   -63,    70,   450,   114,   192,    44,   200,   119,
     133,   -92,   135,   -92,   -92,    71,     0,   -92,   -92,   -92,
      44,   209,   136,   -92,    44,   -92,   -92,   -92,    54,   -22,
     -92,    44,    44,   -92,   -92,   -92,   -92,   -92,   -92,   138,
      44,   -92,   322,   -92,   -92,   -92,   -92,    44,   -92,    44,
     -92,   -92
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       2,     3,     5,     1,     4,   106,     0,     0,    24,    25,
       0,     0,     0,    26,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    11,    12,    10,     0,     7,
       9,     8,    21,    13,    20,    14,    15,    16,    17,    18,
      19,    32,    33,     0,    23,    29,    22,    27,     0,    28,
     122,    30,    31,   101,    49,    55,   120,   119,    51,     0,
       0,     0,    50,    56,    57,     0,   109,    52,    54,    53,
       0,   106,    34,     0,    65,     0,     0,    60,    61,     0,
     101,     0,     0,     0,    69,    68,     0,     0,    63,    58,
      67,     0,     0,    62,     0,     6,     0,     0,    86,    75,
      76,   107,     0,   108,     0,     0,   121,   124,   125,   126,
     105,    54,     0,   118,    48,   109,     0,    46,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   101,     0,     0,     0,     0,
       0,    80,   101,     0,     0,     0,     0,     0,    59,     0,
       0,     0,     0,     0,     0,     0,    85,    77,    78,    39,
       0,     0,     0,   123,   127,   104,    98,    97,   103,    47,
       0,    40,    41,    42,    43,    44,    45,   114,   115,   111,
     110,   113,   112,   116,   117,   128,    37,    66,     0,     0,
      91,     0,     0,     0,     0,     5,     0,    35,    36,    70,
       0,   139,    64,    87,     0,    88,     0,    81,     0,     0,
      84,    79,   130,     0,     0,   102,     0,     0,    93,     0,
       0,     0,   108,     0,     0,     0,     0,     0,     0,     0,
       0,    82,     0,   131,   129,     0,     0,   134,   133,   136,
       0,     0,     0,   100,     0,    38,   140,    89,     0,     0,
      73,     0,     0,    90,    92,    96,    95,    94,   137,     0,
       0,    99,     0,    71,    72,    83,   132,     0,   135,     0,
     138,    74
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -92,   -92,    23,   -92,   -92,   -92,   -92,   -16,   -12,   -92,
     -92,   -92,   -92,   -92,   -92,   -92,   -92,   -20,   -92,   -92,
     -27,   -92,   -92,   123,   -91,   -92,   -92,   -92,   -92,   -10,
     -92,     3,    -7,    26,   -57,    -3,    -9,   -92,   -92,   -92,
     -92,   -76,   121,   -92,   -92
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     4,    29,    30,    31,    32,    33,    66,    67,
      34,    35,    36,    37,    38,    39,    40,    85,    41,   249,
     250,    42,    43,    98,    99,   100,    44,    91,    45,   190,
     236,    68,    47,   141,   112,    69,    70,    49,   106,   107,
      50,   108,   109,    51,    52
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      77,    48,    90,    78,    72,   101,    71,    46,    71,   157,
      87,    88,    93,    74,    83,    79,   101,   130,   240,   197,
     130,   101,   135,   139,   158,     1,    92,   101,   136,   130,
       3,   163,   208,   131,    16,   241,   131,   104,    53,   130,
      96,   110,   130,    96,    97,   131,   101,    97,   114,   115,
     113,   103,   116,   117,   133,   131,   111,   143,   131,    71,
       5,    54,    55,   198,   137,   263,    81,   211,   110,   248,
     102,   147,   103,    58,   115,   103,    73,   145,   188,    75,
     209,    82,   132,   153,    80,   196,   103,   254,   130,   255,
     159,   221,   146,   154,    84,   214,   162,   104,   105,    89,
     168,   149,   150,    60,   131,    94,   171,   172,   173,   174,
     175,   176,   177,   178,   179,   180,   181,   182,   130,     5,
     191,   183,   184,   110,   199,    95,   130,   168,   101,    76,
     110,   134,   138,   140,   131,   193,   170,   142,    62,    63,
      64,   192,   131,   144,   148,   151,   152,   155,   160,   115,
      65,   186,   213,   204,   166,   187,   195,   103,   185,    97,
     189,   202,   205,   118,   119,   120,   200,   121,   122,   123,
     206,   218,   201,   216,   232,   203,   168,   223,   219,   207,
     226,   210,   220,   227,   168,   228,   212,   230,   229,     5,
      54,    55,   235,    56,    57,   244,   222,   165,   245,   118,
     119,   120,    58,   121,   122,   123,   247,   118,   119,   120,
     248,   121,   122,   123,   251,   259,   252,   260,   224,   267,
     256,    48,   264,   156,    59,   253,   242,    46,   164,   257,
       0,     0,    60,    48,     0,   231,   262,     5,    54,    55,
     233,   215,   234,     0,     0,   237,   238,   239,     0,     0,
      58,     0,     0,   246,     0,     0,     0,     0,    61,     5,
      54,    55,     0,    56,    57,     0,   258,    62,    63,    64,
     261,     0,    58,     0,     0,     0,     0,   265,   266,    65,
      60,     0,     0,     5,    54,    55,   268,    56,    57,     0,
       0,     0,     0,   270,    59,   271,    58,     0,     0,     5,
      54,    55,    60,    56,    57,     0,    76,   167,     0,     0,
       0,     0,    58,     0,     0,    62,    63,    64,    59,     0,
       0,     0,     5,    54,    55,     0,    60,    65,    76,     0,
       0,     0,     0,     0,    59,    58,     0,    62,    63,    64,
       0,     0,    60,     0,     5,    54,    55,     0,     0,    65,
       0,     0,    86,     0,     0,     0,     0,    58,     0,     0,
       0,    62,    63,    64,     0,    60,     0,     0,   161,     0,
     118,   119,   120,    65,   121,   122,   123,    62,    63,    64,
       0,     0,     5,    54,    55,     0,     0,    60,     0,    65,
       0,    76,   194,     0,     0,    58,     0,     0,     0,     0,
      62,    63,    64,   269,   118,   119,   120,     0,   121,   122,
     123,     0,    65,    76,   217,   118,   119,   120,     0,   121,
     122,   123,    62,    63,    64,    60,     0,     0,     0,     0,
       0,     0,   169,     0,    65,   124,     0,   125,   126,   127,
     128,   129,     0,   169,     0,     0,     0,     0,     0,     0,
       0,    76,   225,     0,     0,     0,     5,     0,     0,     0,
      62,    63,    64,     0,     6,     0,     0,     7,     8,     0,
       9,     0,    65,    10,    11,     0,     0,    12,     0,    13,
      14,     0,    15,     0,    16,    17,    18,    19,    20,    21,
      22,     5,    23,     0,     0,    24,     0,    25,     0,     6,
       0,    26,     7,     8,     0,     9,     0,     0,    10,    11,
       0,     0,    12,     0,    13,    14,     0,    15,     0,    16,
      17,    18,    19,    20,    21,    22,  -109,    23,     0,     0,
      24,     0,    25,     0,     0,     0,    26,   243,     0,    27,
      28,     0,  -109,     0,     0,     0,   118,   119,   120,     0,
     121,   122,   123,     0,     0,     0,   118,   119,   120,     0,
     121,   122,   123,     0,     0,     0,   124,     0,   125,   126,
     127,   128,   129,     0,    27,    28,   124,     0,   125,   126,
     127,   128,   129
};

static const yytype_int16 yycheck[] =
{
      12,     4,    22,    12,     7,     6,     6,     4,     6,   100,
      19,    20,    24,    10,    17,     6,     6,    28,    81,     6,
      28,     6,    75,    80,   100,    89,    23,     6,    81,    28,
       0,   107,    33,    44,    34,    98,    44,    15,    75,    28,
      21,    53,    28,    21,    25,    44,     6,    25,    60,    61,
      59,    48,    61,    65,    33,    44,    53,    17,    44,     6,
       6,     7,     8,    50,    76,    87,    81,   158,    80,    91,
      55,    82,    69,    19,    86,    72,     6,    86,   135,     6,
      81,     6,    81,    81,    75,   142,    83,    87,    28,    89,
     102,    81,    81,    96,     6,    81,   105,    15,    16,     6,
     112,    81,    82,    49,    44,     6,   118,   119,   120,   121,
     122,   123,   124,   125,   126,   127,   128,   129,    28,     6,
       7,   130,   131,   135,   144,    89,    28,   139,     6,    75,
     142,    35,    22,    89,    44,   138,    76,    75,    84,    85,
      86,   138,    44,    82,     7,    33,    81,    81,    81,   161,
      96,     6,   161,   150,    76,     6,    88,   154,   132,    25,
      89,     8,     6,    48,    49,    50,    76,    52,    53,    54,
      89,    88,   146,    81,    76,   149,   188,    22,    81,   153,
      33,   155,    81,    81,   196,    33,   160,     6,    88,     6,
       7,     8,    81,    10,    11,    81,   193,    82,     6,    48,
      49,    50,    19,    52,    53,    54,     6,    48,    49,    50,
      91,    52,    53,    54,    81,     6,    81,    81,   195,    81,
     236,   224,   249,   100,    41,   235,   223,   224,   107,   236,
      -1,    -1,    49,   236,    -1,   209,   248,     6,     7,     8,
     214,    82,   216,    -1,    -1,   219,   220,   221,    -1,    -1,
      19,    -1,    -1,   227,    -1,    -1,    -1,    -1,    75,     6,
       7,     8,    -1,    10,    11,    -1,   240,    84,    85,    86,
     244,    -1,    19,    -1,    -1,    -1,    -1,   251,   252,    96,
      49,    -1,    -1,     6,     7,     8,   260,    10,    11,    -1,
      -1,    -1,    -1,   267,    41,   269,    19,    -1,    -1,     6,
       7,     8,    49,    10,    11,    -1,    75,    76,    -1,    -1,
      -1,    -1,    19,    -1,    -1,    84,    85,    86,    41,    -1,
      -1,    -1,     6,     7,     8,    -1,    49,    96,    75,    -1,
      -1,    -1,    -1,    -1,    41,    19,    -1,    84,    85,    86,
      -1,    -1,    49,    -1,     6,     7,     8,    -1,    -1,    96,
      -1,    -1,    75,    -1,    -1,    -1,    -1,    19,    -1,    -1,
      -1,    84,    85,    86,    -1,    49,    -1,    -1,    75,    -1,
      48,    49,    50,    96,    52,    53,    54,    84,    85,    86,
      -1,    -1,     6,     7,     8,    -1,    -1,    49,    -1,    96,
      -1,    75,    76,    -1,    -1,    19,    -1,    -1,    -1,    -1,
      84,    85,    86,    81,    48,    49,    50,    -1,    52,    53,
      54,    -1,    96,    75,    76,    48,    49,    50,    -1,    52,
      53,    54,    84,    85,    86,    49,    -1,    -1,    -1,    -1,
      -1,    -1,    76,    -1,    96,    68,    -1,    70,    71,    72,
      73,    74,    -1,    76,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    75,    76,    -1,    -1,    -1,     6,    -1,    -1,    -1,
      84,    85,    86,    -1,    14,    -1,    -1,    17,    18,    -1,
      20,    -1,    96,    23,    24,    -1,    -1,    27,    -1,    29,
      30,    -1,    32,    -1,    34,    35,    36,    37,    38,    39,
      40,     6,    42,    -1,    -1,    45,    -1,    47,    -1,    14,
      -1,    51,    17,    18,    -1,    20,    -1,    -1,    23,    24,
      -1,    -1,    27,    -1,    29,    30,    -1,    32,    -1,    34,
      35,    36,    37,    38,    39,    40,    28,    42,    -1,    -1,
      45,    -1,    47,    -1,    -1,    -1,    51,    87,    -1,    89,
      90,    -1,    44,    -1,    -1,    -1,    48,    49,    50,    -1,
      52,    53,    54,    -1,    -1,    -1,    48,    49,    50,    -1,
      52,    53,    54,    -1,    -1,    -1,    68,    -1,    70,    71,
      72,    73,    74,    -1,    89,    90,    68,    -1,    70,    71,
      72,    73,    74
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    89,   100,     0,   101,     6,    14,    17,    18,    20,
      23,    24,    27,    29,    30,    32,    34,    35,    36,    37,
      38,    39,    40,    42,    45,    47,    51,    89,    90,   102,
     103,   104,   105,   106,   109,   110,   111,   112,   113,   114,
     115,   117,   120,   121,   125,   127,   130,   131,   134,   136,
     139,   142,   143,    75,     7,     8,    10,    11,    19,    41,
      49,    75,    84,    85,    86,    96,   107,   108,   130,   134,
     135,     6,   134,     6,   130,     6,    75,   107,   135,     6,
      75,    81,     6,   134,     6,   116,    75,   135,   135,     6,
     116,   126,   130,   107,     6,    89,    21,    25,   122,   123,
     124,     6,    55,   130,    15,    16,   137,   138,   140,   141,
     107,   130,   133,   135,   107,   107,   135,   107,    48,    49,
      50,    52,    53,    54,    68,    70,    71,    72,    73,    74,
      28,    44,    81,    33,    35,    75,    81,   107,    22,   133,
      89,   132,    75,    17,    82,   135,    81,    82,     7,    81,
      82,    33,    81,    81,   134,    81,   122,   123,   140,   107,
      81,    75,   135,   140,   141,    82,    76,    76,   107,    76,
      76,   107,   107,   107,   107,   107,   107,   107,   107,   107,
     107,   107,   107,   135,   135,   132,     6,     6,   133,    89,
     128,     7,   130,   134,    76,    88,   133,     6,    50,   116,
      76,   132,     8,   132,   130,     6,    89,   132,    33,    81,
     132,   123,   132,   135,    81,    82,    81,    76,    88,    81,
      81,    81,   130,    22,   101,    76,    33,    81,    33,    88,
       6,   132,    76,   132,   132,    81,   129,   132,   132,   132,
      81,    98,   130,    87,    81,     6,   132,     6,    91,   118,
     119,    81,    81,   128,    87,    89,   106,   131,   132,     6,
      81,   132,   107,    87,   119,   132,   132,    81,   132,    81,
     132,   132
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    99,   100,   100,   100,   101,   101,   101,   102,   102,
     102,   102,   102,   103,   103,   103,   103,   103,   103,   103,
     103,   103,   103,   103,   103,   103,   103,   104,   104,   104,
     104,   104,   104,   104,   105,   105,   105,   105,   105,   106,
     107,   107,   107,   107,   107,   107,   107,   107,   107,   107,
     107,   107,   107,   107,   107,   107,   108,   108,   109,   109,
     110,   110,   111,   112,   112,   113,   113,   114,   115,   116,
     116,   117,   118,   118,   119,   120,   120,   120,   120,   120,
     121,   122,   122,   122,   123,   124,   124,   125,   126,   126,
     127,   127,   128,   129,   129,   129,   129,   130,   130,   131,
     132,   133,   133,   133,   133,   133,   134,   134,   134,   135,
     135,   135,   135,   135,   135,   135,   135,   135,   135,   135,
     135,   136,   137,   137,   137,   137,   138,   138,   139,   139,
     140,   141,   141,   142,   142,   142,   142,   142,   142,   143,
     143
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     1,     2,     0,     3,     2,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     2,     4,     4,     4,     6,     3,
       3,     3,     3,     3,     3,     3,     2,     3,     2,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     2,     3,
       2,     2,     2,     2,     4,     2,     4,     2,     2,     1,
       3,     7,     2,     1,     4,     2,     2,     3,     3,     4,
       3,     3,     4,     6,     3,     2,     1,     4,     3,     5,
       7,     4,     4,     0,     2,     2,     2,     4,     4,     7,
       4,     0,     3,     2,     2,     1,     1,     2,     2,     1,
       3,     3,     3,     3,     3,     3,     3,     3,     2,     1,
       1,     2,     0,     2,     1,     1,     1,     2,     4,     6,
       3,     4,     6,     6,     6,     8,     6,     7,     9,     4,
       6
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
#line 1579 "parser.cpp" /* yacc.c:1646  */
    break;

  case 3:
#line 55 "parser.y" /* yacc.c:1646  */
    { }
#line 1585 "parser.cpp" /* yacc.c:1646  */
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
#line 1598 "parser.cpp" /* yacc.c:1646  */
    break;

  case 5:
#line 66 "parser.y" /* yacc.c:1646  */
    {
                  std::string name = "Statement" + std::to_string(++n_nodes);
                  (yyval.astNode) = new StatementsNode(name);
            }
#line 1607 "parser.cpp" /* yacc.c:1646  */
    break;

  case 6:
#line 70 "parser.y" /* yacc.c:1646  */
    { 
                  (yyvsp[-2].astNode)->add((yyvsp[-1].astNode));
                  (yyval.astNode) = (yyvsp[-2].astNode);
            }
#line 1616 "parser.cpp" /* yacc.c:1646  */
    break;

  case 7:
#line 74 "parser.y" /* yacc.c:1646  */
    { 
                  (yyvsp[-1].astNode)->add((yyvsp[0].astNode));
                  (yyval.astNode) = (yyvsp[-1].astNode); 
            }
#line 1625 "parser.cpp" /* yacc.c:1646  */
    break;

  case 8:
#line 80 "parser.y" /* yacc.c:1646  */
    { (yyval.astNode) = (yyvsp[0].astNode); }
#line 1631 "parser.cpp" /* yacc.c:1646  */
    break;

  case 9:
#line 81 "parser.y" /* yacc.c:1646  */
    { (yyval.astNode) = (yyvsp[0].astNode); }
#line 1637 "parser.cpp" /* yacc.c:1646  */
    break;

  case 13:
#line 87 "parser.y" /* yacc.c:1646  */
    { (yyval.astNode) = (yyvsp[0].astNode); }
#line 1643 "parser.cpp" /* yacc.c:1646  */
    break;

  case 14:
#line 88 "parser.y" /* yacc.c:1646  */
    { (yyval.astNode) = (yyvsp[0].astNode); }
#line 1649 "parser.cpp" /* yacc.c:1646  */
    break;

  case 15:
#line 89 "parser.y" /* yacc.c:1646  */
    { (yyval.astNode) = (yyvsp[0].astNode); }
#line 1655 "parser.cpp" /* yacc.c:1646  */
    break;

  case 16:
#line 90 "parser.y" /* yacc.c:1646  */
    { (yyval.astNode) = (yyvsp[0].astNode); }
#line 1661 "parser.cpp" /* yacc.c:1646  */
    break;

  case 17:
#line 91 "parser.y" /* yacc.c:1646  */
    { (yyval.astNode) = (yyvsp[0].astNode); }
#line 1667 "parser.cpp" /* yacc.c:1646  */
    break;

  case 18:
#line 92 "parser.y" /* yacc.c:1646  */
    { (yyval.astNode) = (yyvsp[0].astNode); }
#line 1673 "parser.cpp" /* yacc.c:1646  */
    break;

  case 19:
#line 93 "parser.y" /* yacc.c:1646  */
    { (yyval.astNode) = (yyvsp[0].astNode); }
#line 1679 "parser.cpp" /* yacc.c:1646  */
    break;

  case 20:
#line 94 "parser.y" /* yacc.c:1646  */
    { (yyval.astNode) = (yyvsp[0].astNode); }
#line 1685 "parser.cpp" /* yacc.c:1646  */
    break;

  case 21:
#line 95 "parser.y" /* yacc.c:1646  */
    { (yyval.astNode) = (yyvsp[0].astNode); }
#line 1691 "parser.cpp" /* yacc.c:1646  */
    break;

  case 22:
#line 96 "parser.y" /* yacc.c:1646  */
    { (yyval.astNode) = (yyvsp[0].astNode); }
#line 1697 "parser.cpp" /* yacc.c:1646  */
    break;

  case 23:
#line 97 "parser.y" /* yacc.c:1646  */
    { (yyval.astNode) = (yyvsp[0].astNode); }
#line 1703 "parser.cpp" /* yacc.c:1646  */
    break;

  case 27:
#line 103 "parser.y" /* yacc.c:1646  */
    { (yyval.astNode) = (yyvsp[0].astNode); }
#line 1709 "parser.cpp" /* yacc.c:1646  */
    break;

  case 28:
#line 104 "parser.y" /* yacc.c:1646  */
    { (yyval.astNode) = (yyvsp[0].astNode); }
#line 1715 "parser.cpp" /* yacc.c:1646  */
    break;

  case 34:
#line 113 "parser.y" /* yacc.c:1646  */
    {
                        std::string name = "Import" + std::to_string(++n_nodes);
                        (yyval.astNode) = new ImportNode(name);
                        (yyval.astNode)->add((yyvsp[0].astNode));
                  }
#line 1725 "parser.cpp" /* yacc.c:1646  */
    break;

  case 35:
#line 118 "parser.y" /* yacc.c:1646  */
    {
                        std::string name = "Import" + std::to_string(++n_nodes);
                        (yyval.astNode) = new ImportNode(name);
                        (yyval.astNode)->add((yyvsp[-2].astNode));
                        (yyval.astNode)->add((yyvsp[0].astNode));
                  }
#line 1736 "parser.cpp" /* yacc.c:1646  */
    break;

  case 36:
#line 124 "parser.y" /* yacc.c:1646  */
    {
                        std::string name = "Import" + std::to_string(++n_nodes);
                        (yyval.astNode) = new ImportNode(name);
                        (yyval.astNode)->add((yyvsp[-2].astNode));
                  }
#line 1746 "parser.cpp" /* yacc.c:1646  */
    break;

  case 37:
#line 129 "parser.y" /* yacc.c:1646  */
    {
                        std::string name = "Import" + std::to_string(++n_nodes);
                        (yyval.astNode) = new ImportNode(name);
                        (yyval.astNode)->add((yyvsp[-2].astNode));
                        (yyval.astNode)->add((yyvsp[0].astNode));
                  }
#line 1757 "parser.cpp" /* yacc.c:1646  */
    break;

  case 38:
#line 135 "parser.y" /* yacc.c:1646  */
    {
                        std::string name = "Import" + std::to_string(++n_nodes);
                        (yyval.astNode) = new ImportNode(name);
                        (yyval.astNode)->add((yyvsp[-4].astNode));
                        (yyval.astNode)->add((yyvsp[-2].astNode));
                        (yyval.astNode)->add((yyvsp[0].astNode));
                  }
#line 1769 "parser.cpp" /* yacc.c:1646  */
    break;

  case 39:
#line 144 "parser.y" /* yacc.c:1646  */
    {  
                  std::string name = "assignment" + std::to_string(++n_nodes);
                  (yyval.astNode) = new AssignmentStatement(name);
                  (yyval.astNode)->add((yyvsp[-2].astNode));
                  (yyval.astNode)->add((yyvsp[0].astNode));
            }
#line 1780 "parser.cpp" /* yacc.c:1646  */
    break;

  case 40:
#line 152 "parser.y" /* yacc.c:1646  */
    { 
                  (yyval.astNode) = new BinaryExpressionNode("+", (yyvsp[-2].astNode), (yyvsp[0].astNode));
            }
#line 1788 "parser.cpp" /* yacc.c:1646  */
    break;

  case 41:
#line 155 "parser.y" /* yacc.c:1646  */
    { 
                  (yyval.astNode) = new BinaryExpressionNode("-", (yyvsp[-2].astNode), (yyvsp[0].astNode));
            }
#line 1796 "parser.cpp" /* yacc.c:1646  */
    break;

  case 42:
#line 158 "parser.y" /* yacc.c:1646  */
    { 
                  (yyval.astNode) = new BinaryExpressionNode("*", (yyvsp[-2].astNode), (yyvsp[0].astNode));
            }
#line 1804 "parser.cpp" /* yacc.c:1646  */
    break;

  case 43:
#line 161 "parser.y" /* yacc.c:1646  */
    { 
                  (yyval.astNode) = new BinaryExpressionNode("/", (yyvsp[-2].astNode), (yyvsp[0].astNode));
            }
#line 1812 "parser.cpp" /* yacc.c:1646  */
    break;

  case 44:
#line 164 "parser.y" /* yacc.c:1646  */
    { 
                  (yyval.astNode) = new BinaryExpressionNode("**", (yyvsp[-2].astNode), (yyvsp[0].astNode));
            }
#line 1820 "parser.cpp" /* yacc.c:1646  */
    break;

  case 45:
#line 167 "parser.y" /* yacc.c:1646  */
    {
                  (yyval.astNode) = new BinaryExpressionNode("%", (yyvsp[-2].astNode), (yyvsp[0].astNode));
            }
#line 1828 "parser.cpp" /* yacc.c:1646  */
    break;

  case 46:
#line 170 "parser.y" /* yacc.c:1646  */
    { /*The rule for negation includes %prec UMINUS . The only operator in this rule is - , 
                                                      which has low precedence, but we want unary minus to have higher precedence than multiplication 
                                                      rather than lower. The %prec tells bison to use the precedence of UMINUS for this rule.*/
                                                }
#line 1837 "parser.cpp" /* yacc.c:1646  */
    break;

  case 47:
#line 174 "parser.y" /* yacc.c:1646  */
    {(yyval.astNode) = (yyvsp[-1].astNode); }
#line 1843 "parser.cpp" /* yacc.c:1646  */
    break;

  case 48:
#line 175 "parser.y" /* yacc.c:1646  */
    { }
#line 1849 "parser.cpp" /* yacc.c:1646  */
    break;

  case 52:
#line 179 "parser.y" /* yacc.c:1646  */
    { (yyval.astNode) = (yyvsp[0].astNode); }
#line 1855 "parser.cpp" /* yacc.c:1646  */
    break;

  case 53:
#line 180 "parser.y" /* yacc.c:1646  */
    { (yyval.astNode) = (yyvsp[0].astNode); }
#line 1861 "parser.cpp" /* yacc.c:1646  */
    break;

  case 54:
#line 181 "parser.y" /* yacc.c:1646  */
    { (yyval.astNode) = (yyvsp[0].astNode); }
#line 1867 "parser.cpp" /* yacc.c:1646  */
    break;

  case 55:
#line 182 "parser.y" /* yacc.c:1646  */
    { (yyval.astNode) = (yyvsp[0].astNode); }
#line 1873 "parser.cpp" /* yacc.c:1646  */
    break;

  case 56:
#line 185 "parser.y" /* yacc.c:1646  */
    { (yyval.astNode) = (yyvsp[0].astNode); }
#line 1879 "parser.cpp" /* yacc.c:1646  */
    break;

  case 57:
#line 186 "parser.y" /* yacc.c:1646  */
    { (yyval.astNode) = (yyvsp[0].astNode); }
#line 1885 "parser.cpp" /* yacc.c:1646  */
    break;

  case 58:
#line 189 "parser.y" /* yacc.c:1646  */
    {
                        std::string name = "Del" + std::to_string(++n_nodes);
                        (yyval.astNode) = new DelNode(name);
                        (yyval.astNode)->add((yyvsp[0].astNode));
                  }
#line 1895 "parser.cpp" /* yacc.c:1646  */
    break;

  case 59:
#line 194 "parser.y" /* yacc.c:1646  */
    { 
                        std::string name = "Del" + std::to_string(++n_nodes);
                        (yyval.astNode) = new DelNode(name);
                        (yyval.astNode)->add((yyvsp[-1].astNode));
                        (yyval.astNode)->add((yyvsp[0].astNode));
                  }
#line 1906 "parser.cpp" /* yacc.c:1646  */
    break;

  case 60:
#line 202 "parser.y" /* yacc.c:1646  */
    {
                        std::string name = "Return" + std::to_string(++n_nodes);
                        (yyval.astNode) = new ReturnNode(name);
                        (yyval.astNode)->add((yyvsp[0].astNode));
                  }
#line 1916 "parser.cpp" /* yacc.c:1646  */
    break;

  case 61:
#line 207 "parser.y" /* yacc.c:1646  */
    {
                        std::string name = "Return" + std::to_string(++n_nodes);
                        (yyval.astNode) = new ReturnNode(name);
                        (yyval.astNode)->add((yyvsp[0].astNode));
                  }
#line 1926 "parser.cpp" /* yacc.c:1646  */
    break;

  case 62:
#line 214 "parser.y" /* yacc.c:1646  */
    {
                        std::string name = "Yield" + std::to_string(++n_nodes);
                        (yyval.astNode) = new YieldNode(name);
                        (yyval.astNode)->add((yyvsp[0].astNode));
                  }
#line 1936 "parser.cpp" /* yacc.c:1646  */
    break;

  case 63:
#line 221 "parser.y" /* yacc.c:1646  */
    {
                        std::string name = "Assert" + std::to_string(++n_nodes);
                        (yyval.astNode) = new AssertNode(name);
                        (yyval.astNode)->add((yyvsp[0].astNode));
                  }
#line 1946 "parser.cpp" /* yacc.c:1646  */
    break;

  case 64:
#line 226 "parser.y" /* yacc.c:1646  */
    {
                  }
#line 1953 "parser.cpp" /* yacc.c:1646  */
    break;

  case 65:
#line 230 "parser.y" /* yacc.c:1646  */
    {
                        std::string name = "Raise" + std::to_string(++n_nodes);
                        (yyval.astNode) = new RaiseNode(name);
                        (yyval.astNode)->add((yyvsp[0].astNode));
                  }
#line 1963 "parser.cpp" /* yacc.c:1646  */
    break;

  case 66:
#line 235 "parser.y" /* yacc.c:1646  */
    {
                        std::string name = "Raise" + std::to_string(++n_nodes);
                        (yyval.astNode) = new RaiseNode(name);
                        (yyval.astNode)->add((yyvsp[-2].astNode));
                        (yyval.astNode)->add((yyvsp[0].astNode));
                  }
#line 1974 "parser.cpp" /* yacc.c:1646  */
    break;

  case 67:
#line 243 "parser.y" /* yacc.c:1646  */
    {
                        std::string name = "Global" + std::to_string(++n_nodes);
                        (yyval.astNode) = new GlobalNode(name);
                        (yyval.astNode)->add((yyvsp[0].astNode));
                  }
#line 1984 "parser.cpp" /* yacc.c:1646  */
    break;

  case 68:
#line 250 "parser.y" /* yacc.c:1646  */
    {
                        std::string name = "NonLocal" + std::to_string(++n_nodes);
                        (yyval.astNode) = new NonLocalNode(name);
                        (yyval.astNode)->add((yyvsp[0].astNode));
                  }
#line 1994 "parser.cpp" /* yacc.c:1646  */
    break;

  case 69:
#line 257 "parser.y" /* yacc.c:1646  */
    {
                              (yyval.astNode) = (yyvsp[0].astNode);
                        }
#line 2002 "parser.cpp" /* yacc.c:1646  */
    break;

  case 70:
#line 260 "parser.y" /* yacc.c:1646  */
    { 
                              (yyvsp[-2].astNode)->add((yyvsp[0].astNode));
                              (yyval.astNode) = (yyvsp[-2].astNode);
                        }
#line 2011 "parser.cpp" /* yacc.c:1646  */
    break;

  case 71:
#line 266 "parser.y" /* yacc.c:1646  */
    {
                        std::string name = dynamic_cast<IdentifierNode*>((yyvsp[-5].astNode))->value;
                        (yyval.astNode) = new MatchNode(name);
                        (yyval.astNode)->add((yyvsp[-5].astNode));
                        (yyval.astNode)->add((yyvsp[-1].astNode));
                  }
#line 2022 "parser.cpp" /* yacc.c:1646  */
    break;

  case 72:
#line 274 "parser.y" /* yacc.c:1646  */
    { 
                  (yyvsp[-1].astNode)->add((yyvsp[0].astNode));
            }
#line 2030 "parser.cpp" /* yacc.c:1646  */
    break;

  case 73:
#line 277 "parser.y" /* yacc.c:1646  */
    {
                  std::string name = "MatchBlock" + std::to_string(++n_nodes);
                  (yyval.astNode) = new MatchBlock(name);
                  (yyval.astNode)->add((yyvsp[0].astNode));
            }
#line 2040 "parser.cpp" /* yacc.c:1646  */
    break;

  case 74:
<<<<<<< HEAD
#line 283 "parser.y" /* yacc.c:1646  */
    { 
            (yyval.astNode) = (yyvsp[0].astNode); 
      }
#line 2047 "parser.cpp" /* yacc.c:1646  */
    break;

  case 75:
#line 288 "parser.y" /* yacc.c:1646  */
    {
                        (yyval.astNode)->add((yyvsp[-2].astNode));
                        (yyval.astNode)->add((yyvsp[0].astNode));
                  }
#line 2056 "parser.cpp" /* yacc.c:1646  */
    break;

  case 88:
#line 316 "parser.y" /* yacc.c:1646  */
    {
                        std::string name = "With" + std::to_string(++n_nodes);
                        (yyval.astNode) = new WithNode(name);
                        (yyval.astNode)->add((yyvsp[-2].astNode));
                        (yyval.astNode)->add((yyvsp[0].astNode));
                  }
#line 2067 "parser.cpp" /* yacc.c:1646  */
    break;

  case 91:
#line 328 "parser.y" /* yacc.c:1646  */
=======
#line 284 "parser.y" /* yacc.c:1646  */
    {
            std::string name = "Case" + std::to_string(++n_nodes);
            (yyval.astNode) = new CaseNode(name);
            (yyval.astNode)->add((yyvsp[-2].astNode));
            (yyval.astNode)->add((yyvsp[0].astNode));
      }
#line 2051 "parser.cpp" /* yacc.c:1646  */
    break;

  case 90:
#line 321 "parser.y" /* yacc.c:1646  */
>>>>>>> 12d59056a579f28ec5d3fdf187429186bd974547
    {
                  std::string name = "classWithInheritance" + std::to_string(n_nodes);
                  ++n_nodes;
                  (yyval.astNode) = new ClassNode(name);
                  (yyval.astNode)->add((yyvsp[-5].astNode));
                  (yyval.astNode)->add((yyvsp[-3].astNode));
                  (yyval.astNode)->add((yyvsp[0].astNode));
                  }
<<<<<<< HEAD
#line 2080 "parser.cpp" /* yacc.c:1646  */
    break;

  case 92:
#line 336 "parser.y" /* yacc.c:1646  */
=======
#line 2064 "parser.cpp" /* yacc.c:1646  */
    break;

  case 91:
#line 329 "parser.y" /* yacc.c:1646  */
>>>>>>> 12d59056a579f28ec5d3fdf187429186bd974547
    {
                  std::string name = "classWithoutInheritance" + std::to_string(n_nodes);
                  ++n_nodes;
                  (yyval.astNode) = new ClassNode(name);
                  (yyval.astNode)->add((yyvsp[-2].astNode));
                  (yyval.astNode)->add((yyvsp[0].astNode));
                  }
<<<<<<< HEAD
#line 2092 "parser.cpp" /* yacc.c:1646  */
    break;

  case 93:
#line 346 "parser.y" /* yacc.c:1646  */
    {
                                                (yyval.astNode) = (yyvsp[-1].astNode);
                                          }
#line 2100 "parser.cpp" /* yacc.c:1646  */
    break;

  case 94:
#line 350 "parser.y" /* yacc.c:1646  */
=======
#line 2076 "parser.cpp" /* yacc.c:1646  */
    break;

  case 92:
#line 339 "parser.y" /* yacc.c:1646  */
    {
                                                (yyval.astNode) = (yyvsp[-1].astNode);
                                          }
#line 2084 "parser.cpp" /* yacc.c:1646  */
    break;

  case 93:
#line 343 "parser.y" /* yacc.c:1646  */
>>>>>>> 12d59056a579f28ec5d3fdf187429186bd974547
    { 
            std::string nname = "Classbody" + std::to_string(n_nodes);
            ++n_nodes;
            (yyval.astNode) = new EmptyNode(nname);
            }
<<<<<<< HEAD
#line 2110 "parser.cpp" /* yacc.c:1646  */
    break;

  case 95:
#line 355 "parser.y" /* yacc.c:1646  */
    { 
                  (yyval.astNode) = new ClassBodyNode("ClassBody");
                  (yyval.astNode)->add((yyvsp[0].astNode));
            }
#line 2119 "parser.cpp" /* yacc.c:1646  */
    break;

  case 96:
#line 359 "parser.y" /* yacc.c:1646  */
    { 
                  (yyval.astNode) = new ClassBodyNode("ClassBody");
                  (yyval.astNode)->add((yyvsp[0].astNode));
            }
#line 2128 "parser.cpp" /* yacc.c:1646  */
    break;

  case 97:
#line 363 "parser.y" /* yacc.c:1646  */
    {
                  (yyval.astNode) = (yyvsp[-1].astNode);
            }
#line 2136 "parser.cpp" /* yacc.c:1646  */
    break;

  case 98:
#line 368 "parser.y" /* yacc.c:1646  */
=======
#line 2094 "parser.cpp" /* yacc.c:1646  */
    break;

  case 94:
#line 348 "parser.y" /* yacc.c:1646  */
    { 
                  (yyval.astNode) = new ClassBodyNode("ClassBody");
                  (yyval.astNode)->add((yyvsp[0].astNode));
            }
#line 2103 "parser.cpp" /* yacc.c:1646  */
    break;

  case 95:
#line 352 "parser.y" /* yacc.c:1646  */
    { 
                  (yyval.astNode) = new ClassBodyNode("ClassBody");
                  (yyval.astNode)->add((yyvsp[0].astNode));
            }
#line 2112 "parser.cpp" /* yacc.c:1646  */
    break;

  case 96:
#line 356 "parser.y" /* yacc.c:1646  */
    {
                  (yyval.astNode) = (yyvsp[-1].astNode);
            }
#line 2120 "parser.cpp" /* yacc.c:1646  */
    break;

  case 97:
#line 361 "parser.y" /* yacc.c:1646  */
>>>>>>> 12d59056a579f28ec5d3fdf187429186bd974547
    {
                        std::string name = dynamic_cast<IdentifierNode*>((yyvsp[-3].astNode))->value + std::to_string(++n_nodes);
                        (yyval.astNode) = new FunctionCall(name, (yyvsp[-3].astNode));
                        (yyval.astNode)->add((yyvsp[-3].astNode));
                        (yyval.astNode)->add((yyvsp[-1].astNode));                                         
                  }
<<<<<<< HEAD
#line 2147 "parser.cpp" /* yacc.c:1646  */
    break;

  case 99:
#line 374 "parser.y" /* yacc.c:1646  */
=======
#line 2131 "parser.cpp" /* yacc.c:1646  */
    break;

  case 98:
#line 367 "parser.y" /* yacc.c:1646  */
>>>>>>> 12d59056a579f28ec5d3fdf187429186bd974547
    {
                        std::string name = dynamic_cast<IdentifierNode*>((yyvsp[-3].astNode))->value + std::to_string(++n_nodes);
                        (yyval.astNode) = new FunctionCall(name, (yyvsp[-3].astNode));
                        (yyval.astNode)->add((yyvsp[-3].astNode));
                        (yyval.astNode)->add((yyvsp[-1].astNode));
                  }
<<<<<<< HEAD
#line 2158 "parser.cpp" /* yacc.c:1646  */
    break;

  case 100:
#line 382 "parser.y" /* yacc.c:1646  */
=======
#line 2142 "parser.cpp" /* yacc.c:1646  */
    break;

  case 99:
#line 375 "parser.y" /* yacc.c:1646  */
>>>>>>> 12d59056a579f28ec5d3fdf187429186bd974547
    {
                  IdentifierNode* idFunc = dynamic_cast<IdentifierNode*>((yyvsp[-5].astNode));
                  (yyval.astNode) = new FunctionNode(idFunc->value);
                  (yyval.astNode)->add((yyvsp[-3].astNode));
                  (yyval.astNode)->add((yyvsp[0].astNode));
            }
<<<<<<< HEAD
#line 2169 "parser.cpp" /* yacc.c:1646  */
    break;

  case 101:
#line 389 "parser.y" /* yacc.c:1646  */
=======
#line 2153 "parser.cpp" /* yacc.c:1646  */
    break;

  case 100:
#line 382 "parser.y" /* yacc.c:1646  */
>>>>>>> 12d59056a579f28ec5d3fdf187429186bd974547
    {     
                  std::string name = "block" + std::to_string(n_nodes);
                  ++n_nodes;
                  (yyval.astNode) = new BlockNode(name);
                  (yyval.astNode)->add((yyvsp[-1].astNode));
            }
<<<<<<< HEAD
#line 2180 "parser.cpp" /* yacc.c:1646  */
    break;

  case 102:
#line 397 "parser.y" /* yacc.c:1646  */
=======
#line 2164 "parser.cpp" /* yacc.c:1646  */
    break;

  case 101:
#line 390 "parser.y" /* yacc.c:1646  */
>>>>>>> 12d59056a579f28ec5d3fdf187429186bd974547
    { 
            std::string name = "Args" + std::to_string(++n_nodes);
            (yyval.astNode) = new EmptyNode(name); 
      }
<<<<<<< HEAD
#line 2189 "parser.cpp" /* yacc.c:1646  */
    break;

  case 107:
#line 407 "parser.y" /* yacc.c:1646  */
=======
#line 2173 "parser.cpp" /* yacc.c:1646  */
    break;

  case 106:
#line 400 "parser.y" /* yacc.c:1646  */
>>>>>>> 12d59056a579f28ec5d3fdf187429186bd974547
    {
                        std::string name = "identifire" + std::to_string(++n_nodes);
                        (yyvsp[0].astNode)->name=name;
                        (yyval.astNode) = (yyvsp[0].astNode);
                  }
<<<<<<< HEAD
#line 2199 "parser.cpp" /* yacc.c:1646  */
    break;

  case 108:
#line 412 "parser.y" /* yacc.c:1646  */
=======
#line 2183 "parser.cpp" /* yacc.c:1646  */
    break;

  case 107:
#line 405 "parser.y" /* yacc.c:1646  */
>>>>>>> 12d59056a579f28ec5d3fdf187429186bd974547
    {
                        std::string name = "identifire" + std::to_string(++n_nodes);
                        (yyvsp[0].astNode)->name=name;
                        (yyval.astNode) = new MemberExpression((yyvsp[-1].astNode), (yyvsp[0].astNode));
                        (yyval.astNode)->add((yyvsp[-1].astNode)); 
                        (yyval.astNode)->add((yyvsp[0].astNode)); 
                  }
<<<<<<< HEAD
#line 2211 "parser.cpp" /* yacc.c:1646  */
    break;

  case 109:
#line 419 "parser.y" /* yacc.c:1646  */
=======
#line 2195 "parser.cpp" /* yacc.c:1646  */
    break;

  case 108:
#line 412 "parser.y" /* yacc.c:1646  */
>>>>>>> 12d59056a579f28ec5d3fdf187429186bd974547
    { 
                        (yyval.astNode) = new MemberExpression((yyvsp[-1].astNode), (yyvsp[0].astNode)); 
                        (yyval.astNode)->add((yyvsp[-1].astNode)); 
                        (yyval.astNode)->add((yyvsp[0].astNode)); 
                  }
<<<<<<< HEAD
#line 2221 "parser.cpp" /* yacc.c:1646  */
    break;

  case 110:
#line 426 "parser.y" /* yacc.c:1646  */
    { (yyval.astNode) = (yyvsp[0].astNode); }
#line 2227 "parser.cpp" /* yacc.c:1646  */
    break;

  case 111:
#line 427 "parser.y" /* yacc.c:1646  */
    {
                        (yyval.astNode) = new BinaryLogicalExpression(">=", (yyvsp[-2].astNode), (yyvsp[0].astNode));
                  }
#line 2235 "parser.cpp" /* yacc.c:1646  */
    break;

  case 112:
#line 430 "parser.y" /* yacc.c:1646  */
    {
                        (yyval.astNode) = new BinaryLogicalExpression(">", (yyvsp[-2].astNode), (yyvsp[0].astNode));
                  }
#line 2243 "parser.cpp" /* yacc.c:1646  */
    break;

  case 113:
#line 433 "parser.y" /* yacc.c:1646  */
    {
                        (yyval.astNode) = new BinaryLogicalExpression("<=", (yyvsp[-2].astNode), (yyvsp[0].astNode));
                  }
#line 2251 "parser.cpp" /* yacc.c:1646  */
    break;

  case 114:
#line 436 "parser.y" /* yacc.c:1646  */
    {
                        (yyval.astNode) = new BinaryLogicalExpression("<", (yyvsp[-2].astNode), (yyvsp[0].astNode));
                  }
#line 2259 "parser.cpp" /* yacc.c:1646  */
    break;

  case 115:
#line 439 "parser.y" /* yacc.c:1646  */
    {
                        (yyval.astNode) = new BinaryLogicalExpression("==", (yyvsp[-2].astNode), (yyvsp[0].astNode));
                  }
#line 2267 "parser.cpp" /* yacc.c:1646  */
    break;

  case 116:
#line 442 "parser.y" /* yacc.c:1646  */
    {
                        (yyval.astNode) = new BinaryLogicalExpression("!=", (yyvsp[-2].astNode), (yyvsp[0].astNode));
                  }
#line 2275 "parser.cpp" /* yacc.c:1646  */
    break;

  case 117:
#line 445 "parser.y" /* yacc.c:1646  */
    {
                        (yyval.astNode) = new BinaryLogicalExpression("and", (yyvsp[-2].astNode), (yyvsp[0].astNode));
                  }
#line 2283 "parser.cpp" /* yacc.c:1646  */
    break;

  case 118:
#line 448 "parser.y" /* yacc.c:1646  */
    {
                        (yyval.astNode) = new BinaryLogicalExpression("or", (yyvsp[-2].astNode), (yyvsp[0].astNode));
                  }
#line 2291 "parser.cpp" /* yacc.c:1646  */
    break;

  case 119:
#line 451 "parser.y" /* yacc.c:1646  */
    {
                        (yyval.astNode) = new BinaryLogicalExpression("not", (yyvsp[-1].astNode), (yyvsp[0].astNode));
                  }
#line 2299 "parser.cpp" /* yacc.c:1646  */
    break;

  case 120:
#line 454 "parser.y" /* yacc.c:1646  */
    { (yyval.astNode) = (yyvsp[0].astNode); }
#line 2305 "parser.cpp" /* yacc.c:1646  */
    break;

  case 121:
#line 455 "parser.y" /* yacc.c:1646  */
    { (yyval.astNode) = (yyvsp[0].astNode); }
#line 2311 "parser.cpp" /* yacc.c:1646  */
    break;

  case 122:
#line 458 "parser.y" /* yacc.c:1646  */
=======
#line 2205 "parser.cpp" /* yacc.c:1646  */
    break;

  case 109:
#line 419 "parser.y" /* yacc.c:1646  */
    { (yyval.astNode) = (yyvsp[0].astNode); }
#line 2211 "parser.cpp" /* yacc.c:1646  */
    break;

  case 110:
#line 420 "parser.y" /* yacc.c:1646  */
    {
                        (yyval.astNode) = new BinaryLogicalExpression(">=", (yyvsp[-2].astNode), (yyvsp[0].astNode));
                  }
#line 2219 "parser.cpp" /* yacc.c:1646  */
    break;

  case 111:
#line 423 "parser.y" /* yacc.c:1646  */
    {
                        (yyval.astNode) = new BinaryLogicalExpression(">", (yyvsp[-2].astNode), (yyvsp[0].astNode));
                  }
#line 2227 "parser.cpp" /* yacc.c:1646  */
    break;

  case 112:
#line 426 "parser.y" /* yacc.c:1646  */
    {
                        (yyval.astNode) = new BinaryLogicalExpression("<=", (yyvsp[-2].astNode), (yyvsp[0].astNode));
                  }
#line 2235 "parser.cpp" /* yacc.c:1646  */
    break;

  case 113:
#line 429 "parser.y" /* yacc.c:1646  */
    {
                        (yyval.astNode) = new BinaryLogicalExpression("<", (yyvsp[-2].astNode), (yyvsp[0].astNode));
                  }
#line 2243 "parser.cpp" /* yacc.c:1646  */
    break;

  case 114:
#line 432 "parser.y" /* yacc.c:1646  */
    {
                        (yyval.astNode) = new BinaryLogicalExpression("==", (yyvsp[-2].astNode), (yyvsp[0].astNode));
                  }
#line 2251 "parser.cpp" /* yacc.c:1646  */
    break;

  case 115:
#line 435 "parser.y" /* yacc.c:1646  */
    {
                        (yyval.astNode) = new BinaryLogicalExpression("!=", (yyvsp[-2].astNode), (yyvsp[0].astNode));
                  }
#line 2259 "parser.cpp" /* yacc.c:1646  */
    break;

  case 116:
#line 438 "parser.y" /* yacc.c:1646  */
    {
                        (yyval.astNode) = new BinaryLogicalExpression("and", (yyvsp[-2].astNode), (yyvsp[0].astNode));
                  }
#line 2267 "parser.cpp" /* yacc.c:1646  */
    break;

  case 117:
#line 441 "parser.y" /* yacc.c:1646  */
    {
                        (yyval.astNode) = new BinaryLogicalExpression("or", (yyvsp[-2].astNode), (yyvsp[0].astNode));
                  }
#line 2275 "parser.cpp" /* yacc.c:1646  */
    break;

  case 118:
#line 444 "parser.y" /* yacc.c:1646  */
    {
                        (yyval.astNode) = new BinaryLogicalExpression("not", (yyvsp[-1].astNode), (yyvsp[0].astNode));
                  }
#line 2283 "parser.cpp" /* yacc.c:1646  */
    break;

  case 119:
#line 447 "parser.y" /* yacc.c:1646  */
    { (yyval.astNode) = (yyvsp[0].astNode); }
#line 2289 "parser.cpp" /* yacc.c:1646  */
    break;

  case 120:
#line 448 "parser.y" /* yacc.c:1646  */
    { (yyval.astNode) = (yyvsp[0].astNode); }
#line 2295 "parser.cpp" /* yacc.c:1646  */
    break;

  case 121:
#line 451 "parser.y" /* yacc.c:1646  */
>>>>>>> 12d59056a579f28ec5d3fdf187429186bd974547
    {
                              (yyvsp[-1].astNode)->add((yyvsp[0].astNode));
                              (yyval.astNode) = (yyvsp[-1].astNode);
                        }
<<<<<<< HEAD
#line 2320 "parser.cpp" /* yacc.c:1646  */
    break;

  case 123:
#line 464 "parser.y" /* yacc.c:1646  */
=======
#line 2304 "parser.cpp" /* yacc.c:1646  */
    break;

  case 122:
#line 457 "parser.y" /* yacc.c:1646  */
>>>>>>> 12d59056a579f28ec5d3fdf187429186bd974547
    { 
                  std::string name = "elif_else" + std::to_string(++n_nodes);
                  (yyval.astNode) = new EmptyNode(name); 
            }
<<<<<<< HEAD
#line 2329 "parser.cpp" /* yacc.c:1646  */
=======
#line 2313 "parser.cpp" /* yacc.c:1646  */
    break;

  case 123:
#line 461 "parser.y" /* yacc.c:1646  */
    {
                  (yyvsp[-1].astNode)->add((yyvsp[0].astNode));
                  (yyval.astNode) = (yyvsp[-1].astNode);
            }
#line 2322 "parser.cpp" /* yacc.c:1646  */
>>>>>>> 12d59056a579f28ec5d3fdf187429186bd974547
    break;

  case 124:
#line 468 "parser.y" /* yacc.c:1646  */
    {
                  (yyval.astNode) = (yyvsp[0].astNode);
            }
<<<<<<< HEAD
#line 2338 "parser.cpp" /* yacc.c:1646  */
    break;

  case 125:
#line 472 "parser.y" /* yacc.c:1646  */
=======
#line 2330 "parser.cpp" /* yacc.c:1646  */
    break;

  case 125:
#line 468 "parser.y" /* yacc.c:1646  */
    {
                  (yyval.astNode) = (yyvsp[0].astNode);
            }
#line 2338 "parser.cpp" /* yacc.c:1646  */
    break;

  case 126:
#line 473 "parser.y" /* yacc.c:1646  */
>>>>>>> 12d59056a579f28ec5d3fdf187429186bd974547
    {
                  (yyval.astNode) = (yyvsp[0].astNode);
            }
#line 2346 "parser.cpp" /* yacc.c:1646  */
    break;

<<<<<<< HEAD
  case 126:
#line 475 "parser.y" /* yacc.c:1646  */
    {
                  (yyval.astNode) = (yyvsp[0].astNode);
            }
#line 2354 "parser.cpp" /* yacc.c:1646  */
    break;

  case 127:
#line 480 "parser.y" /* yacc.c:1646  */
=======
  case 127:
#line 476 "parser.y" /* yacc.c:1646  */
>>>>>>> 12d59056a579f28ec5d3fdf187429186bd974547
    {
                  (yyval.astNode) = (yyvsp[0].astNode);
            }
#line 2355 "parser.cpp" /* yacc.c:1646  */
    break;

  case 128:
<<<<<<< HEAD
#line 483 "parser.y" /* yacc.c:1646  */
    {
                  (yyvsp[-1].astNode)->add((yyvsp[0].astNode));
                  (yyval.astNode) = (yyvsp[-1].astNode);
            }
#line 2371 "parser.cpp" /* yacc.c:1646  */
    break;

  case 129:
#line 489 "parser.y" /* yacc.c:1646  */
=======
#line 482 "parser.y" /* yacc.c:1646  */
>>>>>>> 12d59056a579f28ec5d3fdf187429186bd974547
    {
                        std::string name = "if" + std::to_string(++n_nodes);
                        (yyval.astNode) = new ConditionalStatement("if", name);
                        (yyval.astNode)->add((yyvsp[-2].astNode));
                        (yyval.astNode)->add((yyvsp[0].astNode));
                  }
<<<<<<< HEAD
#line 2382 "parser.cpp" /* yacc.c:1646  */
    break;

  case 130:
#line 495 "parser.y" /* yacc.c:1646  */
=======
#line 2366 "parser.cpp" /* yacc.c:1646  */
    break;

  case 129:
#line 488 "parser.y" /* yacc.c:1646  */
>>>>>>> 12d59056a579f28ec5d3fdf187429186bd974547
    {
                        std::string name = "if" + std::to_string(++n_nodes);
                        (yyval.astNode) = new ConditionalStatement("if", name);
                        (yyval.astNode)->add((yyvsp[-3].astNode));
                        (yyval.astNode)->add((yyvsp[0].astNode));
                  }
<<<<<<< HEAD
#line 2393 "parser.cpp" /* yacc.c:1646  */
    break;

  case 131:
#line 503 "parser.y" /* yacc.c:1646  */
=======
#line 2377 "parser.cpp" /* yacc.c:1646  */
    break;

  case 130:
#line 496 "parser.y" /* yacc.c:1646  */
>>>>>>> 12d59056a579f28ec5d3fdf187429186bd974547
    {
                        std::string name = "else" + std::to_string(++n_nodes);
                        (yyval.astNode) = new ConditionalStatement("else", name);
                        (yyval.astNode)->add((yyvsp[0].astNode));
                  }
<<<<<<< HEAD
#line 2403 "parser.cpp" /* yacc.c:1646  */
    break;

  case 132:
#line 510 "parser.y" /* yacc.c:1646  */
    {
                        std::string name = "elif" + std::to_string(++n_nodes);
                        (yyval.astNode) = new ConditionalStatement("elif", name);
                        (yyval.astNode)->add((yyvsp[-2].astNode));
                        (yyval.astNode)->add((yyvsp[0].astNode));
                  }
#line 2414 "parser.cpp" /* yacc.c:1646  */
    break;

  case 133:
#line 516 "parser.y" /* yacc.c:1646  */
=======
#line 2387 "parser.cpp" /* yacc.c:1646  */
    break;

  case 131:
#line 503 "parser.y" /* yacc.c:1646  */
    {
                        std::string name = "elif" + std::to_string(++n_nodes);
                        (yyval.astNode) = new ConditionalStatement("elif", name);
                        (yyval.astNode)->add((yyvsp[-2].astNode));
                        (yyval.astNode)->add((yyvsp[0].astNode));
                  }
#line 2398 "parser.cpp" /* yacc.c:1646  */
    break;

  case 132:
#line 509 "parser.y" /* yacc.c:1646  */
>>>>>>> 12d59056a579f28ec5d3fdf187429186bd974547
    {
                        std::string name = "elif" + std::to_string(++n_nodes);
                        (yyval.astNode) = new ConditionalStatement("elif", name);
                        (yyval.astNode)->add((yyvsp[-3].astNode));
                        (yyval.astNode)->add((yyvsp[0].astNode));
                  }
<<<<<<< HEAD
#line 2425 "parser.cpp" /* yacc.c:1646  */
    break;

  case 140:
#line 532 "parser.y" /* yacc.c:1646  */
    {
                        std::string name = "While" + std::to_string(++n_nodes);
                        (yyval.astNode) = new WhileNode(name);
                        (yyval.astNode)->add((yyvsp[-2].astNode));
                        (yyval.astNode)->add((yyvsp[0].astNode));
                  }
#line 2436 "parser.cpp" /* yacc.c:1646  */
    break;

  case 141:
#line 538 "parser.y" /* yacc.c:1646  */
=======
#line 2409 "parser.cpp" /* yacc.c:1646  */
    break;

  case 139:
#line 525 "parser.y" /* yacc.c:1646  */
    {
                        std::string name = "While" + std::to_string(++n_nodes);
                        (yyval.astNode) = new WhileNode(name);
                        (yyval.astNode)->add((yyvsp[-2].astNode));
                        (yyval.astNode)->add((yyvsp[0].astNode));
                  }
#line 2420 "parser.cpp" /* yacc.c:1646  */
    break;

  case 140:
#line 531 "parser.y" /* yacc.c:1646  */
>>>>>>> 12d59056a579f28ec5d3fdf187429186bd974547
    {
                        std::string name = "While" + std::to_string(++n_nodes);
                        (yyval.astNode) = new WhileNode(name);
                        (yyval.astNode)->add((yyvsp[-3].astNode));
                        (yyval.astNode)->add((yyvsp[0].astNode));
                  }
<<<<<<< HEAD
#line 2447 "parser.cpp" /* yacc.c:1646  */
    break;


#line 2451 "parser.cpp" /* yacc.c:1646  */
=======
#line 2431 "parser.cpp" /* yacc.c:1646  */
    break;


#line 2435 "parser.cpp" /* yacc.c:1646  */
>>>>>>> 12d59056a579f28ec5d3fdf187429186bd974547
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
#line 546 "parser.y" /* yacc.c:1906  */
=======
#line 539 "parser.y" /* yacc.c:1906  */
>>>>>>> 12d59056a579f28ec5d3fdf187429186bd974547


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
