/* A Bison parser, made by GNU Bison 2.5.  */

/* Bison implementation for Yacc-like parsers in C
   
      Copyright (C) 1984, 1989-1990, 2000-2011 Free Software Foundation, Inc.
   
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
#define YYBISON_VERSION "2.5"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 1

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Copy the first part of user declarations.  */

/* Line 268 of yacc.c  */
#line 37 "/home/yanxin/git/jrate/gcc/gcc/java/parse-scan.y"

#define JC1_LITE

#include "config.h"
#include "system.h"

#include "obstack.h"
#include "toplev.h"

#define obstack_chunk_alloc xmalloc
#define obstack_chunk_free free

extern char *input_filename;
extern FILE *finput, *out;

/* Obstack for the lexer.  */
struct obstack temporary_obstack;

/* The current parser context.  */
static struct parser_ctxt *ctxp;

/* Error and warning counts, current line number, because they're used
   elsewhere  */
int java_error_count;
int java_warning_count;
int lineno;

/* Tweak default rules when necessary.  */
static int absorber;
#define USE_ABSORBER absorber = 0

/* Keep track of the current package name.  */
static const char *package_name;

/* Keep track of whether things have be listed before.  */
static int previous_output;

/* Record modifier uses  */
static int modifier_value;

/* Record (almost) cyclomatic complexity.  */
static int complexity; 

/* Keeps track of number of bracket pairs after a variable declarator
   id.  */
static int bracket_count; 

/* Numbers anonymous classes */
static int anonymous_count;

/* This is used to record the current class context.  */
struct class_context
{
  char *name;
  struct class_context *next;
};

/* The global class context.  */
static struct class_context *current_class_context;

/* A special constant used to represent an anonymous context.  */
static const char *anonymous_context = "ANONYMOUS";

/* Count of method depth.  */
static int method_depth; 

/* Record a method declaration  */
struct method_declarator {
  const char *method_name;
  const char *args;
};
#define NEW_METHOD_DECLARATOR(D,N,A)					     \
{									     \
  (D) = 								     \
    (struct method_declarator *)xmalloc (sizeof (struct method_declarator)); \
  (D)->method_name = (N);						     \
  (D)->args = (A);							     \
}

/* Two actions for this grammar */
static int make_class_name_recursive PARAMS ((struct obstack *stack,
					      struct class_context *ctx));
static char *get_class_name PARAMS ((void));
static void report_class_declaration PARAMS ((const char *));
static void report_main_declaration PARAMS ((struct method_declarator *));
static void push_class_context PARAMS ((const char *));
static void pop_class_context PARAMS ((void));

void report PARAMS ((void)); 

#include "lex.h"
#include "parse.h"


/* Line 268 of yacc.c  */
#line 166 "ps17937.c"

/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
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
     PLUS_TK = 258,
     MINUS_TK = 259,
     MULT_TK = 260,
     DIV_TK = 261,
     REM_TK = 262,
     LS_TK = 263,
     SRS_TK = 264,
     ZRS_TK = 265,
     AND_TK = 266,
     XOR_TK = 267,
     OR_TK = 268,
     BOOL_AND_TK = 269,
     BOOL_OR_TK = 270,
     EQ_TK = 271,
     NEQ_TK = 272,
     GT_TK = 273,
     GTE_TK = 274,
     LT_TK = 275,
     LTE_TK = 276,
     PLUS_ASSIGN_TK = 277,
     MINUS_ASSIGN_TK = 278,
     MULT_ASSIGN_TK = 279,
     DIV_ASSIGN_TK = 280,
     REM_ASSIGN_TK = 281,
     LS_ASSIGN_TK = 282,
     SRS_ASSIGN_TK = 283,
     ZRS_ASSIGN_TK = 284,
     AND_ASSIGN_TK = 285,
     XOR_ASSIGN_TK = 286,
     OR_ASSIGN_TK = 287,
     PUBLIC_TK = 288,
     PRIVATE_TK = 289,
     PROTECTED_TK = 290,
     STATIC_TK = 291,
     FINAL_TK = 292,
     SYNCHRONIZED_TK = 293,
     VOLATILE_TK = 294,
     TRANSIENT_TK = 295,
     NATIVE_TK = 296,
     PAD_TK = 297,
     ABSTRACT_TK = 298,
     STRICT_TK = 299,
     PHANTOM_TK = 300,
     MODIFIER_TK = 301,
     DECR_TK = 302,
     INCR_TK = 303,
     DEFAULT_TK = 304,
     IF_TK = 305,
     THROW_TK = 306,
     BOOLEAN_TK = 307,
     DO_TK = 308,
     IMPLEMENTS_TK = 309,
     THROWS_TK = 310,
     BREAK_TK = 311,
     IMPORT_TK = 312,
     ELSE_TK = 313,
     INSTANCEOF_TK = 314,
     RETURN_TK = 315,
     VOID_TK = 316,
     CATCH_TK = 317,
     INTERFACE_TK = 318,
     CASE_TK = 319,
     EXTENDS_TK = 320,
     FINALLY_TK = 321,
     SUPER_TK = 322,
     WHILE_TK = 323,
     CLASS_TK = 324,
     SWITCH_TK = 325,
     CONST_TK = 326,
     TRY_TK = 327,
     FOR_TK = 328,
     NEW_TK = 329,
     CONTINUE_TK = 330,
     GOTO_TK = 331,
     PACKAGE_TK = 332,
     THIS_TK = 333,
     ASSERT_TK = 334,
     BYTE_TK = 335,
     SHORT_TK = 336,
     INT_TK = 337,
     LONG_TK = 338,
     CHAR_TK = 339,
     INTEGRAL_TK = 340,
     FLOAT_TK = 341,
     DOUBLE_TK = 342,
     FP_TK = 343,
     ID_TK = 344,
     REL_QM_TK = 345,
     REL_CL_TK = 346,
     NOT_TK = 347,
     NEG_TK = 348,
     ASSIGN_ANY_TK = 349,
     ASSIGN_TK = 350,
     OP_TK = 351,
     CP_TK = 352,
     OCB_TK = 353,
     CCB_TK = 354,
     OSB_TK = 355,
     CSB_TK = 356,
     SC_TK = 357,
     C_TK = 358,
     DOT_TK = 359,
     STRING_LIT_TK = 360,
     CHAR_LIT_TK = 361,
     INT_LIT_TK = 362,
     FP_LIT_TK = 363,
     TRUE_TK = 364,
     FALSE_TK = 365,
     BOOL_LIT_TK = 366,
     NULL_TK = 367
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 293 of yacc.c  */
#line 131 "/home/yanxin/git/jrate/gcc/gcc/java/parse-scan.y"

  char *node;
  struct method_declarator *declarator;
  int value;			/* For modifiers */



/* Line 293 of yacc.c  */
#line 322 "ps17937.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */

/* Line 343 of yacc.c  */
#line 137 "/home/yanxin/git/jrate/gcc/gcc/java/parse-scan.y"

extern int flag_assert;

#include "lex.c"


/* Line 343 of yacc.c  */
#line 341 "ps17937.c"

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
# if defined YYENABLE_NLS && YYENABLE_NLS
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
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
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
#   if ! defined malloc && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
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

