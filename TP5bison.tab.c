
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
#define YYLAST   450

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  42
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  21
/* YYNRULES -- Number of rules.  */
#define YYNRULES  74
/* YYNRULES -- Number of states.  */
#define YYNSTATES  169

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
      28,    31,    36,    30,    38,    32,     2,    41,     2,     2,
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
     155,   159,   166,   171,   177,   182,   187,   192,   197,   202,
     203,   206,   208,   210,   214,   216,   220,   222,   226,   227,
     229,   231,   233,   237,   241,   245,   249,   253,   257,   261,
     265,   269,   271,   275,   279
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      43,     0,    -1,    -1,    43,    44,    -1,    25,    -1,    55,
      25,    -1,    45,    25,    -1,    53,    25,    -1,    52,    25,
      -1,    48,    25,    -1,    47,    25,    -1,    49,    25,    -1,
      57,    25,    -1,     1,    25,    -1,    56,    26,    46,    27,
      -1,    -1,    53,    46,    -1,    47,    46,    -1,    48,    46,
      -1,    52,    46,    -1,    49,    46,    -1,    57,    46,    -1,
      55,    46,    -1,     7,    26,    46,    27,    -1,     6,    28,
      56,    29,    62,    29,    60,    30,    30,    31,    26,    46,
      27,    25,    -1,     6,    28,    56,    29,    62,    29,    60,
      32,    32,    31,    26,    46,    27,    -1,    -1,     6,    28,
      62,    31,    26,    46,    27,    50,    51,    -1,    -1,     6,
      26,    46,    27,    -1,     8,    28,    62,    31,    26,    46,
      27,    -1,    -1,     6,    28,    62,    31,    26,    54,    27,
      -1,    -1,    17,    62,    33,    46,    18,    29,    -1,    54,
      19,    33,    46,    -1,    -1,    56,    -1,    56,    29,    55,
      -1,     5,     4,    29,    -1,     5,    59,    29,    -1,     5,
       4,    34,    62,    35,    29,    -1,     5,    36,     4,    29,
      -1,    58,    28,    61,    31,    29,    -1,    58,    37,    62,
      29,    -1,    58,    20,    62,    29,    -1,    58,    21,    62,
      29,    -1,    58,    22,    62,    29,    -1,    58,    24,    62,
      29,    -1,    -1,     5,     4,    -1,     4,    -1,    60,    -1,
      59,    38,    60,    -1,     4,    -1,     4,    37,    62,    -1,
       5,    -1,     5,    38,    61,    -1,    -1,    10,    -1,     4,
      -1,     9,    -1,    62,    32,    62,    -1,    62,    39,    62,
      -1,    62,    40,    62,    -1,    62,    13,    62,    -1,    62,
      11,    62,    -1,    62,    12,    62,    -1,    62,    16,    62,
      -1,    62,    14,    62,    -1,    62,    15,    62,    -1,     3,
      -1,    62,    36,    62,    -1,    62,    41,    62,    -1,    62,
      30,    62,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    54,    54,    55,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    73,    75,    76,    77,    78,    79,
      80,    81,    82,    84,    87,    88,    93,    93,    96,    97,
     101,   105,   106,   110,   111,   112,   115,   116,   117,   120,
     121,   122,   123,   124,   128,   129,   130,   131,   132,   138,
     139,   140,   144,   145,   149,   150,   154,   155,   159,   160,
     161,   162,   164,   165,   166,   167,   168,   169,   170,   171,
     172,   173,   174,   175,   176
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
  "'/'", "$accept", "input", "line", "definicionFuncion",
  "listadoDeSentencias", "sentenciaDo", "sentenciaFor", "sentenciaIfElse",
  "$@1", "sentenciaElse", "sentenciaWhile", "sentenciaSwitch",
  "sentenciaCase", "listadoDeSentenciasDeDeclaracion",
  "sentenciaDeclaracion", "sentenciaAsignacion", "parametro",
  "listaIdentificadores", "identificadorA", "listaTipoDeDato", "exp", 0
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
      60,    47
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    42,    43,    43,    44,    44,    44,    44,    44,    44,
      44,    44,    44,    44,    45,    46,    46,    46,    46,    46,
      46,    46,    46,    47,    48,    48,    50,    49,    51,    51,
      52,    53,    53,    54,    54,    54,    55,    55,    55,    56,
      56,    56,    56,    56,    57,    57,    57,    57,    57,    58,
      58,    58,    59,    59,    60,    60,    61,    61,    62,    62,
      62,    62,    62,    62,    62,    62,    62,    62,    62,    62,
      62,    62,    62,    62,    62
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     2,     1,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     4,     0,     2,     2,     2,     2,
       2,     2,     2,     4,    14,    13,     0,     9,     0,     4,
       7,     0,     7,     0,     6,     4,     0,     1,     3,     3,
       3,     6,     4,     5,     4,     4,     4,     4,     4,     0,
       2,     1,     1,     3,     1,     3,     1,     3,     0,     1,
       1,     1,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     1,     3,     3,     3
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       2,     0,     1,     0,    51,     0,     0,     0,     0,     4,
       3,     0,     0,     0,     0,     0,     0,     0,    37,     0,
       0,    13,    50,     0,     0,    52,    58,    31,    58,     6,
      10,     9,    11,     8,     7,     5,    31,    36,    12,    58,
      58,    58,    58,     0,    58,    39,    58,    58,     0,    40,
       0,    71,    60,    61,    59,     0,     0,     0,     0,    31,
      31,    31,    31,    31,    31,    37,    31,    60,     0,     0,
      38,     0,     0,     0,     0,    56,     0,     0,     0,    55,
      42,    54,    53,    58,    58,    58,    58,    58,    58,    58,
      58,     0,    58,    58,    58,    58,    58,    23,    17,    18,
      20,    19,    16,    22,    21,     0,    14,    45,    46,    47,
      48,     0,     0,    44,     0,     0,    66,    67,    65,    69,
      70,    68,    74,    31,    62,    72,    63,    64,    73,    31,
      57,    43,    41,     0,    58,     0,     0,     0,     0,     0,
      26,     0,    32,    30,     0,     0,    31,    28,    31,     0,
       0,     0,     0,    27,    35,     0,     0,     0,    31,    31,
      31,    34,     0,     0,     0,    29,     0,    25,    24
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,    10,    11,    58,    59,    60,    61,   147,   153,
      62,    63,   136,    64,    65,    66,    20,    24,    25,    76,
      57
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -49
static const yytype_int16 yypact[] =
{
     -49,    74,   -49,    -7,   -49,     0,    -6,     6,     1,   -49,
     -49,    18,    23,    30,    46,    52,    59,    61,    47,    64,
      13,   -49,    54,    34,    11,   -49,    42,   423,   159,   -49,
     -49,   -49,   -49,   -49,   -49,   -49,   423,    49,   -49,   159,
     159,   159,   159,    85,   159,   -49,   159,   159,    68,   -49,
      96,   -49,    73,   -49,   -49,    75,    77,   102,    76,   370,
     370,   370,   370,   370,   370,    79,   370,   -49,   114,    82,
     -49,   145,   176,   207,   238,    81,    89,   269,   281,   355,
     -49,    69,   -49,   159,   159,   159,   159,   159,   159,   159,
     159,    95,   159,   159,   159,   159,   159,   -49,   -49,   -49,
     -49,   -49,   -49,   -49,   -49,   105,   -49,   -49,   -49,   -49,
     -49,    85,   106,   -49,   107,   312,   355,   355,   355,   355,
     355,   355,   355,   394,   355,   355,   355,   355,   355,   423,
     -49,   -49,   -49,    96,   159,   110,    45,   112,    12,   324,
     -49,   115,   -49,   -49,   117,   108,     3,   143,   399,   120,
     121,   146,   139,   -49,   -49,   140,   141,   142,   423,   423,
     423,   -49,   149,   151,   152,   -49,   147,   -49,   -49
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -49,   -49,   -49,   -49,   -36,   169,   172,   179,   -49,   -49,
     181,   182,   -49,     2,     5,   192,   -21,   -49,   -48,    83,
     -27
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -55
static const yytype_int16 yytable[] =
{
      69,    68,    82,    17,    22,    56,    18,     4,     5,     6,
       7,     8,    71,    72,    73,    74,    56,    77,    21,    78,
      79,   -15,    26,    98,    99,   100,   101,   102,   103,    28,
     104,    55,    27,    39,    40,    41,    23,    42,    48,    70,
      49,    43,   144,    29,   145,    51,    52,     5,    30,    50,
      44,    53,    54,     4,     5,    31,   115,   116,   117,   118,
     119,   120,   121,   122,   141,   124,   125,   126,   127,   128,
     -49,    32,   142,    36,     2,     3,    37,    33,     4,     5,
       6,     7,     8,    45,    34,   138,    35,   135,    46,    38,
      75,    47,   -54,   137,   -49,   -49,   -49,    80,   -49,     9,
      81,   -51,   -49,    97,    83,    43,    47,   139,    37,   106,
     151,   -49,   154,    84,    85,    86,    87,    88,    89,   111,
     112,   123,   162,   163,   164,    84,    85,    86,    87,    88,
      89,   129,    90,    91,    92,   131,   132,   140,    93,   143,
     150,    94,    95,    96,    90,   105,    92,   149,   148,   152,
      93,   155,   156,    94,    95,    96,    84,    85,    86,    87,
      88,    89,    51,    67,   157,   158,   159,   160,    53,    54,
      12,   161,   168,    13,   107,    90,   165,    92,   166,   167,
      14,    93,    15,    16,    94,    95,    96,    84,    85,    86,
      87,    88,    89,    19,   130,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   108,    90,     0,    92,     0,
       0,     0,    93,     0,     0,    94,    95,    96,    84,    85,
      86,    87,    88,    89,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   109,    90,     0,    92,
       0,     0,     0,    93,     0,     0,    94,    95,    96,    84,
      85,    86,    87,    88,    89,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   110,    90,     0,
      92,     0,     0,     0,    93,     0,     0,    94,    95,    96,
      84,    85,    86,    87,    88,    89,     0,     0,     0,     0,
       0,     0,    84,    85,    86,    87,    88,    89,   113,    90,
       0,    92,     0,     0,     0,    93,     0,     0,    94,    95,
      96,    90,     0,    92,     0,     0,   114,    93,     0,     0,
      94,    95,    96,    84,    85,    86,    87,    88,    89,     0,
       0,     0,     0,     0,     0,    84,    85,    86,    87,    88,
      89,   133,    90,     0,    92,     0,     0,     0,    93,     0,
       0,    94,    95,    96,    90,     0,    92,   146,     0,     0,
      93,     0,     0,    94,    95,    96,    84,    85,    86,    87,
      88,    89,     0,     0,     4,     5,     6,     7,     8,     0,
       0,     0,     0,     0,     0,    90,     0,    92,   -15,   -15,
       0,    93,     0,     0,    94,    95,    96,   -15,     4,     5,
       6,     7,     8,     4,     5,     6,     7,     8,     0,     0,
       0,   134,     0,   -33,     0,     0,     0,     0,   -15,     0,
       0,   -15,     0,     0,     0,     0,   -15,     4,     5,     6,
       7,     8,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -15
};

static const yytype_int16 yycheck[] =
{
      36,    28,    50,     1,     4,    26,     1,     4,     5,     6,
       7,     8,    39,    40,    41,    42,    37,    44,    25,    46,
      47,    18,    28,    59,    60,    61,    62,    63,    64,    28,
      66,    26,    26,    20,    21,    22,    36,    24,     4,    37,
      29,    28,    30,    25,    32,     3,     4,     5,    25,    38,
      37,     9,    10,     4,     5,    25,    83,    84,    85,    86,
      87,    88,    89,    90,    19,    92,    93,    94,    95,    96,
      28,    25,    27,    26,     0,     1,    29,    25,     4,     5,
       6,     7,     8,    29,    25,   133,    25,   123,    34,    25,
       5,    37,    38,   129,    20,    21,    22,    29,    24,    25,
       4,    28,    28,    27,    29,    28,    37,   134,    29,    27,
     146,    37,   148,    11,    12,    13,    14,    15,    16,    38,
      31,    26,   158,   159,   160,    11,    12,    13,    14,    15,
      16,    26,    30,    31,    32,    29,    29,    27,    36,    27,
      32,    39,    40,    41,    30,    31,    32,    30,    33,     6,
      36,    31,    31,    39,    40,    41,    11,    12,    13,    14,
      15,    16,     3,     4,    18,    26,    26,    26,     9,    10,
       1,    29,    25,     1,    29,    30,    27,    32,    27,    27,
       1,    36,     1,     1,    39,    40,    41,    11,    12,    13,
      14,    15,    16,     1,   111,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    29,    30,    -1,    32,    -1,
      -1,    -1,    36,    -1,    -1,    39,    40,    41,    11,    12,
      13,    14,    15,    16,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    29,    30,    -1,    32,
      -1,    -1,    -1,    36,    -1,    -1,    39,    40,    41,    11,
      12,    13,    14,    15,    16,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    29,    30,    -1,
      32,    -1,    -1,    -1,    36,    -1,    -1,    39,    40,    41,
      11,    12,    13,    14,    15,    16,    -1,    -1,    -1,    -1,
      -1,    -1,    11,    12,    13,    14,    15,    16,    29,    30,
      -1,    32,    -1,    -1,    -1,    36,    -1,    -1,    39,    40,
      41,    30,    -1,    32,    -1,    -1,    35,    36,    -1,    -1,
      39,    40,    41,    11,    12,    13,    14,    15,    16,    -1,
      -1,    -1,    -1,    -1,    -1,    11,    12,    13,    14,    15,
      16,    29,    30,    -1,    32,    -1,    -1,    -1,    36,    -1,
      -1,    39,    40,    41,    30,    -1,    32,    33,    -1,    -1,
      36,    -1,    -1,    39,    40,    41,    11,    12,    13,    14,
      15,    16,    -1,    -1,     4,     5,     6,     7,     8,    -1,
      -1,    -1,    -1,    -1,    -1,    30,    -1,    32,    18,    19,
      -1,    36,    -1,    -1,    39,    40,    41,    27,     4,     5,
       6,     7,     8,     4,     5,     6,     7,     8,    -1,    -1,
      -1,    17,    -1,    19,    -1,    -1,    -1,    -1,    19,    -1,
      -1,    27,    -1,    -1,    -1,    -1,    27,     4,     5,     6,
       7,     8,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      27
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    43,     0,     1,     4,     5,     6,     7,     8,    25,
      44,    45,    47,    48,    49,    52,    53,    55,    56,    57,
      58,    25,     4,    36,    59,    60,    28,    26,    28,    25,
      25,    25,    25,    25,    25,    25,    26,    29,    25,    20,
      21,    22,    24,    28,    37,    29,    34,    37,     4,    29,
      38,     3,     4,     9,    10,    56,    58,    62,    46,    47,
      48,    49,    52,    53,    55,    56,    57,     4,    62,    46,
      55,    62,    62,    62,    62,     5,    61,    62,    62,    62,
      29,     4,    60,    29,    11,    12,    13,    14,    15,    16,
      30,    31,    32,    36,    39,    40,    41,    27,    46,    46,
      46,    46,    46,    46,    46,    31,    27,    29,    29,    29,
      29,    38,    31,    29,    35,    62,    62,    62,    62,    62,
      62,    62,    62,    26,    62,    62,    62,    62,    62,    26,
      61,    29,    29,    29,    17,    46,    54,    46,    60,    62,
      27,    19,    27,    27,    30,    32,    33,    50,    33,    30,
      32,    46,     6,    51,    46,    31,    31,    18,    26,    26,
      26,    29,    46,    46,    46,    27,    27,    27,    25
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
#line 87 "TP5bison.y"
    {printf("Se ha declarado una sentencia for\n"); fputs("Se ha declarado una sentencia for \n", yyout);;}
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 88 "TP5bison.y"
    {printf("Se ha declarado una sentencia for\n");}
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 93 "TP5bison.y"
    {printf ("Se declaro un if \n");;}
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 97 "TP5bison.y"
    {printf ("Se declaron un else \n");;}
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 101 "TP5bison.y"
    {printf ("Se declaro un while \n");;}
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 106 "TP5bison.y"
    {printf ("Se declaro un switch \n");;}
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 111 "TP5bison.y"
    {printf ("Se declaro un case \n");;}
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 112 "TP5bison.y"
    {printf ("Se declaro el default \n");;}
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 120 "TP5bison.y"
    {agregarId((yyvsp[(2) - (3)].s.cadena),(yyvsp[(1) - (3)].s.cadena));printf( "Se declaro %s " , (yyvsp[(1) - (3)].s.cadena)); recorrerListaId();(yyvsp[(2) - (3)].s.tipo) = chequearTipo((yyvsp[(1) - (3)].s.cadena),"int");;}
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 121 "TP5bison.y"
    {printf("Se han declarado variables \n"); agregarId((yyvsp[(2) - (3)].s.cadena),(yyvsp[(1) - (3)].s.cadena)); recorrerListaId(); ;}
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 122 "TP5bison.y"
    {agregarId((yyvsp[(2) - (6)].s.cadena),(yyvsp[(1) - (6)].s.cadena));printf("Se ha declarado un arreglo \n");;}
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 123 "TP5bison.y"
    {agregarId((yyvsp[(3) - (4)].s.cadena),(yyvsp[(1) - (4)].s.cadena));printf("Se ha declarado un puntero \n");;}
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 124 "TP5bison.y"
    {printf("Se ha declarado una funcion \n");fputs("Se ha declarado una funcion \n", yyout);;}
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 129 "TP5bison.y"
    {printf("Se ha declarado una sentencia de asignacion \n");}
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 130 "TP5bison.y"
    {printf("Se ha declarado una sentencia de asignacion \n");}
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 131 "TP5bison.y"
    {printf("Se ha declarado una sentencia de asignacion \n");}
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 132 "TP5bison.y"
    {printf("Se ha declarado una sentencia de asignacion \n");}
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 149 "TP5bison.y"
    {;}
    break;

  case 55:

/* Line 1455 of yacc.c  */
#line 150 "TP5bison.y"
    {printf("Se asigna al identificador %s el valor %f \n",(yyvsp[(1) - (3)].s.cadena),(yyvsp[(3) - (3)].s.valor));;}
    break;

  case 62:

/* Line 1455 of yacc.c  */
#line 164 "TP5bison.y"
    {(yyvsp[(1) - (3)].s.tipo) = calcularTipo((yyvsp[(1) - (3)].s.cadena),(yyvsp[(1) - (3)].s.tipo));(yyvsp[(3) - (3)].s.tipo) = calcularTipo((yyvsp[(3) - (3)].s.cadena),(yyvsp[(3) - (3)].s.tipo));if ((yyvsp[(1) - (3)].s.tipo)==(yyvsp[(3) - (3)].s.tipo)){(yyval.s.valor) = (yyvsp[(1) - (3)].s.valor) - (yyvsp[(3) - (3)].s.valor); (yyval.s.tipo) = (yyvsp[(1) - (3)].s.tipo);}else{printf("No se corresponden los tipos de datos en la resta\n"); agregarControlTipos((yyvsp[(1) - (3)].s.cadena), (yyvsp[(3) - (3)].s.cadena), "resta"); recorrerListaControlTipos();};}
    break;

  case 63:

/* Line 1455 of yacc.c  */
#line 165 "TP5bison.y"
    {(yyvsp[(1) - (3)].s.tipo) = calcularTipo((yyvsp[(1) - (3)].s.cadena),(yyvsp[(1) - (3)].s.tipo));(yyvsp[(3) - (3)].s.tipo) = calcularTipo((yyvsp[(3) - (3)].s.cadena),(yyvsp[(3) - (3)].s.tipo));if ((yyvsp[(1) - (3)].s.tipo)==(yyvsp[(3) - (3)].s.tipo)){(yyval.s.valor) = (yyvsp[(1) - (3)].s.valor) > (yyvsp[(3) - (3)].s.valor); (yyval.s.tipo) = (yyvsp[(1) - (3)].s.tipo);}else{printf("No se corresponden los tipos de datos en la operacion mayor\n"); agregarControlTipos((yyvsp[(1) - (3)].s.cadena), (yyvsp[(3) - (3)].s.cadena), "mayor"); recorrerListaControlTipos();};}
    break;

  case 64:

/* Line 1455 of yacc.c  */
#line 166 "TP5bison.y"
    {(yyvsp[(1) - (3)].s.tipo) = calcularTipo((yyvsp[(1) - (3)].s.cadena),(yyvsp[(1) - (3)].s.tipo));(yyvsp[(3) - (3)].s.tipo) = calcularTipo((yyvsp[(3) - (3)].s.cadena),(yyvsp[(3) - (3)].s.tipo));if ((yyvsp[(1) - (3)].s.tipo)==(yyvsp[(3) - (3)].s.tipo)){(yyval.s.valor) = (yyvsp[(1) - (3)].s.valor) < (yyvsp[(3) - (3)].s.valor); (yyval.s.tipo) = (yyvsp[(1) - (3)].s.tipo);}else{printf("No se corresponden los tipos de datos en la operacion menor\n"); agregarControlTipos((yyvsp[(1) - (3)].s.cadena), (yyvsp[(3) - (3)].s.cadena),"menor"); recorrerListaControlTipos();};}
    break;

  case 65:

/* Line 1455 of yacc.c  */
#line 167 "TP5bison.y"
    {(yyvsp[(1) - (3)].s.tipo) = calcularTipo((yyvsp[(1) - (3)].s.cadena),(yyvsp[(1) - (3)].s.tipo));(yyvsp[(3) - (3)].s.tipo) = calcularTipo((yyvsp[(3) - (3)].s.cadena),(yyvsp[(3) - (3)].s.tipo));if ((yyvsp[(1) - (3)].s.tipo)==(yyvsp[(3) - (3)].s.tipo)){(yyval.s.valor) = (yyvsp[(1) - (3)].s.valor) == (yyvsp[(3) - (3)].s.valor); (yyval.s.tipo) = (yyvsp[(1) - (3)].s.tipo);}else{printf("No se corresponden los tipos de datos en la operacion igualdad\n"); agregarControlTipos((yyvsp[(1) - (3)].s.cadena), (yyvsp[(3) - (3)].s.cadena), "igualdad"); recorrerListaControlTipos();};}
    break;

  case 66:

/* Line 1455 of yacc.c  */
#line 168 "TP5bison.y"
    {(yyvsp[(1) - (3)].s.tipo) = calcularTipo((yyvsp[(1) - (3)].s.cadena),(yyvsp[(1) - (3)].s.tipo));(yyvsp[(3) - (3)].s.tipo) = calcularTipo((yyvsp[(3) - (3)].s.cadena),(yyvsp[(3) - (3)].s.tipo));if ((yyvsp[(1) - (3)].s.tipo)==(yyvsp[(3) - (3)].s.tipo)){(yyval.s.valor) = (yyvsp[(1) - (3)].s.valor) >= (yyvsp[(3) - (3)].s.valor); (yyval.s.tipo) = (yyvsp[(1) - (3)].s.tipo);}else{printf("No se corresponden los tipos de datos en la operacion mayor/igual\n"); agregarControlTipos((yyvsp[(1) - (3)].s.cadena), (yyvsp[(3) - (3)].s.cadena), "mayor igual"); recorrerListaControlTipos();};}
    break;

  case 67:

/* Line 1455 of yacc.c  */
#line 169 "TP5bison.y"
    {(yyvsp[(1) - (3)].s.tipo) = calcularTipo((yyvsp[(1) - (3)].s.cadena),(yyvsp[(1) - (3)].s.tipo));(yyvsp[(3) - (3)].s.tipo) = calcularTipo((yyvsp[(3) - (3)].s.cadena),(yyvsp[(3) - (3)].s.tipo));if ((yyvsp[(1) - (3)].s.tipo)==(yyvsp[(3) - (3)].s.tipo)){(yyval.s.valor) = (yyvsp[(1) - (3)].s.valor) <= (yyvsp[(3) - (3)].s.valor); (yyval.s.tipo) = (yyvsp[(1) - (3)].s.tipo);}else{printf("No se corresponden los tipos de datos en la operacion menor/igual\n"); agregarControlTipos((yyvsp[(1) - (3)].s.cadena), (yyvsp[(3) - (3)].s.cadena), "menor igual"); recorrerListaControlTipos();};}
    break;

  case 68:

/* Line 1455 of yacc.c  */
#line 170 "TP5bison.y"
    {(yyvsp[(1) - (3)].s.tipo) = calcularTipo((yyvsp[(1) - (3)].s.cadena),(yyvsp[(1) - (3)].s.tipo));(yyvsp[(3) - (3)].s.tipo) = calcularTipo((yyvsp[(3) - (3)].s.cadena),(yyvsp[(3) - (3)].s.tipo));if ((yyvsp[(1) - (3)].s.tipo)==(yyvsp[(3) - (3)].s.tipo)){(yyval.s.valor) = (yyvsp[(1) - (3)].s.valor) != (yyvsp[(3) - (3)].s.valor); (yyval.s.tipo) = (yyvsp[(1) - (3)].s.tipo);}else{printf("No se corresponden los tipos de datos en la operacion desigualdad\n"); agregarControlTipos((yyvsp[(1) - (3)].s.cadena), (yyvsp[(3) - (3)].s.cadena),"desigualdad"); recorrerListaControlTipos();};}
    break;

  case 69:

/* Line 1455 of yacc.c  */
#line 171 "TP5bison.y"
    {(yyvsp[(1) - (3)].s.tipo) = calcularTipo((yyvsp[(1) - (3)].s.cadena),(yyvsp[(1) - (3)].s.tipo));(yyvsp[(3) - (3)].s.tipo) = calcularTipo((yyvsp[(3) - (3)].s.cadena),(yyvsp[(3) - (3)].s.tipo));if ((yyvsp[(1) - (3)].s.tipo)==(yyvsp[(3) - (3)].s.tipo)){(yyval.s.valor) = (yyvsp[(1) - (3)].s.valor) && (yyvsp[(3) - (3)].s.valor); (yyval.s.tipo) = (yyvsp[(1) - (3)].s.tipo);}else{printf("No se corresponden los tipos de datos en la operacion and\n"); agregarControlTipos((yyvsp[(1) - (3)].s.cadena), (yyvsp[(3) - (3)].s.cadena), "and"); recorrerListaControlTipos();};}
    break;

  case 70:

/* Line 1455 of yacc.c  */
#line 172 "TP5bison.y"
    {(yyvsp[(1) - (3)].s.tipo) = calcularTipo((yyvsp[(1) - (3)].s.cadena),(yyvsp[(1) - (3)].s.tipo));(yyvsp[(3) - (3)].s.tipo) = calcularTipo((yyvsp[(3) - (3)].s.cadena),(yyvsp[(3) - (3)].s.tipo));if ((yyvsp[(1) - (3)].s.tipo)==(yyvsp[(3) - (3)].s.tipo)){(yyval.s.valor) = (yyvsp[(1) - (3)].s.valor) || (yyvsp[(3) - (3)].s.valor); (yyval.s.tipo) = (yyvsp[(1) - (3)].s.tipo);}else{printf("No se corresponden los tipos de datos en la operacion or\n"); agregarControlTipos((yyvsp[(1) - (3)].s.cadena), (yyvsp[(3) - (3)].s.cadena), "or"); recorrerListaControlTipos();};}
    break;

  case 72:

/* Line 1455 of yacc.c  */
#line 174 "TP5bison.y"
    {(yyvsp[(1) - (3)].s.tipo) = calcularTipo((yyvsp[(1) - (3)].s.cadena),(yyvsp[(1) - (3)].s.tipo));(yyvsp[(3) - (3)].s.tipo) = calcularTipo((yyvsp[(3) - (3)].s.cadena),(yyvsp[(3) - (3)].s.tipo));if ((yyvsp[(1) - (3)].s.tipo)==(yyvsp[(3) - (3)].s.tipo)){(yyval.s.valor) = (yyvsp[(1) - (3)].s.valor) * (yyvsp[(3) - (3)].s.valor); (yyval.s.tipo) = (yyvsp[(1) - (3)].s.tipo);}else{printf("No se corresponden los tipos de datos en la multipliacion\n"); agregarControlTipos((yyvsp[(1) - (3)].s.cadena), (yyvsp[(3) - (3)].s.cadena), "multiplicacion"); recorrerListaControlTipos();};}
    break;

  case 73:

/* Line 1455 of yacc.c  */
#line 175 "TP5bison.y"
    {(yyvsp[(1) - (3)].s.tipo) = calcularTipo((yyvsp[(1) - (3)].s.cadena),(yyvsp[(1) - (3)].s.tipo));(yyvsp[(3) - (3)].s.tipo) = calcularTipo((yyvsp[(3) - (3)].s.cadena),(yyvsp[(3) - (3)].s.tipo));if ((yyvsp[(1) - (3)].s.tipo)==(yyvsp[(3) - (3)].s.tipo)){(yyval.s.valor) = (yyvsp[(1) - (3)].s.valor) / (yyvsp[(3) - (3)].s.valor); (yyval.s.tipo) = (yyvsp[(1) - (3)].s.tipo);}else{printf("No se corresponden los tipos de datos en la division\n"); agregarControlTipos((yyvsp[(1) - (3)].s.cadena), (yyvsp[(3) - (3)].s.cadena), "division"); recorrerListaControlTipos();};}
    break;

  case 74:

/* Line 1455 of yacc.c  */
#line 176 "TP5bison.y"
    {(yyvsp[(1) - (3)].s.tipo) = calcularTipo((yyvsp[(1) - (3)].s.cadena),(yyvsp[(1) - (3)].s.tipo));(yyvsp[(3) - (3)].s.tipo) = calcularTipo((yyvsp[(3) - (3)].s.cadena),(yyvsp[(3) - (3)].s.tipo));if ((yyvsp[(1) - (3)].s.tipo)==(yyvsp[(3) - (3)].s.tipo)){(yyval.s.valor) = (yyvsp[(1) - (3)].s.valor) + (yyvsp[(3) - (3)].s.valor); (yyval.s.tipo) = (yyvsp[(1) - (3)].s.tipo);}else{printf("No se corresponden los tipos de datos en la suma\n"); agregarControlTipos( (yyvsp[(1) - (3)].s.cadena), (yyvsp[(3) - (3)].s.cadena), "suma"); recorrerListaControlTipos();};}
    break;



/* Line 1455 of yacc.c  */
#line 1797 "TP5bison.tab.c"
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
#line 180 "TP5bison.y"


main ()
{
 // yydebug = 1;

yyin = fopen("entrada.txt","r+");
yyout = fopen("salida.txt","wt+");

yyparse ();



}

