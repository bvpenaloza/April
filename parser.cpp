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
#line 3 "src/parser.y" /* yacc.c:339  */

    #include <iostream>
    #include <cstring>
    #include "include/assignment.hpp"
    #include "include/bioperator.hpp"
	#include "include/conditional.hpp"
	#include "include/comparasionope.hpp"
    #include "include/unaryope.hpp"
	#include "include/block.hpp"
    #include "include/double.hpp"
    #include "include/boolean.hpp"
    #include "include/exprstatement.hpp"
	#include "include/errors.hpp"
    #include "include/identifier.hpp"
    #include "include/integer.hpp"
    #include "include/node.hpp"
    #include "include/methodcall.hpp"
	#include "include/msg.hpp"
    #include "include/string.hpp"
    #include "include/vardeclaration.hpp"
    #include "include/vardeclarationdeduce.hpp"
	#include "include/scope.hpp"
    #include "include/forloop.hpp"
    #include "include/function.hpp"
    #include "include/return.hpp"
    #include "include/assigbiope.hpp"
    #include "include/logicope.hpp"
    #include "include/array.hpp"
    #include "include/arrayaccess.hpp"
    #include "include/assignmentarray.hpp"
	#include "include/arrayaddelement.hpp"

    using namespace april;
    
    extern int yylex();
    extern int yyerror(const char*);
    extern int line;
    extern int col;
    extern char* yytext;

    april::Block* programBlock;
    bool existMainFunction = false;

#line 110 "parser.cpp" /* yacc.c:339  */

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
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "parser.h".  */
#ifndef YY_YY_PARSER_H_INCLUDED
# define YY_YY_PARSER_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    TDIGIT = 258,
    TDOUBLE = 259,
    TIDENTIFIER = 260,
    TBOOLEAN = 261,
    TPLUS = 262,
    TMIN = 263,
    TMUL = 264,
    TDIV = 265,
    TVAR = 266,
    TAMPER = 267,
    TCOLON = 268,
    TEQUAL = 269,
    TSC = 270,
    TJUMP = 271,
    TCOMMA = 272,
    TCOEQU = 273,
    TLTL = 274,
    TRBRACE = 275,
    TLBRACE = 276,
    TLPAREN = 277,
    TRPAREN = 278,
    TSTR = 279,
    TLBRACKET = 280,
    TRBRACKET = 281,
    TCOMNE = 282,
    TCOMEQ = 283,
    TCOMLE = 284,
    TCOMGE = 285,
    TCOMLT = 286,
    TCOMGT = 287,
    TAND = 288,
    TOR = 289,
    TNOT = 290,
    TIF = 291,
    TELSE = 292,
    TFOR = 293,
    TFN = 294,
    TRETURN = 295,
    TASIGPLUS = 296,
    TASIGMINUS = 297,
    TASIGMULT = 298,
    TASIGDIV = 299,
    TUNARIPLUS = 300,
    TUNARIMIN = 301
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE YYSTYPE;
union YYSTYPE
{
#line 48 "src/parser.y" /* yacc.c:355  */

    april::Node* node;
    april::Block* block;
    april::Statement* stmt;
    april::Identifier* ident;
    april::Expression* expr;
    april::VariableDeclaration* var_decl;
    std::string* string; 
    std::vector<april::Expression*> *exprvec;
    std::vector<april::VariableDeclaration*> *vardecl;
    int token;

#line 210 "parser.cpp" /* yacc.c:355  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_PARSER_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 225 "parser.cpp" /* yacc.c:358  */

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
#define YYFINAL  53
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   400

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  47
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  27
/* YYNRULES -- Number of rules.  */
#define YYNRULES  83
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  141

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   301

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
      45,    46
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    87,    87,    88,    91,    92,    95,    96,    97,    98,
      99,   100,   101,   102,   103,   106,   109,   110,   113,   116,
     117,   118,   121,   124,   127,   130,   131,   134,   135,   138,
     139,   140,   141,   142,   145,   146,   147,   148,   149,   150,
     151,   152,   153,   154,   155,   156,   157,   158,   159,   160,
     163,   164,   167,   168,   169,   172,   175,   178,   181,   182,
     185,   186,   187,   190,   191,   192,   193,   194,   195,   196,
     199,   202,   202,   202,   202,   202,   202,   205,   206,   214,
     215,   223,   224,   227
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "TDIGIT", "TDOUBLE", "TIDENTIFIER",
  "TBOOLEAN", "TPLUS", "TMIN", "TMUL", "TDIV", "TVAR", "TAMPER", "TCOLON",
  "TEQUAL", "TSC", "TJUMP", "TCOMMA", "TCOEQU", "TLTL", "TRBRACE",
  "TLBRACE", "TLPAREN", "TRPAREN", "TSTR", "TLBRACKET", "TRBRACKET",
  "TCOMNE", "TCOMEQ", "TCOMLE", "TCOMGE", "TCOMLT", "TCOMGT", "TAND",
  "TOR", "TNOT", "TIF", "TELSE", "TFOR", "TFN", "TRETURN", "TASIGPLUS",
  "TASIGMINUS", "TASIGMULT", "TASIGDIV", "TUNARIPLUS", "TUNARIMIN",
  "$accept", "program", "stmts", "stmt", "array_add_element", "return",
  "fn_decl", "fn_args", "var_decl_arg", "for", "scope", "conditional",
  "block", "var_decl", "expr", "array_access", "array_elements",
  "array_expr", "method_call", "logic_ope", "unary_ope", "call_args",
  "binary_ope_expr", "boolean_expr", "comparasion", "basics", "ident", YY_NULL
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
     295,   296,   297,   298,   299,   300,   301
};
# endif

