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
#line 1 "A4_6.y"

	#include<stdio.h>
	extern int yylex();
	void yyerror(char *s);

#line 77 "A4_6.tab.c"

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

#include "A4_6.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_CHAR = 3,                       /* CHAR  */
  YYSYMBOL_ELSE = 4,                       /* ELSE  */
  YYSYMBOL_FOR = 5,                        /* FOR  */
  YYSYMBOL_IF = 6,                         /* IF  */
  YYSYMBOL_INT = 7,                        /* INT  */
  YYSYMBOL_RETURN = 8,                     /* RETURN  */
  YYSYMBOL_VOID = 9,                       /* VOID  */
  YYSYMBOL_ID = 10,                        /* ID  */
  YYSYMBOL_INT_CONST = 11,                 /* INT_CONST  */
  YYSYMBOL_CHAR_CONST = 12,                /* CHAR_CONST  */
  YYSYMBOL_STRING_CONST = 13,              /* STRING_CONST  */
  YYSYMBOL_LSQBRACKET = 14,                /* LSQBRACKET  */
  YYSYMBOL_RSQBRACKET = 15,                /* RSQBRACKET  */
  YYSYMBOL_LBRACE = 16,                    /* LBRACE  */
  YYSYMBOL_RBRACE = 17,                    /* RBRACE  */
  YYSYMBOL_LPARAN = 18,                    /* LPARAN  */
  YYSYMBOL_RPARAN = 19,                    /* RPARAN  */
  YYSYMBOL_ARROW = 20,                     /* ARROW  */
  YYSYMBOL_BIT_AND = 21,                   /* BIT_AND  */
  YYSYMBOL_PLUS = 22,                      /* PLUS  */
  YYSYMBOL_SUB = 23,                       /* SUB  */
  YYSYMBOL_MULT = 24,                      /* MULT  */
  YYSYMBOL_DIV = 25,                       /* DIV  */
  YYSYMBOL_MOD = 26,                       /* MOD  */
  YYSYMBOL_LOG_NOT = 27,                   /* LOG_NOT  */
  YYSYMBOL_LOG_AND = 28,                   /* LOG_AND  */
  YYSYMBOL_LOG_OR = 29,                    /* LOG_OR  */
  YYSYMBOL_LESS = 30,                      /* LESS  */
  YYSYMBOL_GREATER = 31,                   /* GREATER  */
  YYSYMBOL_LESSEQ = 32,                    /* LESSEQ  */
  YYSYMBOL_GREATEREQ = 33,                 /* GREATEREQ  */
  YYSYMBOL_EQUALS = 34,                    /* EQUALS  */
  YYSYMBOL_NOTEQ = 35,                     /* NOTEQ  */
  YYSYMBOL_QUES = 36,                      /* QUES  */
  YYSYMBOL_COLON = 37,                     /* COLON  */
  YYSYMBOL_SEMICOLON = 38,                 /* SEMICOLON  */
  YYSYMBOL_ASSIGN = 39,                    /* ASSIGN  */
  YYSYMBOL_COMMA = 40,                     /* COMMA  */
  YYSYMBOL_SINGLE_COMMENT = 41,            /* SINGLE_COMMENT  */
  YYSYMBOL_MULTI_COMMENT = 42,             /* MULTI_COMMENT  */
  YYSYMBOL_NEW_LINE = 43,                  /* NEW_LINE  */
  YYSYMBOL_YYACCEPT = 44,                  /* $accept  */
  YYSYMBOL_primary_expression = 45,        /* primary_expression  */
  YYSYMBOL_postfix_expression = 46,        /* postfix_expression  */
  YYSYMBOL_identifier_opt = 47,            /* identifier_opt  */
  YYSYMBOL_identifier = 48,                /* identifier  */
  YYSYMBOL_argument_expression_list_opt = 49, /* argument_expression_list_opt  */
  YYSYMBOL_argument_expression_list = 50,  /* argument_expression_list  */
  YYSYMBOL_unary_expression = 51,          /* unary_expression  */
  YYSYMBOL_unary_operator = 52,            /* unary_operator  */
  YYSYMBOL_multiplicative_expression = 53, /* multiplicative_expression  */
  YYSYMBOL_additive_expression = 54,       /* additive_expression  */
  YYSYMBOL_relational_expression = 55,     /* relational_expression  */
  YYSYMBOL_equality_expression = 56,       /* equality_expression  */
  YYSYMBOL_logical_and_expression = 57,    /* logical_and_expression  */
  YYSYMBOL_logical_or_expression = 58,     /* logical_or_expression  */
  YYSYMBOL_conditional_expression = 59,    /* conditional_expression  */
  YYSYMBOL_assignment_expression = 60,     /* assignment_expression  */
  YYSYMBOL_expression = 61,                /* expression  */
  YYSYMBOL_declaration = 62,               /* declaration  */
  YYSYMBOL_init_declarator = 63,           /* init_declarator  */
  YYSYMBOL_type_specifier = 64,            /* type_specifier  */
  YYSYMBOL_declarator = 65,                /* declarator  */
  YYSYMBOL_pointer_opt = 66,               /* pointer_opt  */
  YYSYMBOL_direct_declarator = 67,         /* direct_declarator  */
  YYSYMBOL_interger_constant = 68,         /* interger_constant  */
  YYSYMBOL_pointer = 69,                   /* pointer  */
  YYSYMBOL_parameter_list_opt = 70,        /* parameter_list_opt  */
  YYSYMBOL_parameter_list = 71,            /* parameter_list  */
  YYSYMBOL_parameter_declaration = 72,     /* parameter_declaration  */
  YYSYMBOL_initializer = 73,               /* initializer  */
  YYSYMBOL_statement = 74,                 /* statement  */
  YYSYMBOL_compound_statement = 75,        /* compound_statement  */
  YYSYMBOL_block_item_list_opt = 76,       /* block_item_list_opt  */
  YYSYMBOL_block_item_list = 77,           /* block_item_list  */
  YYSYMBOL_block_item = 78,                /* block_item  */
  YYSYMBOL_expression_statement = 79,      /* expression_statement  */
  YYSYMBOL_expression_opt = 80,            /* expression_opt  */
  YYSYMBOL_selection_statement = 81,       /* selection_statement  */
  YYSYMBOL_iteration_statement = 82,       /* iteration_statement  */
  YYSYMBOL_jump_statement = 83,            /* jump_statement  */
  YYSYMBOL_translational_unit = 84,        /* translational_unit  */
  YYSYMBOL_external_declaration = 85,      /* external_declaration  */
  YYSYMBOL_function_definition = 86,       /* function_definition  */
  YYSYMBOL_declaration_list_opt = 87,      /* declaration_list_opt  */
  YYSYMBOL_declaration_list = 88           /* declaration_list  */
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
#define YYFINAL  14
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   171

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  44
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  45
/* YYNRULES -- Number of rules.  */
#define YYNRULES  96
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  154

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   257


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
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,     2,     2,     2,     2,     2,     2,     2,     2,     2,
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
       2,     2,     2,     2,     2,     2,     1,     2
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    55,    55,    56,    57,    58,    59,    62,    63,    64,
      65,    67,    68,    71,    74,    75,    78,    79,    82,    83,
      86,    87,    88,    89,    90,    94,    95,    96,    97,   100,
     101,   102,   106,   107,   108,   109,   110,   113,   114,   115,
     118,   119,   122,   123,   126,   127,   130,   131,   136,   141,
     146,   147,   151,   152,   153,   158,   161,   162,   166,   167,
     168,   171,   175,   179,   180,   183,   184,   187,   192,   196,
     197,   198,   199,   200,   203,   206,   207,   210,   211,   214,
     215,   218,   221,   222,   225,   226,   229,   230,   232,   240,
     243,   244,   247,   250,   251,   254,   255
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
  "\"end of file\"", "error", "\"invalid token\"", "CHAR", "ELSE", "FOR",
  "IF", "INT", "RETURN", "VOID", "ID", "INT_CONST", "CHAR_CONST",
  "STRING_CONST", "LSQBRACKET", "RSQBRACKET", "LBRACE", "RBRACE", "LPARAN",
  "RPARAN", "ARROW", "BIT_AND", "PLUS", "SUB", "MULT", "DIV", "MOD",
  "LOG_NOT", "LOG_AND", "LOG_OR", "LESS", "GREATER", "LESSEQ", "GREATEREQ",
  "EQUALS", "NOTEQ", "QUES", "COLON", "SEMICOLON", "ASSIGN", "COMMA",
  "SINGLE_COMMENT", "MULTI_COMMENT", "NEW_LINE", "$accept",
  "primary_expression", "postfix_expression", "identifier_opt",
  "identifier", "argument_expression_list_opt", "argument_expression_list",
  "unary_expression", "unary_operator", "multiplicative_expression",
  "additive_expression", "relational_expression", "equality_expression",
  "logical_and_expression", "logical_or_expression",
  "conditional_expression", "assignment_expression", "expression",
  "declaration", "init_declarator", "type_specifier", "declarator",
  "pointer_opt", "direct_declarator", "interger_constant", "pointer",
  "parameter_list_opt", "parameter_list", "parameter_declaration",
  "initializer", "statement", "compound_statement", "block_item_list_opt",
  "block_item_list", "block_item", "expression_statement",
  "expression_opt", "selection_statement", "iteration_statement",
  "jump_statement", "translational_unit", "external_declaration",
  "function_definition", "declaration_list_opt", "declaration_list", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-131)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-94)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      40,  -131,  -131,  -131,  -131,   -15,    19,  -131,  -131,  -131,
    -131,     7,    11,  -131,  -131,    43,  -131,   -15,    25,    40,
    -131,    34,  -131,  -131,  -131,  -131,  -131,    43,  -131,  -131,
    -131,  -131,  -131,  -131,    86,    18,    43,   141,   -16,   127,
     -10,    22,   -21,  -131,  -131,  -131,    21,    71,  -131,  -131,
      28,    40,  -131,    49,    43,    43,    11,    43,  -131,    43,
      43,    43,    43,    43,    43,    43,    43,    43,    43,    43,
      43,    43,    43,    55,    70,    43,  -131,  -131,  -131,  -131,
      73,    71,  -131,  -131,    53,  -131,  -131,  -131,  -131,    82,
     -15,    80,    61,  -131,  -131,    87,    88,    65,  -131,  -131,
    -131,  -131,  -131,  -131,  -131,   141,   141,   -16,   -16,   -16,
     -16,   127,   127,   -10,    22,    74,   109,    43,    72,  -131,
    -131,  -131,  -131,    11,  -131,    40,  -131,  -131,    43,    43,
      43,    75,    89,  -131,  -131,  -131,  -131,  -131,  -131,    76,
      43,   129,    43,    85,   120,   107,    43,   129,   129,   110,
    -131,  -131,   129,  -131
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,    53,    54,    52,    91,    56,     0,    89,    90,    62,
      49,    50,     0,    57,     1,     0,    95,    56,     0,    94,
      13,    58,    55,     2,     3,     4,     5,     0,    20,    22,
      23,    21,    24,     7,    18,    25,     0,    29,    32,    37,
      40,    42,    44,    46,    68,    51,    50,    75,    92,    96,
       0,    63,    48,     0,     0,    14,     0,     0,    19,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    82,    83,    79,    80,    69,
       0,    76,    77,    70,     0,    71,    72,    73,    61,     0,
      56,     0,    64,    65,     6,     0,     0,    15,    16,    10,
      47,    26,    27,    28,    25,    30,    31,    33,    34,    35,
      36,    38,    39,    41,    43,     0,    82,     0,     0,    74,
      78,    81,    59,    11,    60,     0,     8,     9,     0,     0,
      82,     0,     0,    88,    67,    12,    66,    17,    45,     0,
      82,    82,    82,     0,    84,     0,    82,    82,    82,     0,
      85,    87,    82,    86
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -131,  -131,  -131,  -131,   -51,  -131,  -131,   -33,  -131,    23,
      97,    -6,    58,    67,  -131,    14,   -13,   -14,     1,  -131,
       0,   131,    54,  -131,  -131,  -131,  -131,  -131,    24,  -131,
    -130,   128,  -131,  -131,    90,  -131,   -71,  -131,  -131,  -131,
    -131,  -131,  -131,  -131,  -131
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,    33,    34,   134,    21,    96,    97,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    52,    76,    77,    10,
      17,    11,    12,    22,    89,    13,    91,    92,    93,    45,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    87,
       6,     7,     8,    18,    19
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
       5,     4,    44,    58,   118,    99,    62,    63,    71,     9,
       1,   144,    16,    53,     2,    72,     3,   150,   151,    14,
      49,    20,   153,   -93,    68,    69,   101,   102,   103,   104,
     104,   104,   104,   104,   104,   104,   104,   104,   104,    88,
      95,    47,    98,     1,   100,   131,    15,     2,    50,     3,
      70,    90,    51,    23,    24,    25,    26,    57,   115,   139,
      15,    27,   111,   112,    28,    29,    30,    31,    94,   143,
      32,   145,   135,   116,     1,   149,    73,    74,     2,    75,
       3,    23,    24,    25,    26,   105,   106,    47,   117,    27,
     119,   121,    28,    29,    30,    31,   104,   122,    32,   124,
      54,   125,   126,   132,    55,   128,    56,   127,   141,   -82,
     133,   129,     1,   140,   142,   137,     2,   130,     3,    23,
      24,    25,    26,   146,   147,    90,   148,    27,   113,   152,
      28,    29,    30,    31,    73,    74,    32,    75,   114,    23,
      24,    25,    26,   138,   123,    47,    48,    27,    46,   136,
      28,    29,    30,    31,     0,     0,    32,    64,    65,    66,
      67,   107,   108,   109,   110,    59,    60,    61,     0,     0,
       0,   120
};

