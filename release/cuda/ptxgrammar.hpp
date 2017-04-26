/* A Bison parser, made by GNU Bison 3.0.2.  */

/* Bison interface for Yacc-like parsers in C

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
#line 36 "runtime/ocelot/parser/implementation/ptxgrammar.yy" /* yacc.c:1909  */

	char text[1024];
	long long int value;
	long long unsigned int uvalue;

	double doubleFloat;
	float singleFloat;

#line 324 "/home/soroosh/Project/gdev/release/cuda/ptxgrammar.hpp" /* yacc.c:1909  */
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