#define YYPACT_NINF -88

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-88)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     136,   -88,   -88,   -88,   -88,     9,     4,    15,   195,   -88,
     195,   195,   195,   195,     4,   189,    25,   136,   -88,   -88,
     -88,   -88,   -88,   -88,   -88,   -88,   -88,   -88,   218,    -3,
     -88,   -88,   -88,   -88,   -88,   -88,   -88,   164,   -88,   -88,
      28,   -88,   113,   230,    24,   340,    -2,   340,   258,   258,
       6,   -88,   266,   -88,   -88,   195,   195,   195,   195,   -88,
     -88,   -88,   -88,   -88,   -88,   -88,   195,   195,   195,   195,
      41,     4,   195,   195,   195,   195,    42,   195,   195,   195,
     195,   -88,   -88,     4,   -88,   -88,   195,   -88,    43,   -88,
       4,   -88,   366,   366,    30,    30,   340,   340,   340,   340,
      26,   -88,   340,   -88,   294,    63,   303,   340,    -7,    55,
     340,   340,   340,   340,    33,   340,    61,    56,   -88,    71,
     -88,   -88,   -88,   -88,   195,   -88,   -88,   195,   -88,   -88,
       4,    76,   340,   331,    85,   -88,     4,   -88,   -88,    61,
     -88
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       2,    77,    79,    83,    82,     0,     0,     0,     0,    81,
      52,     0,     0,     0,     0,     0,     0,     3,     4,    14,
      13,    11,    12,    10,     9,     8,    24,     6,     0,    49,
      48,    47,    46,    45,    34,    44,    42,    43,    78,    80,
       0,    28,     0,     0,    43,    53,     0,    57,     0,     0,
       0,    16,     0,     1,     5,     0,     0,     0,     0,     7,
      71,    72,    73,    74,    75,    76,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    60,     0,     0,     0,     0,
       0,    58,    59,     0,    27,    69,     0,    55,    25,    23,
      19,    17,    63,    64,    65,    66,    67,    68,    70,    37,
       0,    22,    35,    36,     0,    47,     0,    61,     0,     0,
      38,    39,    40,    41,     0,    54,     0,     0,    20,     0,
      51,    32,    33,    15,     0,    56,    50,     0,    29,    26,
       0,     0,    62,     0,    47,    21,     0,    30,    31,     0,
      18
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -88,   -88,    94,    -9,   -88,   -88,   -88,   -88,   -87,   -88,
     -88,   -88,   -44,   -88,    19,   -88,   -88,   -88,   -71,   -88,
     -88,   -88,   -88,   -88,   -88,   -88,     0
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,    16,    17,    18,    19,    20,    21,   117,    22,    23,
      24,    25,    26,    27,    28,    29,    46,    30,    31,    32,
      33,   108,    34,    35,    68,    36,    44
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      37,   103,   105,   118,    88,    89,    40,    37,    54,     3,
     124,    69,    38,    39,    50,    86,   125,    37,     1,     2,
       3,     4,    70,     5,    87,    53,     6,    43,    90,    45,
      47,    48,    49,    54,    52,    41,     7,     8,    72,     9,
      10,    83,    37,   135,   100,   109,    75,   127,   128,    76,
      11,    12,   120,    13,    14,    15,   134,    60,    61,    62,
      63,    64,    65,    66,    67,    77,    78,    79,    80,    81,
      82,   101,   129,   130,    92,    93,    94,    95,   122,   131,
     116,   126,     7,   114,    71,    96,    97,    98,    99,   136,
     119,   102,   104,   106,   107,   140,   110,   111,   112,   113,
     138,    42,     0,     0,     0,   115,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     1,     2,     3,     4,
       0,     5,     0,     0,     6,     0,     0,     0,     0,     0,
     119,     0,     0,    84,     7,     8,   139,     9,    10,     1,
       2,     3,     4,   132,     5,     0,   133,     6,    11,    12,
       0,    13,    14,    15,     0,     0,     0,     7,     8,     0,
       9,    10,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    11,    12,     0,    13,    14,    15,    71,    72,     0,
       0,     0,    73,    74,     0,     0,    75,     0,     0,    76,
       0,     0,     1,     2,     3,     4,     0,     5,     1,     2,
       3,     4,     0,     5,    51,    77,    78,    79,    80,    81,
      82,     8,     0,     9,    10,     0,     0,     8,     0,     9,
      10,     0,     0,     0,    11,    55,    56,    57,    58,     0,
      11,     0,     0,    59,     0,     0,     0,    55,    56,    57,
      58,     0,     0,     0,     0,    60,    61,    62,    63,    64,
      65,    66,    67,    85,     0,     0,     0,    60,    61,    62,
      63,    64,    65,    66,    67,    55,    56,    57,    58,     0,
       0,     0,     0,    55,    56,    57,    58,     0,     0,     7,
       0,    91,     0,     0,     0,    60,    61,    62,    63,    64,
      65,    66,    67,    60,    61,    62,    63,    64,    65,    66,
      67,    55,    56,    57,    58,     0,     0,     0,     0,   121,
      55,    56,    57,    58,     0,     0,     0,     0,   123,     0,
       0,    60,    61,    62,    63,    64,    65,    66,    67,     0,
      60,    61,    62,    63,    64,    65,    66,    67,    55,    56,
      57,    58,     0,     0,     0,     0,   137,    55,    56,    57,
      58,     0,     0,     0,     0,     0,     0,     0,    60,    61,
      62,    63,    64,    65,    66,    67,     0,    60,    61,    62,
      63,    64,    65,    66,    67,    57,    58,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    60,    61,    62,    63,    64,    65,    66,
      67
};

