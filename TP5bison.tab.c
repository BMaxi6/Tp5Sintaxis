
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.
   
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
#define YYBISON_VERSION "2.4.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Copy the first part of user declarations.  */

/* Line 189 of yacc.c  */
#line 1 "TP5bison.y"

#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include "listaIdentificadores.h"
extern FILE *yyin;
extern FILE *yyout;
//#define YYDEBUG 1


/* Line 189 of yacc.c  */
#line 86 "TP5bison.tab.c"

/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
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
     NUM = 258,
     IDENTIFICADOR = 259,
     TIPO_DATO = 260,
     PALABRA_RESERVADA = 261,
     DO = 262,
     WHILE = 263,
     CHAR = 264,
     LITERAL_CADENA = 265,
     MAYOR_IGUAL = 266,
     MENOR_IGUAL = 267,
     IGUALDAD = 268,
     AND = 269,
     OR = 270,
     DESIGUALDAD = 271,
     CASE = 272,
     BREAK = 273,
     DEFAULT = 274,
     MAS_IGUAL = 275,
     MENOS_IGUAL = 276,
     POR_IGUAL = 277,
     DIVIDIDO = 278,
     DIVIDIDO_IGUAL = 279
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 214 of yacc.c  */
#line 13 "TP5bison.y"

	struct{
     char cadena[50];
     float valor;
     int tipo;
	}s;



