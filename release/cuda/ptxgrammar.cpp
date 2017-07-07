/* A Bison parser, made by GNU Bison 3.0.2.  */

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
#define YYBISON_VERSION "3.0.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 1

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 7 "runtime/ocelot/parser/implementation/ptxgrammar.yy" /* yacc.c:339  */

	#include <iostream>
	#include <ocelot/parser/interface/PTXParser.h>
	#include <ocelot/parser/interface/PTXLexer.h>
	#include <hydrazine/interface/debug.h>
	#include <cassert>
	#include <cstring>

	#define YYERROR_VERBOSE 1

	#ifdef REPORT_BASE
	#undef REPORT_BASE
	#endif

	#define REPORT_BASE 0

	namespace ptx
	{
	
	int yylex( YYSTYPE* token, YYLTYPE* location, parser::PTXLexer& lexer, 
		parser::PTXParser::State& state );
	void yyerror( YYLTYPE* location, parser::PTXLexer& lexer, 
		parser::PTXParser::State& state, char const* message );
	
	std::string yyTypeToString( int );
	

#line 94 "/home/soroosh/Project/gdev/release/cuda/ptxgrammar.cpp" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
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
   by #include "ptxgrammar.hpp".  */
#ifndef YY_YY_HOME_SOROOSH_PROJECT_GDEV_RELEASE_CUDA_PTXGRAMMAR_HPP_INCLUDED
# define YY_YY_HOME_SOROOSH_PROJECT_GDEV_RELEASE_CUDA_PTXGRAMMAR_HPP_INCLUDED
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
    TOKEN_LABEL = 258,
    TOKEN_IDENTIFIER = 259,
    TOKEN_STRING = 260,
    TOKEN_METADATA = 261,
    TOKEN_INV_PREDICATE_IDENTIFIER = 262,
    TOKEN_PREDICATE_IDENTIFIER = 263,
    OPCODE_COPYSIGN = 264,
    OPCODE_COS = 265,
    OPCODE_SQRT = 266,
    OPCODE_ADD = 267,
    OPCODE_RSQRT = 268,
    OPCODE_MUL = 269,
    OPCODE_SAD = 270,
    OPCODE_SUB = 271,
    OPCODE_EX2 = 272,
    OPCODE_LG2 = 273,
    OPCODE_ADDC = 274,
    OPCODE_RCP = 275,
    OPCODE_SIN = 276,
    OPCODE_REM = 277,
    OPCODE_MUL24 = 278,
    OPCODE_MAD24 = 279,
    OPCODE_DIV = 280,
    OPCODE_ABS = 281,
    OPCODE_NEG = 282,
    OPCODE_MIN = 283,
    OPCODE_MAX = 284,
    OPCODE_MAD = 285,
    OPCODE_SET = 286,
    OPCODE_SETP = 287,
    OPCODE_SELP = 288,
    OPCODE_SLCT = 289,
    OPCODE_MOV = 290,
    OPCODE_ST = 291,
    OPCODE_CVT = 292,
    OPCODE_AND = 293,
    OPCODE_XOR = 294,
    OPCODE_OR = 295,
    OPCODE_CVTA = 296,
    OPCODE_ISSPACEP = 297,
    OPCODE_LDU = 298,
    OPCODE_SULD = 299,
    OPCODE_TXQ = 300,
    OPCODE_SUST = 301,
    OPCODE_SURED = 302,
    OPCODE_SUQ = 303,
    OPCODE_BRA = 304,
    OPCODE_CALL = 305,
    OPCODE_RET = 306,
    OPCODE_EXIT = 307,
    OPCODE_TRAP = 308,
    OPCODE_BRKPT = 309,
    OPCODE_SUBC = 310,
    OPCODE_TEX = 311,
    OPCODE_LD = 312,
    OPCODE_BARSYNC = 313,
    OPCODE_ATOM = 314,
    OPCODE_RED = 315,
    OPCODE_NOT = 316,
    OPCODE_CNOT = 317,
    OPCODE_VOTE = 318,
    OPCODE_SHR = 319,
    OPCODE_SHL = 320,
    OPCODE_FMA = 321,
    OPCODE_MEMBAR = 322,
    OPCODE_PMEVENT = 323,
    OPCODE_POPC = 324,
    OPCODE_PRMT = 325,
    OPCODE_CLZ = 326,
    OPCODE_BFIND = 327,
    OPCODE_BREV = 328,
    OPCODE_BFI = 329,
    OPCODE_BFE = 330,
    OPCODE_TESTP = 331,
    OPCODE_TLD4 = 332,
    OPCODE_BAR = 333,
    OPCODE_PREFETCH = 334,
    OPCODE_PREFETCHU = 335,
    PREPROCESSOR_INCLUDE = 336,
    PREPROCESSOR_DEFINE = 337,
    PREPROCESSOR_IF = 338,
    PREPROCESSOR_IFDEF = 339,
    PREPROCESSOR_ELSE = 340,
    PREPROCESSOR_ENDIF = 341,
    PREPROCESSOR_LINE = 342,
    PREPROCESSOR_FILE = 343,
    TOKEN_ENTRY = 344,
    TOKEN_EXTERN = 345,
    TOKEN_FILE = 346,
    TOKEN_VISIBLE = 347,
    TOKEN_LOC = 348,
    TOKEN_FUNCTION = 349,
    TOKEN_STRUCT = 350,
    TOKEN_UNION = 351,
    TOKEN_TARGET = 352,
    TOKEN_VERSION = 353,
    TOKEN_SECTION = 354,
    TOKEN_ADDRESS_SIZE = 355,
    TOKEN_WEAK = 356,
    TOKEN_MAXNREG = 357,
    TOKEN_MAXNTID = 358,
    TOKEN_MAXNCTAPERSM = 359,
    TOKEN_MINNCTAPERSM = 360,
    TOKEN_SM11 = 361,
    TOKEN_SM12 = 362,
    TOKEN_SM13 = 363,
    TOKEN_SM20 = 364,
    TOKEN_MAP_F64_TO_F32 = 365,
    TOKEN_SM21 = 366,
    TOKEN_SM10 = 367,
    TOKEN_SM30 = 368,
    TOKEN_SM35 = 369,
    TOKEN_TEXMODE_INDEPENDENT = 370,
    TOKEN_TEXMODE_UNIFIED = 371,
    TOKEN_CONST = 372,
    TOKEN_GLOBAL = 373,
    TOKEN_LOCAL = 374,
    TOKEN_PARAM = 375,
    TOKEN_PRAGMA = 376,
    TOKEN_PTR = 377,
    TOKEN_REG = 378,
    TOKEN_SHARED = 379,
    TOKEN_TEXREF = 380,
    TOKEN_CTA = 381,
    TOKEN_SURFREF = 382,
    TOKEN_GL = 383,
    TOKEN_SYS = 384,
    TOKEN_SAMPLERREF = 385,
    TOKEN_U32 = 386,
    TOKEN_S32 = 387,
    TOKEN_S8 = 388,
    TOKEN_S16 = 389,
    TOKEN_S64 = 390,
    TOKEN_U8 = 391,
    TOKEN_U16 = 392,
    TOKEN_U64 = 393,
    TOKEN_B8 = 394,
    TOKEN_B16 = 395,
    TOKEN_B32 = 396,
    TOKEN_B64 = 397,
    TOKEN_F16 = 398,
    TOKEN_F64 = 399,
    TOKEN_F32 = 400,
    TOKEN_PRED = 401,
    TOKEN_EQ = 402,
    TOKEN_NE = 403,
    TOKEN_LT = 404,
    TOKEN_LE = 405,
    TOKEN_GT = 406,
    TOKEN_GE = 407,
    TOKEN_LS = 408,
    TOKEN_HS = 409,
    TOKEN_EQU = 410,
    TOKEN_NEU = 411,
    TOKEN_LTU = 412,
    TOKEN_LEU = 413,
    TOKEN_GTU = 414,
    TOKEN_GEU = 415,
    TOKEN_NUM = 416,
    TOKEN_NAN = 417,
    TOKEN_HI = 418,
    TOKEN_LO = 419,
    TOKEN_AND = 420,
    TOKEN_OR = 421,
    TOKEN_XOR = 422,
    TOKEN_RN = 423,
    TOKEN_RM = 424,
    TOKEN_RZ = 425,
    TOKEN_RP = 426,
    TOKEN_SAT = 427,
    TOKEN_VOLATILE = 428,
    TOKEN_TAIL = 429,
    TOKEN_UNI = 430,
    TOKEN_ALIGN = 431,
    TOKEN_BYTE = 432,
    TOKEN_WIDE = 433,
    TOKEN_CARRY = 434,
    TOKEN_RNI = 435,
    TOKEN_RMI = 436,
    TOKEN_RZI = 437,
    TOKEN_RPI = 438,
    TOKEN_FTZ = 439,
    TOKEN_APPROX = 440,
    TOKEN_FULL = 441,
    TOKEN_SHIFT_AMOUNT = 442,
    TOKEN_R = 443,
    TOKEN_G = 444,
    TOKEN_B = 445,
    TOKEN_A = 446,
    TOKEN_TO = 447,
    TOKEN_CALL_PROTOTYPE = 448,
    TOKEN_CALL_TARGETS = 449,
    TOKEN_V2 = 450,
    TOKEN_V4 = 451,
    TOKEN_X = 452,
    TOKEN_Y = 453,
    TOKEN_Z = 454,
    TOKEN_W = 455,
    TOKEN_ANY = 456,
    TOKEN_ALL = 457,
    TOKEN_MIN = 458,
    TOKEN_MAX = 459,
    TOKEN_DEC = 460,
    TOKEN_INC = 461,
    TOKEN_ADD = 462,
    TOKEN_CAS = 463,
    TOKEN_EXCH = 464,
    TOKEN_1D = 465,
    TOKEN_2D = 466,
    TOKEN_3D = 467,
    TOKEN_A1D = 468,
    TOKEN_A2D = 469,
    TOKEN_CUBE = 470,
    TOKEN_ACUBE = 471,
    TOKEN_CA = 472,
    TOKEN_WB = 473,
    TOKEN_CG = 474,
    TOKEN_CS = 475,
    TOKEN_LU = 476,
    TOKEN_CV = 477,
    TOKEN_WT = 478,
    TOKEN_L1 = 479,
    TOKEN_L2 = 480,
    TOKEN_P = 481,
    TOKEN_WIDTH = 482,
    TOKEN_DEPTH = 483,
    TOKEN_HEIGHT = 484,
    TOKEN_NORMALIZED_COORDS = 485,
    TOKEN_FILTER_MODE = 486,
    TOKEN_ADDR_MODE_0 = 487,
    TOKEN_ADDR_MODE_1 = 488,
    TOKEN_ADDR_MODE_2 = 489,
    TOKEN_CHANNEL_DATA_TYPE = 490,
    TOKEN_CHANNEL_ORDER = 491,
    TOKEN_TRAP = 492,
    TOKEN_CLAMP = 493,
    TOKEN_ZERO = 494,
    TOKEN_ARRIVE = 495,
    TOKEN_RED = 496,
    TOKEN_POPC = 497,
    TOKEN_SYNC = 498,
    TOKEN_BALLOT = 499,
    TOKEN_F4E = 500,
    TOKEN_B4E = 501,
    TOKEN_RC8 = 502,
    TOKEN_ECL = 503,
    TOKEN_ECR = 504,
    TOKEN_RC16 = 505,
    TOKEN_FINITE = 506,
    TOKEN_INFINITE = 507,
    TOKEN_NUMBER = 508,
    TOKEN_NOT_A_NUMBER = 509,
    TOKEN_NORMAL = 510,
    TOKEN_SUBNORMAL = 511,
    TOKEN_DECIMAL_CONSTANT = 512,
    TOKEN_UNSIGNED_DECIMAL_CONSTANT = 513,
    TOKEN_SINGLE_CONSTANT = 514,
    TOKEN_DOUBLE_CONSTANT = 515
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE YYSTYPE;
union YYSTYPE
{
#line 36 "runtime/ocelot/parser/implementation/ptxgrammar.yy" /* yacc.c:355  */

	char text[1024];
	long long int value;
	long long unsigned int uvalue;

	double doubleFloat;
	float singleFloat;

#line 404 "/home/soroosh/Project/gdev/release/cuda/ptxgrammar.cpp" /* yacc.c:355  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif

/* Location type.  */
#if ! defined YYLTYPE && ! defined YYLTYPE_IS_DECLARED
typedef struct YYLTYPE YYLTYPE;
struct YYLTYPE
{
  int first_line;
  int first_column;
  int last_line;
  int last_column;
};
# define YYLTYPE_IS_DECLARED 1
# define YYLTYPE_IS_TRIVIAL 1
#endif



int yyparse (parser::PTXLexer& lexer, parser::PTXParser::State& state);

#endif /* !YY_YY_HOME_SOROOSH_PROJECT_GDEV_RELEASE_CUDA_PTXGRAMMAR_HPP_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 432 "/home/soroosh/Project/gdev/release/cuda/ptxgrammar.cpp" /* yacc.c:358  */

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

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
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
         || (defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL \
             && defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
  YYLTYPE yyls_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE) + sizeof (YYLTYPE)) \
      + 2 * YYSTACK_GAP_MAXIMUM)

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
#define YYFINAL  85
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   3164

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  278
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  264
/* YYNRULES -- Number of rules.  */
#define YYNRULES  691
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  1277

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   515

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint16 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   274,     2,     2,     2,     2,     2,     2,
     271,   272,     2,   275,   262,   276,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,   273,   270,
     268,   267,   269,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,   265,     2,   266,     2,   261,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   263,   277,   264,     2,     2,     2,     2,
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
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   157,   158,   159,   160,   161,   162,   163,   164,
     165,   166,   167,   168,   169,   170,   171,   172,   173,   174,
     175,   176,   177,   178,   179,   180,   181,   182,   183,   184,
     185,   186,   187,   188,   189,   190,   191,   192,   193,   194,
     195,   196,   197,   198,   199,   200,   201,   202,   203,   204,
     205,   206,   207,   208,   209,   210,   211,   212,   213,   214,
     215,   216,   217,   218,   219,   220,   221,   222,   223,   224,
     225,   226,   227,   228,   229,   230,   231,   232,   233,   234,
     235,   236,   237,   238,   239,   240,   241,   242,   243,   244,
     245,   246,   247,   248,   249,   250,   251,   252,   253,   254,
     255,   256,   257,   258,   259,   260
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   150,   150,   150,   150,   150,   151,   151,   151,   151,
     152,   152,   152,   154,   159,   159,   159,   159,   160,   162,
     162,   164,   164,   165,   165,   165,   166,   166,   166,   168,
     173,   178,   178,   178,   179,   179,   181,   186,   191,   197,
     203,   209,   213,   218,   223,   224,   226,   226,   227,   227,
     229,   234,   239,   240,   242,   242,   242,   243,   245,   250,
     255,   256,   258,   258,   258,   259,   261,   261,   261,   261,
     261,   262,   262,   262,   264,   265,   265,   267,   267,   267,
     268,   273,   273,   274,   276,   281,   286,   286,   286,   287,
     287,   289,   294,   296,   300,   300,   302,   302,   302,   302,
     302,   303,   303,   303,   303,   303,   303,   304,   304,   304,
     304,   304,   306,   311,   316,   316,   318,   323,   328,   329,
     331,   333,   333,   333,   333,   334,   339,   340,   341,   342,
     343,   344,   345,   346,   347,   348,   349,   350,   352,   357,
     362,   368,   372,   374,   376,   381,   381,   382,   384,   389,
     394,   399,   404,   405,   407,   409,   414,   421,   428,   435,
     435,   437,   442,   447,   452,   457,   462,   469,   474,   479,
     484,   489,   494,   499,   500,   501,   503,   505,   507,   507,
     509,   514,   519,   520,   522,   528,   534,   536,   541,   542,
     544,   549,   551,   556,   556,   556,   556,   557,   557,   559,
     561,   566,   572,   574,   575,   577,   582,   587,   592,   598,
     603,   603,   605,   610,   615,   620,   625,   625,   625,   625,
     626,   627,   628,   628,   630,   635,   640,   646,   650,   650,
     650,   651,   651,   653,   658,   663,   663,   663,   663,   663,
     664,   664,   664,   664,   664,   665,   665,   665,   665,   665,
     666,   666,   666,   666,   666,   667,   667,   667,   667,   667,
     668,   668,   668,   669,   669,   669,   670,   670,   670,   671,
     671,   671,   671,   671,   672,   672,   672,   672,   672,   673,
     673,   673,   673,   673,   674,   674,   674,   674,   674,   675,
     675,   675,   675,   675,   676,   676,   676,   676,   676,   677,
     677,   677,   678,   678,   680,   687,   693,   698,   703,   708,
     709,   710,   710,   710,   712,   712,   714,   720,   721,   722,
     722,   724,   730,   735,   740,   745,   745,   745,   745,   747,
     753,   757,   762,   767,   772,   777,   782,   787,   792,   797,
     802,   803,   803,   805,   805,   805,   807,   809,   810,   815,
     820,   826,   830,   830,   830,   830,   831,   831,   831,   831,
     833,   838,   843,   843,   845,   845,   845,   846,   846,   846,
     846,   846,   846,   846,   847,   847,   847,   847,   847,   847,
     847,   847,   847,   847,   848,   848,   848,   848,   848,   848,
     848,   848,   848,   849,   849,   849,   849,   849,   849,   849,
     850,   850,   850,   850,   850,   850,   850,   850,   850,   850,
     850,   851,   851,   851,   851,   851,   851,   853,   853,   854,
     854,   854,   854,   854,   856,   862,   862,   862,   862,   863,
     865,   870,   876,   881,   881,   883,   888,   888,   890,   890,
     892,   898,   898,   900,   907,   911,   916,   921,   926,   927,
     929,   929,   931,   932,   934,   939,   944,   949,   950,   950,
     952,   957,   962,   964,   970,   975,   980,   980,   982,   988,
     994,   998,   998,  1000,  1007,  1007,  1007,  1007,  1007,  1008,
    1008,  1008,  1008,  1008,  1010,  1015,  1017,  1021,  1027,  1033,
    1039,  1043,  1049,  1055,  1060,  1060,  1060,  1065,  1065,  1067,
    1067,  1069,  1074,  1079,  1084,  1089,  1094,  1099,  1099,  1101,
    1102,  1103,  1104,  1106,  1112,  1112,  1114,  1119,  1130,  1135,
    1140,  1145,  1147,  1147,  1148,  1150,  1155,  1160,  1165,  1170,
    1173,  1177,  1180,  1185,  1190,  1190,  1192,  1192,  1192,  1194,
    1199,  1201,  1201,  1203,  1209,  1211,  1216,  1222,  1222,  1224,
    1229,  1234,  1239,  1239,  1239,  1241,  1246,  1248,  1253,  1258,
    1263,  1263,  1265,  1270,  1275,  1280,  1280,  1280,  1281,  1281,
    1281,  1283,  1289,  1293,  1293,  1298,  1303,  1308,  1314,  1319,
    1320,  1325,  1325,  1327,  1333,  1333,  1333,  1333,  1333,  1334,
    1334,  1334,  1336,  1341,  1347,  1352,  1357,  1357,  1357,  1357,
    1357,  1357,  1358,  1358,  1358,  1358,  1358,  1358,  1359,  1359,
    1359,  1359,  1359,  1359,  1361,  1366,  1366,  1366,  1368,  1373,
    1378,  1388,  1389,  1391,  1398,  1408,  1409,  1411,  1411,  1413,
    1419,  1425,  1431,  1438,  1443,  1443,  1443,  1443,  1443,  1443,
    1443,  1445,  1450,  1450,  1450,  1451,  1451,  1451,  1453,  1458,
    1463,  1470,  1470,  1470,  1470,  1472,  1477,  1487,  1487,  1487,
    1488,  1488,  1488,  1489,  1489,  1489,  1490,  1495,  1501,  1507,
    1507,  1507,  1507,  1512,  1512,  1514,  1514,  1514,  1519,  1519,
    1524,  1533,  1542,  1554,  1559,  1559,  1559,  1559,  1561,  1566,
    1566,  1568
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "TOKEN_LABEL", "TOKEN_IDENTIFIER",
  "TOKEN_STRING", "TOKEN_METADATA", "TOKEN_INV_PREDICATE_IDENTIFIER",
  "TOKEN_PREDICATE_IDENTIFIER", "OPCODE_COPYSIGN", "OPCODE_COS",
  "OPCODE_SQRT", "OPCODE_ADD", "OPCODE_RSQRT", "OPCODE_MUL", "OPCODE_SAD",
  "OPCODE_SUB", "OPCODE_EX2", "OPCODE_LG2", "OPCODE_ADDC", "OPCODE_RCP",
  "OPCODE_SIN", "OPCODE_REM", "OPCODE_MUL24", "OPCODE_MAD24", "OPCODE_DIV",
  "OPCODE_ABS", "OPCODE_NEG", "OPCODE_MIN", "OPCODE_MAX", "OPCODE_MAD",
  "OPCODE_SET", "OPCODE_SETP", "OPCODE_SELP", "OPCODE_SLCT", "OPCODE_MOV",
  "OPCODE_ST", "OPCODE_CVT", "OPCODE_AND", "OPCODE_XOR", "OPCODE_OR",
  "OPCODE_CVTA", "OPCODE_ISSPACEP", "OPCODE_LDU", "OPCODE_SULD",
  "OPCODE_TXQ", "OPCODE_SUST", "OPCODE_SURED", "OPCODE_SUQ", "OPCODE_BRA",
  "OPCODE_CALL", "OPCODE_RET", "OPCODE_EXIT", "OPCODE_TRAP",
  "OPCODE_BRKPT", "OPCODE_SUBC", "OPCODE_TEX", "OPCODE_LD",
  "OPCODE_BARSYNC", "OPCODE_ATOM", "OPCODE_RED", "OPCODE_NOT",
  "OPCODE_CNOT", "OPCODE_VOTE", "OPCODE_SHR", "OPCODE_SHL", "OPCODE_FMA",
  "OPCODE_MEMBAR", "OPCODE_PMEVENT", "OPCODE_POPC", "OPCODE_PRMT",
  "OPCODE_CLZ", "OPCODE_BFIND", "OPCODE_BREV", "OPCODE_BFI", "OPCODE_BFE",
  "OPCODE_TESTP", "OPCODE_TLD4", "OPCODE_BAR", "OPCODE_PREFETCH",
  "OPCODE_PREFETCHU", "PREPROCESSOR_INCLUDE", "PREPROCESSOR_DEFINE",
  "PREPROCESSOR_IF", "PREPROCESSOR_IFDEF", "PREPROCESSOR_ELSE",
  "PREPROCESSOR_ENDIF", "PREPROCESSOR_LINE", "PREPROCESSOR_FILE",
  "TOKEN_ENTRY", "TOKEN_EXTERN", "TOKEN_FILE", "TOKEN_VISIBLE",
  "TOKEN_LOC", "TOKEN_FUNCTION", "TOKEN_STRUCT", "TOKEN_UNION",
  "TOKEN_TARGET", "TOKEN_VERSION", "TOKEN_SECTION", "TOKEN_ADDRESS_SIZE",
  "TOKEN_WEAK", "TOKEN_MAXNREG", "TOKEN_MAXNTID", "TOKEN_MAXNCTAPERSM",
  "TOKEN_MINNCTAPERSM", "TOKEN_SM11", "TOKEN_SM12", "TOKEN_SM13",
  "TOKEN_SM20", "TOKEN_MAP_F64_TO_F32", "TOKEN_SM21", "TOKEN_SM10",
  "TOKEN_SM30", "TOKEN_SM35", "TOKEN_TEXMODE_INDEPENDENT",
  "TOKEN_TEXMODE_UNIFIED", "TOKEN_CONST", "TOKEN_GLOBAL", "TOKEN_LOCAL",
  "TOKEN_PARAM", "TOKEN_PRAGMA", "TOKEN_PTR", "TOKEN_REG", "TOKEN_SHARED",
  "TOKEN_TEXREF", "TOKEN_CTA", "TOKEN_SURFREF", "TOKEN_GL", "TOKEN_SYS",
  "TOKEN_SAMPLERREF", "TOKEN_U32", "TOKEN_S32", "TOKEN_S8", "TOKEN_S16",
  "TOKEN_S64", "TOKEN_U8", "TOKEN_U16", "TOKEN_U64", "TOKEN_B8",
  "TOKEN_B16", "TOKEN_B32", "TOKEN_B64", "TOKEN_F16", "TOKEN_F64",
  "TOKEN_F32", "TOKEN_PRED", "TOKEN_EQ", "TOKEN_NE", "TOKEN_LT",
  "TOKEN_LE", "TOKEN_GT", "TOKEN_GE", "TOKEN_LS", "TOKEN_HS", "TOKEN_EQU",
  "TOKEN_NEU", "TOKEN_LTU", "TOKEN_LEU", "TOKEN_GTU", "TOKEN_GEU",
  "TOKEN_NUM", "TOKEN_NAN", "TOKEN_HI", "TOKEN_LO", "TOKEN_AND",
  "TOKEN_OR", "TOKEN_XOR", "TOKEN_RN", "TOKEN_RM", "TOKEN_RZ", "TOKEN_RP",
  "TOKEN_SAT", "TOKEN_VOLATILE", "TOKEN_TAIL", "TOKEN_UNI", "TOKEN_ALIGN",
  "TOKEN_BYTE", "TOKEN_WIDE", "TOKEN_CARRY", "TOKEN_RNI", "TOKEN_RMI",
  "TOKEN_RZI", "TOKEN_RPI", "TOKEN_FTZ", "TOKEN_APPROX", "TOKEN_FULL",
  "TOKEN_SHIFT_AMOUNT", "TOKEN_R", "TOKEN_G", "TOKEN_B", "TOKEN_A",
  "TOKEN_TO", "TOKEN_CALL_PROTOTYPE", "TOKEN_CALL_TARGETS", "TOKEN_V2",
  "TOKEN_V4", "TOKEN_X", "TOKEN_Y", "TOKEN_Z", "TOKEN_W", "TOKEN_ANY",
  "TOKEN_ALL", "TOKEN_MIN", "TOKEN_MAX", "TOKEN_DEC", "TOKEN_INC",
  "TOKEN_ADD", "TOKEN_CAS", "TOKEN_EXCH", "TOKEN_1D", "TOKEN_2D",
  "TOKEN_3D", "TOKEN_A1D", "TOKEN_A2D", "TOKEN_CUBE", "TOKEN_ACUBE",
  "TOKEN_CA", "TOKEN_WB", "TOKEN_CG", "TOKEN_CS", "TOKEN_LU", "TOKEN_CV",
  "TOKEN_WT", "TOKEN_L1", "TOKEN_L2", "TOKEN_P", "TOKEN_WIDTH",
  "TOKEN_DEPTH", "TOKEN_HEIGHT", "TOKEN_NORMALIZED_COORDS",
  "TOKEN_FILTER_MODE", "TOKEN_ADDR_MODE_0", "TOKEN_ADDR_MODE_1",
  "TOKEN_ADDR_MODE_2", "TOKEN_CHANNEL_DATA_TYPE", "TOKEN_CHANNEL_ORDER",
  "TOKEN_TRAP", "TOKEN_CLAMP", "TOKEN_ZERO", "TOKEN_ARRIVE", "TOKEN_RED",
  "TOKEN_POPC", "TOKEN_SYNC", "TOKEN_BALLOT", "TOKEN_F4E", "TOKEN_B4E",
  "TOKEN_RC8", "TOKEN_ECL", "TOKEN_ECR", "TOKEN_RC16", "TOKEN_FINITE",
  "TOKEN_INFINITE", "TOKEN_NUMBER", "TOKEN_NOT_A_NUMBER", "TOKEN_NORMAL",
  "TOKEN_SUBNORMAL", "TOKEN_DECIMAL_CONSTANT",
  "TOKEN_UNSIGNED_DECIMAL_CONSTANT", "TOKEN_SINGLE_CONSTANT",
  "TOKEN_DOUBLE_CONSTANT", "'_'", "','", "'{'", "'}'", "'['", "']'", "'='",
  "'<'", "'>'", "';'", "'('", "')'", "':'", "'!'", "'+'", "'-'", "'|'",
  "$accept", "nonEntryStatements", "nonEntryStatement", "statement",
  "statements", "preprocessorCommand", "preprocessor", "version",
  "identifier", "optionalIdentifier", "identifierList",
  "decimalListSingle", "optionalMetadata", "decimalList",
  "decimalInitializer", "floatListSingle", "floatList", "floatInitializer",
  "singleListSingle", "singleList", "singleInitializer", "shaderModel",
  "floatingPointOption", "textureOption", "targetOption", "targetElement",
  "targetElementList", "target", "addressSize", "addressSpaceIdentifier",
  "addressSpace", "optionalAddressSpace", "pointerDataTypeId",
  "dataTypeId", "dataType", "pointerDataType", "vectorToken",
  "statementVectorType", "instructionVectorType",
  "optionalInstructionVectorType", "alignment", "kernelParameterPtrSpace",
  "parameterAttribute", "addressableVariablePrefix", "arrayDimensionSet",
  "arrayDimensions", "initializer", "assignment", "registerIdentifierList",
  "registerSeperator", "registerPrefix", "registerDeclaration",
  "fileDeclaration", "globalSharedDeclaration", "initializableDeclaration",
  "globalLocalDeclaration", "textureSpace", "textureDeclaration",
  "samplerDeclaration", "surfaceDeclaration", "parameter",
  "argumentDeclaration", "returnArgumentListBegin",
  "returnArgumentListEnd", "argumentListBegin", "argumentListEnd",
  "openBrace", "closeBrace", "argumentListBody", "returnArgumentList",
  "argumentList", "optionalReturnArgumentList", "functionBegin",
  "functionName", "optionalSemicolon", "functionDeclaration",
  "functionBodyDefinition", "functionBody", "entryName",
  "optionalArgumentList", "entryDeclaration", "entry", "entryStatement",
  "completeEntryStatement", "entryStatements", "maxnreg", "maxntid",
  "ctapersm", "ctapersmList", "minnctapersm", "maxnctapersm",
  "performanceDirective", "performanceDirectiveList",
  "performanceDirectives", "externOrVisible", "uninitializableAddress",
  "initializableAddress", "uninitializable", "initializable", "opcode",
  "uninitializableDeclaration", "location", "label", "labelOperand",
  "returnType", "returnTypeListBody", "returnTypeList",
  "optionalAlignment", "argumentType", "argumentTypeListBody",
  "argumentTypeList", "callprototype", "calltargets", "pragma",
  "vectorIndex", "optionalVectorIndex", "nonLabelOperand",
  "constantOperand", "addressableOperand", "offsetAddressableOperand",
  "callOperand", "operand", "memoryOperand", "branchOperand",
  "arrayOperand", "guard", "floatRoundingToken", "intRoundingToken",
  "floatRounding", "intRounding", "optionalFloatRounding", "instruction",
  "basicInstruction3Opcode", "basicInstruction3",
  "approxInstruction2Opcode", "approximate", "approxInstruction2", "ftz",
  "optionalFtz", "sat", "optionalSaturate", "ftzInstruction2Opcode",
  "ftzInstruction2", "ftzInstruction3Opcode", "ftzInstruction3",
  "optionalUni", "branch", "returnOperand", "returnOperandList",
  "optionalReturnOperandList", "callArgumentList", "optionalPrototypeName",
  "optionalUniOrTail", "call", "addModifier", "addOrSubOpcode", "addOrSub",
  "addCModifier", "addCOrSubCOpcode", "addCOrSubC", "atomicOperationId",
  "atomicOperation", "atomModifier", "atom", "shiftAmount", "bfe", "bfi",
  "bfind", "barrierOperation", "optionalBarrierOperator",
  "operandSequence", "bar", "brev", "brkpt", "clz",
  "floatRoundingModifier", "intRoundingModifier", "cvtRoundingModifier",
  "cvtModifier", "cvt", "cvtaOperand", "cvta", "divFullModifier",
  "divApproxModifier", "divRnModifier", "divModifier", "div", "exit",
  "isspacep", "volatileModifier", "optionalVolatile", "ldModifier", "ld",
  "ldu", "hiOrLo", "roundHiLoWide", "mulModifier", "madOpcode", "mad",
  "mad24Modifier", "mad24", "membarSpaceType", "membarSpace", "membar",
  "movIndexedOperand", "movSourceOperand", "mov", "mul24Modifier", "mul24",
  "mul", "notOpcode", "notInstruction", "pmevent", "popc",
  "permuteModeType", "permuteMode", "cacheLevel", "prefetch", "prefetchu",
  "prmt", "rcpSqrtModifier", "rcpSqrtOpcode", "rcpSqrtInstruction",
  "reductionOperationId", "reductionOperation", "red", "ret",
  "comparisonId", "comparison", "boolOperatorId", "boolOperator", "sad",
  "selp", "setModifier", "set", "setpModifier", "predicatePair", "setp",
  "slct", "st", "geometryId", "geometry", "floatingPointModeType",
  "floatingPointMode", "testp", "tex", "colorComponentId",
  "colorComponent", "tld4", "surfaceQuery", "txq", "suq", "cacheOperation",
  "optionalCacheOperation", "clampOperation", "formatMode", "suld", "sust",
  "sured", "trap", "voteOperationId", "voteOperation", "voteDataType",
  "vote", YY_NULLPTR
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
     345,   346,   347,   348,   349,   350,   351,   352,   353,   354,
     355,   356,   357,   358,   359,   360,   361,   362,   363,   364,
     365,   366,   367,   368,   369,   370,   371,   372,   373,   374,
     375,   376,   377,   378,   379,   380,   381,   382,   383,   384,
     385,   386,   387,   388,   389,   390,   391,   392,   393,   394,
     395,   396,   397,   398,   399,   400,   401,   402,   403,   404,
     405,   406,   407,   408,   409,   410,   411,   412,   413,   414,
     415,   416,   417,   418,   419,   420,   421,   422,   423,   424,
     425,   426,   427,   428,   429,   430,   431,   432,   433,   434,
     435,   436,   437,   438,   439,   440,   441,   442,   443,   444,
     445,   446,   447,   448,   449,   450,   451,   452,   453,   454,
     455,   456,   457,   458,   459,   460,   461,   462,   463,   464,
     465,   466,   467,   468,   469,   470,   471,   472,   473,   474,
     475,   476,   477,   478,   479,   480,   481,   482,   483,   484,
     485,   486,   487,   488,   489,   490,   491,   492,   493,   494,
     495,   496,   497,   498,   499,   500,   501,   502,   503,   504,
     505,   506,   507,   508,   509,   510,   511,   512,   513,   514,
     515,    95,    44,   123,   125,    91,    93,    61,    60,    62,
      59,    40,    41,    58,    33,    43,    45,   124
};
# endif