static const yytype_int16 yycheck[] =
{
       0,    72,    73,    90,    48,    49,     6,     7,    17,     5,
      17,    14,     3,     4,    14,    17,    23,    17,     3,     4,
       5,     6,    25,     8,    26,     0,    11,     8,    22,    10,
      11,    12,    13,    42,    15,    20,    21,    22,    14,    24,
      25,    13,    42,   130,     3,     3,    22,    14,    15,    25,
      35,    36,    26,    38,    39,    40,   127,    27,    28,    29,
      30,    31,    32,    33,    34,    41,    42,    43,    44,    45,
      46,    71,   116,    17,    55,    56,    57,    58,    15,    23,
      37,    26,    21,    83,    13,    66,    67,    68,    69,    13,
      90,    72,    73,    74,    75,   139,    77,    78,    79,    80,
      15,     7,    -1,    -1,    -1,    86,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     3,     4,     5,     6,
      -1,     8,    -1,    -1,    11,    -1,    -1,    -1,    -1,    -1,
     130,    -1,    -1,    20,    21,    22,   136,    24,    25,     3,
       4,     5,     6,   124,     8,    -1,   127,    11,    35,    36,
      -1,    38,    39,    40,    -1,    -1,    -1,    21,    22,    -1,
      24,    25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    35,    36,    -1,    38,    39,    40,    13,    14,    -1,
      -1,    -1,    18,    19,    -1,    -1,    22,    -1,    -1,    25,
      -1,    -1,     3,     4,     5,     6,    -1,     8,     3,     4,
       5,     6,    -1,     8,    15,    41,    42,    43,    44,    45,
      46,    22,    -1,    24,    25,    -1,    -1,    22,    -1,    24,
      25,    -1,    -1,    -1,    35,     7,     8,     9,    10,    -1,
      35,    -1,    -1,    15,    -1,    -1,    -1,     7,     8,     9,
      10,    -1,    -1,    -1,    -1,    27,    28,    29,    30,    31,
      32,    33,    34,    23,    -1,    -1,    -1,    27,    28,    29,
      30,    31,    32,    33,    34,     7,     8,     9,    10,    -1,
      -1,    -1,    -1,     7,     8,     9,    10,    -1,    -1,    21,
      -1,    15,    -1,    -1,    -1,    27,    28,    29,    30,    31,
      32,    33,    34,    27,    28,    29,    30,    31,    32,    33,
      34,     7,     8,     9,    10,    -1,    -1,    -1,    -1,    15,
       7,     8,     9,    10,    -1,    -1,    -1,    -1,    15,    -1,
      -1,    27,    28,    29,    30,    31,    32,    33,    34,    -1,
      27,    28,    29,    30,    31,    32,    33,    34,     7,     8,
       9,    10,    -1,    -1,    -1,    -1,    15,     7,     8,     9,
      10,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    27,    28,
      29,    30,    31,    32,    33,    34,    -1,    27,    28,    29,
      30,    31,    32,    33,    34,     9,    10,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    27,    28,    29,    30,    31,    32,    33,
      34
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     4,     5,     6,     8,    11,    21,    22,    24,
      25,    35,    36,    38,    39,    40,    48,    49,    50,    51,
      52,    53,    55,    56,    57,    58,    59,    60,    61,    62,
      64,    65,    66,    67,    69,    70,    72,    73,     3,     4,
      73,    20,    49,    61,    73,    61,    63,    61,    61,    61,
      73,    15,    61,     0,    50,     7,     8,     9,    10,    15,
      27,    28,    29,    30,    31,    32,    33,    34,    71,    14,
      25,    13,    14,    18,    19,    22,    25,    41,    42,    43,
      44,    45,    46,    13,    20,    23,    17,    26,    59,    59,
      22,    15,    61,    61,    61,    61,    61,    61,    61,    61,
       3,    73,    61,    65,    61,    65,    61,    61,    68,     3,
      61,    61,    61,    61,    73,    61,    37,    54,    55,    73,
      26,    15,    15,    15,    17,    23,    26,    14,    15,    59,
      17,    23,    61,    61,    65,    55,    13,    15,    15,    73,
      59
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    47,    48,    48,    49,    49,    50,    50,    50,    50,
      50,    50,    50,    50,    50,    51,    52,    52,    53,    54,
      54,    54,    55,    56,    57,    58,    58,    59,    59,    60,
      60,    60,    60,    60,    61,    61,    61,    61,    61,    61,
      61,    61,    61,    61,    61,    61,    61,    61,    61,    61,
      62,    62,    63,    63,    63,    64,    65,    66,    67,    67,
      68,    68,    68,    69,    69,    69,    69,    69,    69,    69,
      70,    71,    71,    71,    71,    71,    71,    72,    72,    72,
      72,    72,    72,    73
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     1,     1,     2,     1,     2,     1,     1,
       1,     1,     1,     1,     1,     4,     2,     3,     8,     0,
       1,     3,     3,     3,     1,     3,     5,     3,     2,     5,
       7,     7,     4,     4,     1,     3,     3,     3,     3,     3,
       3,     3,     1,     1,     1,     1,     1,     1,     1,     1,
       4,     4,     0,     1,     3,     3,     4,     2,     2,     2,
       0,     1,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     1,     1,     1,     1,     1,     1,     1,     2,     1,
       2,     1,     1,     1
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
#line 87 "src/parser.y" /* yacc.c:1646  */
    { programBlock = new april::Block();}
#line 1440 "parser.cpp" /* yacc.c:1646  */
    break;

  case 3:
#line 88 "src/parser.y" /* yacc.c:1646  */
    { programBlock = (yyvsp[0].block); }
#line 1446 "parser.cpp" /* yacc.c:1646  */
    break;

  case 4:
#line 91 "src/parser.y" /* yacc.c:1646  */
    { (yyval.block) = new april::Block(); (yyval.block)->statements.push_back((yyvsp[0].stmt)); }
#line 1452 "parser.cpp" /* yacc.c:1646  */
    break;

  case 5:
#line 92 "src/parser.y" /* yacc.c:1646  */
    { (yyvsp[-1].block)->statements.push_back((yyvsp[0].stmt)); }
#line 1458 "parser.cpp" /* yacc.c:1646  */
    break;

  case 6:
#line 95 "src/parser.y" /* yacc.c:1646  */
    { }
#line 1464 "parser.cpp" /* yacc.c:1646  */
    break;

  case 7:
#line 96 "src/parser.y" /* yacc.c:1646  */
    { (yyval.stmt) = new april::ExpressionStatement((yyvsp[-1].expr)); }
#line 1470 "parser.cpp" /* yacc.c:1646  */
    break;

  case 15:
#line 106 "src/parser.y" /* yacc.c:1646  */
    { (yyval.stmt) = new april::ArrayAddElement((yyvsp[-3].ident), (yyvsp[-1].expr)); }
#line 1476 "parser.cpp" /* yacc.c:1646  */
    break;

  case 16:
#line 109 "src/parser.y" /* yacc.c:1646  */
    { (yyval.stmt) = new april::Return(); }
#line 1482 "parser.cpp" /* yacc.c:1646  */
    break;

  case 17:
#line 110 "src/parser.y" /* yacc.c:1646  */
    { (yyval.stmt) = new april::Return((yyvsp[-1].expr)); }
#line 1488 "parser.cpp" /* yacc.c:1646  */
    break;

  case 18:
#line 113 "src/parser.y" /* yacc.c:1646  */
    { (yyval.stmt) = new april::Function((yyvsp[-1].ident), (yyvsp[-6].ident), (yyvsp[-4].vardecl), (yyvsp[0].block)); }
#line 1494 "parser.cpp" /* yacc.c:1646  */
    break;

  case 19:
#line 116 "src/parser.y" /* yacc.c:1646  */
    { (yyval.vardecl) = new april::VarList(); }
#line 1500 "parser.cpp" /* yacc.c:1646  */
    break;

  case 20:
#line 117 "src/parser.y" /* yacc.c:1646  */
    { (yyval.vardecl) = new april::VarList(); (yyval.vardecl)->push_back((yyvsp[0].var_decl)); }
#line 1506 "parser.cpp" /* yacc.c:1646  */
    break;

  case 21:
#line 118 "src/parser.y" /* yacc.c:1646  */
    { (yyvsp[-2].vardecl)->push_back((yyvsp[0].var_decl)); }
#line 1512 "parser.cpp" /* yacc.c:1646  */
    break;

  case 22:
#line 121 "src/parser.y" /* yacc.c:1646  */
    { (yyval.stmt) = new april::VariableDeclaration(*(yyvsp[0].ident), *(yyvsp[-2].ident));}
#line 1518 "parser.cpp" /* yacc.c:1646  */
    break;

  case 23:
#line 124 "src/parser.y" /* yacc.c:1646  */
    { (yyval.stmt) = new april::ForLoop((yyvsp[-1].expr), (yyvsp[0].block)); }
#line 1524 "parser.cpp" /* yacc.c:1646  */
    break;

  case 24:
#line 127 "src/parser.y" /* yacc.c:1646  */
    { (yyval.stmt) = new april::Scope((yyvsp[0].block)); }
#line 1530 "parser.cpp" /* yacc.c:1646  */
    break;

  case 25:
#line 130 "src/parser.y" /* yacc.c:1646  */
    { (yyval.stmt) = new april::Conditional((yyvsp[-1].expr), *(yyvsp[0].block)); }
#line 1536 "parser.cpp" /* yacc.c:1646  */
    break;

  case 26:
#line 131 "src/parser.y" /* yacc.c:1646  */
    { (yyval.stmt) = new april::Conditional((yyvsp[-3].expr),* (yyvsp[-2].block), *(yyvsp[0].block)); }
#line 1542 "parser.cpp" /* yacc.c:1646  */
    break;

  case 27:
#line 134 "src/parser.y" /* yacc.c:1646  */
    { (yyval.block) = (yyvsp[-1].block); }
#line 1548 "parser.cpp" /* yacc.c:1646  */
    break;

  case 28:
#line 135 "src/parser.y" /* yacc.c:1646  */
    { (yyval.block) = new april::Block();  }
#line 1554 "parser.cpp" /* yacc.c:1646  */
    break;

  case 29:
#line 138 "src/parser.y" /* yacc.c:1646  */
    { (yyval.stmt) = new april::VariableDeclaration(*(yyvsp[-1].ident), *(yyvsp[-3].ident));}
#line 1560 "parser.cpp" /* yacc.c:1646  */
    break;

  case 30:
#line 139 "src/parser.y" /* yacc.c:1646  */
    { (yyval.stmt) = new april::VariableDeclaration(*(yyvsp[-3].ident), *(yyvsp[-5].ident), (yyvsp[-1].expr)); }
#line 1566 "parser.cpp" /* yacc.c:1646  */
    break;

  case 31:
#line 140 "src/parser.y" /* yacc.c:1646  */
    { (yyval.stmt) = new april::VariableDeclaration(*(yyvsp[-3].ident), *(yyvsp[-5].ident), (yyvsp[-1].expr)); }
#line 1572 "parser.cpp" /* yacc.c:1646  */
    break;

  case 32:
#line 141 "src/parser.y" /* yacc.c:1646  */
    { (yyval.stmt) = new april::VariableDeclarationDeduce(*(yyvsp[-3].ident), (yyvsp[-1].expr)); }
#line 1578 "parser.cpp" /* yacc.c:1646  */
    break;

  case 33:
#line 142 "src/parser.y" /* yacc.c:1646  */
    { (yyval.stmt) = new april::VariableDeclarationDeduce(*(yyvsp[-3].ident), (yyvsp[-1].expr)); }
#line 1584 "parser.cpp" /* yacc.c:1646  */
    break;

  case 34:
#line 145 "src/parser.y" /* yacc.c:1646  */
    { }
#line 1590 "parser.cpp" /* yacc.c:1646  */
    break;

  case 35:
#line 146 "src/parser.y" /* yacc.c:1646  */
    { (yyval.expr) = new april::Assignment(*(yyvsp[-2].ident), *(yyvsp[0].expr)); }
#line 1596 "parser.cpp" /* yacc.c:1646  */
    break;

  case 36:
#line 147 "src/parser.y" /* yacc.c:1646  */
    { (yyval.expr) = new april::Assignment(*(yyvsp[-2].ident), *(yyvsp[0].expr)); }
#line 1602 "parser.cpp" /* yacc.c:1646  */
    break;

  case 37:
#line 148 "src/parser.y" /* yacc.c:1646  */
    { (yyval.expr) = new april::AssignmentArray((yyvsp[-2].expr), (yyvsp[0].expr));     }
#line 1608 "parser.cpp" /* yacc.c:1646  */
    break;

  case 38:
#line 149 "src/parser.y" /* yacc.c:1646  */
    { (yyval.expr) = new april::AssigBioperator((yyvsp[-2].ident), (yyvsp[-1].token), (yyvsp[0].expr)); }
#line 1614 "parser.cpp" /* yacc.c:1646  */
    break;

  case 39:
#line 150 "src/parser.y" /* yacc.c:1646  */
    { (yyval.expr) = new april::AssigBioperator((yyvsp[-2].ident), (yyvsp[-1].token), (yyvsp[0].expr)); }
#line 1620 "parser.cpp" /* yacc.c:1646  */
    break;

  case 40:
#line 151 "src/parser.y" /* yacc.c:1646  */
    { (yyval.expr) = new april::AssigBioperator((yyvsp[-2].ident), (yyvsp[-1].token), (yyvsp[0].expr)); }
#line 1626 "parser.cpp" /* yacc.c:1646  */
    break;

  case 41:
#line 152 "src/parser.y" /* yacc.c:1646  */
    { (yyval.expr) = new april::AssigBioperator((yyvsp[-2].ident), (yyvsp[-1].token), (yyvsp[0].expr)); }
#line 1632 "parser.cpp" /* yacc.c:1646  */
    break;

  case 42:
#line 153 "src/parser.y" /* yacc.c:1646  */
    { (yyval.expr) = (yyvsp[0].expr); }
#line 1638 "parser.cpp" /* yacc.c:1646  */
    break;

  case 43:
#line 154 "src/parser.y" /* yacc.c:1646  */
    { (yyval.ident) = (yyvsp[0].ident); }
#line 1644 "parser.cpp" /* yacc.c:1646  */
    break;

  case 44:
#line 155 "src/parser.y" /* yacc.c:1646  */
    { }
#line 1650 "parser.cpp" /* yacc.c:1646  */
    break;

  case 45:
#line 156 "src/parser.y" /* yacc.c:1646  */
    { }
#line 1656 "parser.cpp" /* yacc.c:1646  */
    break;

  case 46:
#line 157 "src/parser.y" /* yacc.c:1646  */
    { }
#line 1662 "parser.cpp" /* yacc.c:1646  */
    break;

  case 47:
#line 158 "src/parser.y" /* yacc.c:1646  */
    { }
#line 1668 "parser.cpp" /* yacc.c:1646  */
    break;

  case 48:
#line 159 "src/parser.y" /* yacc.c:1646  */
    { }
#line 1674 "parser.cpp" /* yacc.c:1646  */
    break;

  case 49:
#line 160 "src/parser.y" /* yacc.c:1646  */
    { }
#line 1680 "parser.cpp" /* yacc.c:1646  */
    break;

  case 50:
#line 163 "src/parser.y" /* yacc.c:1646  */
    { (yyval.expr) = new april::ArrayAccess((yyvsp[-3].ident), std::atol((yyvsp[-1].string)->c_str())); delete (yyvsp[-1].string);}
#line 1686 "parser.cpp" /* yacc.c:1646  */
    break;

  case 51:
#line 164 "src/parser.y" /* yacc.c:1646  */
    { (yyval.expr) = new april::ArrayAccess((yyvsp[-3].expr), std::atol((yyvsp[-1].string)->c_str())); delete (yyvsp[-1].string);}
#line 1692 "parser.cpp" /* yacc.c:1646  */
    break;

  case 52:
#line 167 "src/parser.y" /* yacc.c:1646  */
    { (yyval.exprvec) = new april::ExpressionList(); }
#line 1698 "parser.cpp" /* yacc.c:1646  */
    break;

  case 53:
#line 168 "src/parser.y" /* yacc.c:1646  */
    { (yyval.exprvec) = new april::ExpressionList(); (yyval.exprvec)->push_back((yyvsp[0].expr)); }
#line 1704 "parser.cpp" /* yacc.c:1646  */
    break;

  case 54:
#line 169 "src/parser.y" /* yacc.c:1646  */
    { (yyval.exprvec)->push_back((yyvsp[0].expr)); }
#line 1710 "parser.cpp" /* yacc.c:1646  */
    break;

  case 55:
#line 172 "src/parser.y" /* yacc.c:1646  */
    { (yyval.expr) = new april::Array((yyvsp[-1].exprvec)); }
#line 1716 "parser.cpp" /* yacc.c:1646  */
    break;

  case 56:
#line 175 "src/parser.y" /* yacc.c:1646  */
    { (yyval.expr) = new april::MethodCall((yyvsp[-3].ident), (yyvsp[-1].exprvec)); }
#line 1722 "parser.cpp" /* yacc.c:1646  */
    break;

  case 57:
#line 178 "src/parser.y" /* yacc.c:1646  */
    { (yyval.expr) = new april::LogicOpe((yyvsp[-1].token), (yyvsp[0].expr)); }
#line 1728 "parser.cpp" /* yacc.c:1646  */
    break;

  case 58:
#line 181 "src/parser.y" /* yacc.c:1646  */
    { (yyval.expr) = new april::UnaryOpe((yyvsp[-1].ident), (yyvsp[0].token)); }
#line 1734 "parser.cpp" /* yacc.c:1646  */
    break;

  case 59:
#line 182 "src/parser.y" /* yacc.c:1646  */
    { (yyval.expr) = new april::UnaryOpe((yyvsp[-1].ident), (yyvsp[0].token)); }
#line 1740 "parser.cpp" /* yacc.c:1646  */
    break;

  case 60:
#line 185 "src/parser.y" /* yacc.c:1646  */
    { (yyval.exprvec) = new april::ExpressionList(); }
#line 1746 "parser.cpp" /* yacc.c:1646  */
    break;

  case 61:
#line 186 "src/parser.y" /* yacc.c:1646  */
    { (yyval.exprvec) = new april::ExpressionList(); (yyval.exprvec)->push_back((yyvsp[0].expr)); }
#line 1752 "parser.cpp" /* yacc.c:1646  */
    break;

  case 62:
#line 187 "src/parser.y" /* yacc.c:1646  */
    { (yyval.exprvec)->push_back((yyvsp[0].expr)); }
#line 1758 "parser.cpp" /* yacc.c:1646  */
    break;

  case 63:
#line 190 "src/parser.y" /* yacc.c:1646  */
    { (yyval.expr) = new april::BinaryOperator(*(yyvsp[-2].expr), (yyvsp[-1].token), *(yyvsp[0].expr)); }
#line 1764 "parser.cpp" /* yacc.c:1646  */
    break;

  case 64:
#line 191 "src/parser.y" /* yacc.c:1646  */
    { (yyval.expr) = new april::BinaryOperator(*(yyvsp[-2].expr), (yyvsp[-1].token), *(yyvsp[0].expr)); }
#line 1770 "parser.cpp" /* yacc.c:1646  */
    break;

  case 65:
#line 192 "src/parser.y" /* yacc.c:1646  */
    { (yyval.expr) = new april::BinaryOperator(*(yyvsp[-2].expr), (yyvsp[-1].token), *(yyvsp[0].expr)); }
#line 1776 "parser.cpp" /* yacc.c:1646  */
    break;

  case 66:
#line 193 "src/parser.y" /* yacc.c:1646  */
    { (yyval.expr) = new april::BinaryOperator(*(yyvsp[-2].expr), (yyvsp[-1].token), *(yyvsp[0].expr)); }
#line 1782 "parser.cpp" /* yacc.c:1646  */
    break;

  case 67:
#line 194 "src/parser.y" /* yacc.c:1646  */
    { (yyval.expr) = new april::BinaryOperator(*(yyvsp[-2].expr), (yyvsp[-1].token), *(yyvsp[0].expr)); }
#line 1788 "parser.cpp" /* yacc.c:1646  */
    break;

  case 68:
#line 195 "src/parser.y" /* yacc.c:1646  */
    { (yyval.expr) = new april::BinaryOperator(*(yyvsp[-2].expr), (yyvsp[-1].token), *(yyvsp[0].expr)); }
#line 1794 "parser.cpp" /* yacc.c:1646  */
    break;

  case 69:
#line 196 "src/parser.y" /* yacc.c:1646  */
    { (yyval.expr) = (yyvsp[-1].expr); }
#line 1800 "parser.cpp" /* yacc.c:1646  */
    break;

  case 70:
#line 199 "src/parser.y" /* yacc.c:1646  */
    { (yyval.expr) = new april::ComparasionOpe(*(yyvsp[-2].expr), (yyvsp[-1].token), *(yyvsp[0].expr));}
#line 1806 "parser.cpp" /* yacc.c:1646  */
    break;

  case 77:
#line 205 "src/parser.y" /* yacc.c:1646  */
    { (yyval.expr) = new april::Integer(std::atol((yyvsp[0].string)->c_str())); delete (yyvsp[0].string); }
#line 1812 "parser.cpp" /* yacc.c:1646  */
    break;

  case 78:
#line 206 "src/parser.y" /* yacc.c:1646  */
    { 
												char* value = new char(std::strlen((yyvsp[0].string)->c_str())+2);
                                                std::strcpy(value, "-");
                                                std::strcat(value, (yyvsp[0].string)->c_str());
                                                (yyval.expr) = new april::Integer(std::atol(value)); 
												//delete $2; 
                                                //delete value;
											}
#line 1825 "parser.cpp" /* yacc.c:1646  */
    break;

  case 79:
#line 214 "src/parser.y" /* yacc.c:1646  */
    { (yyval.expr) = new april::Double(std::atof((yyvsp[0].string)->c_str())); delete (yyvsp[0].string); }
#line 1831 "parser.cpp" /* yacc.c:1646  */
    break;

  case 80:
#line 215 "src/parser.y" /* yacc.c:1646  */
    { 
                                                char* value = new char(std::strlen((yyvsp[0].string)->c_str())+2);
                                                std::strcpy(value, "-");
                                                std::strcat(value, (yyvsp[0].string)->c_str());
                                                (yyval.expr) = new april::Double(std::atof(value)); 
                                                delete (yyvsp[0].string); 
                                                delete value; 
                                            }
#line 1844 "parser.cpp" /* yacc.c:1646  */
    break;

  case 81:
#line 223 "src/parser.y" /* yacc.c:1646  */
    { (yyval.expr) = new april::String(yytext); }
#line 1850 "parser.cpp" /* yacc.c:1646  */
    break;

  case 82:
#line 224 "src/parser.y" /* yacc.c:1646  */
    { (yyval.expr) = new april::Boolean(*(yyvsp[0].string)); delete (yyvsp[0].string); }
#line 1856 "parser.cpp" /* yacc.c:1646  */
    break;

  case 83:
#line 227 "src/parser.y" /* yacc.c:1646  */
    { (yyval.ident) = new april::Identifier(*(yyvsp[0].string)); delete (yyvsp[0].string); }
#line 1862 "parser.cpp" /* yacc.c:1646  */
    break;


#line 1866 "parser.cpp" /* yacc.c:1646  */
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
#line 228 "src/parser.y" /* yacc.c:1906  */