# define YYCOPY_NEEDED 1

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

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
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
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  28
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   3286

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  113
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  154
/* YYNRULES -- Number of rules.  */
#define YYNRULES  357
/* YYNRULES -- Number of states.  */
#define YYNSTATES  616

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   367

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
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
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,     7,     9,    11,    13,    15,    17,
      19,    21,    23,    25,    27,    29,    31,    33,    35,    37,
      40,    43,    45,    47,    49,    53,    55,    56,    58,    60,
      62,    65,    68,    71,    75,    77,    80,    82,    85,    89,
      91,    93,    97,   103,   105,   107,   109,   111,   114,   115,
     123,   124,   131,   132,   135,   136,   139,   141,   145,   148,
     152,   154,   157,   159,   161,   163,   165,   167,   169,   171,
     173,   175,   179,   184,   186,   190,   192,   196,   198,   202,
     204,   206,   207,   211,   215,   219,   224,   229,   233,   238,
     242,   244,   248,   251,   255,   256,   259,   261,   265,   267,
     269,   272,   274,   278,   283,   288,   294,   298,   303,   306,
     310,   314,   319,   324,   330,   338,   345,   347,   349,   350,
     355,   356,   362,   363,   369,   370,   377,   380,   384,   387,
     391,   393,   396,   398,   400,   402,   404,   406,   409,   412,
     416,   420,   425,   427,   431,   434,   438,   440,   443,   445,
     447,   449,   452,   455,   459,   461,   463,   465,   467,   469,
     471,   473,   475,   477,   479,   481,   483,   485,   487,   489,
     491,   493,   495,   497,   499,   501,   503,   505,   507,   510,
     513,   516,   519,   521,   523,   525,   527,   529,   531,   533,
     539,   547,   555,   561,   564,   568,   572,   577,   579,   582,
     585,   587,   590,   594,   597,   602,   605,   608,   610,   618,
     626,   633,   641,   648,   651,   654,   655,   657,   659,   660,
     662,   664,   668,   671,   675,   678,   682,   685,   689,   693,
     699,   703,   706,   710,   716,   722,   724,   728,   732,   737,
     739,   742,   748,   751,   753,   755,   757,   759,   763,   765,
     767,   769,   771,   773,   777,   781,   785,   789,   793,   799,
     804,   806,   811,   817,   823,   830,   831,   838,   839,   847,
     851,   855,   857,   861,   865,   869,   873,   878,   883,   888,
     893,   895,   898,   902,   905,   909,   913,   917,   921,   926,
     932,   939,   945,   952,   957,   962,   964,   966,   968,   970,
     973,   976,   978,   980,   983,   986,   988,   991,   994,   996,
     999,  1002,  1004,  1010,  1015,  1020,  1026,  1028,  1032,  1036,
    1040,  1042,  1046,  1050,  1052,  1056,  1060,  1064,  1066,  1070,
    1074,  1078,  1082,  1086,  1088,  1092,  1096,  1098,  1102,  1104,
    1108,  1110,  1114,  1116,  1120,  1122,  1126,  1128,  1134,  1136,
    1138,  1142,  1144,  1146,  1148,  1150,  1152,  1154
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     114,     0,    -1,   127,    -1,   107,    -1,   108,    -1,   111,
      -1,   106,    -1,   105,    -1,   112,    -1,   117,    -1,   118,
      -1,    85,    -1,    88,    -1,    52,    -1,   119,    -1,   122,
      -1,   123,    -1,   119,    -1,   119,    -1,   117,   238,    -1,
     123,   238,    -1,   124,    -1,   125,    -1,   126,    -1,   123,
     104,   126,    -1,    89,    -1,    -1,   130,    -1,   128,    -1,
     129,    -1,   130,   128,    -1,   130,   129,    -1,   128,   129,
      -1,   130,   128,   129,    -1,   131,    -1,   128,   131,    -1,
     134,    -1,   129,   134,    -1,    77,   123,   102,    -1,   132,
      -1,   133,    -1,    57,   123,   102,    -1,    57,   123,   104,
       5,   102,    -1,   136,    -1,   167,    -1,   188,    -1,    46,
      -1,   135,    46,    -1,    -1,   135,    69,   126,   139,   140,
     137,   142,    -1,    -1,    69,   126,   139,   140,   138,   142,
      -1,    -1,    65,   120,    -1,    -1,    54,   141,    -1,   121,
      -1,   141,   103,   121,    -1,    98,    99,    -1,    98,   143,
      99,    -1,   144,    -1,   143,   144,    -1,   145,    -1,   160,
      -1,   162,    -1,   180,    -1,   146,    -1,   151,    -1,   136,
      -1,   167,    -1,   188,    -1,   116,   147,   102,    -1,   135,
     116,   147,   102,    -1,   148,    -1,   147,   103,   148,    -1,
     149,    -1,   149,    95,   150,    -1,   126,    -1,   149,   100,
     101,    -1,   265,    -1,   178,    -1,    -1,   153,   152,   159,
      -1,   116,   154,   157,    -1,    61,   154,   157,    -1,   135,
     116,   154,   157,    -1,   135,    61,   154,   157,    -1,   126,
      96,    97,    -1,   126,    96,   155,    97,    -1,   154,   100,
     101,    -1,   156,    -1,   155,   103,   156,    -1,   116,   149,
      -1,   135,   116,   149,    -1,    -1,    55,   158,    -1,   120,
      -1,   158,   103,   120,    -1,   180,    -1,   102,    -1,   161,
     180,    -1,    46,    -1,   163,   157,   164,    -1,   135,   163,
     157,   164,    -1,   163,   157,   164,   102,    -1,   135,   163,
     157,   164,   102,    -1,   124,    96,    97,    -1,   124,    96,
     155,    97,    -1,    98,    99,    -1,    98,   165,    99,    -1,
      98,   181,    99,    -1,    98,   165,   181,    99,    -1,   166,
      96,    97,   102,    -1,   166,    96,   234,    97,   102,    -1,
     123,   104,    67,    96,   234,    97,   102,    -1,   123,   104,
      67,    96,    97,   102,    -1,    78,    -1,    67,    -1,    -1,
      63,   126,   168,   173,    -1,    -1,   135,    63,   126,   169,
     173,    -1,    -1,    63,   126,   172,   170,   173,    -1,    -1,
     135,    63,   126,   172,   171,   173,    -1,    65,   121,    -1,
     172,   103,   121,    -1,    98,    99,    -1,    98,   174,    99,
      -1,   175,    -1,   174,   175,    -1,   176,    -1,   177,    -1,
     136,    -1,   167,    -1,   146,    -1,   153,   102,    -1,    98,
      99,    -1,    98,   179,    99,    -1,    98,   103,    99,    -1,
      98,   179,   103,    99,    -1,   150,    -1,   179,   103,   150,
      -1,    98,    99,    -1,    98,   181,    99,    -1,   182,    -1,
     181,   182,    -1,   183,    -1,   185,    -1,   136,    -1,   184,
     102,    -1,   116,   147,    -1,   135,   116,   147,    -1,   187,
      -1,   190,    -1,   194,    -1,   195,    -1,   204,    -1,   208,
      -1,   187,    -1,   191,    -1,   196,    -1,   205,    -1,   209,
      -1,   180,    -1,   188,    -1,   192,    -1,   197,    -1,   207,
      -1,   215,    -1,   216,    -1,   217,    -1,   220,    -1,   218,
      -1,   222,    -1,   219,    -1,   102,    -1,   126,    91,    -1,
     189,   185,    -1,   189,   186,    -1,   193,   102,    -1,   262,
      -1,   246,    -1,   247,    -1,   243,    -1,   244,    -1,   240,
      -1,   229,    -1,    50,    96,   265,    97,   185,    -1,    50,
      96,   265,    97,   186,    58,   185,    -1,    50,    96,   265,
      97,   186,    58,   186,    -1,    70,    96,   265,    97,   198,
      -1,    98,    99,    -1,    98,   201,    99,    -1,    98,   199,
      99,    -1,    98,   199,   201,    99,    -1,   200,    -1,   199,
     200,    -1,   201,   181,    -1,   202,    -1,   201,   202,    -1,
      64,   266,    91,    -1,    49,    91,    -1,    68,    96,   265,
      97,    -1,   203,   185,    -1,   203,   186,    -1,    53,    -1,
     206,   185,    68,    96,   265,    97,   102,    -1,   211,   102,
     265,   102,   213,    97,   185,    -1,   211,   102,   102,   213,
      97,   185,    -1,   211,   102,   265,   102,   213,    97,   186,
      -1,   211,   102,   102,   213,    97,   186,    -1,    73,    96,
      -1,   210,   212,    -1,    -1,   214,    -1,   184,    -1,    -1,
     214,    -1,   193,    -1,   214,   103,   193,    -1,    56,   102,
      -1,    56,   126,   102,    -1,    75,   102,    -1,    75,   126,
     102,    -1,    60,   102,    -1,    60,   265,   102,    -1,    51,
     265,   102,    -1,    79,   265,    91,   265,   102,    -1,    79,
     265,   102,    -1,    79,     1,    -1,    79,   265,     1,    -1,
     221,    96,   265,    97,   180,    -1,   221,    96,   265,    97,
       1,    -1,    46,    -1,    72,   180,   223,    -1,    72,   180,
     225,    -1,    72,   180,   223,   225,    -1,   224,    -1,   223,
     224,    -1,    62,    96,   156,    97,   180,    -1,    66,   180,
      -1,   227,    -1,   235,    -1,   115,    -1,    78,    -1,    96,
     265,    97,    -1,   229,    -1,   239,    -1,   240,    -1,   241,
      -1,   228,    -1,   123,   104,    78,    -1,   123,   104,    69,
      -1,   122,   104,    69,    -1,   117,   104,    69,    -1,    61,
     104,    69,    -1,    74,   120,    96,   234,    97,    -1,    74,
     120,    96,    97,    -1,   230,    -1,   233,   126,    96,    97,
      -1,   233,   126,    96,    97,   142,    -1,   233,   126,    96,
     234,    97,    -1,   233,   126,    96,   234,    97,   142,    -1,
      -1,    74,   120,    96,    97,   231,   142,    -1,    -1,    74,
     120,    96,   234,    97,   232,   142,    -1,   123,   104,    74,
      -1,   226,   104,    74,    -1,   265,    -1,   234,   103,   265,
      -1,   234,   103,     1,    -1,    74,   117,   236,    -1,    74,
     119,   236,    -1,    74,   117,   236,   238,    -1,    74,   119,
     236,   238,    -1,    74,   119,   238,   178,    -1,    74,   117,
     238,   178,    -1,   237,    -1,   236,   237,    -1,   100,   265,
     101,    -1,   100,   101,    -1,   238,   100,   101,    -1,   226,
     104,   126,    -1,    67,   104,   126,    -1,   123,    96,    97,
      -1,   123,    96,   234,    97,    -1,   226,   104,   126,    96,
      97,    -1,   226,   104,   126,    96,   234,    97,    -1,    67,
     104,   126,    96,    97,    -1,    67,   104,   126,    96,   234,
      97,    -1,   123,   100,   265,   101,    -1,   227,   100,   265,
     101,    -1,   226,    -1,   123,    -1,   243,    -1,   244,    -1,
     242,    48,    -1,   242,    47,    -1,   246,    -1,   247,    -1,
       3,   245,    -1,     4,   245,    -1,   248,    -1,    48,   245,
      -1,    47,   245,    -1,   242,    -1,    92,   245,    -1,    93,
     245,    -1,   249,    -1,    96,   117,   238,    97,   245,    -1,
      96,   117,    97,   245,    -1,    96,   265,    97,   248,    -1,
      96,   123,   238,    97,   248,    -1,   245,    -1,   250,     5,
     245,    -1,   250,     6,   245,    -1,   250,     7,   245,    -1,
     250,    -1,   251,     3,   250,    -1,   251,     4,   250,    -1,
     251,    -1,   252,     8,   251,    -1,   252,     9,   251,    -1,
     252,    10,   251,    -1,   252,    -1,   253,    20,   252,    -1,
     253,    18,   252,    -1,   253,    21,   252,    -1,   253,    19,
     252,    -1,   253,    59,   118,    -1,   253,    -1,   254,    16,
     253,    -1,   254,    17,   253,    -1,   254,    -1,   255,    11,
     254,    -1,   255,    -1,   256,    12,   255,    -1,   256,    -1,
     257,    13,   256,    -1,   257,    -1,   258,    14,   257,    -1,
     258,    -1,   259,    15,   258,    -1,   259,    -1,   259,    90,
     265,    91,   260,    -1,   260,    -1,   262,    -1,   263,   264,
     261,    -1,   123,    -1,   239,    -1,   241,    -1,    94,    -1,
      95,    -1,   261,    -1,   265,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   211,   211,   216,   217,   218,   219,   220,   221,   226,
     227,   231,   236,   241,   249,   250,   254,   258,   262,   266,
     271,   280,   281,   285,   289,   296,   300,   301,   302,   303,
     304,   305,   306,   307,   311,   312,   316,   317,   321,   326,
     327,   331,   335,   339,   340,   341,   348,   356,   369,   368,
     375,   374,   379,   380,   383,   384,   388,   390,   395,   397,
     402,   403,   407,   408,   409,   410,   414,   415,   416,   417,
     418,   423,   425,   431,   432,   436,   437,   441,   443,   448,
     449,   455,   454,   461,   463,   464,   466,   474,   480,   486,
     490,   491,   498,   513,   529,   530,   534,   536,   541,   542,
     547,   551,   561,   562,   565,   567,   574,   576,   581,   582,
     583,   584,   589,   590,   593,   595,   600,   601,   608,   607,
     611,   610,   614,   613,   617,   616,   622,   623,   627,   629,
     634,   635,   639,   640,   641,   642,   646,   650,   655,   656,
     657,   658,   662,   663,   668,   669,   673,   674,   678,   679,
     680,   684,   688,   690,   695,   696,   697,   698,   699,   700,
     704,   705,   706,   707,   708,   712,   713,   714,   715,   716,
     717,   718,   719,   720,   721,   722,   723,   727,   731,   736,
     740,   746,   750,   751,   752,   753,   754,   755,   756,   760,
     764,   769,   774,   778,   779,   780,   781,   785,   786,   790,
     795,   796,   800,   801,   805,   809,   813,   817,   821,   826,
     827,   831,   832,   836,   840,   842,   843,   844,   847,   848,
     852,   853,   857,   858,   864,   865,   869,   870,   874,   878,
     879,   880,   882,   886,   887,   891,   896,   897,   898,   902,
     903,   907,   911,   916,   917,   921,   922,   923,   924,   925,
     926,   927,   928,   932,   937,   939,   941,   943,   948,   949,
     950,   951,   952,   953,   954,   959,   958,   962,   961,   967,
     969,   973,   974,   975,   979,   980,   981,   982,   985,   986,
     990,   991,   995,   999,  1001,  1006,  1007,  1014,  1016,  1018,
    1019,  1020,  1021,  1025,  1027,  1031,  1032,  1034,  1035,  1039,
    1043,  1047,  1048,  1049,  1050,  1051,  1055,  1059,  1063,  1064,
    1065,  1066,  1070,  1071,  1072,  1073,  1077,  1078,  1079,  1080,
    1084,  1085,  1086,  1090,  1091,  1092,  1093,  1097,  1098,  1099,
    1100,  1101,  1102,  1106,  1107,  1108,  1112,  1113,  1117,  1118,
    1122,  1123,  1127,  1128,  1133,  1134,  1139,  1140,  1145,  1146,
    1150,  1154,  1156,  1157,  1161,  1162,  1166,  1170
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "PLUS_TK", "MINUS_TK", "MULT_TK",
  "DIV_TK", "REM_TK", "LS_TK", "SRS_TK", "ZRS_TK", "AND_TK", "XOR_TK",
  "OR_TK", "BOOL_AND_TK", "BOOL_OR_TK", "EQ_TK", "NEQ_TK", "GT_TK",
  "GTE_TK", "LT_TK", "LTE_TK", "PLUS_ASSIGN_TK", "MINUS_ASSIGN_TK",
  "MULT_ASSIGN_TK", "DIV_ASSIGN_TK", "REM_ASSIGN_TK", "LS_ASSIGN_TK",
  "SRS_ASSIGN_TK", "ZRS_ASSIGN_TK", "AND_ASSIGN_TK", "XOR_ASSIGN_TK",
  "OR_ASSIGN_TK", "PUBLIC_TK", "PRIVATE_TK", "PROTECTED_TK", "STATIC_TK",
  "FINAL_TK", "SYNCHRONIZED_TK", "VOLATILE_TK", "TRANSIENT_TK",
  "NATIVE_TK", "PAD_TK", "ABSTRACT_TK", "STRICT_TK", "PHANTOM_TK",
  "MODIFIER_TK", "DECR_TK", "INCR_TK", "DEFAULT_TK", "IF_TK", "THROW_TK",
  "BOOLEAN_TK", "DO_TK", "IMPLEMENTS_TK", "THROWS_TK", "BREAK_TK",
  "IMPORT_TK", "ELSE_TK", "INSTANCEOF_TK", "RETURN_TK", "VOID_TK",
  "CATCH_TK", "INTERFACE_TK", "CASE_TK", "EXTENDS_TK", "FINALLY_TK",
  "SUPER_TK", "WHILE_TK", "CLASS_TK", "SWITCH_TK", "CONST_TK", "TRY_TK",
  "FOR_TK", "NEW_TK", "CONTINUE_TK", "GOTO_TK", "PACKAGE_TK", "THIS_TK",
  "ASSERT_TK", "BYTE_TK", "SHORT_TK", "INT_TK", "LONG_TK", "CHAR_TK",
  "INTEGRAL_TK", "FLOAT_TK", "DOUBLE_TK", "FP_TK", "ID_TK", "REL_QM_TK",
  "REL_CL_TK", "NOT_TK", "NEG_TK", "ASSIGN_ANY_TK", "ASSIGN_TK", "OP_TK",
  "CP_TK", "OCB_TK", "CCB_TK", "OSB_TK", "CSB_TK", "SC_TK", "C_TK",
  "DOT_TK", "STRING_LIT_TK", "CHAR_LIT_TK", "INT_LIT_TK", "FP_LIT_TK",
  "TRUE_TK", "FALSE_TK", "BOOL_LIT_TK", "NULL_TK", "$accept", "goal",
  "literal", "type", "primitive_type", "reference_type",
  "class_or_interface_type", "class_type", "interface_type", "array_type",
  "name", "simple_name", "qualified_name", "identifier",
  "compilation_unit", "import_declarations", "type_declarations",
  "package_declaration", "import_declaration",
  "single_type_import_declaration", "type_import_on_demand_declaration",
  "type_declaration", "modifiers", "class_declaration", "$@1", "$@2",
  "super", "interfaces", "interface_type_list", "class_body",
  "class_body_declarations", "class_body_declaration",
  "class_member_declaration", "field_declaration", "variable_declarators",
  "variable_declarator", "variable_declarator_id", "variable_initializer",
  "method_declaration", "$@3", "method_header", "method_declarator",
  "formal_parameter_list", "formal_parameter", "throws", "class_type_list",
  "method_body", "static_initializer", "static", "constructor_declaration",
  "constructor_declarator", "constructor_body",
  "explicit_constructor_invocation", "this_or_super",
  "interface_declaration", "$@4", "$@5", "$@6", "$@7",
  "extends_interfaces", "interface_body", "interface_member_declarations",
  "interface_member_declaration", "constant_declaration",
  "abstract_method_declaration", "array_initializer",
  "variable_initializers", "block", "block_statements", "block_statement",
  "local_variable_declaration_statement", "local_variable_declaration",
  "statement", "statement_nsi", "statement_without_trailing_substatement",
  "empty_statement", "label_decl", "labeled_statement",
  "labeled_statement_nsi", "expression_statement", "statement_expression",
  "if_then_statement", "if_then_else_statement",
  "if_then_else_statement_nsi", "switch_statement", "switch_block",
  "switch_block_statement_groups", "switch_block_statement_group",
  "switch_labels", "switch_label", "while_expression", "while_statement",
  "while_statement_nsi", "do_statement_begin", "do_statement",
  "for_statement", "for_statement_nsi", "for_header", "for_begin",
  "for_init", "for_update", "statement_expression_list", "break_statement",
  "continue_statement", "return_statement", "throw_statement",
  "assert_statement", "synchronized_statement", "synchronized",
  "try_statement", "catches", "catch_clause", "finally", "primary",
  "primary_no_new_array", "type_literals",
  "class_instance_creation_expression", "anonymous_class_creation", "$@8",
  "$@9", "something_dot_new", "argument_list", "array_creation_expression",
  "dim_exprs", "dim_expr", "dims", "field_access", "method_invocation",
  "array_access", "postfix_expression", "post_increment_expression",
  "post_decrement_expression", "unary_expression",
  "pre_increment_expression", "pre_decrement_expression",
  "unary_expression_not_plus_minus", "cast_expression",
  "multiplicative_expression", "additive_expression", "shift_expression",
  "relational_expression", "equality_expression", "and_expression",
  "exclusive_or_expression", "inclusive_or_expression",
  "conditional_and_expression", "conditional_or_expression",
  "conditional_expression", "assignment_expression", "assignment",
  "left_hand_side", "assignment_operator", "expression",
  "constant_expression", 0
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
     345,   346,   347,   348,   349,   350,   351,   352,   353,   354,
     355,   356,   357,   358,   359,   360,   361,   362,   363,   364,
     365,   366,   367
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   113,   114,   115,   115,   115,   115,   115,   115,   116,
     116,   117,   117,   117,   118,   118,   119,   120,   121,   122,
     122,   123,   123,   124,   125,   126,   127,   127,   127,   127,
     127,   127,   127,   127,   128,   128,   129,   129,   130,   131,
     131,   132,   133,   134,   134,   134,   135,   135,   137,   136,
     138,   136,   139,   139,   140,   140,   141,   141,   142,   142,
     143,   143,   144,   144,   144,   144,   145,   145,   145,   145,
     145,   146,   146,   147,   147,   148,   148,   149,   149,   150,
     150,   152,   151,   153,   153,   153,   153,   154,   154,   154,
     155,   155,   156,   156,   157,   157,   158,   158,   159,   159,
     160,   161,   162,   162,   162,   162,   163,   163,   164,   164,
     164,   164,   165,   165,   165,   165,   166,   166,   168,   167,
     169,   167,   170,   167,   171,   167,   172,   172,   173,   173,
     174,   174,   175,   175,   175,   175,   176,   177,   178,   178,
     178,   178,   179,   179,   180,   180,   181,   181,   182,   182,
     182,   183,   184,   184,   185,   185,   185,   185,   185,   185,
     186,   186,   186,   186,   186,   187,   187,   187,   187,   187,
     187,   187,   187,   187,   187,   187,   187,   188,   189,   190,
     191,   192,   193,   193,   193,   193,   193,   193,   193,   194,
     195,   196,   197,   198,   198,   198,   198,   199,   199,   200,
     201,   201,   202,   202,   203,   204,   205,   206,   207,   208,
     208,   209,   209,   210,   211,   212,   212,   212,   213,   213,
     214,   214,   215,   215,   216,   216,   217,   217,   218,   219,
     219,   219,   219,   220,   220,   221,   222,   222,   222,   223,
     223,   224,   225,   226,   226,   227,   227,   227,   227,   227,
     227,   227,   227,   227,   228,   228,   228,   228,   229,   229,
     229,   229,   229,   229,   229,   231,   230,   232,   230,   233,
     233,   234,   234,   234,   235,   235,   235,   235,   235,   235,
     236,   236,   237,   238,   238,   239,   239,   240,   240,   240,
     240,   240,   240,   241,   241,   242,   242,   242,   242,   243,
     244,   245,   245,   245,   245,   245,   246,   247,   248,   248,
     248,   248,   249,   249,   249,   249,   250,   250,   250,   250,
     251,   251,   251,   252,   252,   252,   252,   253,   253,   253,
     253,   253,   253,   254,   254,   254,   255,   255,   256,   256,
     257,   257,   258,   258,   259,   259,   260,   260,   261,   261,
     262,   263,   263,   263,   264,   264,   265,   266
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     2,
       2,     1,     1,     1,     3,     1,     0,     1,     1,     1,
       2,     2,     2,     3,     1,     2,     1,     2,     3,     1,
       1,     3,     5,     1,     1,     1,     1,     2,     0,     7,
       0,     6,     0,     2,     0,     2,     1,     3,     2,     3,
       1,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     3,     4,     1,     3,     1,     3,     1,     3,     1,
       1,     0,     3,     3,     3,     4,     4,     3,     4,     3,
       1,     3,     2,     3,     0,     2,     1,     3,     1,     1,
       2,     1,     3,     4,     4,     5,     3,     4,     2,     3,
       3,     4,     4,     5,     7,     6,     1,     1,     0,     4,
       0,     5,     0,     5,     0,     6,     2,     3,     2,     3,
       1,     2,     1,     1,     1,     1,     1,     2,     2,     3,
       3,     4,     1,     3,     2,     3,     1,     2,     1,     1,
       1,     2,     2,     3,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     2,     2,
       2,     2,     1,     1,     1,     1,     1,     1,     1,     5,
       7,     7,     5,     2,     3,     3,     4,     1,     2,     2,
       1,     2,     3,     2,     4,     2,     2,     1,     7,     7,
       6,     7,     6,     2,     2,     0,     1,     1,     0,     1,
       1,     3,     2,     3,     2,     3,     2,     3,     3,     5,
       3,     2,     3,     5,     5,     1,     3,     3,     4,     1,
       2,     5,     2,     1,     1,     1,     1,     3,     1,     1,
       1,     1,     1,     3,     3,     3,     3,     3,     5,     4,
       1,     4,     5,     5,     6,     0,     6,     0,     7,     3,
       3,     1,     3,     3,     3,     3,     4,     4,     4,     4,
       1,     2,     3,     2,     3,     3,     3,     3,     4,     5,
       6,     5,     6,     4,     4,     1,     1,     1,     1,     2,
       2,     1,     1,     2,     2,     1,     2,     2,     1,     2,
       2,     1,     5,     4,     4,     5,     1,     3,     3,     3,
       1,     3,     3,     1,     3,     3,     3,     1,     3,     3,
       3,     3,     3,     1,     3,     3,     1,     3,     1,     3,
       1,     3,     1,     3,     1,     3,     1,     5,     1,     1,
       3,     1,     1,     1,     1,     1,     1,     1
};