#define YYPACT_NINF -1009

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-1009)))

#define YYTABLE_NINF -228

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     497, -1009, -1009, -1009, -1009, -1009, -1009, -1009, -1009, -1009,
    -185, -1009,   503,  -109,   -93, -1009,   291, -1009, -1009, -1009,
     319, -1009, -1009, -1009, -1009, -1009, -1009, -1009, -1009, -1009,
   -1009, -1009, -1009, -1009, -1009,   -67, -1009,   -92,  -143, -1009,
     158,   160,   203, -1009, -1009, -1009, -1009, -1009, -1009, -1009,
   -1009, -1009, -1009, -1009, -1009, -1009, -1009, -1009, -1009,   -37,
   -1009, -1009, -1009, -1009, -1009, -1009, -1009, -1009, -1009, -1009,
   -1009, -1009, -1009, -1009, -1009, -1009, -1009, -1009, -1009, -1009,
   -1009, -1009, -1009,   570,  2903, -1009, -1009, -1009,    90, -1009,
     137, -1009,   336, -1009,    90,  2903, -1009, -1009,   218,   160,
   -1009,   160,   334,   -28, -1009,   -24,    72,   312,   291,  2903,
   -1009,   503, -1009, -1009, -1009, -1009, -1009, -1009, -1009, -1009,
   -1009, -1009, -1009, -1009, -1009, -1009, -1009, -1009, -1009, -1009,
   -1009, -1009, -1009, -1009, -1009, -1009, -1009, -1009, -1009, -1009,
   -1009, -1009, -1009, -1009, -1009, -1009, -1009, -1009, -1009, -1009,
   -1009, -1009, -1009, -1009, -1009, -1009, -1009, -1009, -1009, -1009,
   -1009, -1009, -1009, -1009, -1009, -1009, -1009, -1009, -1009, -1009,
   -1009, -1009, -1009, -1009, -1009, -1009, -1009, -1009, -1009, -1009,
   -1009, -1009, -1009, -1009,   -10,  -166, -1009,    22, -1009, -1009,
       9,   283, -1009,    90, -1009, -1009,    83,   201,   160, -1009,
   -1009, -1009, -1009, -1009, -1009,  3082, -1009, -1009,   160, -1009,
    -178,    50,    60,   -59,   -33, -1009, -1009, -1009, -1009, -1009,
     336, -1009,    83, -1009,  2903,  2903,  2903,  2903,  2903, -1009,
     137, -1009,  2903, -1009,   166,   207,   145,   207,   207,   570,
     145,   570,   143, -1009,   164, -1009, -1009,  2903, -1009,   191,
    2903, -1009,   239,   229,    83,   496, -1009, -1009, -1009, -1009,
   -1009, -1009,  2903, -1009, -1009, -1009, -1009, -1009,   341,   570,
   -1009, -1009, -1009, -1009, -1009, -1009, -1009,   186,   -14,    70,
   -1009, -1009, -1009, -1009, -1009,   730,   512,   570,   342,   570,
     359,   353, -1009, -1009, -1009,   -18,   248,   359,  -123,   504,
    -123,  -123,   504,   367,   292,   367,   294,   301,   302, -1009,
     279,   359,   248,   248, -1009, -1009,  -113, -1009, -1009, -1009,
      95,  1943,   570,   570,   570,   386,   570,   570,   570,    78,
     288,  -118,   248,   174,   496,   570, -1009,   389, -1009,   342,
   -1009,   342, -1009, -1009, -1009,    94, -1009,   396, -1009, -1009,
   -1009, -1009, -1009, -1009, -1009, -1009, -1009, -1009, -1009, -1009,
   -1009, -1009, -1009, -1009,   341, -1009, -1009, -1009, -1009, -1009,
   -1009,   570, -1009, -1009, -1009, -1009, -1009, -1009,   -76, -1009,
   -1009, -1009, -1009, -1009, -1009, -1009, -1009, -1009, -1009, -1009,
   -1009, -1009, -1009, -1009, -1009, -1009, -1009, -1009,  2903,   137,
   -1009, -1009, -1009,   314, -1009,   313, -1009,   328, -1009,   328,
   -1009, -1009,   143,   143,   321,   322,   326,  -144, -1009,   -92,
   -1009, -1009, -1009, -1009, -1009, -1009, -1009, -1009, -1009, -1009,
   -1009, -1009,   -38,   337,   332,   331, -1009,   -82,  2903, -1009,
    -117,   346, -1009, -1009, -1009,   143, -1009, -1009, -1009, -1009,
   -1009, -1009, -1009, -1009, -1009, -1009, -1009,   433, -1009,   342,
     570,  1943, -1009,   570, -1009, -1009, -1009,   433,   570,   342,
     342,   342, -1009, -1009, -1009,   570, -1009, -1009, -1009, -1009,
   -1009, -1009, -1009, -1009, -1009, -1009, -1009, -1009, -1009, -1009,
   -1009, -1009, -1009, -1009,  1025, -1009,    21,   570,   730,  1025,
      21,   570,  1943,   570,  1529, -1009, -1009,   248,   570, -1009,
   -1009, -1009, -1009, -1009, -1009, -1009,   433, -1009, -1009,   342,
     570, -1009, -1009, -1009, -1009, -1009,   248, -1009,    91,  1943,
     570, -1009, -1009,   279, -1009, -1009, -1009, -1009, -1009, -1009,
   -1009, -1009, -1009, -1009,   570,   279,   105,   570, -1009,  2903,
   -1009, -1009,   350,  1603, -1009, -1009, -1009, -1009, -1009, -1009,
   -1009, -1009, -1009, -1009, -1009,   410,   570, -1009,   172,   105,
   -1009, -1009, -1009, -1009, -1009,   228, -1009, -1009, -1009,   352,
   -1009, -1009, -1009, -1009,  2903,   316, -1009, -1009, -1009,  1943,
     224,  1943, -1009,   570,  1943,  1943,  1943, -1009, -1009, -1009,
   -1009, -1009, -1009, -1009,   570, -1009, -1009, -1009, -1009, -1009,
     414, -1009, -1009, -1009,   105,   174, -1009, -1009,   361, -1009,
    1943, -1009,   342,   570,   570, -1009, -1009,   342,   570, -1009,
     570,   570,  1943,   342,   342,   570,   143, -1009,   370,   372,
     282,   362,   363, -1009, -1009, -1009, -1009, -1009,    -9,   368,
   -1009,   379, -1009,   369,  2091, -1009, -1009,   570, -1009,  -138,
     366,  2903, -1009, -1009,   371, -1009,   433,  1943,   345,  1943,
   -1009,  1943, -1009, -1009, -1009,  1943, -1009, -1009, -1009, -1009,
   -1009, -1009,   342,   570,   342,  1943, -1009, -1009,   342,  1943,
     376,   570,  2903, -1009,   378, -1009,    96,   412, -1009,   433,
     570,    91, -1009, -1009, -1009,  1943,   416,  1529,    96,  1943,
      96, -1009, -1009, -1009, -1009, -1009, -1009, -1009, -1009, -1009,
     279,  1943, -1009, -1009,   409,  1943,  2903, -1009,   411,   570,
    1529, -1009, -1009, -1009, -1009, -1009, -1009, -1009, -1009, -1009,
   -1009, -1009,   570,   570, -1009, -1009,  1943, -1009, -1009, -1009,
   -1009, -1009, -1009, -1009, -1009,   418, -1009, -1009, -1009, -1009,
   -1009, -1009, -1009,  1943,   420,  1943,   422,   423,   424,  1943,
     491,  1943,   570,   427,  2497,   426,   570,  1943,  1943,   433,
    1943,  1943,  1943,   431, -1009, -1009,  1943, -1009,   432, -1009,
   -1009, -1009, -1009, -1009, -1009, -1009,   429, -1009, -1009, -1009,
   -1009,  2349, -1009,   435, -1009, -1009,   436, -1009, -1009,   437,
   -1009, -1009,  2903,   137, -1009,   -77,   419, -1009, -1009, -1009,
     456,  1943,   457,   458,   460,   570,  1943,   446,   462,   570,
     463,  1943,  1943,    17,  1529, -1009, -1009, -1009, -1009, -1009,
     145,  2497, -1009,  1943,  1943,   464,  1943,   465,   145,   468,
     145,   570,   482, -1009, -1009, -1009, -1009,  -115,   483, -1009,
     570,   484,  1943,  1943,   485,  1943,   486,  1943,   487,  1943,
    1943,  1943,   489,   570,  1943,   488, -1009,  2497,   231, -1009,
   -1009, -1009,   490,  1943,  1943,   492,   493, -1009,   498,   499,
     500,  1943,   501,   495, -1009,  2349,   151,   502,   265,   505,
     276,   506,  2755,   507,   494, -1009, -1009, -1009, -1009,   207,
   -1009,  -100, -1009,  1943,   509,  1943,  1943,  1943,   570,   511,
    1943,  1943,  1943,  1943,   513,   515, -1009,   -30, -1009, -1009,
   -1009,   508, -1009, -1009, -1009,   514,   517,   519,  1943,   516,
     518,   570,   520,   570,   148,   522,  1943,   526,  2017,   521,
    1529,   524,   528,   530,  1943,   525,  1943,   527,  1943,   529,
     532,   534,  1943,   570, -1009, -1009,   535,   541,   543,   533,
     540,   544,  1943,  1943,  1943,  1943,  1943,   537,  1943, -1009,
     277,   510,   281,   546,   284,   548,   551,   552,   553,   554,
     555,   557, -1009, -1009, -1009, -1009, -1009,   570,   137, -1009,
     558,  1943,   559,   560,   561,  1943,  1943, -1009,   562,   564,
     565,  1943,  1943,   571, -1009,   568,  1943,  1943,   -83, -1009,
   -1009,   538, -1009,  2497,   148,  1943,   148, -1009, -1009, -1009,
     566,  1943, -1009, -1009,  1677, -1009, -1009,   572,  2497,   567,
    1943,   569, -1009,   573, -1009,   574, -1009,  1943,  1943,   575,
    1529,   576, -1009, -1009, -1009,  1943,  1943,   577,   578,   579,
     580,   581, -1009,   582,   551,   552,   553,   554,   555,   557,
     542,   585,   586,   587,   590,   592,  2903, -1009,  1943,   594,
    1943,  1943,  1943,   595,   596,  1943,  1943,  1943,   597,   599,
     600,  1529,   593,   598, -1009,   601,  1529,   604,   607,  1943,
     629,   603, -1009,   -91,   631,   632,  2497,   627, -1009,  1943,
   -1009,   637,   639, -1009,   640, -1009,   633,   634, -1009,  1943,
    1943,  1943,  1943, -1009,  2829,   642,   602,   643,   648,   645,
     143,   641,  1943,   646,   647,   649,  1943,  1943,   650,   651,
     652,  1943,  1943, -1009,   653, -1009, -1009,   654,   655,   656,
    1943,   659,   657,  2903,  1943,   663,  1943,   658,   644, -1009,
     667,  1943,  1943,   665, -1009, -1009,   661,   662,   664,   673,
     289,  2423,   672,   293,    98,   674,   296,  -193,   676, -1009,
   -1009,   675, -1009,  1943, -1009,   680,   678, -1009,  1943, -1009,
     682,   684, -1009, -1009,   679, -1009,   688,  1529, -1009, -1009,
   -1009,  2903,   691, -1009,   694,  1943,   695,   689,  1943, -1009,
   -1009, -1009,  1943, -1009, -1009, -1009, -1009, -1009, -1009, -1009,
     690,  1943, -1009,   696, -1009,  1943,  1943,  1529,   671, -1009,
    1529,  1943,   692,  1943, -1009,   699,   697, -1009,   702,  1943,
     698,   704,   705,   708,   706,   -85, -1009,   703,  1529, -1009,
    1943,   707, -1009,  1529,   712,  1529,   709,  1943, -1009, -1009,
     710,   711, -1009,   714,  1529,   713, -1009,   716,   717, -1009,
     718,   720, -1009, -1009, -1009, -1009, -1009
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
     227,    21,    22,    23,    24,    25,    26,    27,    28,   225,
       0,   226,    81,     0,     0,   224,     0,    13,    15,    19,
     227,    29,     6,     2,     3,    12,     4,     5,    10,    14,
      11,     9,     7,     8,    18,     0,    17,   189,     0,    16,
       0,     0,     0,    67,    68,    69,    70,    74,    71,    66,
      72,    73,    75,    76,    77,    78,    79,    80,    82,    84,
      30,    85,    98,   102,   100,   101,   103,    96,    97,    99,
     104,   105,   106,   107,   108,   110,   109,   111,   114,   115,
     112,   153,   116,     0,     0,     1,    20,   171,   351,   169,
     174,   188,   222,   192,   351,     0,   180,   231,   232,     0,
     159,     0,     0,   179,   234,     0,   128,     0,     0,     0,
     155,     0,   152,    32,   262,   235,   236,   237,   238,   240,
     241,   242,   243,   244,   239,   245,   246,   247,   248,   249,
     250,   251,   252,   253,   254,   255,   256,   257,   258,   259,
     260,   261,   263,   266,   267,   268,   264,   265,   278,   280,
     281,   282,   283,   284,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   279,   285,   286,   287,   288,   289,   290,
     291,   293,   292,   294,   295,   296,   297,   298,   299,   300,
     301,   302,   303,    31,   148,     0,    33,    41,   350,   349,
       0,     0,   193,   351,   200,   203,   351,     0,     0,   199,
     194,   195,   197,   198,   196,     0,   164,   165,     0,   173,
       0,     0,     0,     0,     0,   216,   217,   219,   218,   220,
     223,   190,   351,   187,     0,     0,     0,     0,     0,   167,
     174,   178,     0,   120,     0,   126,   135,     0,   127,     0,
     136,     0,   141,    83,     0,   150,   154,     0,    42,   313,
       0,   306,     0,   323,   351,    41,   186,   204,   228,   230,
     229,   233,     0,   423,   427,   582,   466,   425,   434,     0,
     467,   429,   428,   471,   581,   426,   419,   556,   437,   521,
     438,   439,   442,   441,   541,     0,     0,     0,   434,     0,
     530,   434,   417,   422,   418,     0,     0,   530,     0,     0,
       0,     0,     0,   444,   444,   444,     0,     0,     0,   472,
       0,   530,   486,     0,   561,   560,     0,   421,   420,   542,
       0,     0,     0,     0,     0,   490,     0,     0,     0,     0,
       0,     0,     0,     0,    41,     0,   367,     0,   366,   434,
     364,   434,   365,   372,   462,   363,   373,   470,   374,   375,
     368,   369,   370,   376,   371,   377,   378,   379,   380,   382,
     383,   381,   384,   385,   434,   386,   387,   388,   389,   390,
     391,     0,   392,   393,   394,   395,   396,   397,   579,   398,
     399,   400,   401,   402,   403,   404,   405,   406,   411,   412,
     413,   415,   408,   407,   410,   409,   414,   416,     0,     0,
     170,   177,   205,   206,   214,     0,   210,   215,   212,   213,
     221,   191,   141,   141,     0,     0,     0,     0,   181,     0,
     122,   121,   123,   124,   125,   132,   131,   137,   133,   134,
     129,   130,     0,   142,   143,     0,   151,     0,     0,    36,
       0,     0,   324,   202,   172,   141,   534,   535,   352,   353,
     355,   354,   538,   432,   360,   536,   433,   437,   537,   434,
       0,     0,   557,     0,   435,   436,   544,   437,     0,   434,
     434,   434,   522,   523,   524,     0,   596,   597,   598,   599,
     600,   601,   602,   603,   604,   605,   606,   607,   608,   609,
     610,   611,   613,   612,     0,   614,   434,     0,     0,     0,
     434,     0,     0,     0,     0,   528,   529,    93,     0,   356,
     357,   359,   358,   361,   505,   506,   512,   508,   507,   434,
       0,    86,    87,    88,    89,    90,     0,    91,     0,     0,
       0,   678,   679,     0,   657,   659,   658,   662,   663,   664,
     665,   666,   660,   661,     0,     0,     0,     0,   445,     0,
     460,   461,   451,     0,   526,   683,   503,   634,   635,   636,
     637,   638,   639,   640,   641,     0,     0,   485,     0,     0,
     686,   684,   685,   687,   688,     0,   548,   547,   549,     0,
     333,   334,   336,   335,     0,   330,   342,   341,   563,     0,
     572,     0,   489,     0,     0,     0,     0,   642,   643,   644,
     645,   646,   647,   648,     0,   653,   654,   652,   651,   655,
       0,   494,   495,   496,   498,     0,   573,   574,     0,   201,
       0,   430,   434,     0,     0,   464,   362,   434,     0,   469,
       0,     0,     0,   434,   434,     0,   141,   175,     0,     0,
       0,     0,     0,   161,   163,   162,   168,   176,   183,     0,
     140,     0,   144,     0,     0,   149,   312,     0,   309,     0,
       0,     0,   322,   305,     0,   540,   437,     0,     0,     0,
     545,     0,   520,   519,   518,     0,   622,   615,   616,   617,
     621,   618,   434,     0,   434,     0,   626,   625,   434,     0,
       0,     0,     0,   347,     0,    92,   674,     0,   511,   510,
       0,     0,    95,    94,   113,     0,     0,     0,   674,     0,
     674,   584,   586,   585,   590,   591,   589,   588,   587,   592,
       0,     0,   307,   346,     0,     0,     0,   594,     0,     0,
       0,   474,   475,   476,   482,   483,   481,   480,   479,   477,
     478,   484,     0,     0,   690,   689,     0,   550,   332,   325,
     326,   327,   328,   329,   331,     0,   565,   566,   567,   568,
     569,   570,   571,     0,     0,     0,     0,     0,     0,     0,
       0,   500,     0,     0,     0,     0,     0,     0,     0,   437,
       0,     0,     0,     0,   580,   578,     0,   166,   207,   209,
     211,   158,   156,   182,   184,   138,     0,   157,    40,    58,
      50,     0,    38,    49,    46,   145,    57,    54,   146,    65,
      62,   147,    34,     0,   311,     0,     0,    37,   304,   539,
       0,     0,     0,     0,     0,     0,     0,   628,     0,     0,
       0,     0,     0,     0,     0,   669,   670,   671,   672,   673,
     119,     0,   509,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   446,   447,   340,   448,     0,   459,   595,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   500,     0,   497,     0,   337,   343,
     344,   345,     0,     0,     0,     0,     0,   465,     0,     0,
       0,     0,     0,     0,   139,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    35,   308,   310,   320,   314,
     317,     0,   321,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   348,   330,   553,   552,
     554,     0,   117,   118,   531,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   499,   501,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   208,
       0,     0,     0,     0,     0,     0,    48,    47,    56,    55,
      64,    63,    43,    39,    51,    59,   315,     0,     0,   319,
       0,     0,     0,     0,     0,     0,     0,   627,     0,     0,
       0,     0,     0,     0,   555,     0,     0,     0,   330,   515,
     514,     0,   527,     0,     0,     0,     0,   677,   675,   676,
       0,     0,   449,   450,     0,   456,   463,     0,     0,     0,
       0,     0,   564,     0,   504,     0,   502,     0,     0,     0,
       0,     0,   338,   339,   576,     0,     0,     0,     0,     0,
       0,     0,   562,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    34,   318,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   516,     0,     0,     0,     0,     0,
       0,   458,   452,     0,     0,     0,     0,     0,   691,     0,
     493,     0,     0,   649,     0,   575,     0,     0,   440,     0,
       0,     0,     0,   583,     0,     0,     0,     0,     0,     0,
     141,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   551,     0,   513,   517,     0,     0,     0,
       0,     0,     0,     0,     0,   457,     0,     0,     0,   593,
       0,     0,     0,     0,   424,   431,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   316,
     559,     0,   558,     0,   525,     0,     0,   630,     0,   629,
       0,     0,   633,   533,     0,   667,     0,     0,   668,   455,
     453,     0,     0,   532,     0,     0,     0,     0,     0,   443,
     468,   473,     0,    45,    44,    53,    52,    61,    60,   619,
       0,     0,   623,     0,   620,     0,     0,     0,     0,   454,
       0,     0,     0,     0,   491,     0,     0,   546,     0,     0,
       0,     0,     0,     0,     0,     0,   577,     0,     0,   543,
       0,     0,   632,     0,     0,     0,     0,     0,   487,   492,
       0,     0,   631,     0,     0,     0,   650,     0,     0,   624,
       0,     0,   682,   488,   656,   680,   681
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
   -1009, -1009, -1009,   739, -1009, -1009, -1009, -1009,   -84,  -312,
      73,  -641,  -213,  -640, -1009,  -642,  -645, -1009,  -647,  -649,
   -1009,    15, -1009, -1009, -1009,   725, -1009, -1009, -1009, -1009,
    -273, -1009, -1009,  -638,     0,    67,  -711,     4,  -488, -1009,
    -105, -1009, -1009,   -43, -1009,  -409, -1009, -1009, -1009, -1009,
   -1009,    44, -1009, -1009, -1009, -1009, -1009, -1009, -1009, -1009,
    -431,   385, -1009, -1009, -1009, -1009,   335,  -159,   608, -1009,
     556, -1009, -1009, -1009, -1009, -1009, -1009, -1009, -1009, -1009,
   -1009, -1009, -1009,  -135,   -57, -1009, -1009,   197,   701, -1009,
   -1009,   758, -1009, -1009,    65, -1009, -1009, -1009, -1009, -1009,
   -1009, -1009, -1009, -1009,   169, -1009, -1009, -1009,    -7, -1009,
   -1009, -1009, -1009, -1009, -1009, -1009, -1009,  -764, -1009,  -800,
   -1008,   280,  -826, -1009,  -699, -1009, -1009, -1009,  -234, -1009,
   -1009, -1009, -1009, -1009, -1009, -1009, -1009,  -256,  -270,  -481,
    -435, -1009, -1009, -1009, -1009,   213, -1009,    38, -1009, -1009,
   -1009, -1009, -1009, -1009, -1009, -1009, -1009, -1009, -1009, -1009,
   -1009, -1009, -1009, -1009, -1009, -1009, -1009, -1009, -1009, -1009,
     119, -1009, -1009, -1009, -1009, -1009, -1009, -1009, -1009, -1009,
     -23, -1009, -1009, -1009, -1009, -1009, -1009, -1009, -1009, -1009,
   -1009,  -229, -1009, -1009,   285, -1009,   635, -1009, -1009, -1009,
   -1009, -1009, -1009, -1009, -1009, -1009, -1009, -1009, -1009, -1009,
   -1009, -1009, -1009, -1009, -1009, -1009,   380, -1009, -1009, -1009,
   -1009, -1009, -1009, -1009,  -509, -1009, -1009, -1009,  -262, -1009,
     523, -1009, -1009, -1009, -1009,   531,  -672, -1009, -1009, -1009,
   -1009,  -500, -1009, -1009, -1009, -1009, -1009, -1009, -1009,   700,
   -1009, -1009, -1009,  -158,  -465,   268, -1009, -1009, -1009, -1009,
   -1009, -1009, -1009, -1009
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    17,    18,    19,    20,    21,    22,    23,   585,   906,
     440,   980,   251,   981,   805,   982,   983,   808,   984,   985,
     811,   405,    55,    56,    57,    58,    59,    24,    25,   527,
     528,   696,   704,    80,   106,   705,    82,   107,   933,   934,
     108,   424,   237,   109,   433,   434,   653,   654,   185,   247,
      84,   192,    27,    28,    29,    30,   102,    31,    32,    33,
     208,   209,   230,   647,    90,   401,   193,   256,   210,   231,
      91,   232,   103,   419,   794,    34,    35,    36,    37,    92,
      38,    39,   194,   195,   196,   215,   216,   406,   407,   217,
     218,   219,   220,   221,   197,   261,   104,   198,    41,   186,
     199,   200,   201,   723,   658,   659,   438,   997,   910,   911,
     816,   202,   203,   204,   753,   754,   586,   587,   880,   881,
     854,   693,   882,   724,   694,   205,   454,   513,   455,   515,
     627,   334,   335,   336,   337,   622,   338,   456,   457,   465,
     466,   339,   340,   341,   342,   549,   343,   856,   857,   726,
    1103,   949,   552,   344,   628,   345,   346,   630,   347,   348,
     741,   742,   568,   349,   593,   350,   351,   352,   614,   771,
     875,   353,   354,   355,   356,   517,   518,   519,   520,   357,
    1021,   358,   472,   473,   474,   475,   359,   360,   361,   506,
     507,   508,   362,   363,   458,   459,   460,   364,   365,   468,
     366,   578,   579,   367,   930,   931,   368,   463,   369,   370,
     371,   372,   373,   374,   762,   763,   618,   375,   376,   377,
     635,   378,   379,   719,   720,   380,   381,   495,   496,   681,
     682,   382,   383,   497,   384,   501,   828,   385,   386,   387,
     564,   565,   603,   604,   388,   389,   609,   610,   390,   544,
     391,   392,   839,   840,  1030,   533,   393,   394,   395,   396,
     574,   575,   746,   397
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     184,   236,   239,   641,   642,   810,   657,   809,   847,   807,
     879,   223,   806,   803,   804,   935,    81,   830,   503,   812,
      83,   516,   665,   529,   500,   242,  1102,    54,   248,   494,
     499,   861,   670,   708,   928,   698,   664,   222,   206,   567,
     569,   207,   444,   206,    26,   710,   207,    43,    44,    45,
      46,   966,    48,    49,    50,    51,   224,   514,   225,   615,
     743,   257,   570,   411,    26,    40,   799,   531,   530,   623,
    1177,   624,    42,    43,    44,    45,    46,   879,    48,    49,
      50,    51,   566,   112,   399,    40,   187,   257,   571,   572,
     188,   189,   633,   187,   400,   443,   245,   188,   189,   521,
     522,   523,   524,   532,   246,   772,   525,   238,   240,   634,
     235,   626,   241,   879,   749,   750,   751,   752,   399,   257,
      87,   619,   611,   612,   813,   613,    54,    93,   646,   932,
     425,   573,   427,   428,   814,   929,   254,   932,  1019,   932,
     412,   413,   414,   415,   416,   661,  1200,   946,   418,   446,
     447,    60,   901,   662,   900,   262,   899,   947,   464,   898,
     896,   897,   998,   436,    61,   398,   439,   749,   750,   751,
     752,  1154,   999,     9,   526,    11,   190,  1257,   445,    89,
       9,  1155,    11,   190,    15,  1258,   677,   678,   679,   666,
     656,    15,   967,   968,   234,   908,    87,  1095,   404,   672,
     673,   674,  -227,  -227,   191,   453,    16,  -227,   110,  -227,
    -227,   191,  1105,    16,  -227,   249,   250,  1019,   842,   649,
     851,   576,   702,   577,   408,   111,   680,   787,   650,   703,
     687,   819,   676,   233,   695,  1013,   684,   686,   469,   429,
     426,   431,   499,   229,   430,   967,   968,    95,   105,   699,
    1009,  1037,    96,   701,  -185,   470,   471,   206,   244,   879,
     207,   793,   448,   449,   450,   451,   252,    78,    79,   461,
     711,   712,   713,   625,   879,    97,    98,    99,   100,   661,
    1158,   926,   101,   420,   421,   422,   498,   502,   253,   504,
     423,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,   402,   714,   715,
     716,   717,   718,   835,   636,   836,   837,   403,   838,    85,
     258,   259,   589,   590,   591,   260,   594,   595,   596,   597,
     598,   599,   600,   601,   602,   620,   105,   731,   732,   733,
      78,    79,   879,  -160,   887,  -160,    87,   255,  -160,   446,
     447,  1114,   776,    87,   660,    78,    79,   779,   800,  1076,
     941,  1174,   943,   784,   785,   521,   522,   523,   524,   744,
      88,   632,   525,    94,   745,   734,   735,   736,   737,   738,
     739,   740,   657,   105,   909,  1027,  1028,  1029,    43,    44,
      45,    46,  1144,    48,    49,    50,    51,  1148,   616,   617,
       1,     2,     3,     4,     5,     6,     7,     8,   432,     9,
      10,    11,   825,   902,   687,   986,    12,    13,   829,    14,
      15,   435,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,   211,   212,
     213,   214,    16,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,   226,
     667,   227,   437,   669,   228,   722,   550,   548,   671,   756,
     757,   758,   759,   760,   761,   675,   605,   606,   607,   608,
    1178,  1176,  1175,  1170,  1173,  1172,    78,    79,   105,   557,
     558,   559,   560,   561,   562,   563,   441,   683,  1228,   442,
     748,   689,   248,   691,   446,   447,   967,   968,   697,   448,
     449,   450,   451,   749,   750,   751,   752,   551,   553,   452,
     700,   448,   449,   450,   451,   453,   453,   903,  1242,   988,
     707,  1244,   505,   509,   510,   511,   512,   453,   904,   902,
     990,  1064,   548,   903,   709,  1066,   904,   721,  1068,  1260,
     848,   902,   850,  1213,  1263,   903,  1265,  1215,   904,  1096,
    1217,  1098,   462,   467,   554,  1271,   730,   909,   545,   546,
     802,   555,   556,   592,   621,   629,   638,   817,     1,     2,
       3,     4,     5,     6,     7,     8,   639,     9,    10,    11,
     640,   643,   644,   765,    12,    13,   645,    14,    15,   652,
     655,   588,   651,   663,   769,   464,   729,   821,   439,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      16,   725,   747,   777,   778,   770,   774,   788,   780,   789,
     781,   782,   791,   792,   795,   786,   796,   815,   831,   797,
     834,   818,   858,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,   476,
     477,   478,   479,   480,   481,   482,   483,   484,   485,   486,
     487,   488,   489,   490,   491,   492,   493,   841,   846,   853,
     865,   859,   867,   826,   869,   870,   871,   873,   883,   912,
     878,   832,   877,   891,   893,   894,   453,   902,   903,   904,
     843,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,   802,   913,   915,
     916,  1179,   917,   920,   921,   923,   938,   940,   905,   860,
     942,   534,   535,   536,   537,   538,   539,   540,   541,   542,
     543,   668,   862,   863,   945,   948,   951,   954,   956,   958,
     927,   962,   979,   995,   972,   973,   969,   878,   965,    86,
     974,   975,   976,   978,  1130,   833,   987,   994,   844,   989,
     991,  1001,   876,  1006,  1065,  1011,   884,  1012,  1014,  1016,
    1015,  1017,   690,  1023,   637,  1025,  1022,  1031,  1033,  1038,
    1039,  1036,  1040,   878,  1047,  1042,  1048,  1044,  1052,  1046,
    1053,  1051,  1055,  1054,   996,  1124,  1056,  1062,  1094,   706,
    1067,   802,  1069,  1070,  1071,  1072,  1073,  1074,   993,  1075,
    1078,  1080,  1081,  1082,  1085,   918,  1086,  1087,  1090,   922,
    1091,  1099,  1106,   728,  1104,  1109,   243,   790,   417,  1108,
    1119,  1120,  1121,  1122,  1110,  1113,  1115,  1118,  1125,  1126,
    1127,   944,  1123,  1128,  1018,  1129,  1132,  1136,  1137,  1141,
     950,  1142,   800,  1145,  1035,  1153,  1143,  1147,  1146,   755,
    1149,   764,  1150,   963,   766,   767,   768,   476,   477,   478,
     479,   480,   481,   482,   483,   484,   485,   486,   487,   488,
     489,   490,   491,   492,   493,  1152,  1156,  1159,  1157,  1161,
     775,  1162,  1163,  1164,  1165,  1171,  1174,   799,  1177,  1183,
    1204,  1180,   783,  1188,   453,   409,  1182,  1194,  1005,  1184,
    1187,  1197,  1189,  1192,  1193,  1201,  1195,  1198,  1203,  1205,
    1208,  1209,  1210,  1018,  1211,  1212,  1214,  1243,  1216,   878,
    1218,  1024,  1221,  1026,  1226,  1219,  1225,   820,  1222,   822,
    1227,   823,  1224,  1230,   878,   824,  1231,  1233,  1239,  1234,
    1237,  1248,  1246,  1050,  1250,   827,  1253,  1249,  1252,   827,
    1255,  1254,  1256,  1259,  1264,   648,  1268,  1262,   410,  1266,
    1270,  1269,   907,  1272,  1032,   845,  1273,  1274,  1275,   849,
    1276,  1077,   905,   964,  1093,   773,     0,     0,     0,   631,
       0,   852,   547,     0,     0,   855,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   878,   688,     0,     0,   864,     0,     0,   685,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     802,     0,     0,   866,     0,   868,     0,     0,     0,   872,
       0,   874,     0,     0,     0,     0,     0,   885,   886,     0,
     888,   889,   890,     0,     0,     0,   892,     0,     0,  1199,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   802,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   914,     0,     0,     0,     0,   919,     0,     0,     0,
       0,   924,   925,     0,     0,     0,     0,  1229,     0,     0,
       0,     0,     0,   936,   937,     0,   939,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   952,   953,     0,   955,     0,   957,     0,   959,
     960,   961,     0,     0,   874,     0,     0,     0,     0,     0,
       0,     0,     0,   970,   971,     0,     0,     0,     0,     0,
       0,   977,   476,   477,   478,   479,   480,   481,   482,   483,
     484,   485,   486,   487,   488,   489,   490,   491,   492,   493,
       0,     0,     0,  1000,     0,  1002,  1003,  1004,     0,     0,
    1007,  1008,   827,  1010,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1020,     0,
       0,     0,     0,     0,     0,     0,   855,     0,     0,     0,
       0,     0,     0,     0,  1041,     0,  1043,     0,  1045,     0,
       0,     0,  1049,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1057,  1058,  1059,  1060,  1061,     0,  1063,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1079,     0,     0,     0,  1083,  1084,     0,     0,     0,
       0,  1088,  1089,     0,     0,     0,  1092,  1020,     0,     0,
       0,     0,     0,     0,     0,  1097,     0,     0,     0,     0,
       0,  1100,     0,     0,   855,     0,     0,     0,     0,     0,
    1107,     0,     0,     0,     0,     0,     0,  1111,  1112,     0,
       0,     0,     0,     0,     0,  1116,  1117,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1131,     0,
    1133,  1134,  1135,     0,     0,  1138,  1139,  1140,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1151,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1160,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1166,
    1167,  1168,  1169,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1181,     0,     0,     0,  1185,  1186,     0,     0,
       0,  1190,  1191,     0,     0,     0,     0,     0,     0,     0,
    1196,     0,     0,     0,   855,     0,  1202,     0,     0,     0,
       0,  1206,  1207,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1220,     0,     0,     0,     0,  1223,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1232,     0,     0,  1235,     0,
       0,     0,  1236,     0,     0,     0,     0,     0,     0,     0,
       0,  1238,     0,     0,     0,  1240,  1241,     0,     0,     0,
       0,  1245,     0,  1247,     0,     0,     0,     0,     0,  1251,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1261,     0,     0,   113,     0,     0,     0,  1267,   114,   115,
     116,   117,   118,   119,   120,   121,   122,   123,   124,   125,
     126,   127,   128,   129,   130,   131,   132,   133,   134,   135,
     136,   137,   138,   139,   140,   141,   142,   143,   144,   145,
     146,   147,   148,   149,   150,   151,   152,   153,   154,   155,
     156,   157,   158,   159,   160,   161,   162,   163,   164,   165,
     166,   167,   168,   169,   170,   171,   172,   173,   174,     0,
     175,   176,   177,   178,     0,   179,   180,   113,   181,   182,
       0,     0,   114,   115,   116,   117,   118,   119,   120,   121,
     122,   123,   124,   125,   126,   127,   128,   129,   130,   131,
     132,   133,   134,   135,   136,   137,   138,   139,   140,   141,
     142,   143,   144,   145,   146,   147,   148,   149,   150,   151,
     152,   153,   154,   155,   156,   157,   158,   159,   160,   161,
     162,   163,   164,   165,   166,   167,   168,   169,   170,   171,
     172,   173,   174,     0,   175,   176,   177,   178,     0,   179,
     180,   113,   181,   182,     0,     0,   114,   115,   116,   117,
     118,   119,   120,   121,   122,   123,   124,   125,   126,   127,
     128,   129,   130,   131,   132,   133,   134,   135,   136,   137,
     138,   139,   140,   141,   142,   143,   144,   145,   146,   147,
     148,   149,   150,   151,   152,   153,   154,   155,   156,   157,
     158,   159,   160,   161,   162,   163,   164,   165,   166,   167,
     168,   169,   170,   171,   172,   173,   174,     0,   175,   176,
     177,   178,     0,   179,   180,     0,   181,   182,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   580,   581,   582,   583,
     183,     0,   692,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   584,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     580,   581,   582,   583,   183,     0,     0,     0,     0,     0,
       0,     0,     0,   727,     0,     0,     0,   584,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   580,   581,   582,   583,   183,     0,
       0,     0,     0,     0,     0,     0,     0,   113,     0,  1101,
       0,   584,   114,   115,   116,   117,   118,   119,   120,   121,
     122,   123,   124,   125,   126,   127,   128,   129,   130,   131,
     132,   133,   134,   135,   136,   137,   138,   139,   140,   141,
     142,   143,   144,   145,   146,   147,   148,   149,   150,   151,
     152,   153,   154,   155,   156,   157,   158,   159,   160,   161,
     162,   163,   164,   165,   166,   167,   168,   169,   170,   171,
     172,   173,   174,     0,   175,   176,   177,   178,     0,   179,
     180,   113,   181,   182,     0,     0,   114,   115,   116,   117,
     118,   119,   120,   121,   122,   123,   124,   125,   126,   127,
     128,   129,   130,   131,   132,   133,   134,   135,   136,   137,
     138,   139,   140,   141,   142,   143,   144,   145,   146,   147,
     148,   149,   150,   151,   152,   153,   154,   155,   156,   157,
     158,   159,   160,   161,   162,   163,   164,   165,   166,   167,
     168,   169,   170,   171,   172,   173,   174,     0,   175,   176,
     177,   178,     0,   179,   180,   113,   181,   182,     0,     0,
     114,   115,   116,   117,   118,   119,   120,   121,   122,   123,
     124,   125,   126,   127,   128,   129,   130,   131,   132,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   147,   148,   149,   150,   151,   152,   153,
     154,   155,   156,   157,   158,   159,   160,   161,   162,   163,
     164,   165,   166,   167,   168,   169,   170,   171,   172,   173,
     174,     0,   175,   176,   177,   178,     0,   179,   180,     0,
     181,   182,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     580,   581,   582,   583,   183,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   584,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   183,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1034,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   798,     0,
     799,   800,   183,   113,   801,     0,     0,     0,   114,   115,
     116,   117,   118,   119,   120,   121,   122,   123,   124,   125,
     126,   127,   128,   129,   130,   131,   132,   133,   134,   135,
     136,   137,   138,   139,   140,   141,   142,   143,   144,   145,
     146,   147,   148,   149,   150,   151,   152,   153,   154,   155,
     156,   157,   158,   159,   160,   161,   162,   163,   164,   165,
     166,   167,   168,   169,   170,   171,   172,   173,   174,     0,
     175,   176,   177,   178,     0,   179,   180,   113,   181,   182,
       0,     0,   114,   115,   116,   117,   118,   119,   120,   121,
     122,   123,   124,   125,   126,   127,   128,   129,   130,   131,
     132,   133,   134,   135,   136,   137,   138,   139,   140,   141,
     142,   143,   144,   145,   146,   147,   148,   149,   150,   151,
     152,   153,   154,   155,   156,   157,   158,   159,   160,   161,
     162,   163,   164,   165,   166,   167,   168,   169,   170,   171,
     172,   173,   174,     0,   175,   176,   177,   178,     0,   179,
     180,   113,   181,   182,     0,     0,   114,   115,   116,   117,
     118,   119,   120,   121,   122,   123,   124,   125,   126,   127,
     128,   129,   130,   131,   132,   133,   134,   135,   136,   137,
     138,   139,   140,   141,   142,   143,   144,   145,   146,   147,
     148,   149,   150,   151,   152,   153,   154,   155,   156,   157,
     158,   159,   160,   161,   162,   163,   164,   165,   166,   167,
     168,   169,   170,   171,   172,   173,   174,     0,   175,   176,
     177,   178,     0,   179,   180,     0,   181,   182,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   798,     0,   799,   800,
     183,     0,   895,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     798,     0,     0,     0,   183,     0,  1171,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   580,   581,   582,   583,   183,   113,
       0,     0,     0,     0,   114,   115,   116,   117,   118,   119,
     120,   121,   122,   123,   124,   125,   126,   127,   128,   129,
     130,   131,   132,   133,   134,   135,   136,   137,   138,   139,
     140,   141,   142,   143,   144,   145,   146,   147,   148,   149,
     150,   151,   152,   153,   154,   155,   156,   157,   158,   159,
     160,   161,   162,   163,   164,   165,   166,   167,   168,   169,
     170,   171,   172,   173,   174,     0,   175,   176,   177,   178,
       0,   179,   180,   113,   181,   182,     0,     0,   114,   115,
     116,   117,   118,   119,   120,   121,   122,   123,   124,   125,
     126,   127,   128,   129,   130,   131,   132,   133,   134,   135,
     136,   137,   138,   139,   140,   141,   142,   143,   144,   145,
     146,   147,   148,   149,   150,   151,   152,   153,   154,   155,
     156,   157,   158,   159,   160,   161,   162,   163,   164,   165,
     166,   167,   168,   169,   170,   171,   172,   173,   174,     0,
     175,   176,   177,   178,     0,   179,   180,   113,   181,   182,
       0,     0,   114,   115,   116,   117,   118,   119,   120,   121,
     122,   123,   124,   125,   126,   127,   128,   129,   130,   131,
     132,   133,   134,   135,   136,   137,   138,   139,   140,   141,
     142,   143,   144,   145,   146,   147,   148,   149,   150,   151,
     152,   153,   154,   155,   156,   157,   158,   159,   160,   161,
     162,   163,   164,   165,   166,   167,   168,   169,   170,   171,
     172,   173,   174,     0,   175,   176,   177,   178,     0,   179,
     180,     0,   181,   182,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   992,     0,     0,     0,   183,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   798,     0,     0,     0,
     183,   263,   264,   265,   266,   267,   268,   269,   270,   271,
     272,   273,   274,   275,   276,   277,   278,   279,   280,   281,
     282,   283,   284,   285,   286,   287,   288,   289,   290,   291,
     292,   293,   294,   295,   296,   297,   298,   299,   300,   301,
     302,   303,   304,   305,   306,   307,   308,   309,   310,   311,
       0,   312,   313,   314,   315,   316,   317,   318,   319,   320,
     321,   322,   323,   324,   325,   326,   327,   328,   329,   330,
     331,   332,   333,     0,   183
};