static const yytype_int16 yycheck[] =
{
       0,     0,    15,    36,    75,    56,    22,    23,    29,    24,
       3,   141,    11,    27,     7,    36,     9,   147,   148,     0,
      19,    10,   152,    16,    34,    35,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    11,
      54,    16,    55,     3,    57,   116,    39,     7,    14,     9,
      28,    51,    18,    10,    11,    12,    13,    39,    72,   130,
      39,    18,    68,    69,    21,    22,    23,    24,    19,   140,
      27,   142,   123,    18,     3,   146,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    62,    63,    16,    18,    18,
      17,    38,    21,    22,    23,    24,   129,    15,    27,    19,
      14,    40,    15,   117,    18,    40,    20,    19,    19,    38,
      38,    37,     3,    38,    38,   128,     7,   116,     9,    10,
      11,    12,    13,    38,     4,   125,    19,    18,    70,    19,
      21,    22,    23,    24,     5,     6,    27,     8,    71,    10,
      11,    12,    13,   129,    90,    16,    18,    18,    17,   125,
      21,    22,    23,    24,    -1,    -1,    27,    30,    31,    32,
      33,    64,    65,    66,    67,    24,    25,    26,    -1,    -1,
      -1,    81
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     3,     7,     9,    62,    64,    84,    85,    86,    24,
      63,    65,    66,    69,     0,    39,    62,    64,    87,    88,
      10,    48,    67,    10,    11,    12,    13,    18,    21,    22,
      23,    24,    27,    45,    46,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    73,    65,    16,    75,    62,
      14,    18,    60,    61,    14,    18,    20,    39,    51,    24,
      25,    26,    22,    23,    30,    31,    32,    33,    34,    35,
      28,    29,    36,     5,     6,     8,    61,    62,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    11,    68,
      64,    70,    71,    72,    19,    61,    49,    50,    60,    48,
      60,    51,    51,    51,    51,    53,    53,    54,    54,    54,
      54,    55,    55,    56,    57,    61,    18,    18,    80,    17,
      78,    38,    15,    66,    19,    40,    15,    19,    40,    37,
      62,    80,    61,    38,    47,    48,    72,    60,    59,    80,
      38,    19,    38,    80,    74,    80,    38,     4,    19,    80,
      74,    74,    19,    74
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    44,    45,    45,    45,    45,    45,    46,    46,    46,
      46,    47,    47,    48,    49,    49,    50,    50,    51,    51,
      52,    52,    52,    52,    52,    53,    53,    53,    53,    54,
      54,    54,    55,    55,    55,    55,    55,    56,    56,    56,
      57,    57,    58,    58,    59,    59,    60,    60,    61,    62,
      63,    63,    64,    64,    64,    65,    66,    66,    67,    67,
      67,    68,    69,    70,    70,    71,    71,    72,    73,    74,
      74,    74,    74,    74,    75,    76,    76,    77,    77,    78,
      78,    79,    80,    80,    81,    81,    82,    82,    83,    84,
      85,    85,    86,    87,    87,    88,    88
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     1,     1,     3,     1,     4,     4,
       3,     0,     1,     1,     0,     1,     1,     3,     1,     2,
       1,     1,     1,     1,     1,     1,     3,     3,     3,     1,
       3,     3,     1,     3,     3,     3,     3,     1,     3,     3,
       1,     3,     1,     3,     1,     5,     1,     3,     1,     2,
       1,     3,     1,     1,     1,     2,     0,     1,     1,     4,
       4,     1,     1,     0,     1,     1,     3,     3,     1,     1,
       1,     1,     1,     1,     3,     0,     1,     1,     2,     1,
       1,     2,     0,     1,     5,     7,     9,     8,     3,     1,
       1,     1,     4,     0,     1,     1,     2
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
  case 2: /* primary_expression: ID  */
#line 55 "A4_6.y"
                           {printf("\nprimary-expression-> Identifier\n");}
#line 1271 "A4_6.tab.c"
    break;

  case 3: /* primary_expression: INT_CONST  */
#line 56 "A4_6.y"
                                   {printf("\nprimary_expression-> Integer constant\n");}
#line 1277 "A4_6.tab.c"
    break;

  case 4: /* primary_expression: CHAR_CONST  */
#line 57 "A4_6.y"
                                    {printf("\nprimary_expression-> Character constant\n");}
#line 1283 "A4_6.tab.c"
    break;

  case 5: /* primary_expression: STRING_CONST  */
#line 58 "A4_6.y"
                                      {printf("\nprimary_expression-> String Literal\n");}
#line 1289 "A4_6.tab.c"
    break;

  case 6: /* primary_expression: LPARAN expression RPARAN  */
#line 59 "A4_6.y"
                                                  {printf("\nprimary_expression-> (expression)\n");}
#line 1295 "A4_6.tab.c"
    break;

  case 7: /* postfix_expression: primary_expression  */
#line 62 "A4_6.y"
                                           {printf("\npostfix-expression-> primary-expression\n");}
#line 1301 "A4_6.tab.c"
    break;

  case 8: /* postfix_expression: postfix_expression LSQBRACKET expression RSQBRACKET  */
#line 63 "A4_6.y"
                                                                             {printf("\npostfix-expression-> postfix-expression[expression]\n");}
#line 1307 "A4_6.tab.c"
    break;

  case 9: /* postfix_expression: postfix_expression LPARAN argument_expression_list_opt RPARAN  */
#line 64 "A4_6.y"
                                                                                       {printf("\npostfix-expression-> postfix-expression(argument-expression-list-opt)\n");}
#line 1313 "A4_6.tab.c"
    break;

  case 10: /* postfix_expression: postfix_expression ARROW identifier  */
#line 65 "A4_6.y"
                                                             {printf("\npostfix-expression-> postfix-expression-> identifier\n");}
#line 1319 "A4_6.tab.c"
    break;

  case 16: /* argument_expression_list: assignment_expression  */
#line 78 "A4_6.y"
                                                      {printf("\nargument-expression-list-> assignment-expression\n");}
#line 1325 "A4_6.tab.c"
    break;

  case 17: /* argument_expression_list: argument_expression_list COMMA assignment_expression  */
#line 79 "A4_6.y"
                                                                                      {printf("\nargument-expression-list-> argument-expression-list, assignment-expression\n");}
#line 1331 "A4_6.tab.c"
    break;

  case 18: /* unary_expression: postfix_expression  */
#line 82 "A4_6.y"
                                           {printf("\nunary-expression-> postfix-expression\n");}
#line 1337 "A4_6.tab.c"
    break;

  case 19: /* unary_expression: unary_operator unary_expression  */
#line 83 "A4_6.y"
                                                         {printf("\nunary-expression-> unary-operator unary-expression\n");}
#line 1343 "A4_6.tab.c"
    break;

  case 20: /* unary_operator: BIT_AND  */
#line 86 "A4_6.y"
                                {printf("\nunary-operator-> &\n");}
#line 1349 "A4_6.tab.c"
    break;

  case 21: /* unary_operator: MULT  */
#line 87 "A4_6.y"
                              {printf("\nunary-operator-> *\n");}
#line 1355 "A4_6.tab.c"
    break;

  case 22: /* unary_operator: PLUS  */
#line 88 "A4_6.y"
                              {printf("\nunary-operator-> +\n");}
#line 1361 "A4_6.tab.c"
    break;

  case 23: /* unary_operator: SUB  */
#line 89 "A4_6.y"
                             {printf("\nunary-operator-> -\n");}
#line 1367 "A4_6.tab.c"
    break;

  case 24: /* unary_operator: LOG_NOT  */
#line 90 "A4_6.y"
                                 {printf("\nunary-operator-> !\n");}
#line 1373 "A4_6.tab.c"
    break;

  case 25: /* multiplicative_expression: unary_expression  */
#line 94 "A4_6.y"
                                                 {printf("\nmultiplicative-expression-> unary-expression\n");}
#line 1379 "A4_6.tab.c"
    break;

  case 26: /* multiplicative_expression: multiplicative_expression MULT unary_expression  */
#line 95 "A4_6.y"
                                                                                 {printf("\nmultiplicative-expression-> multiplicative-expression * unary-expression\n");}
#line 1385 "A4_6.tab.c"
    break;

  case 27: /* multiplicative_expression: multiplicative_expression DIV unary_expression  */
#line 96 "A4_6.y"
                                                                                {printf("\nmultiplicative-expression-> multiplicative-expression / unary-expression\n");}
#line 1391 "A4_6.tab.c"
    break;

  case 28: /* multiplicative_expression: multiplicative_expression MOD unary_expression  */
#line 97 "A4_6.y"
                                                                                {printf("\nmultiplicative-expression-> multiplicative-expression module unary-expression\n");}
#line 1397 "A4_6.tab.c"
    break;

  case 29: /* additive_expression: multiplicative_expression  */
#line 100 "A4_6.y"
                                                  {printf("\nadditive-expression-> multiplicative-expression\n");}
#line 1403 "A4_6.tab.c"
    break;

  case 30: /* additive_expression: additive_expression PLUS multiplicative_expression  */
#line 101 "A4_6.y"
                                                                            {printf("\nadditive-expression-> additive-expression + multiplicative-expression\n");}
#line 1409 "A4_6.tab.c"
    break;

  case 31: /* additive_expression: additive_expression SUB multiplicative_expression  */
#line 102 "A4_6.y"
                                                                           {printf("\nadditive-expression-> additive-expression - multiplicative-expression\n");}
#line 1415 "A4_6.tab.c"
    break;

  case 32: /* relational_expression: additive_expression  */
#line 106 "A4_6.y"
                                            {printf("\nrelational-expression-> additive-expression\n");}
#line 1421 "A4_6.tab.c"
    break;

  case 33: /* relational_expression: relational_expression LESS additive_expression  */
#line 107 "A4_6.y"
                                                                        {printf("\nrelational-expression-> relational-expression < additive-expression\n");}
#line 1427 "A4_6.tab.c"
    break;

  case 34: /* relational_expression: relational_expression GREATER additive_expression  */
#line 108 "A4_6.y"
                                                                            {printf("\nrelational-expression-> relational-expression > additive-expression\n");}
#line 1433 "A4_6.tab.c"
    break;

  case 35: /* relational_expression: relational_expression LESSEQ additive_expression  */
#line 109 "A4_6.y"
                                                                          {printf("\nrelational-expression-> relational-expression <= additive-expression\n");}
#line 1439 "A4_6.tab.c"
    break;

  case 36: /* relational_expression: relational_expression GREATEREQ additive_expression  */
#line 110 "A4_6.y"
                                                                             {printf("\nrelational-expression-> relational-expression >= additive-expression\n");}
#line 1445 "A4_6.tab.c"
    break;

  case 37: /* equality_expression: relational_expression  */
#line 113 "A4_6.y"
                                              {printf("\nequality-expression-> relational-expression\n");}
#line 1451 "A4_6.tab.c"
    break;

  case 38: /* equality_expression: equality_expression EQUALS relational_expression  */
#line 114 "A4_6.y"
                                                                          {printf("\nequality-expression->equality-expression == relational-expression\n");}
#line 1457 "A4_6.tab.c"
    break;

  case 39: /* equality_expression: equality_expression NOTEQ relational_expression  */
#line 115 "A4_6.y"
                                                                          {printf("\nequality-expression->equality-expression != relational-expression\n");}
#line 1463 "A4_6.tab.c"
    break;

  case 40: /* logical_and_expression: equality_expression  */
#line 118 "A4_6.y"
                                            {printf("\nlogical-AND-expression-> equality-expression\n");}
#line 1469 "A4_6.tab.c"
    break;

  case 41: /* logical_and_expression: logical_and_expression LOG_AND equality_expression  */
#line 119 "A4_6.y"
                                                                            {printf("\nlogical-AND-expression-> logical-AND-expression&&equality-expression\n");}
#line 1475 "A4_6.tab.c"
    break;

  case 42: /* logical_or_expression: logical_and_expression  */
#line 122 "A4_6.y"
                                               {printf("\nlogical-OR-expression->logical-AND-expression\n");}
#line 1481 "A4_6.tab.c"
    break;

  case 43: /* logical_or_expression: logical_or_expression LOG_OR logical_and_expression  */
#line 123 "A4_6.y"
                                                                             {printf("\nlogical-OR-expression-> logical-OR-expression || logical-AND-expression\n");}
#line 1487 "A4_6.tab.c"
    break;

  case 44: /* conditional_expression: logical_or_expression  */
#line 126 "A4_6.y"
                                              {printf("\nconditional-expression->logical-OR-expression\n");}
#line 1493 "A4_6.tab.c"
    break;

  case 45: /* conditional_expression: logical_or_expression QUES expression COLON conditional_expression  */
#line 127 "A4_6.y"
                                                                                            {printf("\nconditional-expression-> logical-OR-expression ? expression : conditional-expression\n");}
#line 1499 "A4_6.tab.c"
    break;

  case 46: /* assignment_expression: conditional_expression  */
#line 130 "A4_6.y"
                                               {printf("\nassignment-expression-> conditional-expression\n");}
#line 1505 "A4_6.tab.c"
    break;

  case 47: /* assignment_expression: unary_expression ASSIGN assignment_expression  */
#line 131 "A4_6.y"
                                                                       {printf("\nassignment-expression-> unary-expression = assignment-expression\n");}
#line 1511 "A4_6.tab.c"
    break;

  case 48: /* expression: assignment_expression  */
#line 136 "A4_6.y"
                                      {printf("\nexpression-> assignment-expression\n");}
#line 1517 "A4_6.tab.c"
    break;

  case 49: /* declaration: type_specifier init_declarator  */
#line 141 "A4_6.y"
                                               {printf("\ndeclaration-> type-specifier init-declaration\n");}
#line 1523 "A4_6.tab.c"
    break;

  case 50: /* init_declarator: declarator  */
#line 146 "A4_6.y"
                                   {printf("\ninit-declarator-> declarator\n");}
#line 1529 "A4_6.tab.c"
    break;

  case 51: /* init_declarator: declarator ASSIGN initializer  */
#line 147 "A4_6.y"
                                                       {printf("\ninit-declarator-> declarator=initializer\n");}
#line 1535 "A4_6.tab.c"
    break;

  case 52: /* type_specifier: VOID  */
#line 151 "A4_6.y"
                     {printf("\ntype-specifier-> void\n");}
#line 1541 "A4_6.tab.c"
    break;

  case 53: /* type_specifier: CHAR  */
#line 152 "A4_6.y"
                      {printf("\ntype-specifier-> char\n");}
#line 1547 "A4_6.tab.c"
    break;

  case 54: /* type_specifier: INT  */
#line 153 "A4_6.y"
                     {printf("\ntype-specifier-> int\n");}
#line 1553 "A4_6.tab.c"
    break;

  case 55: /* declarator: pointer_opt direct_declarator  */
#line 158 "A4_6.y"
                                              {printf("\ndeclarator-> pointer-opt direct-declarator\n");}
#line 1559 "A4_6.tab.c"
    break;

  case 58: /* direct_declarator: identifier  */
#line 166 "A4_6.y"
                                   {printf("\ndirect-declarator-> identifier\n");}
#line 1565 "A4_6.tab.c"
    break;

  case 59: /* direct_declarator: identifier LSQBRACKET interger_constant RSQBRACKET  */
#line 167 "A4_6.y"
                                                                            {printf("\ndirect-declarator-> direct_declarator[integer-constant]\n");}
#line 1571 "A4_6.tab.c"
    break;

  case 60: /* direct_declarator: identifier LPARAN parameter_list_opt RPARAN  */
#line 168 "A4_6.y"
                                                                     {printf("\ndirect-declarator-> direct_declarator(parameter-list-opt)\n");}
#line 1577 "A4_6.tab.c"
    break;

  case 62: /* pointer: MULT  */
#line 175 "A4_6.y"
                     {printf("\npointer->*\n");}
#line 1583 "A4_6.tab.c"
    break;

  case 65: /* parameter_list: parameter_declaration  */
#line 183 "A4_6.y"
                                      {printf("\nparameter-list-> parameter-declaration\n");}
#line 1589 "A4_6.tab.c"
    break;

  case 66: /* parameter_list: parameter_list COMMA parameter_declaration  */
#line 184 "A4_6.y"
                                                            {printf("\nparameter-list-> parameter-list,parameter-declaration\n");}
#line 1595 "A4_6.tab.c"
    break;

  case 67: /* parameter_declaration: type_specifier pointer_opt identifier_opt  */
#line 187 "A4_6.y"
                                                                  {printf("\nparameter-declaration-> type-specifier pointer-opt identifier-opt\n");}
#line 1601 "A4_6.tab.c"
    break;

  case 68: /* initializer: assignment_expression  */
#line 192 "A4_6.y"
                                      {printf("\ninitializer-> assignment-expression\n");}
#line 1607 "A4_6.tab.c"
    break;

  case 69: /* statement: compound_statement  */
#line 196 "A4_6.y"
                              {printf("\nstatement-> compound-statement\n");}
#line 1613 "A4_6.tab.c"
    break;

  case 70: /* statement: expression_statement  */
#line 197 "A4_6.y"
                                         {printf("\nstatement-> expression-statement\n");}
#line 1619 "A4_6.tab.c"
    break;

  case 71: /* statement: selection_statement  */
#line 198 "A4_6.y"
                                        {printf("\nstatement-> selection-statement\n");}
#line 1625 "A4_6.tab.c"
    break;

  case 72: /* statement: iteration_statement  */
#line 199 "A4_6.y"
                                        {printf("\nstatement-> iteration-statement\n");}
#line 1631 "A4_6.tab.c"
    break;

  case 73: /* statement: jump_statement  */
#line 200 "A4_6.y"
                                   {printf("\nstatement-> Sjump-statement\n");}
#line 1637 "A4_6.tab.c"
    break;

  case 74: /* compound_statement: LBRACE block_item_list_opt RBRACE  */
#line 203 "A4_6.y"
                                                      {printf("\ncompound-statement-> {block-item-list-opt}\n");}
#line 1643 "A4_6.tab.c"
    break;

  case 77: /* block_item_list: block_item  */
#line 210 "A4_6.y"
                                   {printf("\nblock-item-list-> block-item\n");}
#line 1649 "A4_6.tab.c"
    break;

  case 78: /* block_item_list: block_item_list block_item  */
#line 211 "A4_6.y"
                                                    {printf("\nblock-item-list-> block-item-list block-item\n");}
#line 1655 "A4_6.tab.c"
    break;

  case 79: /* block_item: declaration  */
#line 214 "A4_6.y"
                        {printf("\nblock-item-> declaration\n");}
#line 1661 "A4_6.tab.c"
    break;

  case 80: /* block_item: statement  */
#line 215 "A4_6.y"
                                   {printf("\nblock-item-> statement\n");}
#line 1667 "A4_6.tab.c"
    break;

  case 81: /* expression_statement: expression_opt SEMICOLON  */
#line 218 "A4_6.y"
                                               {printf("\nexpression-statement-> expression-opt\n");}
#line 1673 "A4_6.tab.c"
    break;

  case 84: /* selection_statement: IF LPARAN expression RPARAN statement  */
#line 225 "A4_6.y"
                                                              {printf("\nselection-statement-> if(expression) statement\n");}
#line 1679 "A4_6.tab.c"
    break;

  case 85: /* selection_statement: IF LPARAN expression RPARAN statement ELSE statement  */
#line 226 "A4_6.y"
                                                                              {printf("\nselection-statement-> if(expression) statement else statement\n");}
#line 1685 "A4_6.tab.c"
    break;

  case 86: /* iteration_statement: FOR LPARAN expression_opt SEMICOLON expression_opt SEMICOLON expression_opt RPARAN statement  */
#line 229 "A4_6.y"
                                                                                                                  {printf("\niteration-statement->for(expression-opt;expression-opt;expression-opt) statement\n");}
#line 1691 "A4_6.tab.c"
    break;

  case 87: /* iteration_statement: FOR LPARAN declaration expression_opt SEMICOLON expression_opt RPARAN statement  */
#line 230 "A4_6.y"
                                                                                                 {printf("\niteration-statement->for(declaration expression-opt;expression-opt) statement\n");}
#line 1697 "A4_6.tab.c"
    break;

  case 88: /* jump_statement: RETURN expression_opt SEMICOLON  */
#line 232 "A4_6.y"
                                                {printf("\njump-statement-> return expression-opt;\n");}
#line 1703 "A4_6.tab.c"
    break;

  case 89: /* translational_unit: external_declaration  */
#line 240 "A4_6.y"
                                             {printf("\ntranslational-unit-> external-declaration\n");}
#line 1709 "A4_6.tab.c"
    break;

  case 90: /* external_declaration: function_definition  */
#line 243 "A4_6.y"
                                            {printf("\nexternal-declaration-> function-definition\n");}
#line 1715 "A4_6.tab.c"
    break;

  case 91: /* external_declaration: declaration  */
#line 244 "A4_6.y"
                                     {printf("\nexternal-declaration-> declaration\n");}
#line 1721 "A4_6.tab.c"
    break;

  case 92: /* function_definition: type_specifier declarator declaration_list_opt compound_statement  */
#line 247 "A4_6.y"
                                                                                          {printf("\nfunction-definition-> type-specifier declarartor declaration-list-opt compound-statement\n");}
#line 1727 "A4_6.tab.c"
    break;

  case 95: /* declaration_list: declaration  */
#line 254 "A4_6.y"
                                    {printf("\ndeclaration-list-> declaration\n");}
#line 1733 "A4_6.tab.c"
    break;

  case 96: /* declaration_list: declaration_list declaration  */
#line 255 "A4_6.y"
                                                      {printf("\ndeclaration-list-> declaration-list declaration\n");}
#line 1739 "A4_6.tab.c"
    break;


#line 1743 "A4_6.tab.c"

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

#line 259 "A4_6.y"



void yyerror (char *s) 
{
  printf ("%s\n", s);
}
