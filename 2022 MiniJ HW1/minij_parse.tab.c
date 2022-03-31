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
#line 1 "minij_parse.y"

    #include <stdio.h>
    #include <stdlib.h>
    #include "minij.h"
    #include "minij_parse.h"

#line 78 "minij_parse.tab.c"

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


/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    CLASS = 258,                   /* CLASS  */
    PUB = 259,                     /* PUB  */
    STATIC = 260,                  /* STATIC  */
    AND = 261,                     /* AND  */
    OR = 262,                      /* OR  */
    LT = 263,                      /* LT  */
    LE = 264,                      /* LE  */
    EQ = 265,                      /* EQ  */
    ADD = 266,                     /* ADD  */
    MINUS = 267,                   /* MINUS  */
    TIMES = 268,                   /* TIMES  */
    LBP = 269,                     /* LBP  */
    RBP = 270,                     /* RBP  */
    LSP = 271,                     /* LSP  */
    RSP = 272,                     /* RSP  */
    LP = 273,                      /* LP  */
    RP = 274,                      /* RP  */
    INT = 275,                     /* INT  */
    BOOLEAN = 276,                 /* BOOLEAN  */
    IF = 277,                      /* IF  */
    ELSE = 278,                    /* ELSE  */
    WHILE = 279,                   /* WHILE  */
    PRINT = 280,                   /* PRINT  */
    ASSIGN = 281,                  /* ASSIGN  */
    VOID = 282,                    /* VOID  */
    MAIN = 283,                    /* MAIN  */
    STR = 284,                     /* STR  */
    RETURN = 285,                  /* RETURN  */
    SEMI = 286,                    /* SEMI  */
    COMMA = 287,                   /* COMMA  */
    THIS = 288,                    /* THIS  */
    NEW = 289,                     /* NEW  */
    DOT = 290,                     /* DOT  */
    ID = 291,                      /* ID  */
    LIT = 292,                     /* LIT  */
    TRUE = 293,                    /* TRUE  */
    FALSE = 294,                   /* FALSE  */
    NOT = 295                      /* NOT  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);



/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_CLASS = 3,                      /* CLASS  */
  YYSYMBOL_PUB = 4,                        /* PUB  */
  YYSYMBOL_STATIC = 5,                     /* STATIC  */
  YYSYMBOL_AND = 6,                        /* AND  */
  YYSYMBOL_OR = 7,                         /* OR  */
  YYSYMBOL_LT = 8,                         /* LT  */
  YYSYMBOL_LE = 9,                         /* LE  */
  YYSYMBOL_EQ = 10,                        /* EQ  */
  YYSYMBOL_ADD = 11,                       /* ADD  */
  YYSYMBOL_MINUS = 12,                     /* MINUS  */
  YYSYMBOL_TIMES = 13,                     /* TIMES  */
  YYSYMBOL_LBP = 14,                       /* LBP  */
  YYSYMBOL_RBP = 15,                       /* RBP  */
  YYSYMBOL_LSP = 16,                       /* LSP  */
  YYSYMBOL_RSP = 17,                       /* RSP  */
  YYSYMBOL_LP = 18,                        /* LP  */
  YYSYMBOL_RP = 19,                        /* RP  */
  YYSYMBOL_INT = 20,                       /* INT  */
  YYSYMBOL_BOOLEAN = 21,                   /* BOOLEAN  */
  YYSYMBOL_IF = 22,                        /* IF  */
  YYSYMBOL_ELSE = 23,                      /* ELSE  */
  YYSYMBOL_WHILE = 24,                     /* WHILE  */
  YYSYMBOL_PRINT = 25,                     /* PRINT  */
  YYSYMBOL_ASSIGN = 26,                    /* ASSIGN  */
  YYSYMBOL_VOID = 27,                      /* VOID  */
  YYSYMBOL_MAIN = 28,                      /* MAIN  */
  YYSYMBOL_STR = 29,                       /* STR  */
  YYSYMBOL_RETURN = 30,                    /* RETURN  */
  YYSYMBOL_SEMI = 31,                      /* SEMI  */
  YYSYMBOL_COMMA = 32,                     /* COMMA  */
  YYSYMBOL_THIS = 33,                      /* THIS  */
  YYSYMBOL_NEW = 34,                       /* NEW  */
  YYSYMBOL_DOT = 35,                       /* DOT  */
  YYSYMBOL_ID = 36,                        /* ID  */
  YYSYMBOL_LIT = 37,                       /* LIT  */
  YYSYMBOL_TRUE = 38,                      /* TRUE  */
  YYSYMBOL_FALSE = 39,                     /* FALSE  */
  YYSYMBOL_NOT = 40,                       /* NOT  */
  YYSYMBOL_YYACCEPT = 41,                  /* $accept  */
  YYSYMBOL_prog = 42,                      /* prog  */
  YYSYMBOL_mainc = 43,                     /* mainc  */
  YYSYMBOL_cdcls = 44,                     /* cdcls  */
  YYSYMBOL_cdcl = 45,                      /* cdcl  */
  YYSYMBOL_vdcls = 46,                     /* vdcls  */
  YYSYMBOL_vdcl = 47,                      /* vdcl  */
  YYSYMBOL_mdcls = 48,                     /* mdcls  */
  YYSYMBOL_mdcl = 49,                      /* mdcl  */
  YYSYMBOL_formals = 50,                   /* formals  */
  YYSYMBOL_frest = 51,                     /* frest  */
  YYSYMBOL_type = 52,                      /* type  */
  YYSYMBOL_stmt = 53,                      /* stmt  */
  YYSYMBOL_stmts = 54,                     /* stmts  */
  YYSYMBOL_exp = 55,                       /* exp  */
  YYSYMBOL_explist = 56,                   /* explist  */
  YYSYMBOL_exprests = 57,                  /* exprests  */
  YYSYMBOL_exprest = 58                    /* exprest  */
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
typedef yytype_uint8 yy_state_t;

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
#define YYFINAL  5
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   361

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  41
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  18
/* YYNRULES -- Number of rules.  */
#define YYNRULES  57
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  150

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   295


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
      35,    36,    37,    38,    39,    40
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    27,    27,    32,    35,    39,    42,    45,    49,    52,
      55,    59,    62,    65,    69,    72,    75,    78,    81,    83,
      85,    87,    90,    92,    94,    96,    98,   100,   102,   104,
     107,   110,   112,   114,   116,   118,   120,   122,   124,   126,
     128,   130,   132,   134,   136,   138,   140,   142,   144,   146,
     148,   150,   152,   155,   158,   160,   163,   165
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
  "\"end of file\"", "error", "\"invalid token\"", "CLASS", "PUB",
  "STATIC", "AND", "OR", "LT", "LE", "EQ", "ADD", "MINUS", "TIMES", "LBP",
  "RBP", "LSP", "RSP", "LP", "RP", "INT", "BOOLEAN", "IF", "ELSE", "WHILE",
  "PRINT", "ASSIGN", "VOID", "MAIN", "STR", "RETURN", "SEMI", "COMMA",
  "THIS", "NEW", "DOT", "ID", "LIT", "TRUE", "FALSE", "NOT", "$accept",
  "prog", "mainc", "cdcls", "cdcl", "vdcls", "vdcl", "mdcls", "mdcl",
  "formals", "frest", "type", "stmt", "stmts", "exp", "explist",
  "exprests", "exprest", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-95)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
       9,   -21,    16,    15,    10,   -95,   -10,   -95,    15,    41,
      32,   -95,    38,    27,    23,    37,   -95,   -95,    60,    27,
      30,    49,    63,    27,    64,    60,   -95,    53,    77,   -95,
      73,   -95,   -95,   -95,    67,    80,    83,    27,    93,    92,
      76,    79,    99,    85,   107,    27,    27,   -95,   113,   325,
     104,   325,   325,   318,   110,   111,   123,   -13,   -95,   325,
     114,    85,   127,   130,   -95,    29,   298,   -95,   -95,   -95,
     318,    48,   318,   318,   318,   318,   318,   -95,   318,   -95,
     131,   -95,   140,   139,   318,   318,    62,   246,   318,   318,
     318,   318,   318,   318,   318,   264,   -95,   318,    81,    95,
     112,   126,   142,   156,   -95,   318,   141,   172,   186,   151,
     -95,   260,   260,    -2,    -2,    -2,    -8,    -8,   289,   -95,
     124,   246,   325,   325,   143,   132,   -95,   157,   202,   -95,
     -95,   318,   -95,   144,   -95,   318,   148,   -95,   -95,   318,
     -95,   -95,   246,   -95,   216,   325,   232,   132,   -95,   -95
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       3,     0,     0,     6,     0,     1,     0,     2,     6,     0,
       0,     5,     0,     9,     0,    20,    19,    21,    12,     9,
       0,     0,     0,     0,     0,    12,     8,     0,     0,    18,
       0,     7,    11,    10,     0,     0,     0,    15,     0,     0,
       0,     0,     0,    17,     0,     9,     0,    14,     0,    31,
       0,    31,    31,     0,     0,     0,     0,    21,    28,    31,
       0,    17,     0,     0,    48,     0,    47,    44,    45,    46,
       0,     0,     0,     0,     0,     0,     0,    30,     0,    16,
       0,    22,     0,     0,     0,    54,     0,    51,     0,     0,
       0,     0,     0,     0,     0,     0,    29,     0,     0,     0,
       0,     0,     0,     0,     4,     0,     0,     0,    56,     0,
      42,    35,    36,    37,    38,    39,    32,    33,    47,    52,
      34,    43,     0,     0,     0,     0,    26,     0,     0,    50,
      40,     0,    53,    56,    41,     0,     0,    24,    25,     0,
      13,    49,    57,    55,     0,     0,     0,    40,    23,    27
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -95,   -95,   -95,   167,   -95,   -15,   -11,   161,   -95,   -95,
     129,    39,   -94,   -45,   -53,   -95,    55,   -95
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     2,     3,     7,     8,    18,    58,    24,    25,    39,
      47,    20,    59,    60,    86,   109,   132,   133
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      71,   119,    19,    75,    26,    95,    62,    63,    19,    93,
      94,    95,     1,    76,    77,     4,     5,    87,     6,    98,
      99,   100,   101,   102,     9,   103,    10,    97,   136,   137,
      49,   107,   108,    97,    19,   111,   112,   113,   114,   115,
     116,   117,   120,    14,   121,    12,    13,    15,    16,    82,
      21,   148,   128,    22,    88,    89,    90,    91,    92,    93,
      94,    95,    30,    17,    23,    83,    27,    96,    88,    89,
      90,    91,    92,    93,    94,    95,    40,    28,   142,    31,
      29,   110,   144,    97,    33,    50,   146,    88,    89,    90,
      91,    92,    93,    94,    95,    34,    36,    97,    37,    38,
     122,    88,    89,    90,    91,    92,    93,    94,    95,    35,
      41,    42,    43,    45,   123,    44,    97,    46,    88,    89,
      90,    91,    92,    93,    94,    95,    48,    51,    72,    73,
      97,   124,    88,    89,    90,    91,    92,    93,    94,    95,
      61,    74,    80,   125,    78,    81,   104,    97,    88,    89,
      90,    91,    92,    93,    94,    95,   105,   106,   139,    97,
     129,    97,    88,    89,    90,    91,    92,    93,    94,    95,
     134,   145,   140,   126,   138,    11,   131,    97,    88,    89,
      90,    91,    92,    93,    94,    95,    32,   127,   143,   130,
      79,    97,    88,    89,    90,    91,    92,    93,    94,    95,
       0,     0,     0,     0,     0,     0,     0,    97,    88,    89,
      90,    91,    92,    93,    94,    95,     0,     0,   131,   141,
       0,    97,    88,    89,    90,    91,    92,    93,    94,    95,
       0,     0,     0,   147,     0,     0,     0,    97,    88,    89,
      90,    91,    92,    93,    94,    95,     0,     0,     0,     0,
       0,    97,    88,    89,    90,    91,    92,    93,    94,    95,
       0,     0,     0,   149,     0,     0,     0,    97,    90,    91,
      92,    93,    94,    95,     0,     0,     0,     0,    52,     0,
       0,    97,    53,     0,    15,    16,    54,     0,    55,    56,
       0,     0,     0,     0,     0,    97,     0,    64,    65,     0,
     118,    67,    68,    69,    70,   135,     0,    85,     0,     0,
       0,     0,     0,     0,    84,    76,    85,     0,     0,     0,
       0,     0,    64,    65,     0,    66,    67,    68,    69,    70,
       0,    64,    65,     0,    66,    67,    68,    69,    70,    52,
       0,     0,     0,    53,     0,    15,    16,    54,     0,    55,
      56,    64,    65,     0,    66,    67,    68,    69,    70,     0,
       0,    57
};