static const yytype_int16 yycheck[] =
{
      84,   106,   107,   412,   413,   654,   437,   654,   707,   654,
     774,    95,   654,   654,   654,   841,    16,   689,   288,   657,
      16,   291,   457,   296,   286,   109,  1034,    12,     6,   285,
     286,   730,   467,   533,   834,   516,   445,    94,   120,   312,
     313,   123,   255,   120,     0,   545,   123,   106,   107,   108,
     109,   877,   111,   112,   113,   114,    99,   291,   101,   332,
     569,   196,   175,   222,    20,     0,   259,   190,   297,   339,
     263,   341,   257,   106,   107,   108,   109,   841,   111,   112,
     113,   114,   311,    83,   262,    20,     3,   222,   201,   202,
       7,     8,   168,     3,   272,   254,   262,     7,     8,   117,
     118,   119,   120,   226,   270,   614,   124,   107,   108,   185,
     106,   345,   108,   877,   197,   198,   199,   200,   262,   254,
     263,   334,   240,   241,   262,   243,   111,   270,   272,   840,
     235,   244,   237,   238,   272,   834,   193,   848,   938,   850,
     224,   225,   226,   227,   228,   262,  1154,   262,   232,   163,
     164,   260,   801,   270,   801,   198,   801,   272,   172,   801,
     801,   801,   262,   247,   257,   208,   250,   197,   198,   199,
     200,   262,   272,    90,   192,    92,    93,   262,   262,   271,
      90,   272,    92,    93,   101,   270,   165,   166,   167,   459,
     272,   101,   275,   276,   122,   272,   263,  1023,   257,   469,
     470,   471,   119,   120,   121,   184,   123,   124,     5,   119,
     120,   121,  1038,   123,   124,   193,   194,  1017,   699,   257,
     720,   126,   131,   128,   257,   262,   496,   636,   266,   138,
     500,   666,   494,   257,   507,   265,   498,   499,   168,   239,
     236,   241,   498,   271,   240,   275,   276,    89,   176,   519,
     922,   950,    94,   526,   263,   185,   186,   120,   268,  1023,
     123,   270,   168,   169,   170,   171,   257,   195,   196,   269,
     165,   166,   167,   179,  1038,   117,   118,   119,   120,   262,
    1106,   264,   124,   117,   118,   119,   286,   287,     5,   289,
     124,   131,   132,   133,   134,   135,   136,   137,   138,   139,
     140,   141,   142,   143,   144,   145,   146,   257,   203,   204,
     205,   206,   207,   217,   398,   219,   220,   257,   222,     0,
     119,   120,   322,   323,   324,   124,   326,   327,   328,   251,
     252,   253,   254,   255,   256,   335,   176,   165,   166,   167,
     195,   196,  1106,   125,   779,   127,   263,   264,   130,   163,
     164,  1050,   622,   263,   438,   195,   196,   627,   260,   997,
     848,   263,   850,   633,   634,   117,   118,   119,   120,   141,
      35,   371,   124,    38,   146,   203,   204,   205,   206,   207,
     208,   209,   813,   176,   815,   237,   238,   239,   106,   107,
     108,   109,  1091,   111,   112,   113,   114,  1096,   224,   225,
      81,    82,    83,    84,    85,    86,    87,    88,   265,    90,
      91,    92,   682,   262,   684,   264,    97,    98,   688,   100,
     101,   257,   131,   132,   133,   134,   135,   136,   137,   138,
     139,   140,   141,   142,   143,   144,   145,   146,   102,   103,
     104,   105,   123,   131,   132,   133,   134,   135,   136,   137,
     138,   139,   140,   141,   142,   143,   144,   145,   146,   125,
     460,   127,   271,   463,   130,   549,   174,   175,   468,   245,
     246,   247,   248,   249,   250,   475,   188,   189,   190,   191,
    1129,  1128,  1127,  1124,  1126,  1125,   195,   196,   176,   210,
     211,   212,   213,   214,   215,   216,   257,   497,  1197,   270,
     584,   501,     6,   503,   163,   164,   275,   276,   508,   168,
     169,   170,   171,   197,   198,   199,   200,   304,   305,   178,
     520,   168,   169,   170,   171,   184,   184,   262,  1227,   264,
     530,  1230,   173,   180,   181,   182,   183,   184,   262,   262,
     264,   264,   175,   262,   544,   264,   262,   547,   264,  1248,
     708,   262,   710,   264,  1253,   262,  1255,   264,   262,  1024,
     264,  1026,   277,   278,   270,  1264,   566,   998,   300,   301,
     654,   270,   270,   187,   185,   179,   262,   661,    81,    82,
      83,    84,    85,    86,    87,    88,   273,    90,    91,    92,
     262,   270,   270,   593,    97,    98,   270,   100,   101,   267,
     269,   321,   265,   257,   604,   172,   196,   262,   692,   106,
     107,   108,   109,   110,   111,   112,   113,   114,   115,   116,
     123,   271,   270,   623,   624,   211,   265,   257,   628,   257,
     630,   631,   270,   270,   266,   635,   257,   271,   262,   270,
     262,   270,   726,   131,   132,   133,   134,   135,   136,   137,
     138,   139,   140,   141,   142,   143,   144,   145,   146,   147,
     148,   149,   150,   151,   152,   153,   154,   155,   156,   157,
     158,   159,   160,   161,   162,   163,   164,   265,   262,   270,
     262,   270,   262,   683,   262,   262,   262,   196,   262,   270,
     774,   691,   265,   262,   262,   266,   184,   262,   262,   262,
     700,   131,   132,   133,   134,   135,   136,   137,   138,   139,
     140,   141,   142,   143,   144,   145,   146,   801,   262,   262,
     262,  1130,   262,   277,   262,   262,   262,   262,   812,   729,
     262,   227,   228,   229,   230,   231,   232,   233,   234,   235,
     236,   461,   742,   743,   262,   262,   262,   262,   262,   262,
     834,   262,   257,   259,   262,   262,   266,   841,   270,    20,
     262,   262,   262,   262,  1076,   692,   264,   260,   701,   264,
     264,   262,   772,   262,   264,   262,   776,   262,   270,   262,
     266,   262,   502,   265,   399,   265,   270,   265,   262,   265,
     262,   270,   262,   877,   262,   270,   262,   270,   257,   270,
     257,   266,   262,   270,   909,   263,   262,   270,   270,   529,
     264,   895,   264,   262,   262,   262,   262,   262,   902,   262,
     262,   262,   262,   262,   262,   825,   262,   262,   257,   829,
     262,   265,   265,   553,   262,   262,   111,   640,   230,   270,
     262,   262,   262,   262,   270,   270,   270,   270,   263,   263,
     263,   851,   270,   263,   938,   263,   262,   262,   262,   262,
     860,   262,   260,   270,   948,   262,   266,   266,   270,   589,
     266,   591,   265,   873,   594,   595,   596,   147,   148,   149,
     150,   151,   152,   153,   154,   155,   156,   157,   158,   159,
     160,   161,   162,   163,   164,   266,   265,   270,   266,   262,
     620,   262,   262,   270,   270,   263,   263,   259,   263,   262,
     266,   270,   632,   262,   184,   214,   270,   262,   918,   270,
     270,   262,   270,   270,   270,   262,   270,   270,   270,   262,
     265,   270,   270,  1017,   270,   262,   264,   266,   264,  1023,
     264,   941,   262,   943,   265,   270,   262,   667,   270,   669,
     262,   671,   270,   262,  1038,   675,   262,   262,   262,   270,
     270,   262,   270,   963,   262,   685,   262,   270,   270,   689,
     262,   266,   266,   270,   262,   419,   266,   270,   220,   270,
     266,   270,   813,   270,   946,   705,   270,   270,   270,   709,
     270,   998,  1076,   874,  1017,   615,    -1,    -1,    -1,   364,
      -1,   721,   302,    -1,    -1,   725,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  1106,   500,    -1,    -1,   746,    -1,    -1,   498,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    1124,    -1,    -1,   763,    -1,   765,    -1,    -1,    -1,   769,
      -1,   771,    -1,    -1,    -1,    -1,    -1,   777,   778,    -1,
     780,   781,   782,    -1,    -1,    -1,   786,    -1,    -1,  1153,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  1171,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   821,    -1,    -1,    -1,    -1,   826,    -1,    -1,    -1,
      -1,   831,   832,    -1,    -1,    -1,    -1,  1201,    -1,    -1,
      -1,    -1,    -1,   843,   844,    -1,   846,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   862,   863,    -1,   865,    -1,   867,    -1,   869,
     870,   871,    -1,    -1,   874,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   883,   884,    -1,    -1,    -1,    -1,    -1,
      -1,   891,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   157,   158,   159,   160,   161,   162,   163,   164,
      -1,    -1,    -1,   913,    -1,   915,   916,   917,    -1,    -1,
     920,   921,   922,   923,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   938,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   946,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   954,    -1,   956,    -1,   958,    -1,
      -1,    -1,   962,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   972,   973,   974,   975,   976,    -1,   978,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  1001,    -1,    -1,    -1,  1005,  1006,    -1,    -1,    -1,
      -1,  1011,  1012,    -1,    -1,    -1,  1016,  1017,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  1025,    -1,    -1,    -1,    -1,
      -1,  1031,    -1,    -1,  1034,    -1,    -1,    -1,    -1,    -1,
    1040,    -1,    -1,    -1,    -1,    -1,    -1,  1047,  1048,    -1,
      -1,    -1,    -1,    -1,    -1,  1055,  1056,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1078,    -1,
    1080,  1081,  1082,    -1,    -1,  1085,  1086,  1087,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1099,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1109,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1119,
    1120,  1121,  1122,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  1132,    -1,    -1,    -1,  1136,  1137,    -1,    -1,
      -1,  1141,  1142,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    1150,    -1,    -1,    -1,  1154,    -1,  1156,    -1,    -1,    -1,
      -1,  1161,  1162,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  1183,    -1,    -1,    -1,    -1,  1188,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  1205,    -1,    -1,  1208,    -1,
      -1,    -1,  1212,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  1221,    -1,    -1,    -1,  1225,  1226,    -1,    -1,    -1,
      -1,  1231,    -1,  1233,    -1,    -1,    -1,    -1,    -1,  1239,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    1250,    -1,    -1,     4,    -1,    -1,    -1,  1257,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    -1,
      71,    72,    73,    74,    -1,    76,    77,     4,    79,    80,
      -1,    -1,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    -1,    71,    72,    73,    74,    -1,    76,
      77,     4,    79,    80,    -1,    -1,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    -1,    71,    72,
      73,    74,    -1,    76,    77,    -1,    79,    80,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   257,   258,   259,   260,
     261,    -1,   263,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   274,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     257,   258,   259,   260,   261,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   270,    -1,    -1,    -1,   274,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   257,   258,   259,   260,   261,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     4,    -1,   272,
      -1,   274,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    -1,    71,    72,    73,    74,    -1,    76,
      77,     4,    79,    80,    -1,    -1,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    -1,    71,    72,
      73,    74,    -1,    76,    77,     4,    79,    80,    -1,    -1,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    -1,    71,    72,    73,    74,    -1,    76,    77,    -1,
      79,    80,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     257,   258,   259,   260,   261,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   274,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   261,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   271,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   257,    -1,
     259,   260,   261,     4,   263,    -1,    -1,    -1,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    -1,
      71,    72,    73,    74,    -1,    76,    77,     4,    79,    80,
      -1,    -1,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    -1,    71,    72,    73,    74,    -1,    76,
      77,     4,    79,    80,    -1,    -1,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    -1,    71,    72,
      73,    74,    -1,    76,    77,    -1,    79,    80,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   257,    -1,   259,   260,
     261,    -1,   263,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     257,    -1,    -1,    -1,   261,    -1,   263,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   257,   258,   259,   260,   261,     4,
      -1,    -1,    -1,    -1,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    -1,    71,    72,    73,    74,
      -1,    76,    77,     4,    79,    80,    -1,    -1,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    -1,
      71,    72,    73,    74,    -1,    76,    77,     4,    79,    80,
      -1,    -1,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    -1,    71,    72,    73,    74,    -1,    76,
      77,    -1,    79,    80,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   257,    -1,    -1,    -1,   261,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   257,    -1,    -1,    -1,
     261,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      -1,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    -1,   261
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,    81,    82,    83,    84,    85,    86,    87,    88,    90,
      91,    92,    97,    98,   100,   101,   123,   279,   280,   281,
     282,   283,   284,   285,   305,   306,   329,   330,   331,   332,
     333,   335,   336,   337,   353,   354,   355,   356,   358,   359,
     372,   376,   257,   106,   107,   108,   109,   110,   111,   112,
     113,   114,   115,   116,   299,   300,   301,   302,   303,   304,
     260,   257,   131,   132,   133,   134,   135,   136,   137,   138,
     139,   140,   141,   142,   143,   144,   145,   146,   195,   196,
     311,   312,   314,   315,   328,     0,   281,   263,   344,   271,
     342,   348,   357,   270,   344,    89,    94,   117,   118,   119,
     120,   124,   334,   350,   374,   176,   312,   315,   318,   321,
       5,   262,   312,     4,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    71,    72,    73,    74,    76,
      77,    79,    80,   261,   286,   326,   377,     3,     7,     8,
      93,   121,   329,   344,   360,   361,   362,   372,   375,   378,
     379,   380,   389,   390,   391,   403,   120,   123,   338,   339,
     346,   102,   103,   104,   105,   363,   364,   367,   368,   369,
     370,   371,   362,   286,   321,   321,   125,   127,   130,   271,
     340,   347,   349,   257,   122,   315,   318,   320,   312,   318,
     312,   315,   286,   303,   268,   262,   270,   327,     6,   193,
     194,   290,   257,     5,   362,   264,   345,   361,   119,   120,
     124,   373,   321,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,   409,   410,   411,   412,   414,   419,
     420,   421,   422,   424,   431,   433,   434,   436,   437,   441,
     443,   444,   445,   449,   450,   451,   452,   457,   459,   464,
     465,   466,   470,   471,   475,   476,   478,   481,   484,   486,
     487,   488,   489,   490,   491,   495,   496,   497,   499,   500,
     503,   504,   509,   510,   512,   515,   516,   517,   522,   523,
     526,   528,   529,   534,   535,   536,   537,   541,   321,   262,
     272,   343,   257,   257,   257,   299,   365,   366,   257,   366,
     369,   345,   286,   286,   286,   286,   286,   346,   286,   351,
     117,   118,   119,   124,   319,   318,   315,   318,   318,   312,
     315,   312,   265,   322,   323,   257,   286,   271,   384,   286,
     288,   257,   270,   345,   290,   286,   163,   164,   168,   169,
     170,   171,   178,   184,   404,   406,   415,   416,   472,   473,
     474,   312,   472,   485,   172,   417,   418,   472,   477,   168,
     185,   186,   460,   461,   462,   463,   147,   148,   149,   150,
     151,   152,   153,   154,   155,   156,   157,   158,   159,   160,
     161,   162,   163,   164,   415,   505,   506,   511,   312,   415,
     506,   513,   312,   416,   312,   173,   467,   468,   469,   180,
     181,   182,   183,   405,   406,   407,   416,   453,   454,   455,
     456,   117,   118,   119,   120,   124,   192,   307,   308,   308,
     469,   190,   226,   533,   227,   228,   229,   230,   231,   232,
     233,   234,   235,   236,   527,   533,   533,   527,   175,   423,
     174,   423,   430,   423,   270,   270,   270,   210,   211,   212,
     213,   214,   215,   216,   518,   519,   469,   308,   440,   308,
     175,   201,   202,   244,   538,   539,   126,   128,   479,   480,
     257,   258,   259,   260,   274,   286,   394,   395,   399,   312,
     312,   312,   187,   442,   312,   312,   312,   251,   252,   253,
     254,   255,   256,   520,   521,   188,   189,   190,   191,   524,
     525,   240,   241,   243,   446,   308,   224,   225,   494,   290,
     312,   185,   413,   416,   416,   179,   406,   408,   432,   179,
     435,   474,   312,   168,   185,   498,   286,   339,   262,   273,
     262,   323,   323,   270,   270,   270,   272,   341,   348,   257,
     266,   265,   267,   324,   325,   269,   272,   338,   382,   383,
     286,   262,   270,   257,   323,   418,   416,   312,   399,   312,
     418,   312,   416,   416,   416,   312,   506,   165,   166,   167,
     416,   507,   508,   312,   506,   513,   506,   416,   508,   312,
     399,   312,   263,   399,   402,   308,   309,   312,   417,   416,
     312,   308,   131,   138,   310,   313,   399,   312,   519,   312,
     519,   165,   166,   167,   203,   204,   205,   206,   207,   501,
     502,   312,   286,   381,   401,   271,   427,   270,   399,   196,
     312,   165,   166,   167,   203,   204,   205,   206,   207,   208,
     209,   438,   439,   502,   141,   146,   540,   270,   286,   197,
     198,   199,   200,   392,   393,   399,   245,   246,   247,   248,
     249,   250,   492,   493,   399,   312,   399,   399,   399,   312,
     211,   447,   502,   494,   265,   399,   416,   312,   312,   416,
     312,   312,   312,   399,   416,   416,   312,   323,   257,   257,
     365,   270,   270,   270,   352,   266,   257,   270,   257,   259,
     260,   263,   286,   289,   291,   292,   293,   294,   295,   296,
     297,   298,   311,   262,   272,   271,   388,   286,   270,   418,
     399,   262,   399,   399,   399,   416,   312,   399,   514,   416,
     514,   262,   312,   288,   262,   217,   219,   220,   222,   530,
     531,   265,   417,   312,   313,   399,   262,   402,   531,   399,
     531,   519,   399,   270,   398,   399,   425,   426,   286,   270,
     312,   402,   312,   312,   399,   262,   399,   262,   399,   262,
     262,   262,   399,   196,   399,   448,   312,   265,   286,   395,
     396,   397,   400,   262,   312,   399,   399,   418,   399,   399,
     399,   262,   399,   262,   266,   263,   289,   291,   293,   294,
     296,   297,   262,   262,   262,   286,   287,   382,   272,   338,
     386,   387,   270,   262,   399,   262,   262,   262,   312,   399,
     277,   262,   312,   262,   399,   399,   264,   286,   397,   402,
     482,   483,   314,   316,   317,   400,   399,   399,   262,   399,
     262,   316,   262,   316,   312,   262,   262,   272,   262,   429,
     312,   262,   399,   399,   262,   399,   262,   399,   262,   399,
     399,   399,   262,   312,   448,   270,   400,   275,   276,   266,
     399,   399,   262,   262,   262,   262,   262,   399,   262,   257,
     289,   291,   293,   294,   296,   297,   264,   264,   264,   264,
     264,   264,   257,   286,   260,   259,   318,   385,   262,   272,
     399,   262,   399,   399,   399,   312,   262,   399,   399,   514,
     399,   262,   262,   265,   270,   266,   262,   262,   286,   397,
     399,   458,   270,   265,   312,   265,   312,   237,   238,   239,
     532,   265,   425,   262,   271,   286,   270,   402,   265,   262,
     262,   399,   270,   399,   270,   399,   270,   262,   262,   399,
     312,   266,   257,   257,   270,   262,   262,   399,   399,   399,
     399,   399,   270,   399,   264,   264,   264,   264,   264,   264,
     262,   262,   262,   262,   262,   262,   311,   386,   262,   399,
     262,   262,   262,   399,   399,   262,   262,   262,   399,   399,
     257,   262,   399,   458,   270,   400,   532,   399,   532,   265,
     399,   272,   398,   428,   262,   400,   265,   399,   270,   262,
     270,   399,   399,   270,   402,   270,   399,   399,   270,   262,
     262,   262,   262,   270,   263,   263,   263,   263,   263,   263,
     287,   399,   262,   399,   399,   399,   262,   262,   399,   399,
     399,   262,   262,   266,   402,   270,   270,   266,   402,   266,
     265,   399,   266,   262,   262,   272,   265,   266,   400,   270,
     399,   262,   262,   262,   270,   270,   399,   399,   399,   399,
     289,   263,   291,   293,   263,   294,   296,   263,   297,   323,
     270,   399,   270,   262,   270,   399,   399,   270,   262,   270,
     399,   399,   270,   270,   262,   270,   399,   262,   270,   286,
     398,   262,   399,   270,   266,   262,   399,   399,   265,   270,
     270,   270,   262,   264,   264,   264,   264,   264,   264,   270,
     399,   262,   270,   399,   270,   262,   265,   262,   402,   286,
     262,   262,   399,   262,   270,   399,   399,   270,   399,   262,
     399,   399,   402,   266,   402,   399,   270,   399,   262,   270,
     262,   399,   270,   262,   266,   262,   266,   262,   270,   270,
     402,   399,   270,   402,   262,   402,   270,   399,   266,   270,
     266,   402,   270,   270,   270,   270,   270
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   278,   279,   279,   279,   279,   279,   279,   279,   279,
     279,   279,   279,   280,   281,   281,   281,   281,   281,   282,
     282,   283,   283,   283,   283,   283,   283,   283,   283,   284,
     285,   286,   286,   286,   287,   287,   288,   288,   289,   289,
     289,   290,   290,   289,   291,   291,   292,   292,   292,   292,
     293,   293,   294,   294,   295,   295,   295,   295,   296,   296,
     297,   297,   298,   298,   298,   298,   299,   299,   299,   299,
     299,   299,   299,   299,   300,   301,   301,   302,   302,   302,
     303,   304,   304,   304,   305,   306,   307,   307,   307,   307,
     307,   308,   309,   309,   310,   310,   311,   311,   311,   311,
     311,   311,   311,   311,   311,   311,   311,   311,   311,   311,
     311,   311,   312,   313,   314,   314,   315,   316,   317,   317,
     318,   319,   319,   319,   319,   320,   321,   321,   321,   321,
     321,   321,   321,   321,   321,   321,   321,   321,   322,   322,
     322,   323,   323,   324,   325,   324,   324,   324,   326,   326,
     327,   326,   328,   328,   329,   330,   331,   332,   333,   334,
     334,   335,   336,   337,   338,   338,   339,   340,   341,   342,
     343,   344,   345,   346,   346,   346,   347,   348,   349,   349,
     350,   351,   352,   352,   353,   354,   355,   356,   357,   357,
     358,   359,   359,   360,   360,   360,   360,   360,   360,   361,
     361,   361,   361,   362,   362,   363,   364,   364,   364,   365,
     366,   366,   367,   367,   368,   368,   369,   369,   369,   369,
     370,   370,   371,   371,   372,   372,   372,   372,   373,   373,
     373,   374,   374,   375,   376,   377,   377,   377,   377,   377,
     377,   377,   377,   377,   377,   377,   377,   377,   377,   377,
     377,   377,   377,   377,   377,   377,   377,   377,   377,   377,
     377,   377,   377,   377,   377,   377,   377,   377,   377,   377,
     377,   377,   377,   377,   377,   377,   377,   377,   377,   377,
     377,   377,   377,   377,   377,   377,   377,   377,   377,   377,
     377,   377,   377,   377,   377,   377,   377,   377,   377,   377,
     377,   377,   377,   377,   378,   379,   380,   381,   382,   383,
     383,   384,   384,   384,   385,   385,   386,   387,   387,   388,
     388,   389,   390,   391,   391,   392,   392,   392,   392,   393,
     393,   394,   394,   395,   395,   395,   395,   396,   397,   397,
     398,   399,   399,   400,   400,   400,   401,   402,   402,   403,
     403,   403,   404,   404,   404,   404,   405,   405,   405,   405,
     406,   407,   408,   408,   409,   409,   409,   409,   409,   409,
     409,   409,   409,   409,   409,   409,   409,   409,   409,   409,
     409,   409,   409,   409,   409,   409,   409,   409,   409,   409,
     409,   409,   409,   409,   409,   409,   409,   409,   409,   409,
     409,   409,   409,   409,   409,   409,   409,   409,   409,   409,
     409,   409,   409,   409,   409,   409,   409,   410,   410,   410,
     410,   410,   410,   410,   411,   412,   412,   412,   412,   412,
     413,   414,   415,   416,   416,   417,   418,   418,   419,   419,
     420,   421,   421,   422,   423,   423,   424,   425,   426,   426,
     427,   427,   428,   428,   429,   429,   429,   429,   429,   429,
     430,   430,   424,   431,   432,   432,   433,   433,   434,   435,
     435,   436,   436,   437,   438,   438,   438,   438,   438,   438,
     438,   438,   438,   438,   439,   440,   440,   441,   441,   442,
     442,   443,   444,   445,   446,   446,   446,   447,   447,   448,
     448,   449,   450,   451,   452,   453,   454,   455,   455,   456,
     456,   456,   456,   457,   458,   458,   459,   459,   460,   461,
     462,   462,   463,   463,   463,   464,   465,   466,   467,   468,
     468,   469,   470,   471,   472,   472,   473,   473,   473,   474,
     474,   475,   475,   476,   477,   477,   478,   479,   479,   480,
     481,   482,   483,   483,   483,   484,   485,   485,   486,   487,
     488,   488,   489,   490,   491,   492,   492,   492,   492,   492,
     492,   493,   493,   494,   494,   495,   496,   497,   498,   498,
     498,   499,   499,   500,   501,   501,   501,   501,   501,   501,
     501,   501,   502,   503,   504,   504,   505,   505,   505,   505,
     505,   505,   505,   505,   505,   505,   505,   505,   505,   505,
     505,   505,   505,   505,   506,   507,   507,   507,   508,   509,
     510,   511,   511,   512,   512,   513,   513,   514,   514,   515,
     515,   515,   516,   517,   518,   518,   518,   518,   518,   518,
     518,   519,   520,   520,   520,   520,   520,   520,   521,   522,
     523,   524,   524,   524,   524,   525,   526,   527,   527,   527,
     527,   527,   527,   527,   527,   527,   527,   528,   529,   530,
     530,   530,   530,   531,   531,   532,   532,   532,   533,   533,
     534,   535,   536,   537,   538,   538,   538,   538,   539,   540,
     540,   541
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       2,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       2,     1,     1,     1,     0,     1,     1,     3,     1,     3,
       1,     0,     1,     3,     7,     7,     1,     3,     3,     1,
       1,     3,     7,     7,     1,     3,     3,     1,     1,     3,
       7,     7,     1,     3,     3,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     0,     1,     3,     2,     2,     1,     1,     1,     1,
       1,     1,     1,     0,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     0,
       2,     1,     1,     1,     1,     2,     2,     2,     1,     3,
       3,     3,     3,     3,     3,     2,     2,     3,     3,     4,
       2,     0,     1,     0,     1,     2,     2,     2,     1,     4,
       1,     3,     2,     1,     4,     3,     6,     6,     6,     1,
       1,     5,     5,     5,     1,     1,     4,     1,     1,     1,
       1,     1,     2,     1,     0,     3,     3,     3,     1,     0,
       1,     1,     1,     0,     6,     5,     4,     3,     1,     0,
       3,     4,     2,     1,     1,     1,     1,     1,     1,     1,
       1,     3,     3,     1,     2,     2,     2,     4,     6,     3,
       1,     3,     2,     2,     2,     2,     1,     1,     1,     1,
       1,     2,     0,     1,     1,     1,     1,     0,     1,     1,
       1,     1,     1,     2,     2,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     5,     4,     2,     1,     3,     1,
       3,     3,     2,     0,     0,     1,     5,     1,     3,     3,
       2,     6,     4,     2,     3,     1,     1,     1,     1,     1,
       0,     2,     2,     1,     1,     1,     1,     1,     3,     3,
       1,     1,     1,     1,     1,     1,     1,     1,     3,     1,
       1,     0,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     0,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     8,     1,     1,     1,     1,     1,
       1,     8,     1,     1,     0,     1,     1,     0,     1,     1,
       7,     1,     1,     9,     0,     1,     4,     1,     1,     3,
       4,     0,     1,     3,     6,     5,     2,     4,     3,     0,
       1,     1,     1,     6,     1,     3,     1,     1,     9,     1,
       0,     1,     1,     9,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     0,    12,    14,     1,
       0,    10,    12,     7,     1,     1,     1,     2,     0,     2,
       0,     5,     6,     2,     6,     1,     1,     1,     1,     3,
       2,     2,     1,     8,     1,     1,     7,     8,     2,     2,
       2,     0,     1,     1,     1,     9,     2,     6,     1,     1,
       0,     4,     9,     9,     1,     1,     1,     1,     1,     3,
       2,     1,     1,    11,     1,     2,    11,     1,     1,     1,
       3,     4,     1,     1,     1,     6,     0,     1,     9,     9,
       1,     1,     6,     2,     6,     1,     1,     1,     1,     1,
       1,     1,     0,     1,     1,     7,     6,    11,     2,     0,
       2,     1,     1,     7,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     8,     3,     4,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,    10,
      10,     2,     2,    10,    14,     2,     2,     3,     1,     9,
       9,    13,    12,     9,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     7,
      13,     1,     1,     1,     1,     1,    14,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     9,     9,     1,
       1,     1,     1,     1,     0,     1,     1,     1,     1,     1,
      15,    15,    14,     2,     1,     1,     1,     1,     1,     1,
       1,     7
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
      yyerror (&yylloc, lexer, state, YY_("syntax error: cannot back up")); \
      YYERROR;                                                  \
    }                                                           \
