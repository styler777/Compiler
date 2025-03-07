/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "src/parser.y"

#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <unistd.h>
extern int lineno;
extern int nbCarac;
int yyerror(char * msg);
int yyparse();
#include "tree.h"
int yylex();
Node *tree;
Type type = {0};

#line 86 "src/parser.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

#include "parser.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_3_ = 3,                         /* '+'  */
  YYSYMBOL_4_ = 4,                         /* '-'  */
  YYSYMBOL_5_ = 5,                         /* '*'  */
  YYSYMBOL_6_ = 6,                         /* '/'  */
  YYSYMBOL_UnaryMinus = 7,                 /* UnaryMinus  */
  YYSYMBOL_ORDER = 8,                      /* ORDER  */
  YYSYMBOL_EQ = 9,                         /* EQ  */
  YYSYMBOL_AND = 10,                       /* AND  */
  YYSYMBOL_OR = 11,                        /* OR  */
  YYSYMBOL_DIVSTAR = 12,                   /* DIVSTAR  */
  YYSYMBOL_ADDSUB = 13,                    /* ADDSUB  */
  YYSYMBOL_CHARACTERE = 14,                /* CHARACTERE  */
  YYSYMBOL_TYPE = 15,                      /* TYPE  */
  YYSYMBOL_VOID = 16,                      /* VOID  */
  YYSYMBOL_RETURN = 17,                    /* RETURN  */
  YYSYMBOL_STATIC = 18,                    /* STATIC  */
  YYSYMBOL_NUM = 19,                       /* NUM  */
  YYSYMBOL_IF = 20,                        /* IF  */
  YYSYMBOL_ELSE = 21,                      /* ELSE  */
  YYSYMBOL_WHILE = 22,                     /* WHILE  */
  YYSYMBOL_IDENT = 23,                     /* IDENT  */
  YYSYMBOL_24_ = 24,                       /* ';'  */
  YYSYMBOL_25_ = 25,                       /* ','  */
  YYSYMBOL_26_ = 26,                       /* '('  */
  YYSYMBOL_27_ = 27,                       /* ')'  */
  YYSYMBOL_28_ = 28,                       /* '{'  */
  YYSYMBOL_29_ = 29,                       /* '}'  */
  YYSYMBOL_30_ = 30,                       /* '='  */
  YYSYMBOL_31_ = 31,                       /* '!'  */
  YYSYMBOL_YYACCEPT = 32,                  /* $accept  */
  YYSYMBOL_Prog = 33,                      /* Prog  */
  YYSYMBOL_DeclVars = 34,                  /* DeclVars  */
  YYSYMBOL_Declarateurs = 35,              /* Declarateurs  */
  YYSYMBOL_DeclFoncts = 36,                /* DeclFoncts  */
  YYSYMBOL_DeclFonct = 37,                 /* DeclFonct  */
  YYSYMBOL_EnTeteFonct = 38,               /* EnTeteFonct  */
  YYSYMBOL_Parametres = 39,                /* Parametres  */
  YYSYMBOL_ListTypVar = 40,                /* ListTypVar  */
  YYSYMBOL_DeclVarLocal = 41,              /* DeclVarLocal  */
  YYSYMBOL_DeclVarL = 42,                  /* DeclVarL  */
  YYSYMBOL_DeclVarLocalList = 43,          /* DeclVarLocalList  */
  YYSYMBOL_Corps = 44,                     /* Corps  */
  YYSYMBOL_SuiteInstr = 45,                /* SuiteInstr  */
  YYSYMBOL_Instr = 46,                     /* Instr  */
  YYSYMBOL_Exp = 47,                       /* Exp  */
  YYSYMBOL_TB = 48,                        /* TB  */
  YYSYMBOL_FB = 49,                        /* FB  */
  YYSYMBOL_M = 50,                         /* M  */
  YYSYMBOL_E = 51,                         /* E  */
  YYSYMBOL_T = 52,                         /* T  */
  YYSYMBOL_F = 53,                         /* F  */
  YYSYMBOL_Arguments = 54,                 /* Arguments  */
  YYSYMBOL_ListExp = 55                    /* ListExp  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_int8 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

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


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
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

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if !defined yyoverflow

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
#endif /* !defined yyoverflow */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
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
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
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
#define YYLAST   115

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  32
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  24
/* YYNRULES -- Number of rules.  */
#define YYNRULES  56
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  111

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   274


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    31,     2,     2,     2,     2,     2,     2,
      26,    27,     5,     3,    25,     4,     2,     6,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    24,
       2,    30,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    28,     2,    29,     2,     2,     2,     2,
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
       2,     2,     2,     2,     2,     2,     1,     2,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    50,    50,    60,    71,    78,    85,    93,    97,   105,
     113,   125,   140,   149,   155,   165,   182,   185,   193,   205,
     219,   223,   228,   242,   243,   251,   261,   268,   280,   289,
     298,   304,   308,   313,   318,   325,   328,   335,   338,   346,
     350,   358,   362,   370,   374,   382,   386,   393,   399,   404,
     410,   416,   425,   443,   448,   451,   452
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "'+'", "'-'", "'*'",
  "'/'", "UnaryMinus", "ORDER", "EQ", "AND", "OR", "DIVSTAR", "ADDSUB",
  "CHARACTERE", "TYPE", "VOID", "RETURN", "STATIC", "NUM", "IF", "ELSE",
  "WHILE", "IDENT", "';'", "','", "'('", "')'", "'{'", "'}'", "'='", "'!'",
  "$accept", "Prog", "DeclVars", "Declarateurs", "DeclFoncts", "DeclFonct",
  "EnTeteFonct", "Parametres", "ListTypVar", "DeclVarLocal", "DeclVarL",
  "DeclVarLocalList", "Corps", "SuiteInstr", "Instr", "Exp", "TB", "FB",
  "M", "E", "T", "F", "Arguments", "ListExp", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-53)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int8 yypact[] =
{
     -53,    39,     3,   -53,    11,    19,    34,   -53,    23,    42,
     -14,    48,    50,   -53,    20,   -53,    40,   -53,    53,    40,
      42,    54,    63,    20,    55,   -53,    57,   -53,    56,    59,
     -53,    58,   -53,    61,    54,    64,   -53,    24,   -53,   -53,
      66,   -53,    61,   -53,   -11,    65,    67,     6,   -53,   -53,
     -53,   -53,    69,    14,   -53,   -53,    68,   -53,    14,    14,
      -7,    72,    78,    81,    77,    83,   -53,    14,    14,    14,
      14,    37,   -53,   -53,    14,    -6,   -53,    14,   -53,    14,
      14,    14,    14,    14,    -5,    -2,    85,    70,    73,     5,
     -53,    74,   -53,    72,    78,    81,    77,    83,   -53,    47,
      47,    75,    14,   -53,   -53,    79,   -53,   -53,    85,    47,
     -53
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       4,     0,     0,     1,     0,     0,     2,     8,     0,     6,
       0,     0,     0,     7,    21,     9,     0,     3,     0,     0,
       0,     0,     0,    20,     0,    24,     0,    12,     0,    13,
       5,     0,     6,    19,     0,     0,    17,     0,    15,    10,
       0,    11,    18,    16,     0,     0,     0,     0,    33,    24,
      22,    23,     0,     0,    50,    49,    51,    31,     0,     0,
       0,    35,    37,    39,    41,    43,    45,     0,     0,    54,
       0,     0,    14,    46,    54,     0,    47,     0,    30,     0,
       0,     0,     0,     0,     0,     0,    56,     0,    53,     0,
      32,     0,    48,    34,    36,    38,    40,    42,    44,     0,
       0,     0,     0,    25,    52,    26,    28,    29,    55,     0,
      27
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -53,   -53,   -53,     9,   -53,    96,   -53,    84,   -53,   -53,
      82,   -53,   -53,    60,   -37,   -44,    27,    28,    26,    29,
      30,   -52,    41,   -53
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
       0,     1,     2,    10,     6,     7,     8,    28,    29,    23,
      24,    25,    15,    37,    51,    86,    61,    62,    63,    64,
      65,    66,    87,    88
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int8 yytable[] =
{
      60,    73,    53,    54,    77,    77,    77,    76,    55,    77,
      17,    18,    56,    57,    75,    58,    77,    78,     4,     5,
      59,    92,    99,    84,    85,   100,    89,    53,    54,   103,
      33,    98,    69,    55,     9,    21,    70,    56,    22,     3,
      58,    44,    11,    42,    45,    59,    46,    47,    48,    12,
       5,    14,    49,    50,    44,    26,    27,    45,   108,    46,
      47,    48,   105,   106,    44,    49,    90,    45,    16,    46,
      47,    48,   110,    20,    19,    49,    30,    32,    34,    36,
      38,    52,    79,    39,    40,    41,    18,    80,    43,    81,
      82,    67,    72,    68,    74,    83,    77,   101,   102,   107,
     109,   104,    13,    31,    93,    35,    95,    94,     0,    71,
      96,     0,    97,     0,     0,    91
};

static const yytype_int8 yycheck[] =
{
      44,    53,    13,    14,    11,    11,    11,    59,    19,    11,
      24,    25,    23,    24,    58,    26,    11,    24,    15,    16,
      31,    27,    27,    67,    68,    27,    70,    13,    14,    24,
      21,    83,    26,    19,    23,    15,    30,    23,    18,     0,
      26,    17,    23,    34,    20,    31,    22,    23,    24,    15,
      16,    28,    28,    29,    17,    15,    16,    20,   102,    22,
      23,    24,    99,   100,    17,    28,    29,    20,    26,    22,
      23,    24,   109,    23,    26,    28,    23,    23,    15,    24,
      23,    15,    10,    27,    25,    27,    25,     9,    24,     8,
      13,    26,    23,    26,    26,    12,    11,    27,    25,    24,
      21,    27,     6,    19,    77,    23,    80,    79,    -1,    49,
      81,    -1,    82,    -1,    -1,    74
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    33,    34,     0,    15,    16,    36,    37,    38,    23,
      35,    23,    15,    37,    28,    44,    26,    24,    25,    26,
      23,    15,    18,    41,    42,    43,    15,    16,    39,    40,
      23,    39,    23,    35,    15,    42,    24,    45,    23,    27,
      25,    27,    35,    24,    17,    20,    22,    23,    24,    28,
      29,    46,    15,    13,    14,    19,    23,    24,    26,    31,
      47,    48,    49,    50,    51,    52,    53,    26,    26,    26,
      30,    45,    23,    53,    26,    47,    53,    11,    24,    10,
       9,     8,    13,    12,    47,    47,    47,    54,    55,    47,
      29,    54,    27,    48,    49,    50,    51,    52,    53,    27,
      27,    27,    25,    24,    27,    46,    46,    24,    47,    21,
      46
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    32,    33,    34,    34,    35,    35,    36,    36,    37,
      38,    38,    39,    39,    40,    40,    41,    41,    42,    42,
      43,    43,    44,    45,    45,    46,    46,    46,    46,    46,
      46,    46,    46,    46,    47,    47,    48,    48,    49,    49,
      50,    50,    51,    51,    52,    52,    53,    53,    53,    53,
      53,    53,    53,    54,    54,    55,    55
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     2,     4,     0,     3,     1,     2,     1,     2,
       5,     5,     1,     1,     4,     2,     3,     2,     3,     2,
       1,     0,     4,     2,     0,     4,     5,     7,     5,     5,
       3,     2,     3,     1,     3,     1,     3,     1,     3,     1,
       3,     1,     3,     1,     3,     1,     2,     2,     3,     1,
       1,     1,     4,     1,     0,     3,     1
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
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

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


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




# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
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
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
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






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
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
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */

  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */


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

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
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
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
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
| yyreduce -- do a reduction.  |
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
  case 2: /* Prog: DeclVars DeclFoncts  */
#line 50 "src/parser.y"
                           {
                    (yyval.node) = makeNode(progStart , type);
                    addChild((yyval.node) , (yyvsp[-1].node));
                    addSibling((yyvsp[-1].node) , (yyvsp[0].node));
                    tree = (yyval.node);
                            
                  }
#line 1202 "src/parser.tab.c"
    break;

  case 3: /* DeclVars: DeclVars TYPE Declarateurs ';'  */
#line 60 "src/parser.y"
                                  {
                                    Type varType;
                                    strcpy(varType.typeVar , (yyvsp[-2].typeVar));
                                    Node * variable = makeNode(typeVariable , varType);
                                    Node * nodeDecl = makeNode(declarationVar , type);
                                    addChild(variable , (yyvsp[-1].node));
                                    addChild(nodeDecl , variable);
                                    
                                    addChild((yyval.node) , nodeDecl);
                                    
                                  }
#line 1218 "src/parser.tab.c"
    break;

  case 4: /* DeclVars: %empty  */
#line 71 "src/parser.y"
      {
        (yyval.node) = makeNode(declarationList , type);
       
    }
#line 1227 "src/parser.tab.c"
    break;

  case 5: /* Declarateurs: Declarateurs ',' IDENT  */
#line 78 "src/parser.y"
                                {
                                Type nameVar;
                                strcpy(nameVar.ident , (yyvsp[0].ident));
                                Node * variable = makeNode(id , nameVar);
                                addChild((yyval.node) , variable);
                               
                                }
#line 1239 "src/parser.tab.c"
    break;

  case 6: /* Declarateurs: IDENT  */
#line 85 "src/parser.y"
                { 
                Type nameVar;
                strcpy(nameVar.ident , (yyvsp[0].ident));
                (yyval.node) = makeNode(id , nameVar);

                }
#line 1250 "src/parser.tab.c"
    break;

  case 7: /* DeclFoncts: DeclFoncts DeclFonct  */
#line 93 "src/parser.y"
                            {
                            addChild((yyval.node) , (yyvsp[0].node));
                           
                            }
#line 1259 "src/parser.tab.c"
    break;

  case 8: /* DeclFoncts: DeclFonct  */
#line 97 "src/parser.y"
                            {
                            (yyval.node) = makeNode(fonctions , type);
                            addChild((yyval.node) , (yyvsp[0].node));
    
                            }
#line 1269 "src/parser.tab.c"
    break;

  case 9: /* DeclFonct: EnTeteFonct Corps  */
#line 105 "src/parser.y"
                          { (yyval.node) = makeNode(function , type);
                            addChild((yyval.node) , (yyvsp[-1].node));
                            addSibling((yyvsp[-1].node) , (yyvsp[0].node));
                       
                        }
#line 1279 "src/parser.tab.c"
    break;

  case 10: /* EnTeteFonct: TYPE IDENT '(' Parametres ')'  */
#line 113 "src/parser.y"
                                     {
                                      (yyval.node) = makeNode(headingFunct , type);
                                      Type typeFunct , nameFunct;
                                      strcpy(typeFunct.typeVar , (yyvsp[-4].typeVar));
                                      strcpy(nameFunct.ident , (yyvsp[-3].ident));
                                      Node * typeFunction = makeNode(typeReturnFonct , typeFunct);
                                      Node * nameFunction = makeNode(id , nameFunct);
                                      addChild((yyval.node) , typeFunction);
                                      addSibling(typeFunction , nameFunction);
                                      addSibling(typeFunction , (yyvsp[-1].node));
                                     
                                     }
#line 1296 "src/parser.tab.c"
    break;

  case 11: /* EnTeteFonct: VOID IDENT '(' Parametres ')'  */
#line 125 "src/parser.y"
                                     {
                                      (yyval.node) = makeNode(headingFunct , type);
                                      Type typeFunct , nameFunct;
                                      strcpy(typeFunct.typeVar , (yyvsp[-4].typeVar));
                                      strcpy(nameFunct.ident , (yyvsp[-3].ident));
                                      Node * typeFunction = makeNode(typeReturnFonct , typeFunct);
                                      Node * nameFunction = makeNode(id , nameFunct);
                                      addChild((yyval.node) , typeFunction);
                                      addSibling(typeFunction , nameFunction);
                                      addSibling(typeFunction , (yyvsp[-1].node));
                                      

                                     }
#line 1314 "src/parser.tab.c"
    break;

  case 12: /* Parametres: VOID  */
#line 140 "src/parser.y"
            {
            Type typeParam ;
            strcpy(typeParam.typeVar , (yyvsp[0].typeVar));
            (yyval.node) = makeNode(parametersFunct , type);
            Node * paramNone = makeNode(typeVariable , typeParam);
            addChild((yyval.node) , paramNone);
          
            }
#line 1327 "src/parser.tab.c"
    break;

  case 13: /* Parametres: ListTypVar  */
#line 149 "src/parser.y"
                  {
                    
                    (yyval.node) = (yyvsp[0].node);
                  }
#line 1336 "src/parser.tab.c"
    break;

  case 14: /* ListTypVar: ListTypVar ',' TYPE IDENT  */
#line 155 "src/parser.y"
                                 {Type typeParam , nameId ;
                                  strcpy(typeParam.typeVar , (yyvsp[-1].typeVar));
                                  strcpy(nameId.ident , (yyvsp[0].ident));
                                  Node * nodeType = makeNode(typeVariable , typeParam);
                                  Node * nodeId = makeNode(id , nameId);
                                  addChild((yyval.node) , nodeType);
                                  addSibling(nodeType , nodeId);
                                 
                         
                                }
#line 1351 "src/parser.tab.c"
    break;

  case 15: /* ListTypVar: TYPE IDENT  */
#line 165 "src/parser.y"
                  {
                    Type typeParam , nameId ;
                    strcpy(typeParam.typeVar , (yyvsp[-1].typeVar));
                    strcpy(nameId.ident , (yyvsp[0].ident));
                    (yyval.node) = makeNode(parametersFunct , type);
                    Node * nodeType = makeNode(typeVariable , typeParam);
                    Node * nodeId = makeNode(id , nameId);
                    addChild((yyval.node) , nodeType);
                    addSibling(nodeType , nodeId);
                  }
#line 1366 "src/parser.tab.c"
    break;

  case 16: /* DeclVarLocal: DeclVarLocal DeclVarL ';'  */
#line 182 "src/parser.y"
                               {
       addChild((yyval.node) , (yyvsp[-1].node));
    }
#line 1374 "src/parser.tab.c"
    break;

  case 17: /* DeclVarLocal: DeclVarL ';'  */
#line 185 "src/parser.y"
                   {
        (yyval.node) = (yyvsp[-1].node);
    }
#line 1382 "src/parser.tab.c"
    break;

  case 18: /* DeclVarL: STATIC TYPE Declarateurs  */
#line 193 "src/parser.y"
                             {
        Type varType;
        strcpy(varType.declStatic, (yyvsp[-2].declStatic));
        strcpy(varType.typeVar, (yyvsp[-1].typeVar));
        Node * typeDecl = makeNode(typeVariable , varType);
        Node * typeVisibility = makeNode(visibilityStatic , varType);
        (yyval.node) = (yyvsp[0].node);
        addChild((yyval.node) , typeDecl);
        addSibling(typeDecl , typeVisibility);
       
             
    }
#line 1399 "src/parser.tab.c"
    break;

  case 19: /* DeclVarL: TYPE Declarateurs  */
#line 205 "src/parser.y"
                        {
        Type varType;
        strcpy(varType.typeVar, (yyvsp[-1].typeVar));
        Node * typeDecl = makeNode(typeVariable , varType);
        (yyval.node) = (yyvsp[0].node);
        addChild((yyvsp[0].node), typeDecl);
        
         
    }
#line 1413 "src/parser.tab.c"
    break;

  case 20: /* DeclVarLocalList: DeclVarLocal  */
#line 219 "src/parser.y"
                 {
                    (yyval.node) = makeNode(declarationListLocal , type);
                    addChild((yyval.node) ,(yyvsp[0].node));
                 }
#line 1422 "src/parser.tab.c"
    break;

  case 21: /* DeclVarLocalList: %empty  */
#line 223 "src/parser.y"
      {(yyval.node) = makeNode(declarationListLocal , type);
      }
#line 1429 "src/parser.tab.c"
    break;

  case 22: /* Corps: '{' DeclVarLocalList SuiteInstr '}'  */
#line 228 "src/parser.y"
                                            {
                                        
                                        (yyval.node) = makeNode(bodyFunct , type);
                                        addChild((yyval.node) , (yyvsp[-2].node));
                                        addSibling((yyvsp[-2].node) , (yyvsp[-1].node));
                                        
                                       }
#line 1441 "src/parser.tab.c"
    break;

  case 23: /* SuiteInstr: SuiteInstr Instr  */
#line 242 "src/parser.y"
                       {addChild((yyval.node) , (yyvsp[0].node)); tree = (yyval.node);}
#line 1447 "src/parser.tab.c"
    break;

  case 24: /* SuiteInstr: %empty  */
#line 243 "src/parser.y"
                        {
                        (yyval.node) = makeNode(suiteInstruction , type);
                        }
#line 1455 "src/parser.tab.c"
    break;

  case 25: /* Instr: IDENT '=' Exp ';'  */
#line 251 "src/parser.y"
                              { Type variableLeft;
                                strcpy(variableLeft.ident, (yyvsp[-3].ident));
                                (yyval.node) = makeNode(assign , type);
                                Node * membreLeft = makeNode(id , variableLeft);
                                addChild((yyval.node) , membreLeft);
                                addSibling(membreLeft , (yyvsp[-1].node));
                               
                      
                                }
#line 1469 "src/parser.tab.c"
    break;

  case 26: /* Instr: IF '(' Exp ')' Instr  */
#line 261 "src/parser.y"
                             {(yyval.node) = makeNode(branch , type);
                              addChild((yyval.node) , (yyvsp[-2].node));
                              addSibling((yyvsp[-2].node) , (yyvsp[0].node));

                             }
#line 1479 "src/parser.tab.c"
    break;

  case 27: /* Instr: IF '(' Exp ')' Instr ELSE Instr  */
#line 268 "src/parser.y"
                                       {(yyval.node) = makeNode(branch , type);
                                        addChild((yyval.node) , (yyvsp[-4].node));
                                        Node * brancheIf = makeNode(ifBody , type);
                                        addChild(brancheIf , (yyvsp[-2].node));
                                        Node * brancheElse = makeNode(elseBody, type);
                                        addChild(brancheElse , (yyvsp[0].node));
                                        addSibling((yyvsp[-4].node) , brancheIf);
                                        addSibling((yyvsp[-4].node) , brancheElse);
                                       }
#line 1493 "src/parser.tab.c"
    break;

  case 28: /* Instr: WHILE '(' Exp ')' Instr  */
#line 280 "src/parser.y"
                                 {
                                 (yyval.node) = makeNode(whileInstr, type);
                                 addChild((yyval.node) , (yyvsp[-2].node));
                                 Node * body = makeNode(bodyFunct , type);
                                 addChild(body , (yyvsp[0].node));
                                 addSibling((yyvsp[-2].node) , body);

                                 }
#line 1506 "src/parser.tab.c"
    break;

  case 29: /* Instr: IDENT '(' Arguments ')' ';'  */
#line 289 "src/parser.y"
                                     {Type identifier ;
                                    strcpy(identifier.ident , (yyvsp[-4].ident));
                                    (yyval.node) = makeNode(function , type);
                                    Node * funct = makeNode(headingFunct , type);
                                    Node * nameFunct = makeNode(id , identifier);
                                    addChild(funct , nameFunct);
                                    addChild((yyval.node) , funct);
                                    addSibling(funct , (yyvsp[-2].node));
                                     }
#line 1520 "src/parser.tab.c"
    break;

  case 30: /* Instr: RETURN Exp ';'  */
#line 298 "src/parser.y"
                      {
                        (yyval.node) = makeNode(finFunct , type);
                        addChild((yyval.node), (yyvsp[-1].node));
                       
                      }
#line 1530 "src/parser.tab.c"
    break;

  case 31: /* Instr: RETURN ';'  */
#line 304 "src/parser.y"
                                    {Type typeReturn = {0};
                                    (yyval.node) = makeNode(finFunct , typeReturn);
                                    }
#line 1538 "src/parser.tab.c"
    break;

  case 32: /* Instr: '{' SuiteInstr '}'  */
#line 308 "src/parser.y"
                                        {
                                        
                                         (yyval.node) = (yyvsp[-1].node)->firstChild;
                                        
                                  }
#line 1548 "src/parser.tab.c"
    break;

  case 33: /* Instr: ';'  */
#line 313 "src/parser.y"
          {(yyval.node) = NULL;}
#line 1554 "src/parser.tab.c"
    break;

  case 34: /* Exp: Exp OR TB  */
#line 318 "src/parser.y"
                {
                    Type  opCompare;
                    strcpy(opCompare.ordre, (yyvsp[-1].ordre));
                    (yyval.node) = makeNode(opOrdre, opCompare);
                    addChild((yyval.node), (yyvsp[-2].node));
                    addSibling((yyvsp[-2].node) , (yyvsp[0].node));
                }
#line 1566 "src/parser.tab.c"
    break;

  case 35: /* Exp: TB  */
#line 325 "src/parser.y"
                {(yyval.node) = (yyvsp[0].node);}
#line 1572 "src/parser.tab.c"
    break;

  case 36: /* TB: TB AND FB  */
#line 328 "src/parser.y"
                 {
                    Type opCompare;
                    strcpy(opCompare.ordre, (yyvsp[-1].ordre));
                    (yyval.node)  = makeNode(opOrdre, opCompare);
                    addChild((yyval.node), (yyvsp[-2].node));
                    addSibling((yyvsp[-2].node) , (yyvsp[0].node));
                }
#line 1584 "src/parser.tab.c"
    break;

  case 37: /* TB: FB  */
#line 335 "src/parser.y"
          {(yyval.node) = (yyvsp[0].node);}
#line 1590 "src/parser.tab.c"
    break;

  case 38: /* FB: FB EQ M  */
#line 338 "src/parser.y"
                {
                    Type opCompare;
                    strcpy(opCompare.ordre, (yyvsp[-1].ordre));
                    (yyval.node)  = makeNode(opOrdre, opCompare);
                    addChild((yyval.node), (yyvsp[-2].node));
                    addSibling((yyvsp[-2].node) , (yyvsp[0].node));

                }
#line 1603 "src/parser.tab.c"
    break;

  case 39: /* FB: M  */
#line 346 "src/parser.y"
           {(yyval.node) = (yyvsp[0].node);}
#line 1609 "src/parser.tab.c"
    break;

  case 40: /* M: M ORDER E  */
#line 350 "src/parser.y"
                    {
                    Type opCompare;
                    strcpy(opCompare.ordre, (yyvsp[-1].ordre));
                    (yyval.node)  = makeNode(opOrdre, opCompare);
                    addChild((yyval.node), (yyvsp[-2].node));
                    addSibling((yyvsp[-2].node) , (yyvsp[0].node));

                    }
#line 1622 "src/parser.tab.c"
    break;

  case 41: /* M: E  */
#line 358 "src/parser.y"
         {(yyval.node) = (yyvsp[0].node);}
#line 1628 "src/parser.tab.c"
    break;

  case 42: /* E: E ADDSUB T  */
#line 362 "src/parser.y"
                    {
                    Type operBin;
                    operBin.operation = (yyvsp[-1].operation);
                    (yyval.node)  = makeNode(opBin, operBin);
                    addChild((yyval.node), (yyvsp[-2].node));
                    addSibling((yyvsp[-2].node) , (yyvsp[0].node));

                    }
#line 1641 "src/parser.tab.c"
    break;

  case 43: /* E: T  */
#line 370 "src/parser.y"
                { (yyval.node) = (yyvsp[0].node);}
#line 1647 "src/parser.tab.c"
    break;

  case 44: /* T: T DIVSTAR F  */
#line 374 "src/parser.y"
                 { 
                    Type  operBin;
                    operBin.operation = (yyvsp[-1].operation);
                    (yyval.node)  = makeNode(opBin, operBin);
                    addChild((yyval.node), (yyvsp[-2].node));
                    addSibling((yyvsp[-2].node) , (yyvsp[0].node));

                }
#line 1660 "src/parser.tab.c"
    break;

  case 45: /* T: F  */
#line 382 "src/parser.y"
            {(yyval.node) = (yyvsp[0].node);}
#line 1666 "src/parser.tab.c"
    break;

  case 46: /* F: ADDSUB F  */
#line 386 "src/parser.y"
                               { 
              
                Type op;
                op.operation = (yyvsp[-1].operation);
                (yyval.node) = makeNode(opBin , op);
                addChild((yyval.node) , (yyvsp[0].node));
                }
#line 1678 "src/parser.tab.c"
    break;

  case 47: /* F: '!' F  */
#line 393 "src/parser.y"
                {
                Type exclam;
                strcpy(exclam.ordre ,  "!");
                (yyval.node) = makeNode(opOrdre, exclam);
                addChild((yyval.node) , (yyvsp[0].node));
                }
#line 1689 "src/parser.tab.c"
    break;

  case 48: /* F: '(' Exp ')'  */
#line 399 "src/parser.y"
                   {
                    (yyval.node) = (yyvsp[-1].node);
                    
                   }
#line 1698 "src/parser.tab.c"
    break;

  case 49: /* F: NUM  */
#line 404 "src/parser.y"
                    {
                    Type nombre;
                    nombre.num = (yyvsp[0].num);
                    (yyval.node) = makeNode(value, nombre);
                    
                    }
#line 1709 "src/parser.tab.c"
    break;

  case 50: /* F: CHARACTERE  */
#line 410 "src/parser.y"
                    {
                    Type charac;
                    strcpy(charac.carac , (yyvsp[0].caracter));
                    (yyval.node) = makeNode(carac, charac);
                    
                     }
#line 1720 "src/parser.tab.c"
    break;

  case 51: /* F: IDENT  */
#line 416 "src/parser.y"
                { 
                Type identifier ;
                strcpy(identifier.ident , (yyvsp[0].ident));
                (yyval.node) = makeNode(id , identifier);
                
               
                }
#line 1732 "src/parser.tab.c"
    break;

  case 52: /* F: IDENT '(' Arguments ')'  */
#line 425 "src/parser.y"
                                 {Type identifier ;
                                strcpy(identifier.ident , (yyvsp[-3].ident));
                                (yyval.node) = makeNode(function , type);
                                Node * funct = makeNode(headingFunct , type);
                                Node * nameFunct = makeNode(id , identifier);
                                addChild(funct , nameFunct);
                                addChild((yyval.node) , funct);
                                addSibling(funct , (yyvsp[-1].node));
                                
                                }
#line 1747 "src/parser.tab.c"
    break;

  case 53: /* Arguments: ListExp  */
#line 443 "src/parser.y"
               {
                (yyval.node) = makeNode(argumentFunct , type);
                addChild((yyval.node) , (yyvsp[0].node));
              
               }
#line 1757 "src/parser.tab.c"
    break;

  case 54: /* Arguments: %empty  */
#line 448 "src/parser.y"
        {(yyval.node) = NULL;}
#line 1763 "src/parser.tab.c"
    break;

  case 55: /* ListExp: ListExp ',' Exp  */
#line 451 "src/parser.y"
                        {addChild((yyval.node), (yyvsp[0].node)) ;}
#line 1769 "src/parser.tab.c"
    break;

  case 56: /* ListExp: Exp  */
#line 452 "src/parser.y"
                        {(yyval.node) = (yyvsp[0].node);}
#line 1775 "src/parser.tab.c"
    break;


#line 1779 "src/parser.tab.c"

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
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (YY_("syntax error"));
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
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;
  ++yynerrs;

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

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
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
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
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
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 454 "src/parser.y"



int yyerror(char * msg)
{ return fprintf(stderr, "Error at line %d , column %d: invalid character\n", lineno, nbCarac);}

void printHelp(void){

    fprintf(stdout , "Usage: tpcas [OPTION]... [FILE]...\n");
    fprintf(stdout, "permet de vérifier que le fichier en tpc ne contient pas d'erreur lexical ou syntaxique\n");
    fprintf(stdout , "-t, --tree affiche l’arbre abstrait sur la sortie standard\n");
    fprintf(stdout , "Par exemple : ./tpcas -t FILE.tpc ou ./tpcas --tree FILE.tpc\n");
    fprintf(stdout , "-h, --help affiche une description de l’interface utilisateur et termine l’exécution\n");
    fprintf(stdout , "Par exemple : ./tpcas -h FILE.tpc ou ./tpcas --help FILE.tpc\n");
    fprintf(stdout , "\n");
}



void isOptionShort(int argc , char * argv[], int * optH ,int * optT){
    int opt = 0 ;
  
    

    for(;(opt = getopt(argc , argv, ":h::t")) != -1; ){
        
        switch(opt){
            case 't':
                *optT = 1; 
                break;
            case 'h':
                *optH = 1;
                break;
            case '?':
                return;
    
        } 
    
      
    }
   
    
}


void isOptionLong(int argc , char * argv[] , int *optH , int *optT){
    if(*optH && *optT)
        return;
   

    for (int i = 0; i < argc; i++)
    {
        
        if(!strcmp(argv[i], "--tree") && !(*optT)){
            *optT = 1;
        
        }
        else if(!strcmp(argv[i], "--help") && !(*optH)){
            *optH = 1;
            
        }
        
       
    }
    
   
    
}

void option(int argc , char * argv[] , int *optH , int *optT){
    isOptionShort(argc , argv ,optH ,optT);
    isOptionLong(argc , argv , optH , optT);
    if(*optH)
        printHelp();
    if(*optT){
        printTree(tree);
    }
    deleteTree(tree);
        
}




int main(int argc, char *argv[]) {
    int optH = 0 , optT = 0;
    int isCorrect = yyparse();
    if(isCorrect){
        return 1;
    }
    option(argc , argv , &optH , &optT);
    return 0;
}