/* YYDEFACT[STATE-NAME] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
      26,    46,     0,     0,     0,     0,   177,     0,     2,    28,
      29,    27,    34,    39,    40,    36,     0,    43,    44,    45,
      25,     0,    21,    22,    23,   118,    52,     0,     1,    32,
      35,    37,    30,    31,    47,     0,     0,    41,     0,     0,
       0,   122,     0,    54,    38,     0,    33,   120,    52,     0,
      24,    18,   126,    16,     0,   119,     0,     0,    17,    53,
       0,    50,     0,   124,    54,    42,    13,     0,    11,    12,
     128,     0,     9,    10,    14,    15,    16,     0,   134,   136,
       0,   135,     0,   130,   132,   133,   127,   123,    56,    55,
       0,   121,     0,    48,     0,    94,    77,     0,    73,    75,
      94,     0,    19,    20,     0,     0,   137,   129,   131,     0,
       0,    51,   125,     0,     0,     0,     0,    84,    71,     0,
       0,     0,    83,   283,     0,    94,     0,    94,    57,    46,
       0,    58,    21,     0,    68,     0,    60,    62,    66,    67,
      81,    63,     0,    64,    94,    69,    65,    70,    49,    87,
       0,     0,     0,    90,    96,    95,    89,    77,    74,     0,
       0,     0,     0,     0,     0,     0,   246,     0,     0,     0,
       0,     7,     6,     3,     4,     5,     8,   245,     0,     0,
     296,    76,    80,   295,   243,   252,   248,   260,     0,   244,
     249,   250,   251,   308,   297,   298,   316,   301,   302,   305,
     311,   320,   323,   327,   333,   336,   338,   340,   342,   344,
     346,   348,   356,   349,     0,    79,    78,   284,    86,    72,
      85,    46,     0,     0,   207,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   144,     0,     9,    15,   296,    23,
       0,   150,   165,     0,   146,   148,     0,   149,   154,   166,
       0,   155,   167,     0,   156,   157,   168,     0,   158,     0,
     169,   159,   215,     0,   170,   171,   172,   174,   176,   173,
       0,   175,   248,   250,     0,   185,   186,   183,   184,   182,
       0,    94,    59,    61,     0,   100,     0,    92,     0,    88,
       0,     0,   296,   249,   251,   303,   304,   307,   306,     0,
       0,     0,    17,     0,   309,   310,     0,   296,     0,   138,
       0,   142,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   300,   299,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   354,   355,     0,     0,     0,   222,
       0,   226,     0,     0,     0,     0,   213,   224,     0,   231,
       0,     0,   152,   178,     0,   145,   147,   151,   235,   179,
     181,   205,     0,     0,   217,   220,   214,   216,     0,     0,
     106,     0,     0,    99,    82,    98,     0,   102,    93,    91,
      97,   257,   286,     0,   274,   280,     0,   275,     0,     0,
       0,    19,    20,   247,   140,   139,     0,   256,   255,   287,
       0,   271,     0,   254,   269,   253,   270,   285,     0,     0,
     317,   318,   319,   321,   322,   324,   325,   326,   329,   331,
     328,   330,     0,   332,   334,   335,   337,   339,   341,   343,
     345,     0,   350,     0,   228,   223,   227,     0,     0,     0,
       0,   236,   239,   237,   225,   232,     0,   230,   247,   153,
       0,     0,   218,     0,     0,   107,   103,   117,   246,   108,
     296,     0,     0,     0,   104,     0,     0,   281,   276,   279,
     277,   278,   259,     0,   313,     0,     0,   314,   141,   143,
     288,     0,   293,     0,   294,   261,     0,     0,     0,   204,
       0,     0,   242,   240,   238,     0,     0,   221,     0,   219,
     218,     0,   105,     0,   109,     0,     0,   110,   291,     0,
     282,     0,   258,   312,   315,   273,   272,   289,     0,   262,
     263,   347,     0,   189,     0,   154,     0,   161,   162,     0,
     163,   164,     0,     0,   192,     0,   229,     0,     0,     0,
     234,   233,     0,   111,     0,     0,   292,   266,     0,   290,
     264,     0,     0,   180,   206,     0,     0,     0,   193,     0,
     197,     0,   200,     0,     0,   210,     0,     0,   112,     0,
     268,     0,   190,   218,     0,   203,   357,     0,   195,   198,
       0,   194,   199,   201,   241,   208,   209,     0,     0,   113,
       0,     0,   218,   202,   196,   115,     0,     0,     0,     0,
     114,     0,   212,     0,   191,   211
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     7,   177,   235,   178,    73,    74,    59,    52,   179,
     180,    22,    23,    24,     8,     9,    10,    11,    12,    13,
      14,    15,   240,   241,   113,    90,    43,    61,    89,   111,
     135,   136,   137,    79,    97,    98,    99,   181,   139,   284,
      80,    95,   152,   153,   117,   155,   384,   141,   142,   143,
     144,   387,   471,   472,    18,    40,    62,    57,    92,    41,
      55,    82,    83,    84,    85,   182,   312,   242,   592,   244,
     245,   246,   247,   534,   248,   249,   250,   251,   537,   252,
     253,   254,   255,   538,   256,   544,   569,   570,   571,   572,
     257,   258,   540,   259,   260,   261,   541,   262,   263,   376,
     508,   509,   264,   265,   266,   267,   268,   269,   270,   271,
     451,   452,   453,   183,   184,   185,   186,   187,   521,   558,
     188,   410,   189,   394,   395,   103,   190,   191,   192,   193,
     194,   195,   196,   197,   198,   199,   200,   201,   202,   203,
     204,   205,   206,   207,   208,   209,   210,   211,   212,   213,
     214,   346,   411,   587
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -499
static const yytype_int16 yypact[] =
{
     236,  -499,   -65,   -65,   -65,   -65,  -499,    36,  -499,   123,
      12,   123,  -499,  -499,  -499,  -499,   155,  -499,  -499,  -499,
    -499,   179,  -499,  -499,  -499,     0,    11,   298,  -499,    12,
    -499,  -499,   123,    12,  -499,   -65,   -65,  -499,    17,   -65,
      -4,   -16,   -65,    84,  -499,   -65,    12,     0,    11,    54,
    -499,  -499,  -499,    77,   548,  -499,   -65,    -4,  -499,  -499,
     -65,  -499,    -4,   -16,    84,  -499,  -499,   -65,  -499,  -499,
    -499,   -65,   105,  -499,  -499,  -499,    -7,   887,  -499,  -499,
     110,  -499,   777,  -499,  -499,  -499,  -499,  -499,  -499,   114,
     140,  -499,    -4,  -499,   223,   -17,   223,   205,  -499,   103,
     -17,   147,   160,   160,   -65,   -65,  -499,  -499,  -499,   -65,
     714,  -499,  -499,   140,   455,   -65,   202,  -499,  -499,   -65,
    1661,   243,  -499,  -499,   247,   -17,   291,   -17,  -499,   266,
    2546,  -499,   264,   887,  -499,  1074,  -499,  -499,  -499,  -499,
    -499,  -499,   271,  -499,   322,  -499,  -499,  -499,  -499,  -499,
     -65,   614,   148,  -499,  -499,   296,  -499,  -499,  -499,  2345,
    2345,  2345,  2345,   306,   349,    76,  -499,  2345,  2345,  2345,
    1537,  -499,  -499,  -499,  -499,  -499,  -499,  -499,    35,   356,
     285,  -499,  -499,   363,   369,  -499,  -499,  -499,   -65,  -499,
     370,  -499,   380,   434,  -499,  -499,  -499,  -499,  -499,  -499,
    -499,   421,   482,   448,    32,   497,   466,   476,   481,   489,
      19,  -499,  -499,  -499,   424,  -499,  -499,  -499,  -499,  -499,
    -499,   400,   419,  2345,  -499,    61,  1713,   427,   432,   271,
     441,    68,  1423,  2345,  -499,   -65,    35,   356,   404,   447,
     336,  -499,  -499,  2613,  -499,  -499,   437,  -499,  -499,  -499,
    3015,  -499,  -499,   444,  -499,  -499,  -499,  3015,  -499,  3015,
    -499,  -499,  3149,   446,  -499,  -499,  -499,  -499,  -499,  -499,
     454,  -499,   187,   230,   434,   474,   478,  -499,  -499,  -499,
     795,   322,  -499,  -499,    51,  -499,   459,   458,   -65,  -499,
     669,   -65,   131,  -499,  -499,  -499,  -499,  -499,  -499,   493,
     -65,   463,   463,   470,  -499,  -499,   149,   285,   472,  -499,
     471,  -499,    91,   496,   502,  1775,  1827,   267,    55,  2345,
     480,  -499,  -499,  2345,  2345,  2345,  2345,  2345,  2345,  2345,
    2345,  2345,  2345,  2345,  2345,    76,  2345,  2345,  2345,  2345,
    2345,  2345,  2345,  2345,  -499,  -499,  2345,  2345,   483,  -499,
     486,  -499,   491,  2345,  2345,   197,  -499,  -499,   494,  -499,
      30,   475,   495,  -499,   -65,  -499,  -499,  -499,  -499,  -499,
    -499,  -499,   516,   614,  -499,  -499,  -499,   498,  1889,  2345,
    -499,   189,   459,  -499,  -499,  -499,  2680,   500,   458,  -499,
    -499,  -499,   508,  1827,   463,  -499,   319,   463,   319,  1941,
    2345,   164,   224,  1219,  -499,  -499,  1599,  -499,  -499,  -499,
     207,  -499,   505,  -499,  -499,  -499,  -499,   518,   511,  2003,
    -499,  -499,  -499,   421,   421,   482,   482,   482,   448,   448,
     448,   448,   105,  -499,    32,    32,   497,   466,   476,   481,
     489,   524,  -499,   521,  -499,  -499,  -499,   523,   528,   531,
     271,   197,  -499,  -499,  -499,  -499,  2345,  -499,  -499,   495,
     533,  3174,  3174,   537,   544,  -499,   546,   349,   534,  -499,
     460,  2747,   553,  2814,  -499,  2055,   549,  -499,   160,  -499,
     160,  -499,   554,   215,  -499,  2345,  1219,  -499,  -499,  -499,
    -499,  1485,  -499,  2117,  -499,   140,   237,  2345,  3082,  -499,
     555,   669,  -499,  -499,  -499,   552,  2345,  -499,   558,   498,
    3174,    20,  -499,   242,  -499,  2881,  2169,  -499,  -499,   254,
    -499,   140,   559,  -499,  -499,  -499,  -499,  -499,   255,  -499,
     140,  -499,   562,  -499,   603,   604,  3082,  -499,  -499,  3082,
    -499,  -499,   563,    94,  -499,   576,  -499,   577,  3015,   578,
    -499,  -499,   582,  -499,   581,   262,  -499,  -499,   140,  -499,
    -499,  2345,  3015,  -499,  -499,  2231,   588,  2345,  -499,   138,
    -499,  2412,  -499,   271,   583,  -499,  3015,  2283,  -499,   584,
    -499,   587,  -499,  3174,   585,  -499,  -499,   599,  -499,  -499,
    2479,  -499,  2948,  -499,  -499,  -499,  -499,   590,   281,  -499,
    3082,   597,  3174,  -499,  -499,  -499,   593,   643,  3082,   607,
    -499,  3082,  -499,  3082,  -499,  -499
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -499,  -499,  -499,   -11,   -10,   371,   -19,   -87,    59,   240,
     106,   -51,  -499,    -3,  -499,   694,    45,  -499,   122,  -499,
    -499,   162,    16,   635,  -499,  -499,   659,   644,  -499,  -108,
    -499,   579,  -499,   -50,  -102,   601,  -136,  -164,  -499,  -499,
     -47,   -25,   436,  -282,   -70,  -499,  -499,  -499,  -499,  -499,
     589,   347,  -499,  -499,     7,  -499,  -499,  -499,  -499,   683,
     152,  -499,   651,  -499,  -499,    53,  -499,   -95,  -128,  -239,
    -499,   473,   468,  -313,  -429,   167,  -210,  -499,  -499,  -499,
    -255,  -499,  -499,  -499,  -499,  -499,  -499,   165,   169,  -498,
    -124,  -499,  -499,  -499,  -499,  -499,  -499,  -499,   -84,  -499,
    -497,   477,  -499,  -499,  -499,  -499,  -499,  -499,  -499,  -499,
    -499,   289,   292,  -499,  -499,  -499,    80,  -499,  -499,  -499,
    -499,  -380,  -499,   440,    -2,    65,  1069,   161,  1122,   324,
     381,   469,  -150,   539,   594,  -374,  -499,   208,   143,    75,
     195,   398,   407,   408,   406,   410,  -499,   252,   413,   752,
    -499,  -499,   873,  -499
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -354
static const yytype_int16 yytable[] =
{
      25,    26,   243,   126,   366,   148,   311,   375,   389,   295,
     296,   297,   298,   549,   287,   146,    16,   304,   305,   483,
      51,   550,    49,    58,    20,    16,    16,    16,   154,   487,
     122,   455,    47,    48,   342,    50,    28,    51,   115,   496,
     146,    51,    50,    71,    72,    16,   100,   285,    16,    16,
     331,   332,   333,   334,    29,   218,    33,   220,     1,   132,
     138,    81,    16,   140,    94,    39,   105,    72,    96,   535,
      77,    71,    72,   593,   286,     3,    42,    46,   303,   125,
     127,     4,   132,   116,   132,   138,   601,    56,   140,    81,
      51,   335,   593,   101,    54,   519,    58,    45,    77,    71,
      72,    94,    96,   150,    72,   609,    20,   535,    21,   343,
     535,    27,   524,   528,     6,    86,   157,   145,   130,    88,
     236,   456,   105,    72,    71,    72,   133,   239,    66,   416,
     151,    30,   457,   362,   355,   101,   555,   102,    60,   313,
     288,    72,   145,   566,    20,    53,   302,   157,    53,   130,
      20,   133,   388,   383,    30,   301,    65,    20,   567,   306,
      76,    68,    53,   349,    69,    20,    53,    19,   128,     1,
     357,   535,    31,   420,   421,   422,    19,    19,    19,   535,
       2,    45,   535,    76,   535,   320,     3,   566,    76,   385,
     405,    31,     4,   568,   406,    31,    19,   598,   120,    19,
      19,    34,   567,   121,   390,   101,   507,   375,    31,    87,
     272,   382,   106,    19,    91,    53,    76,   109,    35,   545,
      76,    53,   350,   563,    36,     6,   564,   315,   358,   364,
      72,   316,   157,   236,   366,   317,   238,   588,   110,    76,
     239,    76,   489,   102,   112,   289,   400,   239,   123,   101,
     484,   290,   236,   313,   239,   375,   239,    76,   473,   449,
     124,   485,   459,   450,   124,   292,   292,   292,   292,   150,
      72,    53,    58,   292,   292,   307,   366,   147,   373,   150,
      72,    37,     1,    38,  -188,   157,   465,   607,   536,  -188,
    -188,   273,   290,     2,    75,   612,   151,   392,   614,     3,
     615,   102,   147,   156,   490,     4,   151,   118,   119,   552,
     491,   413,   522,     5,    50,   417,   414,    75,   491,   114,
     415,   486,    75,   272,   124,   432,   536,  -187,   375,   536,
     272,    20,  -187,  -187,   530,   523,   413,   272,     6,   272,
     491,   414,   272,   515,   216,   415,    76,   375,   217,   238,
      75,   556,   559,   366,    75,   502,    20,   491,   491,   579,
     280,   157,   364,    72,  -101,   491,   396,   398,   238,   130,
     237,   401,   402,    75,   539,    75,   236,   115,   606,  -351,
    -351,   315,    34,   239,   491,   316,    76,   529,    66,   317,
     536,    75,   477,   219,   119,   477,    76,    53,   536,   291,
      44,   536,    45,   536,   273,    36,   428,   429,   430,   431,
     299,   273,   539,   557,   542,   539,   551,   170,   273,   124,
     273,    68,   560,   273,    69,    20,   323,   324,   325,   292,
     292,   292,   292,   292,   292,   292,   292,   292,   292,   292,
     292,    76,   292,   292,   292,   292,   292,   292,   292,   479,
     580,   481,   542,   300,   274,   542,   328,   329,   330,   478,
     314,   236,   480,   236,  -352,  -352,   272,   318,   239,   319,
     239,   425,   426,   427,  -353,  -353,   539,   338,   594,    76,
      75,   321,   322,   237,   539,   326,   327,   539,   339,   539,
     150,    72,   470,   -16,   340,   239,  -235,   102,  -351,  -351,
     315,     1,   237,   341,   316,   236,   292,    66,   317,   292,
      50,   275,   239,   336,   337,   347,   542,   151,   344,   345,
      75,  -297,  -297,   353,   542,  -298,  -298,   542,   354,   542,
      75,   434,   435,   239,   423,   424,   239,   356,   363,   367,
      68,   272,   272,    69,    20,   239,   370,   273,   378,   -16,
     379,   272,   149,   272,  -351,  -351,   315,   386,   121,   239,
     316,   236,   391,   393,   513,   407,   399,   274,   239,   403,
     404,   408,   458,   239,   274,    75,   419,   238,   272,   238,
     236,   274,   236,   274,   460,   444,   274,   239,   445,   239,
     272,   292,   292,   446,     1,   272,   454,   239,   119,   276,
      66,   461,   474,   292,   475,   239,   492,    76,   239,    67,
     239,     3,   494,    75,   493,   497,   272,     4,   498,   272,
     499,   238,   273,   273,   275,   500,   237,   501,   272,   506,
    -116,   275,   273,    68,   273,    17,    69,    20,   275,   510,
     275,   511,   272,   275,    17,    17,    17,    70,   512,   516,
     520,   272,  -265,   543,   546,   548,   272,  -267,   561,   273,
      34,   562,  -160,   272,    17,   565,    66,    17,    17,   277,
     272,   273,   272,   573,   574,   576,   273,   238,   577,   585,
     272,    17,   272,   578,   600,   595,   599,   602,   272,    78,
     603,   272,   605,   272,   608,   610,   238,   273,   238,    68,
     273,   611,    69,    20,   613,    32,   433,    64,    93,   273,
     274,   237,   276,   237,   283,     1,   381,    78,   369,   276,
     158,    66,   281,   273,   278,   371,   276,   372,   276,   466,
      63,   276,   273,   108,   589,   374,   436,   273,   590,   377,
     503,    75,   397,   504,   273,   134,   437,   439,   438,   531,
       0,   273,   440,   273,    68,   237,     0,    69,    20,   442,
     129,   273,     0,   273,     0,     0,    66,   275,     0,   273,
     134,     0,   273,     0,   273,    67,     0,     3,     0,     0,
       0,     0,   277,     4,     0,   274,   274,     0,     0,   277,
       0,     0,     0,     0,     0,   274,   277,   274,   277,    68,
       0,   277,    69,    20,     0,     0,     0,     0,     0,     0,
       0,   237,   130,   131,     0,     0,     6,     0,     0,     0,
       0,     0,   274,     1,     0,     0,     0,     0,     0,    66,
     237,     0,   237,     0,   274,     0,     0,   278,    67,   274,
       3,     1,   275,   275,   278,     0,     4,    66,     0,     0,
       0,   278,   275,   278,   275,   276,   278,     0,     0,     0,
     274,     0,    68,   274,     0,    69,    20,     0,     0,     0,
       0,     0,   274,     0,     0,     0,   107,     0,     0,   275,
      68,     0,   279,    69,    20,     0,   274,     0,     0,     0,
       0,   275,   380,     0,     0,   274,   275,     0,     0,     0,
     274,     0,     0,     0,     0,     0,     0,   274,     0,     0,
       0,     0,     0,     0,   274,     0,   274,   275,     0,     0,
     275,     0,     0,     0,   274,   277,   274,     0,     0,   275,
     276,   276,   274,    34,     0,   274,     0,   274,     0,    66,
     276,     0,   276,   275,     0,     0,     0,     0,   104,     0,
      35,     0,   275,     0,     0,     0,    36,   275,     0,     0,
       0,     0,     0,     0,   275,     0,   533,   276,     0,     0,
       0,   275,    68,   275,     0,    69,    20,     0,     0,   276,
     278,   275,     0,   275,   276,     0,     0,     0,     0,   275,
       0,     0,   275,   215,   275,   279,     0,     0,     0,     0,
     277,   277,   279,     0,   369,   276,     0,   371,   276,   279,
     277,   279,   277,     0,   279,     0,   575,   276,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     582,   276,     0,     0,     0,     0,     0,   277,     0,     0,
     276,     0,   308,   215,   596,   276,     0,     0,     0,   277,
       0,     0,   276,     0,   277,   278,   278,     0,     0,   276,
       0,   276,     0,     0,     0,   278,     0,   278,   533,   276,
       0,   276,     0,     0,     0,   277,   575,   276,   277,   582,
     276,   596,   276,     0,     0,     0,     0,   277,     0,     0,
       0,     0,   278,     0,     0,     0,   348,     0,     0,   352,
       0,   277,     0,     0,   278,   360,   361,     0,     0,   278,
     277,     0,     0,     0,     0,   277,     0,     0,     0,     0,
     129,     0,   277,     0,     0,     0,    66,     0,     0,   277,
     278,   277,     0,   278,     0,    67,     0,     3,   279,   277,
       0,   277,   278,     4,     0,     0,     0,   277,     0,     0,
     277,     0,   277,     0,     0,     0,   278,     0,     0,    68,
       0,     0,    69,    20,     0,   278,     0,     0,     0,     0,
     278,     0,   130,   282,     0,     0,     6,   278,     0,     0,
       0,     0,     0,     0,   278,     0,   278,     0,     0,   412,
       0,     0,   418,     0,   278,     0,   278,     0,     0,     0,
       0,     0,   278,     0,     0,   278,     0,   278,     0,     0,
       0,     0,     0,   279,   279,     0,   441,     0,     0,     0,
     443,     0,     0,   279,     0,   279,   447,   448,   293,   293,
     293,   293,     0,     0,     0,     0,   293,   293,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     279,   463,   464,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   279,     0,     0,     0,   476,   279,     0,     0,
       0,    66,     0,     0,     0,     0,     0,     0,     0,   215,
     163,   294,   294,   294,   294,     0,   164,     0,   279,   294,
     294,   279,     0,   165,     0,     0,     0,   166,     0,     0,
     279,     0,     0,     0,    68,     0,     0,    69,    20,     0,
       0,   167,   168,     0,   279,   169,     0,     0,     0,     0,
       0,     0,     0,   279,   171,   172,   173,   174,   279,   505,
     175,   176,     0,     0,     0,   279,     0,     0,     0,     0,
       0,     0,   279,     0,   279,     0,     0,     0,     0,     0,
       0,     0,   279,     0,   279,     0,     0,     0,     0,     0,
     279,     0,     0,   279,   526,   279,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   547,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   293,   293,   293,   293,   293,   293,   293,   293,
     293,   293,   293,   293,     0,   293,   293,   293,   293,   293,
     293,   293,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   359,     0,   159,   160,     0,     0,
       0,     0,     0,     0,   581,     0,     0,     0,   584,     0,
     586,     0,     0,     0,     0,   294,   294,   294,   294,   294,
     294,   294,   294,   294,   294,   294,   294,     0,   294,   294,
     294,   294,   294,   294,   294,     0,     0,     0,     0,   293,
     161,   162,   293,     0,     0,    66,     0,     0,     0,     0,
       0,     0,     0,     0,   163,     0,   525,     0,   159,   160,
     164,     0,     0,     0,     0,     0,     0,   165,     0,     0,
       0,   166,     0,     0,     0,     0,     0,     0,    68,     0,
       0,    69,    20,     0,     0,   167,   168,     0,     0,   169,
       0,     0,   294,     0,     0,   294,     0,     0,   171,   172,
     173,   174,   161,   162,   175,   176,     0,    66,     0,     0,
     159,   160,     0,     0,     0,     0,   163,     0,     0,     0,
       0,     0,   164,     0,   293,   293,     0,     0,     0,   165,
       0,     0,     0,   166,     0,     0,   293,     0,     0,     0,
      68,     0,     0,    69,    20,     0,     0,   167,   168,     0,
       0,   169,     0,     0,   161,   162,     0,     0,     0,    66,
     171,   172,   173,   174,     0,     0,   175,   176,   163,     0,
       0,     0,   159,   160,   164,     0,     0,   294,   294,     0,
       0,   165,     0,     0,     0,   166,     0,     0,     0,   294,
       0,     0,    68,     0,     0,    69,    20,     0,     0,   167,
     168,     0,     0,   169,     0,   170,   309,     0,     0,     0,
     310,     0,   171,   172,   173,   174,   161,   162,   175,   176,
       0,    66,     0,     0,     0,     0,     0,     0,     0,     0,
     163,     0,     0,     0,   159,   160,   164,     0,     0,     0,
       0,     0,     0,   165,     0,     0,     0,   166,     0,     0,
       0,     0,     0,     0,    68,     0,     0,    69,    20,     0,
       0,   167,   168,     0,     0,   169,     0,   170,   488,     0,
       0,     0,     0,     0,   171,   172,   173,   174,   161,   162,
     175,   176,     0,    66,     0,     0,   159,   160,     0,     0,
       0,     0,   163,     0,     0,     0,     0,     0,   164,     0,
       0,     0,     0,     0,     0,   165,     0,     0,     0,   166,
       0,     0,     0,     0,     0,     0,    68,     0,     0,    69,
      20,     0,     0,   167,   168,     0,     0,   169,     0,   170,
     161,   162,     0,     0,     0,    66,   171,   172,   173,   174,
       0,     0,   175,   176,   163,     0,     0,     0,   159,   160,
     164,     0,     0,     0,     0,     0,     0,   165,     0,     0,
       0,   166,     0,     0,     0,     0,     0,     0,    68,     0,
       0,    69,    20,     0,     0,   167,   168,     0,     0,   169,
       0,     0,     0,     0,     0,   351,     0,     0,   171,   172,
     173,   174,   161,   162,   175,   176,     0,    66,     0,     0,
     159,   160,     0,     0,     0,     0,   163,     0,     0,     0,
       0,     0,   164,     0,     0,     0,     0,     0,     0,   165,
       0,     0,     0,   166,     0,     0,     0,     0,     0,     0,
      68,     0,     0,    69,    20,     0,     0,   167,   168,     0,
       0,   169,   409,     0,   161,   162,     0,     0,     0,    66,
     171,   172,   173,   174,     0,     0,   175,   176,   163,     0,
       0,     0,   159,   160,   164,     0,     0,     0,     0,     0,
       0,   165,     0,     0,     0,   166,     0,     0,     0,     0,
       0,     0,    68,     0,     0,    69,    20,     0,     0,   167,
     168,     0,     0,   169,     0,     0,     0,     0,   123,     0,
       0,     0,   171,   172,   173,   174,   161,   162,   175,   176,
       0,    66,     0,     0,   159,   160,     0,     0,     0,     0,
     163,     0,     0,     0,     0,     0,   164,     0,     0,     0,
       0,     0,     0,   165,     0,     0,     0,   166,     0,     0,
       0,     0,     0,     0,    68,     0,     0,    69,    20,     0,
       0,   167,   168,     0,     0,   169,     0,     0,   161,   162,
       0,   462,     0,    66,   171,   172,   173,   174,     0,     0,
     175,   176,   163,     0,     0,     0,   159,   160,   164,     0,
       0,     0,     0,     0,     0,   165,     0,     0,     0,   166,
       0,     0,     0,     0,     0,     0,    68,     0,     0,    69,
      20,     0,     0,   167,   168,     0,     0,   169,   482,     0,
       0,     0,     0,     0,     0,     0,   171,   172,   173,   174,
     161,   162,   175,   176,     0,    66,     0,     0,   159,   160,
       0,     0,     0,     0,   163,     0,     0,     0,     0,     0,
     164,     0,     0,     0,     0,     0,     0,   165,     0,     0,
       0,   166,     0,     0,     0,     0,     0,     0,    68,     0,
       0,    69,    20,     0,     0,   167,   168,     0,     0,   169,
     495,     0,   161,   162,     0,     0,     0,    66,   171,   172,
     173,   174,     0,     0,   175,   176,   163,     0,     0,     0,
     159,   160,   164,     0,     0,     0,     0,     0,     0,   165,
       0,     0,     0,   166,     0,     0,     0,     0,     0,     0,
      68,     0,     0,    69,    20,     0,     0,   167,   168,     0,
       0,   169,   518,     0,     0,     0,     0,     0,     0,     0,
     171,   172,   173,   174,   161,   162,   175,   176,     0,    66,
       0,     0,   159,   160,     0,     0,     0,     0,   163,     0,
       0,     0,     0,     0,   164,     0,     0,     0,     0,     0,
       0,   165,     0,     0,     0,   166,     0,     0,     0,     0,
       0,     0,    68,     0,     0,    69,    20,     0,     0,   167,
     168,     0,     0,   169,   527,     0,   161,   162,     0,     0,
       0,    66,   171,   172,   173,   174,     0,     0,   175,   176,
     163,     0,     0,     0,   159,   160,   164,     0,     0,     0,
       0,     0,     0,   165,     0,     0,     0,   166,     0,     0,
       0,     0,     0,     0,    68,     0,     0,    69,    20,     0,
       0,   167,   168,     0,     0,   169,   554,     0,     0,     0,
       0,     0,     0,     0,   171,   172,   173,   174,   161,   162,
     175,   176,     0,    66,     0,     0,   159,   160,     0,     0,
       0,     0,   163,     0,     0,     0,     0,     0,   164,     0,
       0,     0,     0,     0,     0,   165,     0,     0,     0,   166,
       0,     0,     0,     0,     0,     0,    68,     0,     0,    69,
      20,     0,     0,   167,   168,     0,     0,   169,     0,     0,
     161,   162,     0,   583,     0,    66,   171,   172,   173,   174,
       0,     0,   175,   176,   163,     0,     0,     0,   159,   160,
     164,     0,     0,     0,     0,     0,     0,   165,     0,     0,
       0,   166,     0,     0,     0,     0,     0,     0,    68,     0,
       0,    69,    20,     0,     0,   167,   168,     0,     0,   169,
     597,     0,     0,     0,     0,     0,     0,     0,   171,   172,
     173,   174,   161,   162,   175,   176,     0,    66,     0,     0,
       0,     0,     0,     0,     0,     0,   163,     0,     0,     0,
       0,     0,   164,     0,     0,     0,     0,     0,     0,   165,
       0,     0,     0,   166,     0,     0,     0,     0,     0,     0,
      68,     0,     0,    69,    20,     0,     0,   167,   168,     0,
       0,   169,     0,     0,     0,     0,     0,     0,     0,     0,
     171,   172,   173,   174,     0,     0,   175,   176,   221,   161,
     162,   566,   222,   223,    66,   224,     0,     0,   225,     0,
       0,     0,   226,   163,     0,     0,   567,     0,     0,   164,
     227,     4,   228,     0,   229,   230,   165,   231,     0,     0,
     166,   232,     0,     0,     0,     0,     0,    68,     0,     0,
      69,    20,     0,     0,     0,     0,     0,     0,   233,     0,
     130,   591,     0,     0,     6,     0,     0,   171,   172,   173,
     174,     0,     0,   175,   176,   221,   161,   162,   566,   222,
     223,    66,   224,     0,     0,   225,     0,     0,     0,   226,
     163,     0,     0,   567,     0,     0,   164,   227,     4,   228,
       0,   229,   230,   165,   231,     0,     0,   166,   232,     0,
       0,     0,     0,     0,    68,     0,     0,    69,    20,     0,
       0,     0,     0,     0,     0,   233,     0,   130,   604,     0,
       0,     6,     0,     0,   171,   172,   173,   174,     0,     0,
     175,   176,   221,   161,   162,     0,   222,   223,    66,   224,
       0,     0,   225,     0,     0,     0,   226,   163,     0,     0,
       0,     0,     0,   164,   227,     4,   228,     0,   229,   230,
     165,   231,     0,     0,   166,   232,     0,     0,     0,     0,
       0,    68,     0,     0,    69,    20,     0,     0,     0,     0,
       0,     0,   233,     0,   130,   234,     0,     0,     6,     0,
       0,   171,   172,   173,   174,     0,     0,   175,   176,   221,
     161,   162,     0,   222,   223,    66,   224,     0,     0,   225,
       0,     0,     0,   226,   163,     0,     0,     0,     0,     0,
     164,   227,     4,   228,     0,   229,   230,   165,   231,     0,
       0,   166,   232,     0,     0,     0,     0,     0,    68,     0,
       0,    69,    20,     0,     0,     0,     0,     0,     0,   233,
       0,   130,   365,     0,     0,     6,     0,     0,   171,   172,
     173,   174,     0,     0,   175,   176,   221,   161,   162,     0,
     222,   223,    66,   224,     0,     0,   225,     0,     0,     0,
     226,   163,     0,     0,     0,     0,     0,   467,   227,     4,
     228,     0,   229,   230,   165,   231,     0,     0,   468,   232,
       0,     0,     0,     0,     0,    68,     0,     0,    69,    20,
       0,     0,     0,     0,     0,     0,   233,     0,   130,   469,
       0,     0,     6,     0,     0,   171,   172,   173,   174,     0,
       0,   175,   176,   221,   161,   162,     0,   222,   223,    66,
     224,     0,     0,   225,     0,     0,     0,   226,   163,     0,
       0,     0,     0,     0,   164,   227,     4,   228,     0,   229,
     230,   165,   231,     0,     0,   166,   232,     0,     0,     0,
       0,     0,    68,     0,     0,    69,    20,     0,     0,     0,
       0,     0,     0,   233,     0,   130,   514,     0,     0,     6,
       0,     0,   171,   172,   173,   174,     0,     0,   175,   176,
     221,   161,   162,     0,   222,   223,    66,   224,     0,     0,
     225,     0,     0,     0,   226,   163,     0,     0,     0,     0,
       0,   164,   227,     4,   228,     0,   229,   230,   165,   231,
       0,     0,   166,   232,     0,     0,     0,     0,     0,    68,
       0,     0,    69,    20,     0,     0,     0,     0,     0,     0,
     233,     0,   130,   517,     0,     0,     6,     0,     0,   171,
     172,   173,   174,     0,     0,   175,   176,   221,   161,   162,
       0,   222,   223,    66,   224,     0,     0,   225,     0,     0,
       0,   226,   163,     0,     0,     0,     0,     0,   164,   227,
       4,   228,     0,   229,   230,   165,   231,     0,     0,   166,
     232,     0,     0,     0,     0,     0,    68,     0,     0,    69,
      20,     0,     0,     0,     0,     0,     0,   233,     0,   130,
     553,     0,     0,     6,     0,     0,   171,   172,   173,   174,
       0,     0,   175,   176,   221,   161,   162,     0,   222,   223,
      66,   224,     0,     0,   225,     0,     0,     0,   226,   163,
       0,     0,     0,     0,     0,   164,   227,     4,   228,     0,
     229,   230,   165,   231,     0,     0,   166,   232,     0,     0,
       0,     0,     0,    68,     0,     0,    69,    20,     0,     0,
       0,     0,     0,     0,   233,     0,   130,     0,     0,     0,
       6,     0,     0,   171,   172,   173,   174,     0,     0,   175,
     176,   368,   161,   162,     0,   222,   223,    66,   224,     0,
       0,   225,     0,     0,     0,   226,   163,     0,     0,     0,
       0,     0,   164,   227,     0,   228,     0,   229,   230,   165,
     231,     0,     0,   166,   232,     0,     0,     0,     0,     0,
      68,     0,     0,    69,    20,     0,     0,     0,     0,     0,
       0,   233,     0,   130,     0,     0,     0,     6,     0,     0,
     171,   172,   173,   174,     0,     0,   175,   176,   368,   161,
     162,     0,   532,   223,    66,   224,     0,     0,   225,     0,
       0,     0,   226,   163,     0,     0,     0,     0,     0,   164,
     227,     0,   228,     0,   229,   230,   165,   231,     0,     0,
     166,   232,     0,     0,     0,     0,     0,    68,     0,     0,
      69,    20,     0,     0,     0,     0,     0,     0,   233,     0,
     130,     0,     0,     0,     6,     0,     0,   171,   172,   173,
     174,     0,     0,   175,   176,     1,   161,   162,     0,     0,
       0,    66,     0,     0,     0,     0,     0,     0,     0,     0,
     163,     0,     0,     0,     0,     0,   164,     0,     0,     0,
       0,   161,   162,   165,     0,     0,    66,   166,     0,     0,
       0,     0,     0,     0,    68,   163,     0,    69,    20,     0,
       0,   164,     0,     0,     0,   233,     0,     0,   165,     0,
       0,     0,   166,     0,   171,   172,   173,   174,     0,    68,
     175,   176,    69,    20,     0,     0,     0,     0,     0,     0,
     233,     0,     0,     0,     0,     0,     0,     0,     0,   171,
     172,   173,   174,     0,     0,   175,   176
};

#define yypact_value_is_default(yystate) \
  ((yystate) == (-499))

#define yytable_value_is_error(yytable_value) \
  YYID (0)

static const yytype_int16 yycheck[] =
{
       3,     4,   130,   105,   243,   113,   170,   262,   290,   159,
     160,   161,   162,   510,   150,   110,     0,   167,   168,   399,
      39,     1,     5,    42,    89,     9,    10,    11,   115,   403,
     100,     1,    35,    36,    15,    38,     0,    56,    55,   419,
     135,    60,    45,    54,    54,    29,    71,   142,    32,    33,
      18,    19,    20,    21,     9,   125,    11,   127,    46,   110,
     110,    54,    46,   110,    67,    65,    77,    77,    71,   498,
      54,    82,    82,   571,   144,    63,    65,    32,   165,   104,
     105,    69,   133,   100,   135,   135,   583,   103,   135,    82,
     109,    59,   590,   100,    98,   475,   115,   104,    82,   110,
     110,   104,   105,   114,   114,   602,    89,   536,     2,    90,
     539,     5,   486,   493,   102,    56,   119,   110,    98,    60,
     130,    91,   133,   133,   135,   135,   110,   130,    52,    74,
     114,     9,   102,   235,   229,   100,   516,    72,    54,   104,
     151,   151,   135,    49,    89,    39,   165,   150,    42,    98,
      89,   135,   288,   102,    32,   165,   102,    89,    64,   169,
      54,    85,    56,   102,    88,    89,    60,     0,   109,    46,
     102,   600,    10,   323,   324,   325,     9,    10,    11,   608,
      57,   104,   611,    77,   613,   188,    63,    49,    82,   284,
      99,    29,    69,    99,   103,    33,    29,   577,    95,    32,
      33,    46,    64,   100,   291,   100,   461,   462,    46,    57,
     130,   281,   102,    46,    62,   109,   110,   103,    63,   501,
     114,   115,   225,   536,    69,   102,   539,    96,   231,   240,
     240,   100,   235,   243,   473,   104,   130,    99,    98,   133,
     243,   135,   406,   178,    92,    97,    97,   250,   101,   100,
     400,   103,   262,   104,   257,   510,   259,   151,   386,    62,
     100,    97,   364,    66,   100,   159,   160,   161,   162,   280,
     280,   165,   291,   167,   168,   169,   515,   110,   262,   290,
     290,   102,    46,   104,    97,   288,    97,   600,   498,   102,
     103,   130,   103,    57,    54,   608,   280,   300,   611,    63,
     613,   236,   135,   101,    97,    69,   290,   102,   103,    67,
     103,    69,    97,    77,   317,   318,    74,    77,   103,    96,
      78,    97,    82,   243,   100,   335,   536,    97,   583,   539,
     250,    89,   102,   103,    97,   485,    69,   257,   102,   259,
     103,    74,   262,   471,   101,    78,   240,   602,   101,   243,
     110,    97,    97,   592,   114,   450,    89,   103,   103,    97,
      96,   364,   373,   373,    98,   103,   301,   302,   262,    98,
     130,   306,   307,   133,   498,   135,   386,    55,    97,    94,
      95,    96,    46,   386,   103,   100,   280,   495,    52,   104,
     600,   151,   394,   102,   103,   397,   290,   291,   608,   103,
     102,   611,   104,   613,   243,    69,   331,   332,   333,   334,
     104,   250,   536,   521,   498,   539,   511,    98,   257,   100,
     259,    85,   530,   262,    88,    89,     5,     6,     7,   323,
     324,   325,   326,   327,   328,   329,   330,   331,   332,   333,
     334,   335,   336,   337,   338,   339,   340,   341,   342,   396,
     558,   398,   536,   104,   130,   539,     8,     9,    10,   394,
     104,   471,   397,   473,    94,    95,   386,   104,   471,   100,
     473,   328,   329,   330,    94,    95,   600,    11,   573,   373,
     240,    47,    48,   243,   608,     3,     4,   611,    12,   613,
     501,   501,   386,    89,    13,   498,    96,   432,    94,    95,
      96,    46,   262,    14,   100,   515,   400,    52,   104,   403,
     513,   130,   515,    16,    17,    96,   600,   501,    94,    95,
     280,    47,    48,    96,   608,    47,    48,   611,    96,   613,
     290,   336,   337,   536,   326,   327,   539,    96,    91,   102,
      85,   461,   462,    88,    89,   548,   102,   386,   102,    89,
      96,   471,    97,   473,    94,    95,    96,    98,   100,   562,
     100,   571,    69,   100,   104,    69,    96,   243,   571,    97,
      99,    69,    97,   576,   250,   335,    96,   471,   498,   473,
     590,   257,   592,   259,    68,   102,   262,   590,   102,   592,
     510,   485,   486,   102,    46,   515,   102,   600,   103,   130,
      52,   103,   102,   497,    96,   608,   101,   501,   611,    61,
     613,    63,   101,   373,    96,    91,   536,    69,    97,   539,
      97,   515,   461,   462,   243,    97,   386,    96,   548,    96,
      96,   250,   471,    85,   473,     0,    88,    89,   257,   102,
     259,    97,   562,   262,     9,    10,    11,    99,   102,    96,
     101,   571,    98,    98,   102,    97,   576,    98,    96,   498,
      46,    58,    58,   583,    29,   102,    52,    32,    33,   130,
     590,   510,   592,    97,    97,    97,   515,   571,    96,    91,
     600,    46,   602,   102,    97,   102,   102,   102,   608,    54,
      91,   611,   102,   613,    97,   102,   590,   536,   592,    85,
     539,    58,    88,    89,    97,    11,   335,    48,    64,   548,
     386,   471,   243,   473,   135,    46,   280,    82,   250,   250,
     119,    52,   133,   562,   130,   257,   257,   259,   259,   382,
      47,   262,   571,    82,   569,   262,   338,   576,   569,   262,
     451,   501,   302,   451,   583,   110,   339,   341,   340,   497,
      -1,   590,   342,   592,    85,   515,    -1,    88,    89,   346,
      46,   600,    -1,   602,    -1,    -1,    52,   386,    -1,   608,
     135,    -1,   611,    -1,   613,    61,    -1,    63,    -1,    -1,
      -1,    -1,   243,    69,    -1,   461,   462,    -1,    -1,   250,
      -1,    -1,    -1,    -1,    -1,   471,   257,   473,   259,    85,
      -1,   262,    88,    89,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   571,    98,    99,    -1,    -1,   102,    -1,    -1,    -1,
      -1,    -1,   498,    46,    -1,    -1,    -1,    -1,    -1,    52,
     590,    -1,   592,    -1,   510,    -1,    -1,   243,    61,   515,
      63,    46,   461,   462,   250,    -1,    69,    52,    -1,    -1,
      -1,   257,   471,   259,   473,   386,   262,    -1,    -1,    -1,
     536,    -1,    85,   539,    -1,    88,    89,    -1,    -1,    -1,
      -1,    -1,   548,    -1,    -1,    -1,    99,    -1,    -1,   498,
      85,    -1,   130,    88,    89,    -1,   562,    -1,    -1,    -1,
      -1,   510,    97,    -1,    -1,   571,   515,    -1,    -1,    -1,
     576,    -1,    -1,    -1,    -1,    -1,    -1,   583,    -1,    -1,
      -1,    -1,    -1,    -1,   590,    -1,   592,   536,    -1,    -1,
     539,    -1,    -1,    -1,   600,   386,   602,    -1,    -1,   548,
     461,   462,   608,    46,    -1,   611,    -1,   613,    -1,    52,
     471,    -1,   473,   562,    -1,    -1,    -1,    -1,    61,    -1,
      63,    -1,   571,    -1,    -1,    -1,    69,   576,    -1,    -1,
      -1,    -1,    -1,    -1,   583,    -1,   498,   498,    -1,    -1,
      -1,   590,    85,   592,    -1,    88,    89,    -1,    -1,   510,
     386,   600,    -1,   602,   515,    -1,    -1,    -1,    -1,   608,
      -1,    -1,   611,   120,   613,   243,    -1,    -1,    -1,    -1,
     461,   462,   250,    -1,   536,   536,    -1,   539,   539,   257,
     471,   259,   473,    -1,   262,    -1,   548,   548,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     562,   562,    -1,    -1,    -1,    -1,    -1,   498,    -1,    -1,
     571,    -1,   169,   170,   576,   576,    -1,    -1,    -1,   510,
      -1,    -1,   583,    -1,   515,   461,   462,    -1,    -1,   590,
      -1,   592,    -1,    -1,    -1,   471,    -1,   473,   600,   600,
      -1,   602,    -1,    -1,    -1,   536,   608,   608,   539,   611,
     611,   613,   613,    -1,    -1,    -1,    -1,   548,    -1,    -1,
      -1,    -1,   498,    -1,    -1,    -1,   223,    -1,    -1,   226,
      -1,   562,    -1,    -1,   510,   232,   233,    -1,    -1,   515,
     571,    -1,    -1,    -1,    -1,   576,    -1,    -1,    -1,    -1,
      46,    -1,   583,    -1,    -1,    -1,    52,    -1,    -1,   590,
     536,   592,    -1,   539,    -1,    61,    -1,    63,   386,   600,
      -1,   602,   548,    69,    -1,    -1,    -1,   608,    -1,    -1,
     611,    -1,   613,    -1,    -1,    -1,   562,    -1,    -1,    85,
      -1,    -1,    88,    89,    -1,   571,    -1,    -1,    -1,    -1,
     576,    -1,    98,    99,    -1,    -1,   102,   583,    -1,    -1,
      -1,    -1,    -1,    -1,   590,    -1,   592,    -1,    -1,   316,
      -1,    -1,   319,    -1,   600,    -1,   602,    -1,    -1,    -1,
      -1,    -1,   608,    -1,    -1,   611,    -1,   613,    -1,    -1,
      -1,    -1,    -1,   461,   462,    -1,   343,    -1,    -1,    -1,
     347,    -1,    -1,   471,    -1,   473,   353,   354,   159,   160,
     161,   162,    -1,    -1,    -1,    -1,   167,   168,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     498,   378,   379,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   510,    -1,    -1,    -1,   393,   515,    -1,    -1,
      -1,    52,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   406,
      61,   159,   160,   161,   162,    -1,    67,    -1,   536,   167,
     168,   539,    -1,    74,    -1,    -1,    -1,    78,    -1,    -1,
     548,    -1,    -1,    -1,    85,    -1,    -1,    88,    89,    -1,
      -1,    92,    93,    -1,   562,    96,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   571,   105,   106,   107,   108,   576,   456,
     111,   112,    -1,    -1,    -1,   583,    -1,    -1,    -1,    -1,
      -1,    -1,   590,    -1,   592,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   600,    -1,   602,    -1,    -1,    -1,    -1,    -1,
     608,    -1,    -1,   611,   491,   613,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   506,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   323,   324,   325,   326,   327,   328,   329,   330,
     331,   332,   333,   334,    -1,   336,   337,   338,   339,   340,
     341,   342,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     1,    -1,     3,     4,    -1,    -1,
      -1,    -1,    -1,    -1,   561,    -1,    -1,    -1,   565,    -1,
     567,    -1,    -1,    -1,    -1,   323,   324,   325,   326,   327,
     328,   329,   330,   331,   332,   333,   334,    -1,   336,   337,
     338,   339,   340,   341,   342,    -1,    -1,    -1,    -1,   400,
      47,    48,   403,    -1,    -1,    52,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    61,    -1,     1,    -1,     3,     4,
      67,    -1,    -1,    -1,    -1,    -1,    -1,    74,    -1,    -1,
      -1,    78,    -1,    -1,    -1,    -1,    -1,    -1,    85,    -1,
      -1,    88,    89,    -1,    -1,    92,    93,    -1,    -1,    96,
      -1,    -1,   400,    -1,    -1,   403,    -1,    -1,   105,   106,
     107,   108,    47,    48,   111,   112,    -1,    52,    -1,    -1,
       3,     4,    -1,    -1,    -1,    -1,    61,    -1,    -1,    -1,
      -1,    -1,    67,    -1,   485,   486,    -1,    -1,    -1,    74,
      -1,    -1,    -1,    78,    -1,    -1,   497,    -1,    -1,    -1,
      85,    -1,    -1,    88,    89,    -1,    -1,    92,    93,    -1,
      -1,    96,    -1,    -1,    47,    48,    -1,    -1,    -1,    52,
     105,   106,   107,   108,    -1,    -1,   111,   112,    61,    -1,
      -1,    -1,     3,     4,    67,    -1,    -1,   485,   486,    -1,
      -1,    74,    -1,    -1,    -1,    78,    -1,    -1,    -1,   497,
      -1,    -1,    85,    -1,    -1,    88,    89,    -1,    -1,    92,
      93,    -1,    -1,    96,    -1,    98,    99,    -1,    -1,    -1,
     103,    -1,   105,   106,   107,   108,    47,    48,   111,   112,
      -1,    52,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      61,    -1,    -1,    -1,     3,     4,    67,    -1,    -1,    -1,
      -1,    -1,    -1,    74,    -1,    -1,    -1,    78,    -1,    -1,
      -1,    -1,    -1,    -1,    85,    -1,    -1,    88,    89,    -1,
      -1,    92,    93,    -1,    -1,    96,    -1,    98,    99,    -1,
      -1,    -1,    -1,    -1,   105,   106,   107,   108,    47,    48,
     111,   112,    -1,    52,    -1,    -1,     3,     4,    -1,    -1,
      -1,    -1,    61,    -1,    -1,    -1,    -1,    -1,    67,    -1,
      -1,    -1,    -1,    -1,    -1,    74,    -1,    -1,    -1,    78,
      -1,    -1,    -1,    -1,    -1,    -1,    85,    -1,    -1,    88,
      89,    -1,    -1,    92,    93,    -1,    -1,    96,    -1,    98,
      47,    48,    -1,    -1,    -1,    52,   105,   106,   107,   108,
      -1,    -1,   111,   112,    61,    -1,    -1,    -1,     3,     4,
      67,    -1,    -1,    -1,    -1,    -1,    -1,    74,    -1,    -1,
      -1,    78,    -1,    -1,    -1,    -1,    -1,    -1,    85,    -1,
      -1,    88,    89,    -1,    -1,    92,    93,    -1,    -1,    96,
      -1,    -1,    -1,    -1,    -1,   102,    -1,    -1,   105,   106,
     107,   108,    47,    48,   111,   112,    -1,    52,    -1,    -1,
       3,     4,    -1,    -1,    -1,    -1,    61,    -1,    -1,    -1,
      -1,    -1,    67,    -1,    -1,    -1,    -1,    -1,    -1,    74,
      -1,    -1,    -1,    78,    -1,    -1,    -1,    -1,    -1,    -1,
      85,    -1,    -1,    88,    89,    -1,    -1,    92,    93,    -1,
      -1,    96,    97,    -1,    47,    48,    -1,    -1,    -1,    52,
     105,   106,   107,   108,    -1,    -1,   111,   112,    61,    -1,
      -1,    -1,     3,     4,    67,    -1,    -1,    -1,    -1,    -1,
      -1,    74,    -1,    -1,    -1,    78,    -1,    -1,    -1,    -1,
      -1,    -1,    85,    -1,    -1,    88,    89,    -1,    -1,    92,
      93,    -1,    -1,    96,    -1,    -1,    -1,    -1,   101,    -1,
      -1,    -1,   105,   106,   107,   108,    47,    48,   111,   112,
      -1,    52,    -1,    -1,     3,     4,    -1,    -1,    -1,    -1,
      61,    -1,    -1,    -1,    -1,    -1,    67,    -1,    -1,    -1,
      -1,    -1,    -1,    74,    -1,    -1,    -1,    78,    -1,    -1,
      -1,    -1,    -1,    -1,    85,    -1,    -1,    88,    89,    -1,
      -1,    92,    93,    -1,    -1,    96,    -1,    -1,    47,    48,
      -1,   102,    -1,    52,   105,   106,   107,   108,    -1,    -1,
     111,   112,    61,    -1,    -1,    -1,     3,     4,    67,    -1,
      -1,    -1,    -1,    -1,    -1,    74,    -1,    -1,    -1,    78,
      -1,    -1,    -1,    -1,    -1,    -1,    85,    -1,    -1,    88,
      89,    -1,    -1,    92,    93,    -1,    -1,    96,    97,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   105,   106,   107,   108,
      47,    48,   111,   112,    -1,    52,    -1,    -1,     3,     4,
      -1,    -1,    -1,    -1,    61,    -1,    -1,    -1,    -1,    -1,
      67,    -1,    -1,    -1,    -1,    -1,    -1,    74,    -1,    -1,
      -1,    78,    -1,    -1,    -1,    -1,    -1,    -1,    85,    -1,
      -1,    88,    89,    -1,    -1,    92,    93,    -1,    -1,    96,
      97,    -1,    47,    48,    -1,    -1,    -1,    52,   105,   106,
     107,   108,    -1,    -1,   111,   112,    61,    -1,    -1,    -1,
       3,     4,    67,    -1,    -1,    -1,    -1,    -1,    -1,    74,
      -1,    -1,    -1,    78,    -1,    -1,    -1,    -1,    -1,    -1,
      85,    -1,    -1,    88,    89,    -1,    -1,    92,    93,    -1,
      -1,    96,    97,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     105,   106,   107,   108,    47,    48,   111,   112,    -1,    52,
      -1,    -1,     3,     4,    -1,    -1,    -1,    -1,    61,    -1,
      -1,    -1,    -1,    -1,    67,    -1,    -1,    -1,    -1,    -1,
      -1,    74,    -1,    -1,    -1,    78,    -1,    -1,    -1,    -1,
      -1,    -1,    85,    -1,    -1,    88,    89,    -1,    -1,    92,
      93,    -1,    -1,    96,    97,    -1,    47,    48,    -1,    -1,
      -1,    52,   105,   106,   107,   108,    -1,    -1,   111,   112,
      61,    -1,    -1,    -1,     3,     4,    67,    -1,    -1,    -1,
      -1,    -1,    -1,    74,    -1,    -1,    -1,    78,    -1,    -1,
      -1,    -1,    -1,    -1,    85,    -1,    -1,    88,    89,    -1,
      -1,    92,    93,    -1,    -1,    96,    97,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   105,   106,   107,   108,    47,    48,
     111,   112,    -1,    52,    -1,    -1,     3,     4,    -1,    -1,
      -1,    -1,    61,    -1,    -1,    -1,    -1,    -1,    67,    -1,
      -1,    -1,    -1,    -1,    -1,    74,    -1,    -1,    -1,    78,
      -1,    -1,    -1,    -1,    -1,    -1,    85,    -1,    -1,    88,
      89,    -1,    -1,    92,    93,    -1,    -1,    96,    -1,    -1,
      47,    48,    -1,   102,    -1,    52,   105,   106,   107,   108,
      -1,    -1,   111,   112,    61,    -1,    -1,    -1,     3,     4,
      67,    -1,    -1,    -1,    -1,    -1,    -1,    74,    -1,    -1,
      -1,    78,    -1,    -1,    -1,    -1,    -1,    -1,    85,    -1,
      -1,    88,    89,    -1,    -1,    92,    93,    -1,    -1,    96,
      97,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   105,   106,
     107,   108,    47,    48,   111,   112,    -1,    52,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    61,    -1,    -1,    -1,
      -1,    -1,    67,    -1,    -1,    -1,    -1,    -1,    -1,    74,
      -1,    -1,    -1,    78,    -1,    -1,    -1,    -1,    -1,    -1,
      85,    -1,    -1,    88,    89,    -1,    -1,    92,    93,    -1,
      -1,    96,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     105,   106,   107,   108,    -1,    -1,   111,   112,    46,    47,
      48,    49,    50,    51,    52,    53,    -1,    -1,    56,    -1,
      -1,    -1,    60,    61,    -1,    -1,    64,    -1,    -1,    67,
      68,    69,    70,    -1,    72,    73,    74,    75,    -1,    -1,
      78,    79,    -1,    -1,    -1,    -1,    -1,    85,    -1,    -1,
      88,    89,    -1,    -1,    -1,    -1,    -1,    -1,    96,    -1,
      98,    99,    -1,    -1,   102,    -1,    -1,   105,   106,   107,
     108,    -1,    -1,   111,   112,    46,    47,    48,    49,    50,
      51,    52,    53,    -1,    -1,    56,    -1,    -1,    -1,    60,
      61,    -1,    -1,    64,    -1,    -1,    67,    68,    69,    70,
      -1,    72,    73,    74,    75,    -1,    -1,    78,    79,    -1,
      -1,    -1,    -1,    -1,    85,    -1,    -1,    88,    89,    -1,
      -1,    -1,    -1,    -1,    -1,    96,    -1,    98,    99,    -1,
      -1,   102,    -1,    -1,   105,   106,   107,   108,    -1,    -1,
     111,   112,    46,    47,    48,    -1,    50,    51,    52,    53,
      -1,    -1,    56,    -1,    -1,    -1,    60,    61,    -1,    -1,
      -1,    -1,    -1,    67,    68,    69,    70,    -1,    72,    73,
      74,    75,    -1,    -1,    78,    79,    -1,    -1,    -1,    -1,
      -1,    85,    -1,    -1,    88,    89,    -1,    -1,    -1,    -1,
      -1,    -1,    96,    -1,    98,    99,    -1,    -1,   102,    -1,
      -1,   105,   106,   107,   108,    -1,    -1,   111,   112,    46,
      47,    48,    -1,    50,    51,    52,    53,    -1,    -1,    56,
      -1,    -1,    -1,    60,    61,    -1,    -1,    -1,    -1,    -1,
      67,    68,    69,    70,    -1,    72,    73,    74,    75,    -1,
      -1,    78,    79,    -1,    -1,    -1,    -1,    -1,    85,    -1,
      -1,    88,    89,    -1,    -1,    -1,    -1,    -1,    -1,    96,
      -1,    98,    99,    -1,    -1,   102,    -1,    -1,   105,   106,
     107,   108,    -1,    -1,   111,   112,    46,    47,    48,    -1,
      50,    51,    52,    53,    -1,    -1,    56,    -1,    -1,    -1,
      60,    61,    -1,    -1,    -1,    -1,    -1,    67,    68,    69,
      70,    -1,    72,    73,    74,    75,    -1,    -1,    78,    79,
      -1,    -1,    -1,    -1,    -1,    85,    -1,    -1,    88,    89,
      -1,    -1,    -1,    -1,    -1,    -1,    96,    -1,    98,    99,
      -1,    -1,   102,    -1,    -1,   105,   106,   107,   108,    -1,
      -1,   111,   112,    46,    47,    48,    -1,    50,    51,    52,
      53,    -1,    -1,    56,    -1,    -1,    -1,    60,    61,    -1,
      -1,    -1,    -1,    -1,    67,    68,    69,    70,    -1,    72,
      73,    74,    75,    -1,    -1,    78,    79,    -1,    -1,    -1,
      -1,    -1,    85,    -1,    -1,    88,    89,    -1,    -1,    -1,
      -1,    -1,    -1,    96,    -1,    98,    99,    -1,    -1,   102,
      -1,    -1,   105,   106,   107,   108,    -1,    -1,   111,   112,
      46,    47,    48,    -1,    50,    51,    52,    53,    -1,    -1,
      56,    -1,    -1,    -1,    60,    61,    -1,    -1,    -1,    -1,
      -1,    67,    68,    69,    70,    -1,    72,    73,    74,    75,
      -1,    -1,    78,    79,    -1,    -1,    -1,    -1,    -1,    85,
      -1,    -1,    88,    89,    -1,    -1,    -1,    -1,    -1,    -1,
      96,    -1,    98,    99,    -1,    -1,   102,    -1,    -1,   105,
     106,   107,   108,    -1,    -1,   111,   112,    46,    47,    48,
      -1,    50,    51,    52,    53,    -1,    -1,    56,    -1,    -1,
      -1,    60,    61,    -1,    -1,    -1,    -1,    -1,    67,    68,
      69,    70,    -1,    72,    73,    74,    75,    -1,    -1,    78,
      79,    -1,    -1,    -1,    -1,    -1,    85,    -1,    -1,    88,
      89,    -1,    -1,    -1,    -1,    -1,    -1,    96,    -1,    98,
      99,    -1,    -1,   102,    -1,    -1,   105,   106,   107,   108,
      -1,    -1,   111,   112,    46,    47,    48,    -1,    50,    51,
      52,    53,    -1,    -1,    56,    -1,    -1,    -1,    60,    61,
      -1,    -1,    -1,    -1,    -1,    67,    68,    69,    70,    -1,
      72,    73,    74,    75,    -1,    -1,    78,    79,    -1,    -1,
      -1,    -1,    -1,    85,    -1,    -1,    88,    89,    -1,    -1,
      -1,    -1,    -1,    -1,    96,    -1,    98,    -1,    -1,    -1,
     102,    -1,    -1,   105,   106,   107,   108,    -1,    -1,   111,
     112,    46,    47,    48,    -1,    50,    51,    52,    53,    -1,
      -1,    56,    -1,    -1,    -1,    60,    61,    -1,    -1,    -1,
      -1,    -1,    67,    68,    -1,    70,    -1,    72,    73,    74,
      75,    -1,    -1,    78,    79,    -1,    -1,    -1,    -1,    -1,
      85,    -1,    -1,    88,    89,    -1,    -1,    -1,    -1,    -1,
      -1,    96,    -1,    98,    -1,    -1,    -1,   102,    -1,    -1,
     105,   106,   107,   108,    -1,    -1,   111,   112,    46,    47,
      48,    -1,    50,    51,    52,    53,    -1,    -1,    56,    -1,
      -1,    -1,    60,    61,    -1,    -1,    -1,    -1,    -1,    67,
      68,    -1,    70,    -1,    72,    73,    74,    75,    -1,    -1,
      78,    79,    -1,    -1,    -1,    -1,    -1,    85,    -1,    -1,
      88,    89,    -1,    -1,    -1,    -1,    -1,    -1,    96,    -1,
      98,    -1,    -1,    -1,   102,    -1,    -1,   105,   106,   107,
     108,    -1,    -1,   111,   112,    46,    47,    48,    -1,    -1,
      -1,    52,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      61,    -1,    -1,    -1,    -1,    -1,    67,    -1,    -1,    -1,
      -1,    47,    48,    74,    -1,    -1,    52,    78,    -1,    -1,
      -1,    -1,    -1,    -1,    85,    61,    -1,    88,    89,    -1,
      -1,    67,    -1,    -1,    -1,    96,    -1,    -1,    74,    -1,
      -1,    -1,    78,    -1,   105,   106,   107,   108,    -1,    85,
     111,   112,    88,    89,    -1,    -1,    -1,    -1,    -1,    -1,
      96,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   105,
     106,   107,   108,    -1,    -1,   111,   112
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,    46,    57,    63,    69,    77,   102,   114,   127,   128,
     129,   130,   131,   132,   133,   134,   135,   136,   167,   188,
      89,   123,   124,   125,   126,   126,   126,   123,     0,   129,
     131,   134,   128,   129,    46,    63,    69,   102,   104,    65,
     168,   172,    65,   139,   102,   104,   129,   126,   126,     5,
     126,   119,   121,   123,    98,   173,   103,   170,   119,   120,
      54,   140,   169,   172,   139,   102,    52,    61,    85,    88,
      99,   116,   117,   118,   119,   122,   123,   135,   136,   146,
     153,   167,   174,   175,   176,   177,   121,   173,   121,   141,
     138,   173,   171,   140,   126,   154,   126,   147,   148,   149,
     154,   100,   238,   238,    61,   116,   102,    99,   175,   103,
      98,   142,   173,   137,    96,    55,   100,   157,   102,   103,
      95,   100,   157,   101,   100,   154,   147,   154,   121,    46,
      98,    99,   124,   135,   136,   143,   144,   145,   146,   151,
     153,   160,   161,   162,   163,   167,   180,   188,   142,    97,
     116,   135,   155,   156,   120,   158,   101,   126,   148,     3,
       4,    47,    48,    61,    67,    74,    78,    92,    93,    96,
      98,   105,   106,   107,   108,   111,   112,   115,   117,   122,
     123,   150,   178,   226,   227,   228,   229,   230,   233,   235,
     239,   240,   241,   242,   243,   244,   245,   246,   247,   248,
     249,   250,   251,   252,   253,   254,   255,   256,   257,   258,
     259,   260,   261,   262,   263,   265,   101,   101,   157,   102,
     157,    46,    50,    51,    53,    56,    60,    68,    70,    72,
      73,    75,    79,    96,    99,   116,   117,   122,   123,   126,
     135,   136,   180,   181,   182,   183,   184,   185,   187,   188,
     189,   190,   192,   193,   194,   195,   197,   203,   204,   206,
     207,   208,   210,   211,   215,   216,   217,   218,   219,   220,
     221,   222,   229,   240,   242,   243,   244,   246,   247,   262,
      96,   163,    99,   144,   152,   180,   157,   149,   116,    97,
     103,   103,   123,   239,   241,   245,   245,   245,   245,   104,
     104,   117,   119,   120,   245,   245,   117,   123,   265,    99,
     103,   150,   179,   104,   104,    96,   100,   104,   104,   100,
     126,    47,    48,     5,     6,     7,     3,     4,     8,     9,
      10,    18,    19,    20,    21,    59,    16,    17,    11,    12,
      13,    14,    15,    90,    94,    95,   264,    96,   265,   102,
     126,   102,   265,    96,    96,   180,    96,   102,   126,     1,
     265,   265,   147,    91,   116,    99,   182,   102,    46,   185,
     102,   185,   185,   135,   184,   193,   212,   214,   102,    96,
      97,   155,   157,   102,   159,   180,    98,   164,   149,   156,
     120,    69,   126,   100,   236,   237,   238,   236,   238,    96,
      97,   238,   238,    97,    99,    99,   103,    69,    69,    97,
     234,   265,   265,    69,    74,    78,    74,   126,   265,    96,
     245,   245,   245,   250,   250,   251,   251,   251,   252,   252,
     252,   252,   117,   118,   253,   253,   254,   255,   256,   257,
     258,   265,   261,   265,   102,   102,   102,   265,   265,    62,
      66,   223,   224,   225,   102,     1,    91,   102,    97,   147,
      68,   103,   102,   265,   265,    97,   164,    67,    78,    99,
     123,   165,   166,   181,   102,    96,   265,   237,   238,   178,
     238,   178,    97,   234,   245,    97,    97,   248,    99,   150,
      97,   103,   101,    96,   101,    97,   234,    91,    97,    97,
      97,    96,   180,   224,   225,   265,    96,   193,   213,   214,
     102,    97,   102,   104,    99,   181,    96,    99,    97,   234,
     101,   231,    97,   245,   248,     1,   265,    97,   234,   142,
      97,   260,    50,   185,   186,   187,   189,   191,   196,   203,
     205,   209,   211,    98,   198,   156,   102,   265,    97,   213,
       1,   180,    67,    99,    97,   234,    97,   142,   232,    97,
     142,    96,    58,   186,   186,   102,    49,    64,    99,   199,
     200,   201,   202,    97,    97,   185,    97,    96,   102,    97,
     142,   265,   185,   102,   265,    91,   265,   266,    99,   200,
     201,    99,   181,   202,   180,   102,   185,    97,   234,   102,
      97,   213,   102,    91,    99,   102,    97,   186,    97,   213,
     102,    58,   186,    97,   186,   186
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
   Once GCC version 2 has supplanted version 1, this can go.  However,
   YYFAIL appears to be in use.  Nevertheless, it is formally deprecated
   in Bison 2.4.2's NEWS entry, where a plan to phase it out is
   discussed.  */