while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)                                \
    do                                                                  \
      if (N)                                                            \
        {                                                               \
          (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;        \
          (Current).first_column = YYRHSLOC (Rhs, 1).first_column;      \
          (Current).last_line    = YYRHSLOC (Rhs, N).last_line;         \
          (Current).last_column  = YYRHSLOC (Rhs, N).last_column;       \
        }                                                               \
      else                                                              \
        {                                                               \
          (Current).first_line   = (Current).last_line   =              \
            YYRHSLOC (Rhs, 0).last_line;                                \
          (Current).first_column = (Current).last_column =              \
            YYRHSLOC (Rhs, 0).last_column;                              \
        }                                                               \
    while (0)
#endif

#define YYRHSLOC(Rhs, K) ((Rhs)[K])


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


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL

/* Print *YYLOCP on YYO.  Private, do not rely on its existence. */

YY_ATTRIBUTE_UNUSED
static unsigned
yy_location_print_ (FILE *yyo, YYLTYPE const * const yylocp)
{
  unsigned res = 0;
  int end_col = 0 != yylocp->last_column ? yylocp->last_column - 1 : 0;
  if (0 <= yylocp->first_line)
    {
      res += YYFPRINTF (yyo, "%d", yylocp->first_line);
      if (0 <= yylocp->first_column)
        res += YYFPRINTF (yyo, ".%d", yylocp->first_column);
    }
  if (0 <= yylocp->last_line)
    {
      if (yylocp->first_line < yylocp->last_line)
        {
          res += YYFPRINTF (yyo, "-%d", yylocp->last_line);
          if (0 <= end_col)
            res += YYFPRINTF (yyo, ".%d", end_col);
        }
      else if (0 <= end_col && yylocp->first_column < end_col)
        res += YYFPRINTF (yyo, "-%d", end_col);
    }
  return res;
 }

#  define YY_LOCATION_PRINT(File, Loc)          \
  yy_location_print_ (File, &(Loc))

# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value, Location, lexer, state); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp, parser::PTXLexer& lexer, parser::PTXParser::State& state)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  YYUSE (yylocationp);
  YYUSE (lexer);
  YYUSE (state);
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
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp, parser::PTXLexer& lexer, parser::PTXParser::State& state)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  YY_LOCATION_PRINT (yyoutput, *yylocationp);
  YYFPRINTF (yyoutput, ": ");
  yy_symbol_value_print (yyoutput, yytype, yyvaluep, yylocationp, lexer, state);
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
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, YYLTYPE *yylsp, int yyrule, parser::PTXLexer& lexer, parser::PTXParser::State& state)
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
                       , &(yylsp[(yyi + 1) - (yynrhs)])                       , lexer, state);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, yylsp, Rule, lexer, state); \
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
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
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
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
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
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep, YYLTYPE *yylocationp, parser::PTXLexer& lexer, parser::PTXParser::State& state)
{
  YYUSE (yyvaluep);
  YYUSE (yylocationp);
  YYUSE (lexer);
  YYUSE (state);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/*----------.
| yyparse.  |
`----------*/

int
yyparse (parser::PTXLexer& lexer, parser::PTXParser::State& state)
{
/* The lookahead symbol.  */
int yychar;


/* The semantic value of the lookahead symbol.  */
/* Default value used for initialization, for pacifying older GCCs
   or non-GCC compilers.  */
YY_INITIAL_VALUE (static YYSTYPE yyval_default;)
YYSTYPE yylval YY_INITIAL_VALUE (= yyval_default);

/* Location data for the lookahead symbol.  */
static YYLTYPE yyloc_default
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
  = { 1, 1, 1, 1 }
# endif
;
YYLTYPE yylloc = yyloc_default;

    /* Number of syntax errors so far.  */
    int yynerrs;

    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.
       'yyls': related to locations.

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

    /* The location stack.  */
    YYLTYPE yylsa[YYINITDEPTH];
    YYLTYPE *yyls;
    YYLTYPE *yylsp;

    /* The locations where the error started and ended.  */
    YYLTYPE yyerror_range[3];

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;
  YYLTYPE yyloc;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N), yylsp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yylsp = yyls = yylsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  yylsp[0] = yylloc;
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
        YYLTYPE *yyls1 = yyls;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yyls1, yysize * sizeof (*yylsp),
                    &yystacksize);

        yyls = yyls1;
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
        YYSTACK_RELOCATE (yyls_alloc, yyls);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;
      yylsp = yyls + yysize - 1;

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
      yychar = yylex (&yylval, &yylloc, lexer, state);
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
  *++yylsp = yylloc;
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

  /* Default location.  */
  YYLLOC_DEFAULT (yyloc, (yylsp - yylen), yylen);
  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 13:
#line 155 "runtime/ocelot/parser/implementation/ptxgrammar.yy" /* yacc.c:1646  */
    {
	state.statementEnd( (yylsp[0]) );
}
#line 3057 "/home/soroosh/Project/gdev/release/cuda/ptxgrammar.cpp" /* yacc.c:1646  */
    break;

  case 29:
#line 169 "runtime/ocelot/parser/implementation/ptxgrammar.yy" /* yacc.c:1646  */
    {
	state.preprocessor( (yyvsp[0].value) );
}
#line 3065 "/home/soroosh/Project/gdev/release/cuda/ptxgrammar.cpp" /* yacc.c:1646  */
    break;

  case 30:
#line 174 "runtime/ocelot/parser/implementation/ptxgrammar.yy" /* yacc.c:1646  */
    { 
	state.version( (yyvsp[0].doubleFloat), (yylsp[0]) );
}
#line 3073 "/home/soroosh/Project/gdev/release/cuda/ptxgrammar.cpp" /* yacc.c:1646  */
    break;

  case 36:
#line 182 "runtime/ocelot/parser/implementation/ptxgrammar.yy" /* yacc.c:1646  */
    {
	state.identifierList( (yyvsp[0].text) );
}
#line 3081 "/home/soroosh/Project/gdev/release/cuda/ptxgrammar.cpp" /* yacc.c:1646  */
    break;

  case 37:
#line 187 "runtime/ocelot/parser/implementation/ptxgrammar.yy" /* yacc.c:1646  */
    {
	state.identifierList2( (yyvsp[0].text) );
}
#line 3089 "/home/soroosh/Project/gdev/release/cuda/ptxgrammar.cpp" /* yacc.c:1646  */
    break;

  case 38:
#line 192 "runtime/ocelot/parser/implementation/ptxgrammar.yy" /* yacc.c:1646  */
    {
	state.decimalListSingle( 0 );
	state.symbolListSingle( (yyvsp[0].text) );
}
#line 3098 "/home/soroosh/Project/gdev/release/cuda/ptxgrammar.cpp" /* yacc.c:1646  */
    break;

  case 39:
#line 198 "runtime/ocelot/parser/implementation/ptxgrammar.yy" /* yacc.c:1646  */
    {
	state.decimalListSingle2( 0 );
	state.symbolListSingle2( (yyvsp[0].text) );
}
#line 3107 "/home/soroosh/Project/gdev/release/cuda/ptxgrammar.cpp" /* yacc.c:1646  */
    break;

  case 40:
#line 204 "runtime/ocelot/parser/implementation/ptxgrammar.yy" /* yacc.c:1646  */
    {
	state.decimalListSingle( (yyvsp[0].value) );
}
#line 3115 "/home/soroosh/Project/gdev/release/cuda/ptxgrammar.cpp" /* yacc.c:1646  */
    break;

  case 41:
#line 209 "runtime/ocelot/parser/implementation/ptxgrammar.yy" /* yacc.c:1646  */
    {
    state.metadata("");
}
#line 3123 "/home/soroosh/Project/gdev/release/cuda/ptxgrammar.cpp" /* yacc.c:1646  */
    break;

  case 42:
#line 214 "runtime/ocelot/parser/implementation/ptxgrammar.yy" /* yacc.c:1646  */
    {
    state.metadata( (yyvsp[0].text) );
}
#line 3131 "/home/soroosh/Project/gdev/release/cuda/ptxgrammar.cpp" /* yacc.c:1646  */
    break;

  case 43:
#line 219 "runtime/ocelot/parser/implementation/ptxgrammar.yy" /* yacc.c:1646  */
    {
	state.decimalListSingle2( (yyvsp[0].value) );
}
#line 3139 "/home/soroosh/Project/gdev/release/cuda/ptxgrammar.cpp" /* yacc.c:1646  */
    break;

  case 50:
#line 230 "runtime/ocelot/parser/implementation/ptxgrammar.yy" /* yacc.c:1646  */
    {
	state.floatList( (yyvsp[0].doubleFloat) );
}
#line 3147 "/home/soroosh/Project/gdev/release/cuda/ptxgrammar.cpp" /* yacc.c:1646  */
    break;

  case 51:
#line 235 "runtime/ocelot/parser/implementation/ptxgrammar.yy" /* yacc.c:1646  */
    {
	state.floatList1( (yyvsp[0].doubleFloat) );
}
#line 3155 "/home/soroosh/Project/gdev/release/cuda/ptxgrammar.cpp" /* yacc.c:1646  */
    break;

  case 58:
#line 246 "runtime/ocelot/parser/implementation/ptxgrammar.yy" /* yacc.c:1646  */
    {
	state.singleList( (yyvsp[0].singleFloat) );
}
#line 3163 "/home/soroosh/Project/gdev/release/cuda/ptxgrammar.cpp" /* yacc.c:1646  */
    break;

  case 59:
#line 251 "runtime/ocelot/parser/implementation/ptxgrammar.yy" /* yacc.c:1646  */
    {
	state.singleList1( (yyvsp[0].singleFloat) );
}
#line 3171 "/home/soroosh/Project/gdev/release/cuda/ptxgrammar.cpp" /* yacc.c:1646  */
    break;

  case 80:
#line 269 "runtime/ocelot/parser/implementation/ptxgrammar.yy" /* yacc.c:1646  */
    {
	state.targetElement( (yyvsp[0].value) );
}
#line 3179 "/home/soroosh/Project/gdev/release/cuda/ptxgrammar.cpp" /* yacc.c:1646  */
    break;

  case 84:
#line 277 "runtime/ocelot/parser/implementation/ptxgrammar.yy" /* yacc.c:1646  */
    {
	state.target();
}
#line 3187 "/home/soroosh/Project/gdev/release/cuda/ptxgrammar.cpp" /* yacc.c:1646  */
    break;

  case 85:
#line 282 "runtime/ocelot/parser/implementation/ptxgrammar.yy" /* yacc.c:1646  */
    {
	state.addressSize( (yyvsp[0].value) );
}
#line 3195 "/home/soroosh/Project/gdev/release/cuda/ptxgrammar.cpp" /* yacc.c:1646  */
    break;

  case 91:
#line 290 "runtime/ocelot/parser/implementation/ptxgrammar.yy" /* yacc.c:1646  */
    {
	state.addressSpace( (yyvsp[0].value) );
}
#line 3203 "/home/soroosh/Project/gdev/release/cuda/ptxgrammar.cpp" /* yacc.c:1646  */
    break;

  case 93:
#line 296 "runtime/ocelot/parser/implementation/ptxgrammar.yy" /* yacc.c:1646  */
    {
	state.noAddressSpace();
}
#line 3211 "/home/soroosh/Project/gdev/release/cuda/ptxgrammar.cpp" /* yacc.c:1646  */
    break;

  case 112:
#line 307 "runtime/ocelot/parser/implementation/ptxgrammar.yy" /* yacc.c:1646  */
    {
	state.dataType( (yyvsp[0].value) );
}
#line 3219 "/home/soroosh/Project/gdev/release/cuda/ptxgrammar.cpp" /* yacc.c:1646  */
    break;

  case 113:
#line 312 "runtime/ocelot/parser/implementation/ptxgrammar.yy" /* yacc.c:1646  */
    {
	state.dataType( (yyvsp[0].value) );
}
#line 3227 "/home/soroosh/Project/gdev/release/cuda/ptxgrammar.cpp" /* yacc.c:1646  */
    break;

  case 116:
#line 319 "runtime/ocelot/parser/implementation/ptxgrammar.yy" /* yacc.c:1646  */
    {
	state.statementVectorType( (yyvsp[0].value) );
}
#line 3235 "/home/soroosh/Project/gdev/release/cuda/ptxgrammar.cpp" /* yacc.c:1646  */
    break;

  case 117:
#line 324 "runtime/ocelot/parser/implementation/ptxgrammar.yy" /* yacc.c:1646  */
    {
	state.instructionVectorType( (yyvsp[0].value) );
}
#line 3243 "/home/soroosh/Project/gdev/release/cuda/ptxgrammar.cpp" /* yacc.c:1646  */
    break;

  case 120:
#line 331 "runtime/ocelot/parser/implementation/ptxgrammar.yy" /* yacc.c:1646  */
    { state.alignment = (yyvsp[0].value); }
#line 3249 "/home/soroosh/Project/gdev/release/cuda/ptxgrammar.cpp" /* yacc.c:1646  */
    break;

  case 125:
#line 335 "runtime/ocelot/parser/implementation/ptxgrammar.yy" /* yacc.c:1646  */
    {
	state.paramArgumentDeclaration((yyvsp[0].value));
}
#line 3257 "/home/soroosh/Project/gdev/release/cuda/ptxgrammar.cpp" /* yacc.c:1646  */
    break;

  case 126:
#line 339 "runtime/ocelot/parser/implementation/ptxgrammar.yy" /* yacc.c:1646  */
    {state.alignment = 1;}
#line 3263 "/home/soroosh/Project/gdev/release/cuda/ptxgrammar.cpp" /* yacc.c:1646  */
    break;

  case 127:
#line 340 "runtime/ocelot/parser/implementation/ptxgrammar.yy" /* yacc.c:1646  */
    {state.alignment = 1;}
#line 3269 "/home/soroosh/Project/gdev/release/cuda/ptxgrammar.cpp" /* yacc.c:1646  */
    break;

  case 128:
#line 341 "runtime/ocelot/parser/implementation/ptxgrammar.yy" /* yacc.c:1646  */
    { state.alignment = 1; }
#line 3275 "/home/soroosh/Project/gdev/release/cuda/ptxgrammar.cpp" /* yacc.c:1646  */
    break;

  case 138:
#line 353 "runtime/ocelot/parser/implementation/ptxgrammar.yy" /* yacc.c:1646  */
    {
	state.arrayDimensionSet( (yyvsp[-1].value), (yylsp[-1]), false );
}
#line 3283 "/home/soroosh/Project/gdev/release/cuda/ptxgrammar.cpp" /* yacc.c:1646  */
    break;

  case 139:
#line 358 "runtime/ocelot/parser/implementation/ptxgrammar.yy" /* yacc.c:1646  */
    {
	state.arrayDimensionSet( (yyvsp[-1].value), (yylsp[-1]), true );
}
#line 3291 "/home/soroosh/Project/gdev/release/cuda/ptxgrammar.cpp" /* yacc.c:1646  */
    break;

  case 140:
#line 363 "runtime/ocelot/parser/implementation/ptxgrammar.yy" /* yacc.c:1646  */
    {
	state.arrayDimensionSet( );
}
#line 3299 "/home/soroosh/Project/gdev/release/cuda/ptxgrammar.cpp" /* yacc.c:1646  */
    break;

  case 141:
#line 368 "runtime/ocelot/parser/implementation/ptxgrammar.yy" /* yacc.c:1646  */
    {
	state.arrayDimensions();
}
#line 3307 "/home/soroosh/Project/gdev/release/cuda/ptxgrammar.cpp" /* yacc.c:1646  */
    break;

  case 144:
#line 377 "runtime/ocelot/parser/implementation/ptxgrammar.yy" /* yacc.c:1646  */
    {
	state.assignment();
}
#line 3315 "/home/soroosh/Project/gdev/release/cuda/ptxgrammar.cpp" /* yacc.c:1646  */
    break;

  case 148:
#line 385 "runtime/ocelot/parser/implementation/ptxgrammar.yy" /* yacc.c:1646  */
    {
	state.registerDeclaration( (yyvsp[0].text), (yylsp[0]) );
}
#line 3323 "/home/soroosh/Project/gdev/release/cuda/ptxgrammar.cpp" /* yacc.c:1646  */
    break;

  case 149:
#line 390 "runtime/ocelot/parser/implementation/ptxgrammar.yy" /* yacc.c:1646  */
    {
	state.registerDeclaration( (yyvsp[-3].text), (yylsp[-3]), (yyvsp[-1].value) );
}
#line 3331 "/home/soroosh/Project/gdev/release/cuda/ptxgrammar.cpp" /* yacc.c:1646  */
    break;

  case 150:
#line 395 "runtime/ocelot/parser/implementation/ptxgrammar.yy" /* yacc.c:1646  */
    {
	state.registerSeperator( (yylsp[0]) );
}
#line 3339 "/home/soroosh/Project/gdev/release/cuda/ptxgrammar.cpp" /* yacc.c:1646  */
    break;

  case 151:
#line 400 "runtime/ocelot/parser/implementation/ptxgrammar.yy" /* yacc.c:1646  */
    {
	state.registerDeclaration( (yyvsp[0].text), (yylsp[0]) );
}
#line 3347 "/home/soroosh/Project/gdev/release/cuda/ptxgrammar.cpp" /* yacc.c:1646  */
    break;

  case 155:
#line 410 "runtime/ocelot/parser/implementation/ptxgrammar.yy" /* yacc.c:1646  */
    {
	state.fileDeclaration( (yyvsp[-1].value), (yyvsp[0].text) );
}
#line 3355 "/home/soroosh/Project/gdev/release/cuda/ptxgrammar.cpp" /* yacc.c:1646  */
    break;

  case 156:
#line 416 "runtime/ocelot/parser/implementation/ptxgrammar.yy" /* yacc.c:1646  */
    {
	state.locationAddress( (yyvsp[-4].value) );
	state.initializableDeclaration( (yyvsp[-2].text), (yylsp[-2]), (yylsp[0]) );
}
#line 3364 "/home/soroosh/Project/gdev/release/cuda/ptxgrammar.cpp" /* yacc.c:1646  */
    break;

  case 157:
#line 423 "runtime/ocelot/parser/implementation/ptxgrammar.yy" /* yacc.c:1646  */
    {
	state.initializableDeclaration( (yyvsp[-3].text), (yylsp[-3]), (yylsp[-1]) );
	state.statementEnd( (yylsp[-3]) );
}
#line 3373 "/home/soroosh/Project/gdev/release/cuda/ptxgrammar.cpp" /* yacc.c:1646  */
    break;

  case 158:
#line 430 "runtime/ocelot/parser/implementation/ptxgrammar.yy" /* yacc.c:1646  */
    {
	state.locationAddress( (yyvsp[-4].value) );
	state.initializableDeclaration( (yyvsp[-2].text), (yylsp[-2]), (yylsp[0]) );
}
#line 3382 "/home/soroosh/Project/gdev/release/cuda/ptxgrammar.cpp" /* yacc.c:1646  */
    break;

  case 161:
#line 438 "runtime/ocelot/parser/implementation/ptxgrammar.yy" /* yacc.c:1646  */
    {
	state.textureDeclaration( (yyvsp[-3].value), (yyvsp[-1].text), (yylsp[-4]) );
}
#line 3390 "/home/soroosh/Project/gdev/release/cuda/ptxgrammar.cpp" /* yacc.c:1646  */
    break;

  case 162:
#line 443 "runtime/ocelot/parser/implementation/ptxgrammar.yy" /* yacc.c:1646  */
    {
	state.samplerDeclaration( (yyvsp[-3].value), (yyvsp[-1].text), (yylsp[-4]) );
}
#line 3398 "/home/soroosh/Project/gdev/release/cuda/ptxgrammar.cpp" /* yacc.c:1646  */
    break;

  case 163:
#line 448 "runtime/ocelot/parser/implementation/ptxgrammar.yy" /* yacc.c:1646  */
    {
	state.surfaceDeclaration( (yyvsp[-3].value), (yyvsp[-1].text), (yylsp[-4]) );
}
#line 3406 "/home/soroosh/Project/gdev/release/cuda/ptxgrammar.cpp" /* yacc.c:1646  */
    break;

  case 164:
#line 453 "runtime/ocelot/parser/implementation/ptxgrammar.yy" /* yacc.c:1646  */
    {
	state.locationAddress( (yyvsp[0].value) );
}
#line 3414 "/home/soroosh/Project/gdev/release/cuda/ptxgrammar.cpp" /* yacc.c:1646  */
    break;

  case 165:
#line 458 "runtime/ocelot/parser/implementation/ptxgrammar.yy" /* yacc.c:1646  */
    {
	state.locationAddress( (yyvsp[0].value) );
}
#line 3422 "/home/soroosh/Project/gdev/release/cuda/ptxgrammar.cpp" /* yacc.c:1646  */
    break;

  case 166:
#line 464 "runtime/ocelot/parser/implementation/ptxgrammar.yy" /* yacc.c:1646  */
    {
	state.attribute( false, false, false );
	state.argumentDeclaration( (yyvsp[-1].text), (yylsp[-3]) );
}
#line 3431 "/home/soroosh/Project/gdev/release/cuda/ptxgrammar.cpp" /* yacc.c:1646  */
    break;

  case 167:
#line 470 "runtime/ocelot/parser/implementation/ptxgrammar.yy" /* yacc.c:1646  */
    {
	state.returnArgumentListBegin( (yylsp[0]) );
}
#line 3439 "/home/soroosh/Project/gdev/release/cuda/ptxgrammar.cpp" /* yacc.c:1646  */
    break;

  case 168:
#line 475 "runtime/ocelot/parser/implementation/ptxgrammar.yy" /* yacc.c:1646  */
    {
	state.returnArgumentListEnd( (yylsp[0]) );
}
#line 3447 "/home/soroosh/Project/gdev/release/cuda/ptxgrammar.cpp" /* yacc.c:1646  */
    break;

  case 169:
#line 480 "runtime/ocelot/parser/implementation/ptxgrammar.yy" /* yacc.c:1646  */
    {
	state.argumentListBegin( (yylsp[0]) );
}
#line 3455 "/home/soroosh/Project/gdev/release/cuda/ptxgrammar.cpp" /* yacc.c:1646  */
    break;

  case 170:
#line 485 "runtime/ocelot/parser/implementation/ptxgrammar.yy" /* yacc.c:1646  */
    {
	state.argumentListEnd( (yylsp[0]) );
}
#line 3463 "/home/soroosh/Project/gdev/release/cuda/ptxgrammar.cpp" /* yacc.c:1646  */
    break;

  case 171:
#line 490 "runtime/ocelot/parser/implementation/ptxgrammar.yy" /* yacc.c:1646  */
    {
	state.openBrace( (yylsp[0]) );
}
#line 3471 "/home/soroosh/Project/gdev/release/cuda/ptxgrammar.cpp" /* yacc.c:1646  */
    break;

  case 172:
#line 495 "runtime/ocelot/parser/implementation/ptxgrammar.yy" /* yacc.c:1646  */
    {
	state.closeBrace( (yylsp[-1]) );
}
#line 3479 "/home/soroosh/Project/gdev/release/cuda/ptxgrammar.cpp" /* yacc.c:1646  */
    break;

  case 180:
#line 510 "runtime/ocelot/parser/implementation/ptxgrammar.yy" /* yacc.c:1646  */
    {
	state.functionBegin( (yylsp[0]) );
}
#line 3487 "/home/soroosh/Project/gdev/release/cuda/ptxgrammar.cpp" /* yacc.c:1646  */
    break;

  case 181:
#line 515 "runtime/ocelot/parser/implementation/ptxgrammar.yy" /* yacc.c:1646  */
    {
	state.functionName( (yyvsp[0].text), (yylsp[0]) );
}
#line 3495 "/home/soroosh/Project/gdev/release/cuda/ptxgrammar.cpp" /* yacc.c:1646  */
    break;

  case 184:
#line 524 "runtime/ocelot/parser/implementation/ptxgrammar.yy" /* yacc.c:1646  */
    {
	state.functionDeclaration( (yylsp[-2]), false );
}
#line 3503 "/home/soroosh/Project/gdev/release/cuda/ptxgrammar.cpp" /* yacc.c:1646  */
    break;

  case 185:
#line 530 "runtime/ocelot/parser/implementation/ptxgrammar.yy" /* yacc.c:1646  */
    {
	state.functionDeclaration( (yylsp[-1]), true );
}
#line 3511 "/home/soroosh/Project/gdev/release/cuda/ptxgrammar.cpp" /* yacc.c:1646  */
    break;

  case 187:
#line 537 "runtime/ocelot/parser/implementation/ptxgrammar.yy" /* yacc.c:1646  */
    {
	state.entry( (yyvsp[0].text), (yylsp[-2]) );
}
#line 3519 "/home/soroosh/Project/gdev/release/cuda/ptxgrammar.cpp" /* yacc.c:1646  */
    break;

  case 190:
#line 545 "runtime/ocelot/parser/implementation/ptxgrammar.yy" /* yacc.c:1646  */
    {
	state.entryDeclaration( (yylsp[-2]) );
}
#line 3527 "/home/soroosh/Project/gdev/release/cuda/ptxgrammar.cpp" /* yacc.c:1646  */
    break;

  case 192:
#line 552 "runtime/ocelot/parser/implementation/ptxgrammar.yy" /* yacc.c:1646  */
    {
	state.entryPrototype( (yylsp[-1]) );
}
#line 3535 "/home/soroosh/Project/gdev/release/cuda/ptxgrammar.cpp" /* yacc.c:1646  */
    break;

  case 200:
#line 562 "runtime/ocelot/parser/implementation/ptxgrammar.yy" /* yacc.c:1646  */
    {
	state.statementEnd( (yylsp[0]) );
}
#line 3543 "/home/soroosh/Project/gdev/release/cuda/ptxgrammar.cpp" /* yacc.c:1646  */
    break;

  case 201:
#line 567 "runtime/ocelot/parser/implementation/ptxgrammar.yy" /* yacc.c:1646  */
    {
	state.entryStatement( (yylsp[-1]) );
	state.instruction();
}
#line 3552 "/home/soroosh/Project/gdev/release/cuda/ptxgrammar.cpp" /* yacc.c:1646  */
    break;

  case 205:
#line 578 "runtime/ocelot/parser/implementation/ptxgrammar.yy" /* yacc.c:1646  */
    {
	state.maxnreg( (yyvsp[0].value) );
}
#line 3560 "/home/soroosh/Project/gdev/release/cuda/ptxgrammar.cpp" /* yacc.c:1646  */
    break;

  case 206:
#line 583 "runtime/ocelot/parser/implementation/ptxgrammar.yy" /* yacc.c:1646  */
    {
	state.maxntid( (yyvsp[0].value) );
}
#line 3568 "/home/soroosh/Project/gdev/release/cuda/ptxgrammar.cpp" /* yacc.c:1646  */
    break;

  case 207:
#line 588 "runtime/ocelot/parser/implementation/ptxgrammar.yy" /* yacc.c:1646  */
    {
	state.maxntid( (yyvsp[-2].value), (yyvsp[0].value) );
}
#line 3576 "/home/soroosh/Project/gdev/release/cuda/ptxgrammar.cpp" /* yacc.c:1646  */
    break;

  case 208:
#line 594 "runtime/ocelot/parser/implementation/ptxgrammar.yy" /* yacc.c:1646  */
    {
	state.maxntid( (yyvsp[-4].value), (yyvsp[-2].value), (yyvsp[0].value) );
}
#line 3584 "/home/soroosh/Project/gdev/release/cuda/ptxgrammar.cpp" /* yacc.c:1646  */
    break;

  case 209:
#line 599 "runtime/ocelot/parser/implementation/ptxgrammar.yy" /* yacc.c:1646  */
    {
	state.ctapersm( (yyvsp[-2].value), (yyvsp[0].value) );
}
#line 3592 "/home/soroosh/Project/gdev/release/cuda/ptxgrammar.cpp" /* yacc.c:1646  */
    break;

  case 212:
#line 606 "runtime/ocelot/parser/implementation/ptxgrammar.yy" /* yacc.c:1646  */
    {
	state.minnctapersm( (yyvsp[0].value) );
}
#line 3600 "/home/soroosh/Project/gdev/release/cuda/ptxgrammar.cpp" /* yacc.c:1646  */
    break;

  case 213:
#line 611 "runtime/ocelot/parser/implementation/ptxgrammar.yy" /* yacc.c:1646  */
    {
	state.minnctapersm( );
}
#line 3608 "/home/soroosh/Project/gdev/release/cuda/ptxgrammar.cpp" /* yacc.c:1646  */
    break;

  case 214:
#line 616 "runtime/ocelot/parser/implementation/ptxgrammar.yy" /* yacc.c:1646  */
    {
	state.maxnctapersm( (yyvsp[0].value) );
}
#line 3616 "/home/soroosh/Project/gdev/release/cuda/ptxgrammar.cpp" /* yacc.c:1646  */
    break;

  case 215:
#line 621 "runtime/ocelot/parser/implementation/ptxgrammar.yy" /* yacc.c:1646  */
    {
	state.maxnctapersm();
}
#line 3624 "/home/soroosh/Project/gdev/release/cuda/ptxgrammar.cpp" /* yacc.c:1646  */
    break;

  case 224:
#line 631 "runtime/ocelot/parser/implementation/ptxgrammar.yy" /* yacc.c:1646  */
    {
	state.attribute( false, false, true );
}
#line 3632 "/home/soroosh/Project/gdev/release/cuda/ptxgrammar.cpp" /* yacc.c:1646  */
    break;

  case 225:
#line 636 "runtime/ocelot/parser/implementation/ptxgrammar.yy" /* yacc.c:1646  */
    {
	state.attribute( false, true, false );
}
#line 3640 "/home/soroosh/Project/gdev/release/cuda/ptxgrammar.cpp" /* yacc.c:1646  */
    break;

  case 226:
#line 641 "runtime/ocelot/parser/implementation/ptxgrammar.yy" /* yacc.c:1646  */
    {
	state.attribute( true, false, false );
}
#line 3648 "/home/soroosh/Project/gdev/release/cuda/ptxgrammar.cpp" /* yacc.c:1646  */
    break;

  case 227:
#line 646 "runtime/ocelot/parser/implementation/ptxgrammar.yy" /* yacc.c:1646  */
    {
	state.attribute( false, false, false );
}
#line 3656 "/home/soroosh/Project/gdev/release/cuda/ptxgrammar.cpp" /* yacc.c:1646  */
    break;

  case 233:
#line 654 "runtime/ocelot/parser/implementation/ptxgrammar.yy" /* yacc.c:1646  */
    {
	state.locationAddress( (yyvsp[0].value) );
}
#line 3664 "/home/soroosh/Project/gdev/release/cuda/ptxgrammar.cpp" /* yacc.c:1646  */
    break;

  case 234:
#line 659 "runtime/ocelot/parser/implementation/ptxgrammar.yy" /* yacc.c:1646  */
    {
	state.locationAddress( (yyvsp[0].value) );
}
#line 3672 "/home/soroosh/Project/gdev/release/cuda/ptxgrammar.cpp" /* yacc.c:1646  */
    break;

  case 304:
#line 682 "runtime/ocelot/parser/implementation/ptxgrammar.yy" /* yacc.c:1646  */
    {
	state.uninitializableDeclaration( (yyvsp[-2].text) );
	state.statementEnd( (yylsp[-3]) );
}
#line 3681 "/home/soroosh/Project/gdev/release/cuda/ptxgrammar.cpp" /* yacc.c:1646  */
    break;

  case 305:
#line 689 "runtime/ocelot/parser/implementation/ptxgrammar.yy" /* yacc.c:1646  */
    {
	state.location( (yyvsp[-2].value), (yyvsp[-1].value), (yyvsp[0].value) );
}
#line 3689 "/home/soroosh/Project/gdev/release/cuda/ptxgrammar.cpp" /* yacc.c:1646  */
    break;

  case 306:
#line 694 "runtime/ocelot/parser/implementation/ptxgrammar.yy" /* yacc.c:1646  */
    {
	state.label( (yyvsp[-1].text) );
}
#line 3697 "/home/soroosh/Project/gdev/release/cuda/ptxgrammar.cpp" /* yacc.c:1646  */
    break;

  case 307:
#line 699 "runtime/ocelot/parser/implementation/ptxgrammar.yy" /* yacc.c:1646  */
    {
	state.labelOperand( (yyvsp[0].text) );
}
#line 3705 "/home/soroosh/Project/gdev/release/cuda/ptxgrammar.cpp" /* yacc.c:1646  */
    break;

  case 308:
#line 704 "runtime/ocelot/parser/implementation/ptxgrammar.yy" /* yacc.c:1646  */
    {
	state.returnType( (yyvsp[-1].value) );
}
#line 3713 "/home/soroosh/Project/gdev/release/cuda/ptxgrammar.cpp" /* yacc.c:1646  */
    break;

  case 316:
#line 716 "runtime/ocelot/parser/implementation/ptxgrammar.yy" /* yacc.c:1646  */
    {
	state.argumentType( (yyvsp[-2].value) );
}
#line 3721 "/home/soroosh/Project/gdev/release/cuda/ptxgrammar.cpp" /* yacc.c:1646  */
    break;

  case 321:
#line 726 "runtime/ocelot/parser/implementation/ptxgrammar.yy" /* yacc.c:1646  */
    {
	state.callPrototype( (yyvsp[-5].text), (yyvsp[-2].text), (yylsp[-5]) );
}
#line 3729 "/home/soroosh/Project/gdev/release/cuda/ptxgrammar.cpp" /* yacc.c:1646  */
    break;

  case 322:
#line 731 "runtime/ocelot/parser/implementation/ptxgrammar.yy" /* yacc.c:1646  */
    {
	state.callTargets( (yyvsp[-3].text), (yylsp[-3]) );
}
#line 3737 "/home/soroosh/Project/gdev/release/cuda/ptxgrammar.cpp" /* yacc.c:1646  */
    break;

  case 323:
#line 736 "runtime/ocelot/parser/implementation/ptxgrammar.yy" /* yacc.c:1646  */
    {
	state.pragma( (yyvsp[0].text) );
}
#line 3745 "/home/soroosh/Project/gdev/release/cuda/ptxgrammar.cpp" /* yacc.c:1646  */
    break;

  case 324:
#line 741 "runtime/ocelot/parser/implementation/ptxgrammar.yy" /* yacc.c:1646  */
    {
	state.pragma( (yyvsp[-1].text) );
}
#line 3753 "/home/soroosh/Project/gdev/release/cuda/ptxgrammar.cpp" /* yacc.c:1646  */
    break;

  case 329:
#line 748 "runtime/ocelot/parser/implementation/ptxgrammar.yy" /* yacc.c:1646  */
    {
	state.vectorIndex( (yyvsp[0].value) );
}
#line 3761 "/home/soroosh/Project/gdev/release/cuda/ptxgrammar.cpp" /* yacc.c:1646  */
    break;

  case 330:
#line 753 "runtime/ocelot/parser/implementation/ptxgrammar.yy" /* yacc.c:1646  */
    {

}
#line 3769 "/home/soroosh/Project/gdev/release/cuda/ptxgrammar.cpp" /* yacc.c:1646  */
    break;

  case 331:
#line 758 "runtime/ocelot/parser/implementation/ptxgrammar.yy" /* yacc.c:1646  */
    {
	state.nonLabelOperand( (yyvsp[-1].text), (yylsp[-1]), false );
}
#line 3777 "/home/soroosh/Project/gdev/release/cuda/ptxgrammar.cpp" /* yacc.c:1646  */
    break;

  case 332:
#line 763 "runtime/ocelot/parser/implementation/ptxgrammar.yy" /* yacc.c:1646  */
    {
	state.nonLabelOperand( (yyvsp[0].text), (yylsp[-1]), true );
}
#line 3785 "/home/soroosh/Project/gdev/release/cuda/ptxgrammar.cpp" /* yacc.c:1646  */
    break;

  case 333:
#line 768 "runtime/ocelot/parser/implementation/ptxgrammar.yy" /* yacc.c:1646  */
    {
	state.constantOperand( (yyvsp[0].value) );
}
#line 3793 "/home/soroosh/Project/gdev/release/cuda/ptxgrammar.cpp" /* yacc.c:1646  */
    break;

  case 334:
#line 773 "runtime/ocelot/parser/implementation/ptxgrammar.yy" /* yacc.c:1646  */
    {
	state.constantOperand( (yyvsp[0].uvalue) );
}
#line 3801 "/home/soroosh/Project/gdev/release/cuda/ptxgrammar.cpp" /* yacc.c:1646  */
    break;

  case 335:
#line 778 "runtime/ocelot/parser/implementation/ptxgrammar.yy" /* yacc.c:1646  */
    {
	state.constantOperand( (yyvsp[0].doubleFloat) );
}
#line 3809 "/home/soroosh/Project/gdev/release/cuda/ptxgrammar.cpp" /* yacc.c:1646  */
    break;

  case 336:
#line 783 "runtime/ocelot/parser/implementation/ptxgrammar.yy" /* yacc.c:1646  */
    {
	state.constantOperand( (yyvsp[0].singleFloat) );
}
#line 3817 "/home/soroosh/Project/gdev/release/cuda/ptxgrammar.cpp" /* yacc.c:1646  */
    break;

  case 337:
#line 788 "runtime/ocelot/parser/implementation/ptxgrammar.yy" /* yacc.c:1646  */
    {
	state.addressableOperand( (yyvsp[0].text), 0, (yylsp[0]), false );
}
#line 3825 "/home/soroosh/Project/gdev/release/cuda/ptxgrammar.cpp" /* yacc.c:1646  */
    break;

  case 338:
#line 793 "runtime/ocelot/parser/implementation/ptxgrammar.yy" /* yacc.c:1646  */
    {
	state.addressableOperand( (yyvsp[-2].text), (yyvsp[0].value), (yylsp[-2]), false );
}
#line 3833 "/home/soroosh/Project/gdev/release/cuda/ptxgrammar.cpp" /* yacc.c:1646  */
    break;

  case 339:
#line 798 "runtime/ocelot/parser/implementation/ptxgrammar.yy" /* yacc.c:1646  */
    {
	state.addressableOperand( (yyvsp[-2].text), (yyvsp[0].value), (yylsp[-2]), true );
}
#line 3841 "/home/soroosh/Project/gdev/release/cuda/ptxgrammar.cpp" /* yacc.c:1646  */
    break;

  case 348:
#line 811 "runtime/ocelot/parser/implementation/ptxgrammar.yy" /* yacc.c:1646  */
    {
	state.arrayOperand( (yylsp[-2]) );
}
#line 3849 "/home/soroosh/Project/gdev/release/cuda/ptxgrammar.cpp" /* yacc.c:1646  */
    break;

  case 349:
#line 816 "runtime/ocelot/parser/implementation/ptxgrammar.yy" /* yacc.c:1646  */
    {
	state.guard( (yyvsp[0].text), (yylsp[0]), false );
}
#line 3857 "/home/soroosh/Project/gdev/release/cuda/ptxgrammar.cpp" /* yacc.c:1646  */
    break;

  case 350:
#line 821 "runtime/ocelot/parser/implementation/ptxgrammar.yy" /* yacc.c:1646  */
    {
	state.guard( (yyvsp[0].text), (yylsp[0]), true );
}
#line 3865 "/home/soroosh/Project/gdev/release/cuda/ptxgrammar.cpp" /* yacc.c:1646  */
    break;

  case 351:
#line 826 "runtime/ocelot/parser/implementation/ptxgrammar.yy" /* yacc.c:1646  */
    {
	state.guard();
}
#line 3873 "/home/soroosh/Project/gdev/release/cuda/ptxgrammar.cpp" /* yacc.c:1646  */
    break;

  case 360:
#line 834 "runtime/ocelot/parser/implementation/ptxgrammar.yy" /* yacc.c:1646  */
    {
	state.modifier( (yyvsp[0].value) );
}
#line 3881 "/home/soroosh/Project/gdev/release/cuda/ptxgrammar.cpp" /* yacc.c:1646  */
    break;

  case 361:
#line 839 "runtime/ocelot/parser/implementation/ptxgrammar.yy" /* yacc.c:1646  */
    {
	state.modifier( (yyvsp[0].value) );
}
#line 3889 "/home/soroosh/Project/gdev/release/cuda/ptxgrammar.cpp" /* yacc.c:1646  */
    break;

  case 424:
#line 858 "runtime/ocelot/parser/implementation/ptxgrammar.yy" /* yacc.c:1646  */
    {
	state.instruction( (yyvsp[-7].text), (yyvsp[-6].value) );
}
#line 3897 "/home/soroosh/Project/gdev/release/cuda/ptxgrammar.cpp" /* yacc.c:1646  */
    break;

  case 430:
#line 866 "runtime/ocelot/parser/implementation/ptxgrammar.yy" /* yacc.c:1646  */
    {
	state.modifier( (yyvsp[0].value) );
}
#line 3905 "/home/soroosh/Project/gdev/release/cuda/ptxgrammar.cpp" /* yacc.c:1646  */
    break;

  case 431:
#line 872 "runtime/ocelot/parser/implementation/ptxgrammar.yy" /* yacc.c:1646  */
    {
	state.instruction( (yyvsp[-7].text), (yyvsp[-4].value) );
}
#line 3913 "/home/soroosh/Project/gdev/release/cuda/ptxgrammar.cpp" /* yacc.c:1646  */
    break;

  case 432:
#line 877 "runtime/ocelot/parser/implementation/ptxgrammar.yy" /* yacc.c:1646  */
    {
	state.modifier( (yyvsp[0].value) );
}
#line 3921 "/home/soroosh/Project/gdev/release/cuda/ptxgrammar.cpp" /* yacc.c:1646  */
    break;

  case 435:
#line 884 "runtime/ocelot/parser/implementation/ptxgrammar.yy" /* yacc.c:1646  */
    {
	state.modifier( (yyvsp[0].value) );
}
#line 3929 "/home/soroosh/Project/gdev/release/cuda/ptxgrammar.cpp" /* yacc.c:1646  */
    break;

  case 440:
#line 894 "runtime/ocelot/parser/implementation/ptxgrammar.yy" /* yacc.c:1646  */
    {
	state.instruction( (yyvsp[-6].text), (yyvsp[-4].value) );
}
#line 3937 "/home/soroosh/Project/gdev/release/cuda/ptxgrammar.cpp" /* yacc.c:1646  */
    break;

  case 443:
#line 902 "runtime/ocelot/parser/implementation/ptxgrammar.yy" /* yacc.c:1646  */
    {
	state.instruction( (yyvsp[-8].text), (yyvsp[-6].value) );
}
#line 3945 "/home/soroosh/Project/gdev/release/cuda/ptxgrammar.cpp" /* yacc.c:1646  */
    break;

  case 444:
#line 907 "runtime/ocelot/parser/implementation/ptxgrammar.yy" /* yacc.c:1646  */
    {
	state.uni( false );
}
#line 3953 "/home/soroosh/Project/gdev/release/cuda/ptxgrammar.cpp" /* yacc.c:1646  */
    break;

  case 445:
#line 912 "runtime/ocelot/parser/implementation/ptxgrammar.yy" /* yacc.c:1646  */
    {
	state.uni( true );
}
#line 3961 "/home/soroosh/Project/gdev/release/cuda/ptxgrammar.cpp" /* yacc.c:1646  */
    break;

  case 446:
#line 917 "runtime/ocelot/parser/implementation/ptxgrammar.yy" /* yacc.c:1646  */
    {
	state.instruction( (yyvsp[-3].text) );
}
#line 3969 "/home/soroosh/Project/gdev/release/cuda/ptxgrammar.cpp" /* yacc.c:1646  */
    break;

  case 447:
#line 922 "runtime/ocelot/parser/implementation/ptxgrammar.yy" /* yacc.c:1646  */
    {
	state.returnOperand();
}
#line 3977 "/home/soroosh/Project/gdev/release/cuda/ptxgrammar.cpp" /* yacc.c:1646  */
    break;

  case 454:
#line 935 "runtime/ocelot/parser/implementation/ptxgrammar.yy" /* yacc.c:1646  */
    {
	state.callPrototypeName( (yyvsp[0].text) );
}
#line 3985 "/home/soroosh/Project/gdev/release/cuda/ptxgrammar.cpp" /* yacc.c:1646  */
    break;

  case 455:
#line 940 "runtime/ocelot/parser/implementation/ptxgrammar.yy" /* yacc.c:1646  */
    {
	state.callPrototypeName( (yyvsp[0].text) );
}
#line 3993 "/home/soroosh/Project/gdev/release/cuda/ptxgrammar.cpp" /* yacc.c:1646  */
    break;

  case 456:
#line 945 "runtime/ocelot/parser/implementation/ptxgrammar.yy" /* yacc.c:1646  */
    {
	state.callPrototypeName( (yyvsp[0].text) );
}
#line 4001 "/home/soroosh/Project/gdev/release/cuda/ptxgrammar.cpp" /* yacc.c:1646  */
    break;

  case 460:
#line 953 "runtime/ocelot/parser/implementation/ptxgrammar.yy" /* yacc.c:1646  */
    {
	state.tail( true );
}
#line 4009 "/home/soroosh/Project/gdev/release/cuda/ptxgrammar.cpp" /* yacc.c:1646  */
    break;

  case 461:
#line 958 "runtime/ocelot/parser/implementation/ptxgrammar.yy" /* yacc.c:1646  */
    {
	state.tail( false );
}
#line 4017 "/home/soroosh/Project/gdev/release/cuda/ptxgrammar.cpp" /* yacc.c:1646  */
    break;

  case 463:
#line 966 "runtime/ocelot/parser/implementation/ptxgrammar.yy" /* yacc.c:1646  */
    {
	state.call( (yyvsp[-2].text), (yylsp[-5]) );
}
#line 4025 "/home/soroosh/Project/gdev/release/cuda/ptxgrammar.cpp" /* yacc.c:1646  */
    break;

  case 464:
#line 971 "runtime/ocelot/parser/implementation/ptxgrammar.yy" /* yacc.c:1646  */
    {
	state.carry( true );
}
#line 4033 "/home/soroosh/Project/gdev/release/cuda/ptxgrammar.cpp" /* yacc.c:1646  */
    break;

  case 465:
#line 976 "runtime/ocelot/parser/implementation/ptxgrammar.yy" /* yacc.c:1646  */
    {
	state.carry( false );
}
#line 4041 "/home/soroosh/Project/gdev/release/cuda/ptxgrammar.cpp" /* yacc.c:1646  */
    break;

  case 468:
#line 984 "runtime/ocelot/parser/implementation/ptxgrammar.yy" /* yacc.c:1646  */
    {
	state.instruction( (yyvsp[-8].text), (yyvsp[-6].value) );
}
#line 4049 "/home/soroosh/Project/gdev/release/cuda/ptxgrammar.cpp" /* yacc.c:1646  */
    break;

  case 469:
#line 989 "runtime/ocelot/parser/implementation/ptxgrammar.yy" /* yacc.c:1646  */
    {
	state.carry( true );
}
#line 4057 "/home/soroosh/Project/gdev/release/cuda/ptxgrammar.cpp" /* yacc.c:1646  */
    break;

  case 470:
#line 994 "runtime/ocelot/parser/implementation/ptxgrammar.yy" /* yacc.c:1646  */
    {
	state.carry( false );
}
#line 4065 "/home/soroosh/Project/gdev/release/cuda/ptxgrammar.cpp" /* yacc.c:1646  */
    break;

  case 473:
#line 1002 "runtime/ocelot/parser/implementation/ptxgrammar.yy" /* yacc.c:1646  */
    {
	state.carryIn();
	state.instruction( (yyvsp[-8].text), (yyvsp[-6].value) );
}
#line 4074 "/home/soroosh/Project/gdev/release/cuda/ptxgrammar.cpp" /* yacc.c:1646  */
    break;

  case 484:
#line 1011 "runtime/ocelot/parser/implementation/ptxgrammar.yy" /* yacc.c:1646  */
    {
	state.atomic( (yyvsp[0].value) );
}
#line 4082 "/home/soroosh/Project/gdev/release/cuda/ptxgrammar.cpp" /* yacc.c:1646  */
    break;

  case 486:
#line 1017 "runtime/ocelot/parser/implementation/ptxgrammar.yy" /* yacc.c:1646  */
    {
	state.addressSpace(TOKEN_GLOBAL);
}
#line 4090 "/home/soroosh/Project/gdev/release/cuda/ptxgrammar.cpp" /* yacc.c:1646  */
    break;

  case 487:
#line 1023 "runtime/ocelot/parser/implementation/ptxgrammar.yy" /* yacc.c:1646  */
    {
	state.instruction( (yyvsp[-11].text), (yyvsp[-8].value) );
}
#line 4098 "/home/soroosh/Project/gdev/release/cuda/ptxgrammar.cpp" /* yacc.c:1646  */
    break;

  case 488:
#line 1029 "runtime/ocelot/parser/implementation/ptxgrammar.yy" /* yacc.c:1646  */
    {
	state.instruction( (yyvsp[-13].text), (yyvsp[-10].value) );
}
#line 4106 "/home/soroosh/Project/gdev/release/cuda/ptxgrammar.cpp" /* yacc.c:1646  */
    break;

  case 489:
#line 1034 "runtime/ocelot/parser/implementation/ptxgrammar.yy" /* yacc.c:1646  */
    {
	state.shiftAmount( true );
}
#line 4114 "/home/soroosh/Project/gdev/release/cuda/ptxgrammar.cpp" /* yacc.c:1646  */
    break;

  case 490:
#line 1039 "runtime/ocelot/parser/implementation/ptxgrammar.yy" /* yacc.c:1646  */
    {
	state.shiftAmount( false );
}
#line 4122 "/home/soroosh/Project/gdev/release/cuda/ptxgrammar.cpp" /* yacc.c:1646  */
    break;

  case 491:
#line 1045 "runtime/ocelot/parser/implementation/ptxgrammar.yy" /* yacc.c:1646  */
    {
	state.instruction( (yyvsp[-9].text), (yyvsp[-8].value) );
}
#line 4130 "/home/soroosh/Project/gdev/release/cuda/ptxgrammar.cpp" /* yacc.c:1646  */
    break;

  case 492:
#line 1051 "runtime/ocelot/parser/implementation/ptxgrammar.yy" /* yacc.c:1646  */
    {
	state.instruction( (yyvsp[-11].text), (yyvsp[-10].value) );
}
#line 4138 "/home/soroosh/Project/gdev/release/cuda/ptxgrammar.cpp" /* yacc.c:1646  */
    break;

  case 493:
#line 1056 "runtime/ocelot/parser/implementation/ptxgrammar.yy" /* yacc.c:1646  */
    {
	state.instruction( (yyvsp[-6].text), (yyvsp[-4].value) );
}
#line 4146 "/home/soroosh/Project/gdev/release/cuda/ptxgrammar.cpp" /* yacc.c:1646  */
    break;

  case 496:
#line 1061 "runtime/ocelot/parser/implementation/ptxgrammar.yy" /* yacc.c:1646  */
    {
	state.barrierOperation( (yyvsp[0].value), (yylsp[0]) );
}
#line 4154 "/home/soroosh/Project/gdev/release/cuda/ptxgrammar.cpp" /* yacc.c:1646  */
    break;

  case 501:
#line 1070 "runtime/ocelot/parser/implementation/ptxgrammar.yy" /* yacc.c:1646  */
    {
	state.instruction( (yyvsp[-4].text) );
}
#line 4162 "/home/soroosh/Project/gdev/release/cuda/ptxgrammar.cpp" /* yacc.c:1646  */
    break;

  case 502:
#line 1075 "runtime/ocelot/parser/implementation/ptxgrammar.yy" /* yacc.c:1646  */
    {
	state.instruction( (yyvsp[-5].text), (yyvsp[-4].value) );
}
#line 4170 "/home/soroosh/Project/gdev/release/cuda/ptxgrammar.cpp" /* yacc.c:1646  */
    break;

  case 503:
#line 1080 "runtime/ocelot/parser/implementation/ptxgrammar.yy" /* yacc.c:1646  */
    {
	state.instruction( (yyvsp[-1].text) );
}
#line 4178 "/home/soroosh/Project/gdev/release/cuda/ptxgrammar.cpp" /* yacc.c:1646  */
    break;

  case 504:
#line 1085 "runtime/ocelot/parser/implementation/ptxgrammar.yy" /* yacc.c:1646  */
    {
	state.instruction( (yyvsp[-5].text), (yyvsp[-4].value) );
}
#line 4186 "/home/soroosh/Project/gdev/release/cuda/ptxgrammar.cpp" /* yacc.c:1646  */
    break;

  case 505:
#line 1090 "runtime/ocelot/parser/implementation/ptxgrammar.yy" /* yacc.c:1646  */
    {
	state.modifier( (yyvsp[0].value) );
}
#line 4194 "/home/soroosh/Project/gdev/release/cuda/ptxgrammar.cpp" /* yacc.c:1646  */
    break;

  case 506:
#line 1095 "runtime/ocelot/parser/implementation/ptxgrammar.yy" /* yacc.c:1646  */
    {
	state.modifier( (yyvsp[0].value) );
}
#line 4202 "/home/soroosh/Project/gdev/release/cuda/ptxgrammar.cpp" /* yacc.c:1646  */
    break;

  case 513:
#line 1107 "runtime/ocelot/parser/implementation/ptxgrammar.yy" /* yacc.c:1646  */
    {
	state.instruction( (yyvsp[-7].text), (yyvsp[-5].value) );
	state.relaxedConvert( (yyvsp[-4].value), (yylsp[-7]) );
}
#line 4211 "/home/soroosh/Project/gdev/release/cuda/ptxgrammar.cpp" /* yacc.c:1646  */
    break;

  case 516:
#line 1115 "runtime/ocelot/parser/implementation/ptxgrammar.yy" /* yacc.c:1646  */
    {
	state.instruction( (yyvsp[-6].text), (yyvsp[-4].value) );
}
#line 4219 "/home/soroosh/Project/gdev/release/cuda/ptxgrammar.cpp" /* yacc.c:1646  */
    break;

  case 517:
#line 1121 "runtime/ocelot/parser/implementation/ptxgrammar.yy" /* yacc.c:1646  */
    {
	state.instruction( (yyvsp[-7].text), (yyvsp[-4].value) );
	state.cvtaTo();
}
#line 4228 "/home/soroosh/Project/gdev/release/cuda/ptxgrammar.cpp" /* yacc.c:1646  */
    break;

  case 518:
#line 1131 "runtime/ocelot/parser/implementation/ptxgrammar.yy" /* yacc.c:1646  */
    {
	state.full();
}
#line 4236 "/home/soroosh/Project/gdev/release/cuda/ptxgrammar.cpp" /* yacc.c:1646  */
    break;

  case 519:
#line 1136 "runtime/ocelot/parser/implementation/ptxgrammar.yy" /* yacc.c:1646  */
    {
	state.modifier((yyvsp[-1].value));
}
#line 4244 "/home/soroosh/Project/gdev/release/cuda/ptxgrammar.cpp" /* yacc.c:1646  */
    break;

  case 520:
#line 1141 "runtime/ocelot/parser/implementation/ptxgrammar.yy" /* yacc.c:1646  */
    {
	state.modifier((yyvsp[-1].value));
}
#line 4252 "/home/soroosh/Project/gdev/release/cuda/ptxgrammar.cpp" /* yacc.c:1646  */
    break;

  case 525:
#line 1151 "runtime/ocelot/parser/implementation/ptxgrammar.yy" /* yacc.c:1646  */
    {
	state.instruction( (yyvsp[-8].text), (yyvsp[-6].value) );
}
#line 4260 "/home/soroosh/Project/gdev/release/cuda/ptxgrammar.cpp" /* yacc.c:1646  */
    break;

  case 526:
#line 1156 "runtime/ocelot/parser/implementation/ptxgrammar.yy" /* yacc.c:1646  */
    {
	state.instruction( (yyvsp[-1].text) );
}
#line 4268 "/home/soroosh/Project/gdev/release/cuda/ptxgrammar.cpp" /* yacc.c:1646  */
    break;

  case 527:
#line 1161 "runtime/ocelot/parser/implementation/ptxgrammar.yy" /* yacc.c:1646  */
    {
	state.instruction( (yyvsp[-5].text), TOKEN_U32 );
}
#line 4276 "/home/soroosh/Project/gdev/release/cuda/ptxgrammar.cpp" /* yacc.c:1646  */
    break;

  case 528:
#line 1166 "runtime/ocelot/parser/implementation/ptxgrammar.yy" /* yacc.c:1646  */
    {
	state.volatileFlag( true );
}
#line 4284 "/home/soroosh/Project/gdev/release/cuda/ptxgrammar.cpp" /* yacc.c:1646  */
    break;

  case 530:
#line 1173 "runtime/ocelot/parser/implementation/ptxgrammar.yy" /* yacc.c:1646  */
    {
	state.volatileFlag( false );
}
#line 4292 "/home/soroosh/Project/gdev/release/cuda/ptxgrammar.cpp" /* yacc.c:1646  */
    break;

  case 532:
#line 1181 "runtime/ocelot/parser/implementation/ptxgrammar.yy" /* yacc.c:1646  */
    {
	state.instruction( (yyvsp[-8].text), (yyvsp[-6].value) );
}
#line 4300 "/home/soroosh/Project/gdev/release/cuda/ptxgrammar.cpp" /* yacc.c:1646  */
    break;

  case 533:
#line 1186 "runtime/ocelot/parser/implementation/ptxgrammar.yy" /* yacc.c:1646  */
    {
	state.instruction( (yyvsp[-8].text), (yyvsp[-6].value) );
}
#line 4308 "/home/soroosh/Project/gdev/release/cuda/ptxgrammar.cpp" /* yacc.c:1646  */
    break;

  case 539:
#line 1195 "runtime/ocelot/parser/implementation/ptxgrammar.yy" /* yacc.c:1646  */
    {
	state.modifier( (yyvsp[-2].value) );
}
#line 4316 "/home/soroosh/Project/gdev/release/cuda/ptxgrammar.cpp" /* yacc.c:1646  */
    break;

  case 543:
#line 1205 "runtime/ocelot/parser/implementation/ptxgrammar.yy" /* yacc.c:1646  */
    {
	state.instruction( (yyvsp[-10].text), (yyvsp[-8].value) );
}
#line 4324 "/home/soroosh/Project/gdev/release/cuda/ptxgrammar.cpp" /* yacc.c:1646  */
    break;

  case 545:
#line 1212 "runtime/ocelot/parser/implementation/ptxgrammar.yy" /* yacc.c:1646  */
    {
	state.modifier( (yyvsp[-1].value) );
}
#line 4332 "/home/soroosh/Project/gdev/release/cuda/ptxgrammar.cpp" /* yacc.c:1646  */
    break;

  case 546:
#line 1218 "runtime/ocelot/parser/implementation/ptxgrammar.yy" /* yacc.c:1646  */
    {
	state.instruction( (yyvsp[-10].text), (yyvsp[-8].value) );
}
#line 4340 "/home/soroosh/Project/gdev/release/cuda/ptxgrammar.cpp" /* yacc.c:1646  */
    break;

  case 549:
#line 1225 "runtime/ocelot/parser/implementation/ptxgrammar.yy" /* yacc.c:1646  */
    {
	state.level( (yyvsp[0].value) );
}
#line 4348 "/home/soroosh/Project/gdev/release/cuda/ptxgrammar.cpp" /* yacc.c:1646  */
    break;

  case 550:
#line 1230 "runtime/ocelot/parser/implementation/ptxgrammar.yy" /* yacc.c:1646  */
    {
	state.instruction( (yyvsp[-2].text) );
}
#line 4356 "/home/soroosh/Project/gdev/release/cuda/ptxgrammar.cpp" /* yacc.c:1646  */
    break;

  case 551:
#line 1235 "runtime/ocelot/parser/implementation/ptxgrammar.yy" /* yacc.c:1646  */
    {
	state.indexedOperand( (yyvsp[-3].text), (yylsp[-3]), (yyvsp[-1].value) );
}
#line 4364 "/home/soroosh/Project/gdev/release/cuda/ptxgrammar.cpp" /* yacc.c:1646  */
    break;

  case 555:
#line 1242 "runtime/ocelot/parser/implementation/ptxgrammar.yy" /* yacc.c:1646  */
    {
	state.instruction( (yyvsp[-5].text), (yyvsp[-4].value) );
}
#line 4372 "/home/soroosh/Project/gdev/release/cuda/ptxgrammar.cpp" /* yacc.c:1646  */
    break;

  case 557:
#line 1249 "runtime/ocelot/parser/implementation/ptxgrammar.yy" /* yacc.c:1646  */
    {
	state.modifier( (yyvsp[0].value) );
}
#line 4380 "/home/soroosh/Project/gdev/release/cuda/ptxgrammar.cpp" /* yacc.c:1646  */
    break;

  case 558:
#line 1254 "runtime/ocelot/parser/implementation/ptxgrammar.yy" /* yacc.c:1646  */
    {
	state.instruction( (yyvsp[-8].text), (yyvsp[-6].value) );
}
#line 4388 "/home/soroosh/Project/gdev/release/cuda/ptxgrammar.cpp" /* yacc.c:1646  */
    break;

  case 559:
#line 1259 "runtime/ocelot/parser/implementation/ptxgrammar.yy" /* yacc.c:1646  */
    {
	state.instruction( (yyvsp[-8].text), (yyvsp[-6].value) );
}
#line 4396 "/home/soroosh/Project/gdev/release/cuda/ptxgrammar.cpp" /* yacc.c:1646  */
    break;

  case 562:
#line 1266 "runtime/ocelot/parser/implementation/ptxgrammar.yy" /* yacc.c:1646  */
    {
	state.instruction( (yyvsp[-5].text), (yyvsp[-4].value) );
}
#line 4404 "/home/soroosh/Project/gdev/release/cuda/ptxgrammar.cpp" /* yacc.c:1646  */
    break;

  case 563:
#line 1271 "runtime/ocelot/parser/implementation/ptxgrammar.yy" /* yacc.c:1646  */
    {
	state.instruction( (yyvsp[-1].text) );
}
#line 4412 "/home/soroosh/Project/gdev/release/cuda/ptxgrammar.cpp" /* yacc.c:1646  */
    break;

  case 564:
#line 1276 "runtime/ocelot/parser/implementation/ptxgrammar.yy" /* yacc.c:1646  */
    {
	state.instruction( (yyvsp[-5].text), (yyvsp[-4].value) );
}
#line 4420 "/home/soroosh/Project/gdev/release/cuda/ptxgrammar.cpp" /* yacc.c:1646  */
    break;

  case 571:
#line 1284 "runtime/ocelot/parser/implementation/ptxgrammar.yy" /* yacc.c:1646  */
    {
	state.permute( (yyvsp[0].value) );
}
#line 4428 "/home/soroosh/Project/gdev/release/cuda/ptxgrammar.cpp" /* yacc.c:1646  */
    break;

  case 572:
#line 1289 "runtime/ocelot/parser/implementation/ptxgrammar.yy" /* yacc.c:1646  */
    {
	state.defaultPermute();
}
#line 4436 "/home/soroosh/Project/gdev/release/cuda/ptxgrammar.cpp" /* yacc.c:1646  */
    break;

  case 574:
#line 1294 "runtime/ocelot/parser/implementation/ptxgrammar.yy" /* yacc.c:1646  */
    {
	state.cacheLevel( (yyvsp[0].value) );
}
#line 4444 "/home/soroosh/Project/gdev/release/cuda/ptxgrammar.cpp" /* yacc.c:1646  */
    break;

  case 575:
#line 1299 "runtime/ocelot/parser/implementation/ptxgrammar.yy" /* yacc.c:1646  */
    {
	state.instruction( (yyvsp[-6].text) );
}
#line 4452 "/home/soroosh/Project/gdev/release/cuda/ptxgrammar.cpp" /* yacc.c:1646  */
    break;

  case 576:
#line 1304 "runtime/ocelot/parser/implementation/ptxgrammar.yy" /* yacc.c:1646  */
    {
	state.instruction( (yyvsp[-5].text) );
}
#line 4460 "/home/soroosh/Project/gdev/release/cuda/ptxgrammar.cpp" /* yacc.c:1646  */
    break;

  case 577:
#line 1310 "runtime/ocelot/parser/implementation/ptxgrammar.yy" /* yacc.c:1646  */
    {
	state.instruction( (yyvsp[-10].text), (yyvsp[-9].value) );
}
#line 4468 "/home/soroosh/Project/gdev/release/cuda/ptxgrammar.cpp" /* yacc.c:1646  */
    break;

  case 578:
#line 1315 "runtime/ocelot/parser/implementation/ptxgrammar.yy" /* yacc.c:1646  */
    {
	state.modifier( (yyvsp[-1].value) );
}
#line 4476 "/home/soroosh/Project/gdev/release/cuda/ptxgrammar.cpp" /* yacc.c:1646  */
    break;

  case 580:
#line 1321 "runtime/ocelot/parser/implementation/ptxgrammar.yy" /* yacc.c:1646  */
    {
	state.modifier( (yyvsp[-1].value) );
}
#line 4484 "/home/soroosh/Project/gdev/release/cuda/ptxgrammar.cpp" /* yacc.c:1646  */
    break;

  case 583:
#line 1329 "runtime/ocelot/parser/implementation/ptxgrammar.yy" /* yacc.c:1646  */
    {
	state.instruction( (yyvsp[-6].text), (yyvsp[-4].value) );
}
#line 4492 "/home/soroosh/Project/gdev/release/cuda/ptxgrammar.cpp" /* yacc.c:1646  */
    break;

  case 592:
#line 1337 "runtime/ocelot/parser/implementation/ptxgrammar.yy" /* yacc.c:1646  */
    {
	state.reduction( (yyvsp[0].value) );
}
#line 4500 "/home/soroosh/Project/gdev/release/cuda/ptxgrammar.cpp" /* yacc.c:1646  */
    break;

  case 593:
#line 1343 "runtime/ocelot/parser/implementation/ptxgrammar.yy" /* yacc.c:1646  */
    {
	state.instruction( (yyvsp[-7].text), (yyvsp[-4].value) );
}
#line 4508 "/home/soroosh/Project/gdev/release/cuda/ptxgrammar.cpp" /* yacc.c:1646  */
    break;

  case 594:
#line 1348 "runtime/ocelot/parser/implementation/ptxgrammar.yy" /* yacc.c:1646  */
    {
	state.instruction( (yyvsp[-2].text) );
}
#line 4516 "/home/soroosh/Project/gdev/release/cuda/ptxgrammar.cpp" /* yacc.c:1646  */
    break;

  case 595:
#line 1353 "runtime/ocelot/parser/implementation/ptxgrammar.yy" /* yacc.c:1646  */
    {
	state.instruction( (yyvsp[-3].text) );
}
#line 4524 "/home/soroosh/Project/gdev/release/cuda/ptxgrammar.cpp" /* yacc.c:1646  */
    break;

  case 614:
#line 1362 "runtime/ocelot/parser/implementation/ptxgrammar.yy" /* yacc.c:1646  */
    {
	state.comparison( (yyvsp[0].value) );
}
#line 4532 "/home/soroosh/Project/gdev/release/cuda/ptxgrammar.cpp" /* yacc.c:1646  */
    break;

  case 618:
#line 1369 "runtime/ocelot/parser/implementation/ptxgrammar.yy" /* yacc.c:1646  */
    {
	state.boolean( (yyvsp[0].value) );
}
#line 4540 "/home/soroosh/Project/gdev/release/cuda/ptxgrammar.cpp" /* yacc.c:1646  */
    break;

  case 619:
#line 1374 "runtime/ocelot/parser/implementation/ptxgrammar.yy" /* yacc.c:1646  */
    {
	state.instruction( (yyvsp[-9].text), (yyvsp[-8].value) );
}
#line 4548 "/home/soroosh/Project/gdev/release/cuda/ptxgrammar.cpp" /* yacc.c:1646  */
    break;

  case 620:
#line 1379 "runtime/ocelot/parser/implementation/ptxgrammar.yy" /* yacc.c:1646  */
    {
	state.instruction( (yyvsp[-9].text), (yyvsp[-8].value) );
	state.operandCIsAPredicate();
}
#line 4557 "/home/soroosh/Project/gdev/release/cuda/ptxgrammar.cpp" /* yacc.c:1646  */
    break;

  case 623:
#line 1393 "runtime/ocelot/parser/implementation/ptxgrammar.yy" /* yacc.c:1646  */
    {
	state.instruction( (yyvsp[-9].text), (yyvsp[-7].value) );
	state.convert( (yyvsp[-6].value), (yylsp[-9]) );
}
#line 4566 "/home/soroosh/Project/gdev/release/cuda/ptxgrammar.cpp" /* yacc.c:1646  */
    break;

  case 624:
#line 1400 "runtime/ocelot/parser/implementation/ptxgrammar.yy" /* yacc.c:1646  */
    {
	state.instruction( (yyvsp[-13].text), (yyvsp[-9].value) );
	state.convert( (yyvsp[-8].value), (yylsp[-13]) );
}
#line 4575 "/home/soroosh/Project/gdev/release/cuda/ptxgrammar.cpp" /* yacc.c:1646  */
    break;

  case 629:
#line 1415 "runtime/ocelot/parser/implementation/ptxgrammar.yy" /* yacc.c:1646  */
    {
	state.instruction( (yyvsp[-8].text), (yyvsp[-6].value) );
}
#line 4583 "/home/soroosh/Project/gdev/release/cuda/ptxgrammar.cpp" /* yacc.c:1646  */
    break;

  case 630:
#line 1421 "runtime/ocelot/parser/implementation/ptxgrammar.yy" /* yacc.c:1646  */
    {
	state.instruction( (yyvsp[-8].text), (yyvsp[-7].value) );
}
#line 4591 "/home/soroosh/Project/gdev/release/cuda/ptxgrammar.cpp" /* yacc.c:1646  */
    break;

  case 631:
#line 1427 "runtime/ocelot/parser/implementation/ptxgrammar.yy" /* yacc.c:1646  */
    {
	state.instruction( (yyvsp[-12].text), (yyvsp[-8].value) );
}
#line 4599 "/home/soroosh/Project/gdev/release/cuda/ptxgrammar.cpp" /* yacc.c:1646  */
    break;

  case 632:
#line 1433 "runtime/ocelot/parser/implementation/ptxgrammar.yy" /* yacc.c:1646  */
    {
	state.instruction( (yyvsp[-11].text), (yyvsp[-9].value) );
	state.convertC( (yyvsp[-8].value), (yylsp[-11]) );
}
#line 4608 "/home/soroosh/Project/gdev/release/cuda/ptxgrammar.cpp" /* yacc.c:1646  */
    break;

  case 633:
#line 1439 "runtime/ocelot/parser/implementation/ptxgrammar.yy" /* yacc.c:1646  */
    {
	state.instruction( (yyvsp[-8].text), (yyvsp[-6].value) );
}
#line 4616 "/home/soroosh/Project/gdev/release/cuda/ptxgrammar.cpp" /* yacc.c:1646  */
    break;

  case 641:
#line 1446 "runtime/ocelot/parser/implementation/ptxgrammar.yy" /* yacc.c:1646  */
    {
	state.geometry( (yyvsp[0].value) );
}
#line 4624 "/home/soroosh/Project/gdev/release/cuda/ptxgrammar.cpp" /* yacc.c:1646  */
    break;

  case 648:
#line 1454 "runtime/ocelot/parser/implementation/ptxgrammar.yy" /* yacc.c:1646  */
    {
	state.floatingPointMode( (yyvsp[0].value) );
}
#line 4632 "/home/soroosh/Project/gdev/release/cuda/ptxgrammar.cpp" /* yacc.c:1646  */
    break;

  case 649:
#line 1459 "runtime/ocelot/parser/implementation/ptxgrammar.yy" /* yacc.c:1646  */
    {
	state.instruction( (yyvsp[-6].text), (yyvsp[-4].value) );
}
#line 4640 "/home/soroosh/Project/gdev/release/cuda/ptxgrammar.cpp" /* yacc.c:1646  */
    break;

  case 650:
#line 1465 "runtime/ocelot/parser/implementation/ptxgrammar.yy" /* yacc.c:1646  */
    {
	state.tex( (yyvsp[-8].value) );
	state.convertD( (yyvsp[-9].value), (yylsp[-12]) );
}
#line 4649 "/home/soroosh/Project/gdev/release/cuda/ptxgrammar.cpp" /* yacc.c:1646  */
    break;

  case 655:
#line 1473 "runtime/ocelot/parser/implementation/ptxgrammar.yy" /* yacc.c:1646  */
    {
	state.colorComponent( (yyvsp[0].value) );
}
#line 4657 "/home/soroosh/Project/gdev/release/cuda/ptxgrammar.cpp" /* yacc.c:1646  */
    break;

  case 656:
#line 1479 "runtime/ocelot/parser/implementation/ptxgrammar.yy" /* yacc.c:1646  */
    {
	state.tld4( (yyvsp[-9].value) );
}
#line 4665 "/home/soroosh/Project/gdev/release/cuda/ptxgrammar.cpp" /* yacc.c:1646  */
    break;

  case 666:
#line 1491 "runtime/ocelot/parser/implementation/ptxgrammar.yy" /* yacc.c:1646  */
    {
	state.surfaceQuery( (yyvsp[0].value) );
}
#line 4673 "/home/soroosh/Project/gdev/release/cuda/ptxgrammar.cpp" /* yacc.c:1646  */
    break;

  case 667:
#line 1496 "runtime/ocelot/parser/implementation/ptxgrammar.yy" /* yacc.c:1646  */
    {
	state.surfaceQuery( (yyvsp[-7].value) );
	state.instruction( (yyvsp[-8].text), (yyvsp[-6].value) );
}
#line 4682 "/home/soroosh/Project/gdev/release/cuda/ptxgrammar.cpp" /* yacc.c:1646  */
    break;

  case 668:
#line 1502 "runtime/ocelot/parser/implementation/ptxgrammar.yy" /* yacc.c:1646  */
    {
	state.instruction( (yyvsp[-8].text), (yyvsp[-6].value) );
	state.surfaceQuery( (yyvsp[-7].value) );
}
#line 4691 "/home/soroosh/Project/gdev/release/cuda/ptxgrammar.cpp" /* yacc.c:1646  */
    break;

  case 672:
#line 1508 "runtime/ocelot/parser/implementation/ptxgrammar.yy" /* yacc.c:1646  */
    {
	state.cacheOperation( (yyvsp[0].value) );
}
#line 4699 "/home/soroosh/Project/gdev/release/cuda/ptxgrammar.cpp" /* yacc.c:1646  */
    break;

  case 677:
#line 1515 "runtime/ocelot/parser/implementation/ptxgrammar.yy" /* yacc.c:1646  */
    {
	state.clampOperation( (yyvsp[0].value) );
}
#line 4707 "/home/soroosh/Project/gdev/release/cuda/ptxgrammar.cpp" /* yacc.c:1646  */
    break;

  case 679:
#line 1520 "runtime/ocelot/parser/implementation/ptxgrammar.yy" /* yacc.c:1646  */
    {
	state.formatMode( (yyvsp[0].value) );
}
#line 4715 "/home/soroosh/Project/gdev/release/cuda/ptxgrammar.cpp" /* yacc.c:1646  */
    break;

  case 680:
#line 1527 "runtime/ocelot/parser/implementation/ptxgrammar.yy" /* yacc.c:1646  */
    {
	state.instruction( (yyvsp[-14].text), (yyvsp[-9].value) );
	state.formatMode( (yyvsp[-13].value) );
	state.clampOperation( (yyvsp[-8].value) );
}
#line 4725 "/home/soroosh/Project/gdev/release/cuda/ptxgrammar.cpp" /* yacc.c:1646  */
    break;

  case 681:
#line 1536 "runtime/ocelot/parser/implementation/ptxgrammar.yy" /* yacc.c:1646  */
    {
	state.instruction( (yyvsp[-14].text), (yyvsp[-9].value) );
	state.formatMode( (yyvsp[-13].value) );
	state.clampOperation( (yyvsp[-8].value) );
}
#line 4735 "/home/soroosh/Project/gdev/release/cuda/ptxgrammar.cpp" /* yacc.c:1646  */
    break;

  case 682:
#line 1544 "runtime/ocelot/parser/implementation/ptxgrammar.yy" /* yacc.c:1646  */
    {
	state.instruction( (yyvsp[-13].text), (yyvsp[-9].value) );
	state.formatMode( (yyvsp[-12].value) );
	state.clampOperation( (yyvsp[-8].value) );
}
#line 4745 "/home/soroosh/Project/gdev/release/cuda/ptxgrammar.cpp" /* yacc.c:1646  */
    break;

  case 683:
#line 1555 "runtime/ocelot/parser/implementation/ptxgrammar.yy" /* yacc.c:1646  */
    {
	state.instruction( (yyvsp[-1].text) );
}
#line 4753 "/home/soroosh/Project/gdev/release/cuda/ptxgrammar.cpp" /* yacc.c:1646  */
    break;

  case 688:
#line 1562 "runtime/ocelot/parser/implementation/ptxgrammar.yy" /* yacc.c:1646  */
    {
	state.vote( (yyvsp[0].value) );
}
#line 4761 "/home/soroosh/Project/gdev/release/cuda/ptxgrammar.cpp" /* yacc.c:1646  */
    break;

  case 691:
#line 1569 "runtime/ocelot/parser/implementation/ptxgrammar.yy" /* yacc.c:1646  */
    {
	state.instruction( (yyvsp[-6].text), (yyvsp[-4].value) );
}
#line 4769 "/home/soroosh/Project/gdev/release/cuda/ptxgrammar.cpp" /* yacc.c:1646  */
    break;


#line 4773 "/home/soroosh/Project/gdev/release/cuda/ptxgrammar.cpp" /* yacc.c:1646  */
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
  *++yylsp = yyloc;

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
      yyerror (&yylloc, lexer, state, YY_("syntax error"));
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
        yyerror (&yylloc, lexer, state, yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }

  yyerror_range[1] = yylloc;

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
                      yytoken, &yylval, &yylloc, lexer, state);
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

  yyerror_range[1] = yylsp[1-yylen];
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

      yyerror_range[1] = *yylsp;
      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp, yylsp, lexer, state);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  yyerror_range[2] = yylloc;
  /* Using YYLLOC is tempting, but would change the location of
     the lookahead.  YYLOC is available though.  */
  YYLLOC_DEFAULT (yyloc, yyerror_range, 2);
  *++yylsp = yyloc;

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
  yyerror (&yylloc, lexer, state, YY_("memory exhausted"));
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
                  yytoken, &yylval, &yylloc, lexer, state);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[*yyssp], yyvsp, yylsp, lexer, state);
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
#line 1573 "runtime/ocelot/parser/implementation/ptxgrammar.yy" /* yacc.c:1906  */


int yylex( YYSTYPE* token, YYLTYPE* location, parser::PTXLexer& lexer, 
	parser::PTXParser::State& state )
{
	lexer.yylval = token;
	
	int tokenValue         = lexer.yylexPosition();
	location->first_line   = lexer.lineno();
	location->first_column = lexer.column;
	
	report( " Lexer (" << location->first_line << ","
		<< location->first_column 
		<< "): " << parser::PTXLexer::toString( tokenValue ) << " \"" 
		<< lexer.YYText() << "\"");
	
	return tokenValue;
}

void yyerror( YYLTYPE* location, parser::PTXLexer& lexer, 
	parser::PTXParser::State& state, char const* message )
{
	parser::PTXParser::Exception exception;
	std::stringstream stream;
	stream << parser::PTXParser::toString( *location, state ) 
		<< " " << message;
	exception.message = stream.str();
	exception.error = parser::PTXParser::State::SyntaxError;
	throw exception;
}

}