static const yytype_int16 yycheck[] =
{
      53,    95,    13,    16,    19,    13,    51,    52,    19,    11,
      12,    13,     3,    26,    59,    36,     0,    70,     3,    72,
      73,    74,    75,    76,    14,    78,    36,    35,   122,   123,
      45,    84,    85,    35,    45,    88,    89,    90,    91,    92,
      93,    94,    95,     5,    97,     4,    14,    20,    21,    20,
      27,   145,   105,    16,     6,     7,     8,     9,    10,    11,
      12,    13,    23,    36,     4,    36,    36,    19,     6,     7,
       8,     9,    10,    11,    12,    13,    37,    28,   131,    15,
      17,    19,   135,    35,    31,    46,   139,     6,     7,     8,
       9,    10,    11,    12,    13,    18,    29,    35,    18,    16,
      19,     6,     7,     8,     9,    10,    11,    12,    13,    36,
      17,    19,    36,    14,    19,    36,    35,    32,     6,     7,
       8,     9,    10,    11,    12,    13,    19,    14,    18,    18,
      35,    19,     6,     7,     8,     9,    10,    11,    12,    13,
      36,    18,    15,    17,    30,    15,    15,    35,     6,     7,
       8,     9,    10,    11,    12,    13,    16,    18,    26,    35,
      19,    35,     6,     7,     8,     9,    10,    11,    12,    13,
      19,    23,    15,    31,    31,     8,    32,    35,     6,     7,
       8,     9,    10,    11,    12,    13,    25,    31,   133,    17,
      61,    35,     6,     7,     8,     9,    10,    11,    12,    13,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    35,     6,     7,
       8,     9,    10,    11,    12,    13,    -1,    -1,    32,    17,
      -1,    35,     6,     7,     8,     9,    10,    11,    12,    13,
      -1,    -1,    -1,    17,    -1,    -1,    -1,    35,     6,     7,
       8,     9,    10,    11,    12,    13,    -1,    -1,    -1,    -1,
      -1,    35,     6,     7,     8,     9,    10,    11,    12,    13,
      -1,    -1,    -1,    31,    -1,    -1,    -1,    35,     8,     9,
      10,    11,    12,    13,    -1,    -1,    -1,    -1,    14,    -1,
      -1,    35,    18,    -1,    20,    21,    22,    -1,    24,    25,
      -1,    -1,    -1,    -1,    -1,    35,    -1,    33,    34,    -1,
      36,    37,    38,    39,    40,    16,    -1,    18,    -1,    -1,
      -1,    -1,    -1,    -1,    16,    26,    18,    -1,    -1,    -1,
      -1,    -1,    33,    34,    -1,    36,    37,    38,    39,    40,
      -1,    33,    34,    -1,    36,    37,    38,    39,    40,    14,
      -1,    -1,    -1,    18,    -1,    20,    21,    22,    -1,    24,
      25,    33,    34,    -1,    36,    37,    38,    39,    40,    -1,
      -1,    36
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     3,    42,    43,    36,     0,     3,    44,    45,    14,
      36,    44,     4,    14,     5,    20,    21,    36,    46,    47,
      52,    27,    16,     4,    48,    49,    46,    36,    28,    17,
      52,    15,    48,    31,    18,    36,    29,    18,    16,    50,
      52,    17,    19,    36,    36,    14,    32,    51,    19,    46,
      52,    14,    14,    18,    22,    24,    25,    36,    47,    53,
      54,    36,    54,    54,    33,    34,    36,    37,    38,    39,
      40,    55,    18,    18,    18,    16,    26,    54,    30,    51,
      15,    15,    20,    36,    16,    18,    55,    55,     6,     7,
       8,     9,    10,    11,    12,    13,    19,    35,    55,    55,
      55,    55,    55,    55,    15,    16,    18,    55,    55,    56,
      19,    55,    55,    55,    55,    55,    55,    55,    36,    53,
      55,    55,    19,    19,    19,    17,    31,    31,    55,    19,
      17,    32,    57,    58,    19,    16,    53,    53,    31,    26,
      15,    17,    55,    57,    55,    23,    55,    17,    53,    31
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    41,    42,    42,    43,    44,    44,    45,    46,    46,
      47,    48,    48,    49,    50,    50,    51,    51,    52,    52,
      52,    52,    53,    53,    53,    53,    53,    53,    53,    53,
      54,    54,    55,    55,    55,    55,    55,    55,    55,    55,
      55,    55,    55,    55,    55,    55,    55,    55,    55,    55,
      55,    55,    55,    56,    56,    57,    57,    58
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     2,     0,    17,     2,     0,     6,     2,     0,
       3,     2,     0,    13,     3,     0,     4,     0,     3,     1,
       1,     1,     3,     7,     5,     5,     4,     7,     1,     3,
       2,     0,     3,     3,     3,     3,     3,     3,     3,     3,
       4,     4,     3,     3,     1,     1,     1,     1,     1,     5,
       4,     2,     3,     2,     0,     2,     0,     2
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
  case 2: /* prog: mainc cdcls  */
#line 28 "minij_parse.y"
        { printf("Program -> MainClass ClassDecl*\n");
          printf("Parsed OK!\n");
        }
#line 1326 "minij_parse.tab.c"
    break;

  case 3: /* prog: %empty  */
#line 32 "minij_parse.y"
        { printf("****** Parsing failed!\n"); }
#line 1332 "minij_parse.tab.c"
    break;

  case 4: /* mainc: CLASS ID LBP PUB STATIC VOID MAIN LP STR LSP RSP ID RP LBP stmts RBP RBP  */
#line 36 "minij_parse.y"
        { printf("MainClass -> class id lbp public static void main lp string lsp rsp id rp lbp Statemet* rbp rbp\n"); }
#line 1338 "minij_parse.tab.c"
    break;

  case 5: /* cdcls: cdcl cdcls  */
#line 40 "minij_parse.y"
        { printf("(for ClassDecl*) cdcls : cdcl cdcls\n"); }
#line 1344 "minij_parse.tab.c"
    break;

  case 6: /* cdcls: %empty  */
#line 42 "minij_parse.y"
        { printf("(for ClassDecl*) cdcls : \n"); }
#line 1350 "minij_parse.tab.c"
    break;

  case 7: /* cdcl: CLASS ID LBP vdcls mdcls RBP  */
#line 46 "minij_parse.y"
        { printf("ClassDecl -> class id lbp VarDecl* MethodDecl* rbp\n"); }
#line 1356 "minij_parse.tab.c"
    break;

  case 8: /* vdcls: vdcl vdcls  */
#line 50 "minij_parse.y"
        { printf("(for VarDecl*) vdcls : vdcl vdcls\n"); }
#line 1362 "minij_parse.tab.c"
    break;

  case 9: /* vdcls: %empty  */
#line 52 "minij_parse.y"
        { printf("(for VarDecl*) vdcls : \n"); }
#line 1368 "minij_parse.tab.c"
    break;

  case 10: /* vdcl: type ID SEMI  */
#line 56 "minij_parse.y"
        { printf("VarDecl -> Type id semi :\n");}
#line 1374 "minij_parse.tab.c"
    break;

  case 11: /* mdcls: mdcl mdcls  */
#line 60 "minij_parse.y"
        { printf("(for MethodDecl*) mdcls : mdcl mdcls\n"); }
#line 1380 "minij_parse.tab.c"
    break;

  case 12: /* mdcls: %empty  */
#line 62 "minij_parse.y"
        { printf("(for MethodDecl*) mdcls : \n"); }
#line 1386 "minij_parse.tab.c"
    break;

  case 13: /* mdcl: PUB type ID LP formals RP LBP vdcls stmts RETURN exp SEMI RBP  */
#line 66 "minij_parse.y"
        { printf("MethodDecl -> public Type id lp FormalList rp lbp Statements* return Exp semi rbp\n"); }
#line 1392 "minij_parse.tab.c"
    break;

  case 14: /* formals: type ID frest  */
#line 70 "minij_parse.y"
        { printf("FormalList -> Type id FormalRest*\n"); }
#line 1398 "minij_parse.tab.c"
    break;

  case 15: /* formals: %empty  */
#line 72 "minij_parse.y"
        { printf("FormalList -> \n"); }
#line 1404 "minij_parse.tab.c"
    break;

  case 16: /* frest: COMMA type ID frest  */
#line 76 "minij_parse.y"
        { printf("FormalRest -> comma Type id FormalRest\n"); }
#line 1410 "minij_parse.tab.c"
    break;

  case 17: /* frest: %empty  */
#line 78 "minij_parse.y"
        { printf("FormalRest -> \n"); }
#line 1416 "minij_parse.tab.c"
    break;

  case 18: /* type: INT LSP RSP  */
#line 82 "minij_parse.y"
        { printf("Type -> INT LSP RSP\n");}
#line 1422 "minij_parse.tab.c"
    break;

  case 19: /* type: BOOLEAN  */
#line 84 "minij_parse.y"
        { printf("Type -> BOOLEAN\n");}
#line 1428 "minij_parse.tab.c"
    break;

  case 20: /* type: INT  */
#line 86 "minij_parse.y"
        { printf("Type > INT \n");}
#line 1434 "minij_parse.tab.c"
    break;

  case 21: /* type: ID  */
#line 88 "minij_parse.y"
        { printf("Type -> ID \n");}
#line 1440 "minij_parse.tab.c"
    break;

  case 22: /* stmt: LBP stmts RBP  */
#line 91 "minij_parse.y"
        { printf("Statement -> LBP stmts RBP\n");}
#line 1446 "minij_parse.tab.c"
    break;

  case 23: /* stmt: IF LP exp RP stmt ELSE stmt  */
#line 93 "minij_parse.y"
        { printf("Statement -> IF LP exp RP stmt ELSE stmt \n");}
#line 1452 "minij_parse.tab.c"
    break;

  case 24: /* stmt: WHILE LP exp RP stmt  */
#line 95 "minij_parse.y"
        { printf("Statement -> WHILE LP exp RP stmt\n");}
#line 1458 "minij_parse.tab.c"
    break;

  case 25: /* stmt: PRINT LP exp RP SEMI  */
#line 97 "minij_parse.y"
        { printf("Statement -> PRINT LP exp RP SEMI\n");}
#line 1464 "minij_parse.tab.c"
    break;

  case 26: /* stmt: ID ASSIGN exp SEMI  */
#line 99 "minij_parse.y"
        { printf("Statement -> ID ASSIGN exp SEMI\n");}
#line 1470 "minij_parse.tab.c"
    break;

  case 27: /* stmt: ID LSP exp RSP ASSIGN exp SEMI  */
#line 101 "minij_parse.y"
        { printf("Statement ->  ID LSP exp RSP ASSIGN exp SEMI\n");}
#line 1476 "minij_parse.tab.c"
    break;

  case 28: /* stmt: vdcl  */
#line 103 "minij_parse.y"
        { printf("Statement -> vdcl\n");}
#line 1482 "minij_parse.tab.c"
    break;

  case 29: /* stmt: LP exp RP  */
#line 105 "minij_parse.y"
        { printf("Statement -> LP stmts RP\n");}
#line 1488 "minij_parse.tab.c"
    break;

  case 30: /* stmts: stmt stmts  */
#line 108 "minij_parse.y"
        { printf("Statements -> stmt stmts \n");}
#line 1494 "minij_parse.tab.c"
    break;

  case 31: /* stmts: %empty  */
#line 110 "minij_parse.y"
        { printf("Statements -> \n");}
#line 1500 "minij_parse.tab.c"
    break;

  case 32: /* exp: exp ADD exp  */
#line 113 "minij_parse.y"
        { printf("exp -> exp ADD exp\n");}
#line 1506 "minij_parse.tab.c"
    break;

  case 33: /* exp: exp MINUS exp  */
#line 115 "minij_parse.y"
        { printf("exp -> exp MINUS exp\n");}
#line 1512 "minij_parse.tab.c"
    break;

  case 34: /* exp: exp TIMES exp  */
#line 117 "minij_parse.y"
        { printf("exp -> exp TIMES exp\n");}
#line 1518 "minij_parse.tab.c"
    break;

  case 35: /* exp: exp AND exp  */
#line 119 "minij_parse.y"
        { printf("exp -> exp AND exp\n");}
#line 1524 "minij_parse.tab.c"
    break;

  case 36: /* exp: exp OR exp  */
#line 121 "minij_parse.y"
        { printf("exp ->exp OR exp\n");}
#line 1530 "minij_parse.tab.c"
    break;

  case 37: /* exp: exp LT exp  */
#line 123 "minij_parse.y"
        { printf("exp -> exp LT exp\n");}
#line 1536 "minij_parse.tab.c"
    break;

  case 38: /* exp: exp LE exp  */
#line 125 "minij_parse.y"
        { printf("exp -> exp LE exp\n");}
#line 1542 "minij_parse.tab.c"
    break;

  case 39: /* exp: exp EQ exp  */
#line 127 "minij_parse.y"
        { printf("exp -> exp EQ exp\n");}
#line 1548 "minij_parse.tab.c"
    break;

  case 40: /* exp: ID LSP exp RSP  */
#line 129 "minij_parse.y"
        { printf("exp -> ID LSP exp RSP\n");}
#line 1554 "minij_parse.tab.c"
    break;

  case 41: /* exp: ID LP explist RP  */
#line 131 "minij_parse.y"
        { printf("exp -> ID LP explist RP\n");}
#line 1560 "minij_parse.tab.c"
    break;

  case 42: /* exp: ID exp RP  */
#line 133 "minij_parse.y"
        { printf("exp -> ID exp RP \n");}
#line 1566 "minij_parse.tab.c"
    break;

  case 43: /* exp: exp DOT exp  */
#line 135 "minij_parse.y"
        { printf("exp -> exp DOT exp\n");}
#line 1572 "minij_parse.tab.c"
    break;

  case 44: /* exp: LIT  */
#line 137 "minij_parse.y"
        { printf("exp -> LIT : \n");}
#line 1578 "minij_parse.tab.c"
    break;

  case 45: /* exp: TRUE  */
#line 139 "minij_parse.y"
        { printf("exp -> TRUE\n");}
#line 1584 "minij_parse.tab.c"
    break;

  case 46: /* exp: FALSE  */
#line 141 "minij_parse.y"
        { printf("exp ->FALSE\n");}
#line 1590 "minij_parse.tab.c"
    break;

  case 47: /* exp: ID  */
#line 143 "minij_parse.y"
        { printf("exp -> ID : \n");}
#line 1596 "minij_parse.tab.c"
    break;

  case 48: /* exp: THIS  */
#line 145 "minij_parse.y"
        { printf("exp -> THIS\n");}
#line 1602 "minij_parse.tab.c"
    break;

  case 49: /* exp: NEW INT LSP exp RSP  */
#line 147 "minij_parse.y"
        { printf("exp -> NEW INT LSP exp RSP\n");}
#line 1608 "minij_parse.tab.c"
    break;

  case 50: /* exp: NEW ID LP RP  */
#line 149 "minij_parse.y"
        { printf("exp -> NEW ID LP\n");}
#line 1614 "minij_parse.tab.c"
    break;

  case 51: /* exp: NOT exp  */
#line 151 "minij_parse.y"
        { printf("exp -> NOT exp\n");}
#line 1620 "minij_parse.tab.c"
    break;

  case 52: /* exp: exp TIMES stmt  */
#line 153 "minij_parse.y"
        { printf("exp -> exp TIMES stmt \n");}
#line 1626 "minij_parse.tab.c"
    break;

  case 53: /* explist: exp exprests  */
#line 156 "minij_parse.y"
        { printf("explist -> exp exprests \n");}
#line 1632 "minij_parse.tab.c"
    break;

  case 54: /* explist: %empty  */
#line 158 "minij_parse.y"
        { printf("explist -> \n");}
#line 1638 "minij_parse.tab.c"
    break;

  case 55: /* exprests: exprest exprests  */
#line 161 "minij_parse.y"
        { printf("exprests -> exprest exprests \n");}
#line 1644 "minij_parse.tab.c"
    break;

  case 56: /* exprests: %empty  */
#line 163 "minij_parse.y"
        { printf("exprests -> \n");}
#line 1650 "minij_parse.tab.c"
    break;

  case 57: /* exprest: COMMA exp  */
#line 166 "minij_parse.y"
        { printf("exprest -> COMMA exp\n");}
#line 1656 "minij_parse.tab.c"
    break;


#line 1660 "minij_parse.tab.c"

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

#line 169 "minij_parse.y"

int yyerror(char *s)
{
    printf("%s\n",s);
    return 1;
}