/* Line 214 of yacc.c  */
#line 156 "TP5bison.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 168 "TP5bison.tab.c"

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
# if YYENABLE_NLS
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
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
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
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
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

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  2
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   326

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  41
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  21
/* YYNRULES -- Number of rules.  */
#define YYNRULES  71
/* YYNRULES -- Number of states.  */
#define YYNSTATES  164

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   279

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      25,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      28,    31,    36,    30,    38,    32,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    33,    29,
      40,    37,    39,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    34,     2,    35,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    26,     2,    27,     2,     2,     2,     2,
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
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     4,     7,     9,    12,    15,    18,    21,
      24,    27,    30,    33,    36,    41,    42,    45,    48,    51,
      54,    57,    60,    63,    68,    83,    97,    98,   108,   109,
     114,   122,   123,   131,   132,   139,   144,   145,   147,   151,
     155,   162,   167,   173,   178,   183,   188,   193,   198,   199,
     202,   204,   206,   210,   212,   216,   218,   222,   223,   225,
     227,   229,   233,   237,   241,   245,   249,   253,   257,   261,
     265,   269
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      42,     0,    -1,    -1,    42,    43,    -1,    25,    -1,    54,
      25,    -1,    44,    25,    -1,    52,    25,    -1,    51,    25,
      -1,    47,    25,    -1,    46,    25,    -1,    48,    25,    -1,
      56,    25,    -1,     1,    25,    -1,    55,    26,    45,    27,
      -1,    -1,    52,    45,    -1,    46,    45,    -1,    47,    45,
      -1,    51,    45,    -1,    48,    45,    -1,    56,    45,    -1,
      54,    45,    -1,     7,    26,    45,    27,    -1,     6,    28,
      55,    29,    61,    29,    59,    30,    30,    31,    26,    45,
      27,    25,    -1,     6,    28,    55,    29,    61,    29,    59,
      32,    32,    31,    26,    45,    27,    -1,    -1,     6,    28,
      61,    31,    26,    45,    27,    49,    50,    -1,    -1,     6,
      26,    45,    27,    -1,     8,    28,    61,    31,    26,    45,
      27,    -1,    -1,     6,    28,    61,    31,    26,    53,    27,
      -1,    -1,    17,    61,    33,    45,    18,    29,    -1,    53,
      19,    33,    45,    -1,    -1,    55,    -1,    55,    29,    54,
      -1,     5,    58,    29,    -1,     5,     4,    34,    61,    35,
      29,    -1,     5,    36,     4,    29,    -1,    57,    28,    60,
      31,    29,    -1,    57,    37,    61,    29,    -1,    57,    20,
      61,    29,    -1,    57,    21,    61,    29,    -1,    57,    22,
      61,    29,    -1,    57,    24,    61,    29,    -1,    -1,     5,
       4,    -1,     4,    -1,    59,    -1,    58,    38,    59,    -1,
       4,    -1,     4,    37,    61,    -1,     5,    -1,     5,    38,
      60,    -1,    -1,    10,    -1,     4,    -1,     9,    -1,    61,
      30,    61,    -1,    61,    32,    61,    -1,    61,    39,    61,
      -1,    61,    40,    61,    -1,    61,    13,    61,    -1,    61,
      11,    61,    -1,    61,    12,    61,    -1,    61,    16,    61,
      -1,    61,    14,    61,    -1,    61,    15,    61,    -1,     3,
      -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    54,    54,    55,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    73,    75,    76,    77,    78,    79,
      80,    81,    82,    84,    88,    89,    94,    94,    97,    98,
     102,   106,   107,   111,   112,   113,   115,   116,   117,   120,
     121,   122,   123,   126,   127,   128,   129,   130,   136,   137,
     138,   142,   143,   147,   148,   152,   153,   157,   158,   159,
     160,   161,   162,   163,   164,   165,   166,   167,   168,   169,
     170,   171
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "NUM", "IDENTIFICADOR", "TIPO_DATO",
  "PALABRA_RESERVADA", "DO", "WHILE", "CHAR", "LITERAL_CADENA",
  "MAYOR_IGUAL", "MENOR_IGUAL", "IGUALDAD", "AND", "OR", "DESIGUALDAD",
  "CASE", "BREAK", "DEFAULT", "MAS_IGUAL", "MENOS_IGUAL", "POR_IGUAL",
  "DIVIDIDO", "DIVIDIDO_IGUAL", "'\\n'", "'{'", "'}'", "'('", "';'", "'+'",
  "')'", "'-'", "':'", "'['", "']'", "'*'", "'='", "','", "'>'", "'<'",
  "$accept", "input", "line", "definicionFuncion", "listadoDeSentencias",
  "sentenciaDo", "sentenciaFor", "sentenciaIfElse", "$@1", "sentenciaElse",
  "sentenciaWhile", "sentenciaSwitch", "sentenciaCase",
  "listadoDeSentenciasDeDeclaracion", "sentenciaDeclaracion",
  "sentenciaAsignacion", "parametro", "listaIdentificadores",
  "identificadorA", "listaTipoDeDato", "exp", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,    10,   123,   125,    40,    59,
      43,    41,    45,    58,    91,    93,    42,    61,    44,    62,
      60
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    41,    42,    42,    43,    43,    43,    43,    43,    43,
      43,    43,    43,    43,    44,    45,    45,    45,    45,    45,
      45,    45,    45,    46,    47,    47,    49,    48,    50,    50,
      51,    52,    52,    53,    53,    53,    54,    54,    54,    55,
      55,    55,    55,    56,    56,    56,    56,    56,    57,    57,
      57,    58,    58,    59,    59,    60,    60,    61,    61,    61,
      61,    61,    61,    61,    61,    61,    61,    61,    61,    61,
      61,    61
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     2,     1,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     4,     0,     2,     2,     2,     2,
       2,     2,     2,     4,    14,    13,     0,     9,     0,     4,
       7,     0,     7,     0,     6,     4,     0,     1,     3,     3,
       6,     4,     5,     4,     4,     4,     4,     4,     0,     2,
       1,     1,     3,     1,     3,     1,     3,     0,     1,     1,
       1,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       2,     0,     1,     0,    50,     0,     0,     0,     0,     4,
       3,     0,     0,     0,     0,     0,     0,     0,    37,     0,
       0,    13,    49,     0,     0,    51,    57,    31,    57,     6,
      10,     9,    11,     8,     7,     5,    31,    36,    12,    57,
      57,    57,    57,     0,    57,    57,    57,     0,    39,     0,
      71,    59,    60,    58,     0,     0,     0,     0,    31,    31,
      31,    31,    31,    31,    37,    31,    59,     0,     0,    38,
       0,     0,     0,     0,    55,     0,     0,     0,    54,    41,
      53,    52,    57,    57,    57,    57,    57,    57,    57,    57,
       0,    57,    57,    57,    23,    17,    18,    20,    19,    16,
      22,    21,     0,    14,    44,    45,    46,    47,     0,     0,
      43,     0,     0,    66,    67,    65,    69,    70,    68,    61,
      31,    62,    63,    64,    31,    56,    42,    40,     0,    57,
       0,     0,     0,     0,     0,    26,     0,    32,    30,     0,
       0,    31,    28,    31,     0,     0,     0,     0,    27,    35,
       0,     0,     0,    31,    31,    31,    34,     0,     0,     0,
      29,     0,    25,    24
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,    10,    11,    57,    58,    59,    60,   142,   148,
      61,    62,   131,    63,    64,    65,    20,    24,    25,    75,
      56
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -48
static const yytype_int16 yypact[] =
{
     -48,    69,   -48,   -19,   -48,     0,   -12,    -6,    19,   -48,
     -48,    28,    60,    62,    71,    76,    78,    79,    12,    89,
      58,   -48,    34,   111,    -1,   -48,    39,   126,   306,   -48,
     -48,   -48,   -48,   -48,   -48,   -48,   126,    94,   -48,   306,
     306,   306,   306,   121,   306,   306,   306,    54,   -48,   112,
     -48,   107,   -48,   -48,   122,   110,    97,   123,    27,    27,
      27,    27,    27,    27,   133,    27,   -48,   109,   125,   -48,
     131,   143,   165,   177,   127,   135,   199,   210,   262,   -48,
     130,   -48,   306,   306,   306,   306,   306,   306,   306,   306,
     138,   306,   306,   306,   -48,   -48,   -48,   -48,   -48,   -48,
     -48,   -48,   142,   -48,   -48,   -48,   -48,   -48,   121,   140,
     -48,   145,   240,   262,   262,   262,   262,   262,   262,   262,
     281,   262,   262,   262,   126,   -48,   -48,   -48,   112,   306,
     157,    73,   158,    20,   251,   -48,   153,   -48,   -48,   166,
     155,     3,   192,   299,   168,   169,   183,   176,   -48,   -48,
     182,   193,   174,   126,   126,   126,   -48,   191,   200,   203,
     -48,   195,   -48,   -48
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -48,   -48,   -48,   -48,   -36,   231,   232,   233,   -48,   -48,
     234,   235,   -48,     2,     4,   236,    14,   -48,   -47,   136,
     -27
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -54
static const yytype_int16 yytable[] =
{
      68,    67,    81,    17,    22,    18,    21,     4,     5,     6,
       7,     8,    70,    71,    72,    73,    26,    76,    77,    78,
      27,   -15,    95,    96,    97,    98,    99,   100,    48,   101,
      54,     4,     5,     6,     7,     8,    23,    49,    36,    69,
      55,    37,    50,    51,     5,   -15,   -15,    28,    52,    53,
     139,    55,   140,    29,   -15,   112,   113,   114,   115,   116,
     117,   118,   119,   -53,   121,   122,   123,   -48,    45,     2,
       3,    46,   -53,     4,     5,     6,     7,     8,    39,    40,
      41,   133,    42,    79,   130,    30,    43,    31,   132,   -48,
     -48,   -48,   136,   -48,     9,    44,    32,   -48,     4,     5,
     137,    33,   134,    34,    35,   146,   -48,   149,    83,    84,
      85,    86,    87,    88,    38,    47,    80,   157,   158,   159,
      83,    84,    85,    86,    87,    88,    74,    89,    90,    91,
       4,     5,     6,     7,     8,   -50,    92,    93,    43,    89,
     102,    91,    83,    84,    85,    86,    87,    88,    92,    93,
      94,    82,   103,   -15,    83,    84,    85,    86,    87,    88,
     104,    89,    37,    91,   120,   108,   109,    46,   124,   126,
      92,    93,   105,    89,   127,    91,    83,    84,    85,    86,
      87,    88,    92,    93,   135,   138,   143,   145,    83,    84,
      85,    86,    87,    88,   106,    89,   144,    91,   147,   150,
     151,   152,   153,   156,    92,    93,   107,    89,   154,    91,
      83,    84,    85,    86,    87,    88,    92,    93,   160,   155,
     163,    83,    84,    85,    86,    87,    88,   161,   110,    89,
     162,    91,    12,    13,    14,    15,    16,    19,    92,    93,
      89,     0,    91,     0,   125,   111,     0,     0,     0,    92,
      93,    83,    84,    85,    86,    87,    88,     0,     0,     0,
       0,     0,    83,    84,    85,    86,    87,    88,     0,   128,
      89,     0,    91,    83,    84,    85,    86,    87,    88,    92,
      93,    89,     0,    91,   141,     4,     5,     6,     7,     8,
      92,    93,    89,     0,    91,     0,     0,     0,   129,     0,
     -33,    92,    93,     4,     5,     6,     7,     8,   -15,    50,
      66,     0,     0,     0,     0,    52,    53,     0,   -15,     0,
       0,     0,     0,     0,     0,     0,   -15
};

static const yytype_int16 yycheck[] =
{
      36,    28,    49,     1,     4,     1,    25,     4,     5,     6,
       7,     8,    39,    40,    41,    42,    28,    44,    45,    46,
      26,    18,    58,    59,    60,    61,    62,    63,    29,    65,
      26,     4,     5,     6,     7,     8,    36,    38,    26,    37,
      26,    29,     3,     4,     5,    18,    19,    28,     9,    10,
      30,    37,    32,    25,    27,    82,    83,    84,    85,    86,
      87,    88,    89,    29,    91,    92,    93,    28,    34,     0,
       1,    37,    38,     4,     5,     6,     7,     8,    20,    21,
      22,   128,    24,    29,   120,    25,    28,    25,   124,    20,
      21,    22,    19,    24,    25,    37,    25,    28,     4,     5,
      27,    25,   129,    25,    25,   141,    37,   143,    11,    12,
      13,    14,    15,    16,    25,     4,     4,   153,   154,   155,
      11,    12,    13,    14,    15,    16,     5,    30,    31,    32,
       4,     5,     6,     7,     8,    28,    39,    40,    28,    30,
      31,    32,    11,    12,    13,    14,    15,    16,    39,    40,
      27,    29,    27,    27,    11,    12,    13,    14,    15,    16,
      29,    30,    29,    32,    26,    38,    31,    37,    26,    29,
      39,    40,    29,    30,    29,    32,    11,    12,    13,    14,
      15,    16,    39,    40,    27,    27,    33,    32,    11,    12,
      13,    14,    15,    16,    29,    30,    30,    32,     6,    31,
      31,    18,    26,    29,    39,    40,    29,    30,    26,    32,
      11,    12,    13,    14,    15,    16,    39,    40,    27,    26,
      25,    11,    12,    13,    14,    15,    16,    27,    29,    30,
      27,    32,     1,     1,     1,     1,     1,     1,    39,    40,
      30,    -1,    32,    -1,   108,    35,    -1,    -1,    -1,    39,
      40,    11,    12,    13,    14,    15,    16,    -1,    -1,    -1,
      -1,    -1,    11,    12,    13,    14,    15,    16,    -1,    29,
      30,    -1,    32,    11,    12,    13,    14,    15,    16,    39,
      40,    30,    -1,    32,    33,     4,     5,     6,     7,     8,
      39,    40,    30,    -1,    32,    -1,    -1,    -1,    17,    -1,
      19,    39,    40,     4,     5,     6,     7,     8,    27,     3,
       4,    -1,    -1,    -1,    -1,     9,    10,    -1,    19,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    27
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    42,     0,     1,     4,     5,     6,     7,     8,    25,
      43,    44,    46,    47,    48,    51,    52,    54,    55,    56,
      57,    25,     4,    36,    58,    59,    28,    26,    28,    25,
      25,    25,    25,    25,    25,    25,    26,    29,    25,    20,
      21,    22,    24,    28,    37,    34,    37,     4,    29,    38,
       3,     4,     9,    10,    55,    57,    61,    45,    46,    47,
      48,    51,    52,    54,    55,    56,     4,    61,    45,    54,
      61,    61,    61,    61,     5,    60,    61,    61,    61,    29,
       4,    59,    29,    11,    12,    13,    14,    15,    16,    30,
      31,    32,    39,    40,    27,    45,    45,    45,    45,    45,
      45,    45,    31,    27,    29,    29,    29,    29,    38,    31,
      29,    35,    61,    61,    61,    61,    61,    61,    61,    61,
      26,    61,    61,    61,    26,    60,    29,    29,    29,    17,
      45,    53,    45,    59,    61,    27,    19,    27,    27,    30,
      32,    33,    49,    33,    30,    32,    45,     6,    50,    45,
      31,    31,    18,    26,    26,    26,    29,    45,    45,    45,
      27,    27,    27,    25
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
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
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


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
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

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
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


/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*-------------------------.
| yyparse or yypush_parse.  |
`-------------------------*/

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
  if (yyn == YYPACT_NINF)
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
      if (yyn == 0 || yyn == YYTABLE_NINF)
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
        case 13:

/* Line 1455 of yacc.c  */
#line 67 "TP5bison.y"
    { yyerrok; ;}
    break;

  case 14:

/* Line 1455 of yacc.c  */
#line 73 "TP5bison.y"
    {printf("Se ha definido una funcion \n");;}
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 84 "TP5bison.y"
    {printf( "Se ha declarado una sentencia do \n");;}
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 88 "TP5bison.y"
    {printf("Se ha declarado una sentencia for\n"); fputs("Se ha declarado una sentencia for \n", yyout);;}
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 89 "TP5bison.y"
    {printf("Se ha declarado una sentencia for\n");}
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 94 "TP5bison.y"
    {printf ("Se declaro un if \n");;}
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 98 "TP5bison.y"
    {printf ("Se declaron un else \n");;}
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 102 "TP5bison.y"
    {printf ("Se declaro un while \n");;}
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 107 "TP5bison.y"
    {printf ("Se declaro un switch \n");;}
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 112 "TP5bison.y"
    {printf ("Se declaro un case \n");;}
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 113 "TP5bison.y"
    {printf ("Se declaro el default \n");;}
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 120 "TP5bison.y"
    {printf("Se han declarado variables \n");;}
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 121 "TP5bison.y"
    {printf("Se ha declarado un arreglo \n");;}
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 122 "TP5bison.y"
    {printf("Se ha declarado un puntero \n");;}
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 123 "TP5bison.y"
    {printf("Se ha declarado una funcion \n");fputs("Se ha declarado una funcion \n", yyout);;}
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 127 "TP5bison.y"
    {printf("Se ha declarado una sentencia de asignacion \n");}
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 128 "TP5bison.y"
    {printf("Se ha declarado una sentencia de asignacion \n");}
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 129 "TP5bison.y"
    {printf("Se ha declarado una sentencia de asignacion \n");}
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 130 "TP5bison.y"
    {printf("Se ha declarado una sentencia de asignacion \n");}
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 147 "TP5bison.y"
    { 	agregarId((yyvsp[(1) - (1)].s.cadena));;}
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 148 "TP5bison.y"
    {printf("Se asigna al identificador %s el valor %s \n",(yyvsp[(1) - (3)].s.cadena),(yyvsp[(3) - (3)].s.valor)); agregarId((yyvsp[(1) - (3)].s.cadena)); recorrerListaId(); fprintf(yyout, "Se asigna al identificador \"%s\" el valor %s \n",(yyvsp[(1) - (3)].s.cadena),(yyvsp[(3) - (3)].s.valor));;}
    break;

  case 61:

/* Line 1455 of yacc.c  */
#line 161 "TP5bison.y"
    { if ((yyvsp[(1) - (3)].s.tipo)==(yyvsp[(3) - (3)].s.tipo)){(yyval.s.valor) = (yyvsp[(1) - (3)].s.valor) + (yyvsp[(3) - (3)].s.valor); (yyval.s.tipo) = (yyvsp[(1) - (3)].s.tipo);}else{printf("No se corresponden los tipos de datos en la suma\n");};}
    break;

  case 62:

/* Line 1455 of yacc.c  */
#line 162 "TP5bison.y"
    {if ((yyvsp[(1) - (3)].s.tipo)==(yyvsp[(3) - (3)].s.tipo)){(yyval.s.valor) = (yyvsp[(1) - (3)].s.valor) - (yyvsp[(3) - (3)].s.valor); (yyval.s.tipo) = (yyvsp[(1) - (3)].s.tipo);}else{printf("No se corresponden los tipos de datos en la resta\n");};}
    break;

  case 63:

/* Line 1455 of yacc.c  */
#line 163 "TP5bison.y"
    {if ((yyvsp[(1) - (3)].s.tipo)==(yyvsp[(3) - (3)].s.tipo)){(yyval.s.valor) = (yyvsp[(1) - (3)].s.valor) > (yyvsp[(3) - (3)].s.valor); (yyval.s.tipo) = (yyvsp[(1) - (3)].s.tipo);}else{printf("No se corresponden los tipos de datos en la operacion mayor\n");};}
    break;

  case 64:

/* Line 1455 of yacc.c  */
#line 164 "TP5bison.y"
    {if ((yyvsp[(1) - (3)].s.tipo)==(yyvsp[(3) - (3)].s.tipo)){(yyval.s.valor) = (yyvsp[(1) - (3)].s.valor) < (yyvsp[(3) - (3)].s.valor); (yyval.s.tipo) = (yyvsp[(1) - (3)].s.tipo);}else{printf("No se corresponden los tipos de datos en la operacion menor\n");};}
    break;

  case 65:

/* Line 1455 of yacc.c  */
#line 165 "TP5bison.y"
    {if ((yyvsp[(1) - (3)].s.tipo)==(yyvsp[(3) - (3)].s.tipo)){(yyval.s.valor) = (yyvsp[(1) - (3)].s.valor) == (yyvsp[(3) - (3)].s.valor); (yyval.s.tipo) = (yyvsp[(1) - (3)].s.tipo);}else{printf("No se corresponden los tipos de datos en la operacion igualdad\n");};}
    break;

  case 66:

/* Line 1455 of yacc.c  */
#line 166 "TP5bison.y"
    {if ((yyvsp[(1) - (3)].s.tipo)==(yyvsp[(3) - (3)].s.tipo)){(yyval.s.valor) = (yyvsp[(1) - (3)].s.valor) >= (yyvsp[(3) - (3)].s.valor); (yyval.s.tipo) = (yyvsp[(1) - (3)].s.tipo);}else{printf("No se corresponden los tipos de datos en la operacion mayor/igual\n");};}
    break;

  case 67:

/* Line 1455 of yacc.c  */
#line 167 "TP5bison.y"
    {if ((yyvsp[(1) - (3)].s.tipo)==(yyvsp[(3) - (3)].s.tipo)){(yyval.s.valor) = (yyvsp[(1) - (3)].s.valor) <= (yyvsp[(3) - (3)].s.valor); (yyval.s.tipo) = (yyvsp[(1) - (3)].s.tipo);}else{printf("No se corresponden los tipos de datos en la operacion menor/igual\n");};}
    break;

  case 68:

/* Line 1455 of yacc.c  */
#line 168 "TP5bison.y"
    {if ((yyvsp[(1) - (3)].s.tipo)==(yyvsp[(3) - (3)].s.tipo)){(yyval.s.valor) = (yyvsp[(1) - (3)].s.valor) != (yyvsp[(3) - (3)].s.valor); (yyval.s.tipo) = (yyvsp[(1) - (3)].s.tipo);}else{printf("No se corresponden los tipos de datos en la operacion desigualdad\n");};}
    break;

  case 69:

/* Line 1455 of yacc.c  */
#line 169 "TP5bison.y"
    {if ((yyvsp[(1) - (3)].s.tipo)==(yyvsp[(3) - (3)].s.tipo)){(yyval.s.valor) = (yyvsp[(1) - (3)].s.valor) && (yyvsp[(3) - (3)].s.valor); (yyval.s.tipo) = (yyvsp[(1) - (3)].s.tipo);}else{printf("No se corresponden los tipos de datos en la operacion and\n");};}
    break;

  case 70:

/* Line 1455 of yacc.c  */
#line 170 "TP5bison.y"
    {if ((yyvsp[(1) - (3)].s.tipo)==(yyvsp[(3) - (3)].s.tipo)){(yyval.s.valor) = (yyvsp[(1) - (3)].s.valor) || (yyvsp[(3) - (3)].s.valor); (yyval.s.tipo) = (yyvsp[(1) - (3)].s.tipo);}else{printf("No se corresponden los tipos de datos en la operacion or\n");};}
    break;



/* Line 1455 of yacc.c  */
#line 1749 "TP5bison.tab.c"
      default: break;
    }
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
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
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
      if (yyn != YYPACT_NINF)
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
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
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



/* Line 1675 of yacc.c  */
#line 175 "TP5bison.y"


main ()
{
 // yydebug = 1;

yyin = fopen("entrada.txt","r+");
yyout = fopen("salida.txt","wt+");

yyparse ();



}