#define YYFAIL		goto yyerrlab
#if defined YYFAIL
  /* This is here to suppress warnings from the GCC cpp's
     -Wunused-macros.  Normally we don't worry about that warning, but
     some users do, and we want to make it easy for users to remove
     YYFAIL uses, which will produce warnings from Bison 2.5.  */
#endif

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
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


/* This macro is provided for backward compatibility. */

#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (&yylval, YYLEX_PARAM)
#else
# define YYLEX yylex (&yylval)
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
  YYSIZE_T yysize0 = yytnamerr (0, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  YYSIZE_T yysize1;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = 0;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - Assume YYFAIL is not used.  It's too flawed to consider.  See
       <http://lists.gnu.org/archive/html/bison-patches/2009-12/msg00024.html>
       for details.  YYERROR is fine as it does not invoke this
       function.
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
                yysize1 = yysize + yytnamerr (0, yytname[yyx]);
                if (! (yysize <= yysize1
                       && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                  return 2;
                yysize = yysize1;
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

  yysize1 = yysize + yystrlen (yyformat);
  if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
    return 2;
  yysize = yysize1;

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


/*----------.
| yyparse.  |
`----------*/

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
/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

    /* Number of syntax errors so far.  */
    int yynerrs;

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
  if (yypact_value_is_default (yyn))
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
        case 11:

/* Line 1806 of yacc.c  */
#line 232 "/home/yanxin/git/jrate/gcc/gcc/java/parse-scan.y"
    {
		  /* use preset global here. FIXME */
		  (yyval.node) = xstrdup ("int");
		}
    break;

  case 12:

/* Line 1806 of yacc.c  */
#line 237 "/home/yanxin/git/jrate/gcc/gcc/java/parse-scan.y"
    {
		  /* use preset global here. FIXME */
		  (yyval.node) = xstrdup ("double");
		}
    break;

  case 13:

/* Line 1806 of yacc.c  */
#line 242 "/home/yanxin/git/jrate/gcc/gcc/java/parse-scan.y"
    {
		  /* use preset global here. FIXME */
		  (yyval.node) = xstrdup ("boolean");
		}
    break;

  case 19:

/* Line 1806 of yacc.c  */
#line 267 "/home/yanxin/git/jrate/gcc/gcc/java/parse-scan.y"
    {
	          while (bracket_count-- > 0) 
		    (yyval.node) = concat ("[", (yyvsp[(1) - (2)].node), NULL);
		}
    break;

  case 20:

/* Line 1806 of yacc.c  */
#line 272 "/home/yanxin/git/jrate/gcc/gcc/java/parse-scan.y"
    {
	          while (bracket_count-- > 0) 
		    (yyval.node) = concat ("[", (yyvsp[(1) - (2)].node), NULL);
		}
    break;

  case 24:

/* Line 1806 of yacc.c  */
#line 290 "/home/yanxin/git/jrate/gcc/gcc/java/parse-scan.y"
    { 
		  (yyval.node) = concat ((yyvsp[(1) - (3)].node), ".", (yyvsp[(3) - (3)].node), NULL);
		}
    break;

  case 38:

/* Line 1806 of yacc.c  */
#line 322 "/home/yanxin/git/jrate/gcc/gcc/java/parse-scan.y"
    { package_name = (yyvsp[(2) - (3)].node); }
    break;

  case 46:

/* Line 1806 of yacc.c  */
#line 349 "/home/yanxin/git/jrate/gcc/gcc/java/parse-scan.y"
    { 
		  if ((yyvsp[(1) - (1)].value) == PUBLIC_TK)
		    modifier_value++;
                  if ((yyvsp[(1) - (1)].value) == STATIC_TK)
                    modifier_value++;
	          USE_ABSORBER;
		}
    break;

  case 47:

/* Line 1806 of yacc.c  */
#line 357 "/home/yanxin/git/jrate/gcc/gcc/java/parse-scan.y"
    { 
		  if ((yyvsp[(2) - (2)].value) == PUBLIC_TK)
		    modifier_value++;
                  if ((yyvsp[(2) - (2)].value) == STATIC_TK)
                    modifier_value++;
		  USE_ABSORBER;
		}
    break;

  case 48:

/* Line 1806 of yacc.c  */
#line 369 "/home/yanxin/git/jrate/gcc/gcc/java/parse-scan.y"
    { 
		  report_class_declaration((yyvsp[(3) - (5)].node));
		  modifier_value = 0;
                }
    break;

  case 50:

/* Line 1806 of yacc.c  */
#line 375 "/home/yanxin/git/jrate/gcc/gcc/java/parse-scan.y"
    { report_class_declaration((yyvsp[(2) - (4)].node)); }
    break;

  case 56:

/* Line 1806 of yacc.c  */
#line 389 "/home/yanxin/git/jrate/gcc/gcc/java/parse-scan.y"
    { USE_ABSORBER; }
    break;

  case 57:

/* Line 1806 of yacc.c  */
#line 391 "/home/yanxin/git/jrate/gcc/gcc/java/parse-scan.y"
    { USE_ABSORBER; }
    break;

  case 58:

/* Line 1806 of yacc.c  */
#line 396 "/home/yanxin/git/jrate/gcc/gcc/java/parse-scan.y"
    { pop_class_context (); }
    break;

  case 59:

/* Line 1806 of yacc.c  */
#line 398 "/home/yanxin/git/jrate/gcc/gcc/java/parse-scan.y"
    { pop_class_context (); }
    break;

  case 71:

/* Line 1806 of yacc.c  */
#line 424 "/home/yanxin/git/jrate/gcc/gcc/java/parse-scan.y"
    { USE_ABSORBER; }
    break;

  case 72:

/* Line 1806 of yacc.c  */
#line 426 "/home/yanxin/git/jrate/gcc/gcc/java/parse-scan.y"
    { modifier_value = 0; }
    break;

  case 77:

/* Line 1806 of yacc.c  */
#line 442 "/home/yanxin/git/jrate/gcc/gcc/java/parse-scan.y"
    { bracket_count = 0; USE_ABSORBER; }
    break;

  case 78:

/* Line 1806 of yacc.c  */
#line 444 "/home/yanxin/git/jrate/gcc/gcc/java/parse-scan.y"
    { ++bracket_count; }
    break;

  case 81:

/* Line 1806 of yacc.c  */
#line 455 "/home/yanxin/git/jrate/gcc/gcc/java/parse-scan.y"
    { ++method_depth; }
    break;

  case 82:

/* Line 1806 of yacc.c  */
#line 457 "/home/yanxin/git/jrate/gcc/gcc/java/parse-scan.y"
    { --method_depth; }
    break;

  case 83:

/* Line 1806 of yacc.c  */
#line 462 "/home/yanxin/git/jrate/gcc/gcc/java/parse-scan.y"
    { USE_ABSORBER; }
    break;

  case 85:

/* Line 1806 of yacc.c  */
#line 465 "/home/yanxin/git/jrate/gcc/gcc/java/parse-scan.y"
    { modifier_value = 0; }
    break;

  case 86:

/* Line 1806 of yacc.c  */
#line 467 "/home/yanxin/git/jrate/gcc/gcc/java/parse-scan.y"
    { 
                  report_main_declaration ((yyvsp[(3) - (4)].declarator));
		  modifier_value = 0;
		}
    break;

  case 87:

/* Line 1806 of yacc.c  */
#line 475 "/home/yanxin/git/jrate/gcc/gcc/java/parse-scan.y"
    { 
		  struct method_declarator *d;
		  NEW_METHOD_DECLARATOR (d, (yyvsp[(1) - (3)].node), NULL);
		  (yyval.declarator) = d;
		}
    break;

  case 88:

/* Line 1806 of yacc.c  */
#line 481 "/home/yanxin/git/jrate/gcc/gcc/java/parse-scan.y"
    { 
		  struct method_declarator *d;
		  NEW_METHOD_DECLARATOR (d, (yyvsp[(1) - (4)].node), (yyvsp[(3) - (4)].node));
		  (yyval.declarator) = d;
		}
    break;

  case 91:

/* Line 1806 of yacc.c  */
#line 492 "/home/yanxin/git/jrate/gcc/gcc/java/parse-scan.y"
    {
		  (yyval.node) = concat ((yyvsp[(1) - (3)].node), ",", (yyvsp[(3) - (3)].node), NULL);
		}
    break;

  case 92:

/* Line 1806 of yacc.c  */
#line 499 "/home/yanxin/git/jrate/gcc/gcc/java/parse-scan.y"
    { 
		  USE_ABSORBER;
		  if (bracket_count)
		    {
		      int i;
		      char *n = xmalloc (bracket_count + 1 + strlen ((yyval.node)));
		      for (i = 0; i < bracket_count; ++i)
			n[i] = '[';
		      strcpy (n + bracket_count, (yyval.node));
		      (yyval.node) = n;
		    }
		  else
		    (yyval.node) = (yyvsp[(1) - (2)].node);
		}
    break;

  case 93:

/* Line 1806 of yacc.c  */
#line 514 "/home/yanxin/git/jrate/gcc/gcc/java/parse-scan.y"
    {
		  if (bracket_count)
		    {
		      int i;
		      char *n = xmalloc (bracket_count + 1 + strlen ((yyval.node)));
		      for (i = 0; i < bracket_count; ++i)
			n[i] = '[';
		      strcpy (n + bracket_count, (yyval.node));
		      (yyval.node) = n;
		    }
		  else
		    (yyval.node) = (yyvsp[(2) - (3)].node);
		}
    break;

  case 96:

/* Line 1806 of yacc.c  */
#line 535 "/home/yanxin/git/jrate/gcc/gcc/java/parse-scan.y"
    { USE_ABSORBER; }
    break;

  case 97:

/* Line 1806 of yacc.c  */
#line 537 "/home/yanxin/git/jrate/gcc/gcc/java/parse-scan.y"
    { USE_ABSORBER; }
    break;

  case 101:

/* Line 1806 of yacc.c  */
#line 552 "/home/yanxin/git/jrate/gcc/gcc/java/parse-scan.y"
    { USE_ABSORBER; }
    break;

  case 103:

/* Line 1806 of yacc.c  */
#line 563 "/home/yanxin/git/jrate/gcc/gcc/java/parse-scan.y"
    { modifier_value = 0; }
    break;

  case 105:

/* Line 1806 of yacc.c  */
#line 568 "/home/yanxin/git/jrate/gcc/gcc/java/parse-scan.y"
    { modifier_value = 0; }
    break;

  case 106:

/* Line 1806 of yacc.c  */
#line 575 "/home/yanxin/git/jrate/gcc/gcc/java/parse-scan.y"
    { USE_ABSORBER; }
    break;

  case 107:

/* Line 1806 of yacc.c  */
#line 577 "/home/yanxin/git/jrate/gcc/gcc/java/parse-scan.y"
    { USE_ABSORBER; }
    break;

  case 114:

/* Line 1806 of yacc.c  */
#line 594 "/home/yanxin/git/jrate/gcc/gcc/java/parse-scan.y"
    { USE_ABSORBER; }
    break;

  case 115:

/* Line 1806 of yacc.c  */
#line 596 "/home/yanxin/git/jrate/gcc/gcc/java/parse-scan.y"
    { USE_ABSORBER; }
    break;

  case 118:

/* Line 1806 of yacc.c  */
#line 608 "/home/yanxin/git/jrate/gcc/gcc/java/parse-scan.y"
    { report_class_declaration ((yyvsp[(2) - (2)].node)); modifier_value = 0; }
    break;

  case 120:

/* Line 1806 of yacc.c  */
#line 611 "/home/yanxin/git/jrate/gcc/gcc/java/parse-scan.y"
    { report_class_declaration ((yyvsp[(3) - (3)].node)); modifier_value = 0; }
    break;

  case 122:

/* Line 1806 of yacc.c  */
#line 614 "/home/yanxin/git/jrate/gcc/gcc/java/parse-scan.y"
    { report_class_declaration ((yyvsp[(2) - (3)].node)); modifier_value = 0; }
    break;

  case 124:

/* Line 1806 of yacc.c  */
#line 617 "/home/yanxin/git/jrate/gcc/gcc/java/parse-scan.y"
    { report_class_declaration ((yyvsp[(3) - (4)].node)); modifier_value = 0; }
    break;

  case 128:

/* Line 1806 of yacc.c  */
#line 628 "/home/yanxin/git/jrate/gcc/gcc/java/parse-scan.y"
    { pop_class_context (); }
    break;

  case 129:

/* Line 1806 of yacc.c  */
#line 630 "/home/yanxin/git/jrate/gcc/gcc/java/parse-scan.y"
    { pop_class_context (); }
    break;

  case 152:

/* Line 1806 of yacc.c  */
#line 689 "/home/yanxin/git/jrate/gcc/gcc/java/parse-scan.y"
    { USE_ABSORBER; }
    break;

  case 153:

/* Line 1806 of yacc.c  */
#line 691 "/home/yanxin/git/jrate/gcc/gcc/java/parse-scan.y"
    { modifier_value = 0; }
    break;

  case 178:

/* Line 1806 of yacc.c  */
#line 732 "/home/yanxin/git/jrate/gcc/gcc/java/parse-scan.y"
    { USE_ABSORBER; }
    break;

  case 189:

/* Line 1806 of yacc.c  */
#line 760 "/home/yanxin/git/jrate/gcc/gcc/java/parse-scan.y"
    { ++complexity; }
    break;

  case 190:

/* Line 1806 of yacc.c  */
#line 765 "/home/yanxin/git/jrate/gcc/gcc/java/parse-scan.y"
    { ++complexity; }
    break;

  case 191:

/* Line 1806 of yacc.c  */
#line 770 "/home/yanxin/git/jrate/gcc/gcc/java/parse-scan.y"
    { ++complexity; }
    break;

  case 199:

/* Line 1806 of yacc.c  */
#line 790 "/home/yanxin/git/jrate/gcc/gcc/java/parse-scan.y"
    { ++complexity; }
    break;

  case 204:

/* Line 1806 of yacc.c  */
#line 805 "/home/yanxin/git/jrate/gcc/gcc/java/parse-scan.y"
    { ++complexity; }
    break;

  case 208:

/* Line 1806 of yacc.c  */
#line 822 "/home/yanxin/git/jrate/gcc/gcc/java/parse-scan.y"
    { ++complexity; }
    break;

  case 214:

/* Line 1806 of yacc.c  */
#line 840 "/home/yanxin/git/jrate/gcc/gcc/java/parse-scan.y"
    { ++complexity; }
    break;

  case 225:

/* Line 1806 of yacc.c  */
#line 865 "/home/yanxin/git/jrate/gcc/gcc/java/parse-scan.y"
    { ++complexity; }
    break;

  case 228:

/* Line 1806 of yacc.c  */
#line 874 "/home/yanxin/git/jrate/gcc/gcc/java/parse-scan.y"
    { ++complexity; }
    break;

  case 231:

/* Line 1806 of yacc.c  */
#line 881 "/home/yanxin/git/jrate/gcc/gcc/java/parse-scan.y"
    {yyerror ("Missing term"); RECOVER;}
    break;

  case 232:

/* Line 1806 of yacc.c  */
#line 883 "/home/yanxin/git/jrate/gcc/gcc/java/parse-scan.y"
    {yyerror ("';' expected"); RECOVER;}
    break;

  case 235:

/* Line 1806 of yacc.c  */
#line 892 "/home/yanxin/git/jrate/gcc/gcc/java/parse-scan.y"
    { USE_ABSORBER; }
    break;

  case 241:

/* Line 1806 of yacc.c  */
#line 907 "/home/yanxin/git/jrate/gcc/gcc/java/parse-scan.y"
    { ++complexity; }
    break;

  case 242:

/* Line 1806 of yacc.c  */
#line 911 "/home/yanxin/git/jrate/gcc/gcc/java/parse-scan.y"
    { ++complexity; }
    break;

  case 253:

/* Line 1806 of yacc.c  */
#line 933 "/home/yanxin/git/jrate/gcc/gcc/java/parse-scan.y"
    { USE_ABSORBER; }
    break;

  case 254:

/* Line 1806 of yacc.c  */
#line 938 "/home/yanxin/git/jrate/gcc/gcc/java/parse-scan.y"
    { USE_ABSORBER; }
    break;

  case 255:

/* Line 1806 of yacc.c  */
#line 940 "/home/yanxin/git/jrate/gcc/gcc/java/parse-scan.y"
    { USE_ABSORBER; }
    break;

  case 256:

/* Line 1806 of yacc.c  */
#line 942 "/home/yanxin/git/jrate/gcc/gcc/java/parse-scan.y"
    { USE_ABSORBER; }
    break;

  case 257:

/* Line 1806 of yacc.c  */
#line 944 "/home/yanxin/git/jrate/gcc/gcc/java/parse-scan.y"
    { USE_ABSORBER; }
    break;

  case 265:

/* Line 1806 of yacc.c  */
#line 959 "/home/yanxin/git/jrate/gcc/gcc/java/parse-scan.y"
    { report_class_declaration (anonymous_context); }
    break;

  case 267:

/* Line 1806 of yacc.c  */
#line 962 "/home/yanxin/git/jrate/gcc/gcc/java/parse-scan.y"
    { report_class_declaration (anonymous_context); }
    break;

  case 269:

/* Line 1806 of yacc.c  */
#line 968 "/home/yanxin/git/jrate/gcc/gcc/java/parse-scan.y"
    { USE_ABSORBER; }
    break;

  case 283:

/* Line 1806 of yacc.c  */
#line 1000 "/home/yanxin/git/jrate/gcc/gcc/java/parse-scan.y"
    { bracket_count = 1; }
    break;

  case 284:

/* Line 1806 of yacc.c  */
#line 1002 "/home/yanxin/git/jrate/gcc/gcc/java/parse-scan.y"
    { bracket_count++; }
    break;

  case 287:

/* Line 1806 of yacc.c  */
#line 1015 "/home/yanxin/git/jrate/gcc/gcc/java/parse-scan.y"
    { USE_ABSORBER; ++complexity; }
    break;

  case 288:

/* Line 1806 of yacc.c  */
#line 1017 "/home/yanxin/git/jrate/gcc/gcc/java/parse-scan.y"
    { USE_ABSORBER; ++complexity; }
    break;

  case 289:

/* Line 1806 of yacc.c  */
#line 1018 "/home/yanxin/git/jrate/gcc/gcc/java/parse-scan.y"
    { ++complexity; }
    break;

  case 290:

/* Line 1806 of yacc.c  */
#line 1019 "/home/yanxin/git/jrate/gcc/gcc/java/parse-scan.y"
    { ++complexity; }
    break;

  case 291:

/* Line 1806 of yacc.c  */
#line 1020 "/home/yanxin/git/jrate/gcc/gcc/java/parse-scan.y"
    { ++complexity; }
    break;

  case 292:

/* Line 1806 of yacc.c  */
#line 1021 "/home/yanxin/git/jrate/gcc/gcc/java/parse-scan.y"
    { ++complexity; }
    break;

  case 293:

/* Line 1806 of yacc.c  */
#line 1026 "/home/yanxin/git/jrate/gcc/gcc/java/parse-scan.y"
    { USE_ABSORBER; }
    break;

  case 296:

/* Line 1806 of yacc.c  */
#line 1033 "/home/yanxin/git/jrate/gcc/gcc/java/parse-scan.y"
    { USE_ABSORBER; }
    break;

  case 343:

/* Line 1806 of yacc.c  */
#line 1129 "/home/yanxin/git/jrate/gcc/gcc/java/parse-scan.y"
    { ++complexity; }
    break;

  case 345:

/* Line 1806 of yacc.c  */
#line 1135 "/home/yanxin/git/jrate/gcc/gcc/java/parse-scan.y"
    { ++complexity; }
    break;

  case 347:

/* Line 1806 of yacc.c  */
#line 1141 "/home/yanxin/git/jrate/gcc/gcc/java/parse-scan.y"
    { ++complexity; }
    break;

  case 351:

/* Line 1806 of yacc.c  */
#line 1155 "/home/yanxin/git/jrate/gcc/gcc/java/parse-scan.y"
    { USE_ABSORBER; }
    break;



/* Line 1806 of yacc.c  */
#line 3415 "ps17937.c"
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
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
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



/* Line 2067 of yacc.c  */
#line 1173 "/home/yanxin/git/jrate/gcc/gcc/java/parse-scan.y"


/* Create a new parser context */

void
java_push_parser_context ()
{
  struct parser_ctxt *new = 
    (struct parser_ctxt *) xcalloc (1, sizeof (struct parser_ctxt));

  new->next = ctxp;
  ctxp = new;
}  

static void
push_class_context (name)
    const char *name;
{
  struct class_context *ctx;

  ctx = (struct class_context *) xmalloc (sizeof (struct class_context));
  ctx->name = (char *) name;
  ctx->next = current_class_context;
  current_class_context = ctx;
}

static void
pop_class_context ()
{
  struct class_context *ctx;

  if (current_class_context == NULL)
    return;

  ctx = current_class_context->next;
  if (current_class_context->name != anonymous_context)
    free (current_class_context->name);
  free (current_class_context);

  current_class_context = ctx;
  if (current_class_context == NULL)
    anonymous_count = 0;
}

/* Recursively construct the class name.  This is just a helper
   function for get_class_name().  */
static int
make_class_name_recursive (stack, ctx)
     struct obstack *stack;
     struct class_context *ctx;
{
  if (! ctx)
    return 0;

  make_class_name_recursive (stack, ctx->next);

  /* Replace an anonymous context with the appropriate counter value.  */
  if (ctx->name == anonymous_context)
    {
      char buf[50];
      ++anonymous_count;
      sprintf (buf, "%d", anonymous_count);
      ctx->name = xstrdup (buf);
    }

  obstack_grow (stack, ctx->name, strlen (ctx->name));
  obstack_1grow (stack, '$');

  return ISDIGIT (ctx->name[0]);
}

/* Return a newly allocated string holding the name of the class.  */
static char *
get_class_name ()
{
  char *result;
  int last_was_digit;
  struct obstack name_stack;

  obstack_init (&name_stack);

  /* Duplicate the logic of parse.y:maybe_make_nested_class_name().  */
  last_was_digit = make_class_name_recursive (&name_stack,
					      current_class_context->next);

  if (! last_was_digit
      && method_depth
      && current_class_context->name != anonymous_context)
    {
      char buf[50];
      ++anonymous_count;
      sprintf (buf, "%d", anonymous_count);
      obstack_grow (&name_stack, buf, strlen (buf));
      obstack_1grow (&name_stack, '$');
    }

  if (current_class_context->name == anonymous_context)
    {
      char buf[50];
      ++anonymous_count;
      sprintf (buf, "%d", anonymous_count);
      current_class_context->name = xstrdup (buf);
      obstack_grow0 (&name_stack, buf, strlen (buf));
    }
  else
    obstack_grow0 (&name_stack, current_class_context->name,
		   strlen (current_class_context->name));

  result = xstrdup (obstack_finish (&name_stack));
  obstack_free (&name_stack, NULL);

  return result;
}

/* Actions defined here */

static void
report_class_declaration (name)
     const char * name;
{
  extern int flag_dump_class, flag_list_filename;

  push_class_context (name);
  if (flag_dump_class)
    {
      char *name = get_class_name ();

      if (!previous_output)
	{
	  if (flag_list_filename)
	    fprintf (out, "%s: ", input_filename);
	  previous_output = 1;
	}

      if (package_name)
	fprintf (out, "%s.%s ", package_name, name);
      else
	fprintf (out, "%s ", name);

      free (name);
    }
}

static void
report_main_declaration (declarator)
     struct method_declarator *declarator;
{
  extern int flag_find_main;

  if (flag_find_main
      && modifier_value == 2
      && !strcmp (declarator->method_name, "main") 
      && declarator->args 
      && declarator->args [0] == '[' 
      && (! strcmp (declarator->args+1, "String")
	  || ! strcmp (declarator->args + 1, "java.lang.String"))
      && current_class_context)
    {
      if (!previous_output)
	{
	  char *name = get_class_name ();
	  if (package_name)
	    fprintf (out, "%s.%s ", package_name, name);
	  else
	    fprintf (out, "%s", name);
	  free (name);
	  previous_output = 1;
	}
    }
}

void
report ()
{
  extern int flag_complexity;
  if (flag_complexity)
    fprintf (out, "%s %d\n", input_filename, complexity);
}

/* Reset global status used by the report functions.  */

void reset_report ()
{
  previous_output = 0;
  package_name = NULL;
  current_class_context = NULL;
  complexity = 0;
}

void
yyerror (msg)
     const char *msg ATTRIBUTE_UNUSED;
{
  fprintf (stderr, "%s: %d: %s\n", input_filename, lineno, msg);
  exit (1);
}

