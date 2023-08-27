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
#line 1 "A5_1.y"

    
    #include <iostream>
    #include "A5_1_translator.h"
    using namespace std;

    extern int yylex();         // From lexer
    void yyerror(string s);     // Function to report errors
    extern char* yytext;        // From lexer, gives the text being currently scanned
    extern int yylineno;        // Used for keeping track of the line number
    extern string varType;      // Used for storing the last encountered type

#line 84 "A5_1.tab.c"

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

#include "A5_1.tab.h"
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
  YYSYMBOL_SQUARE_BRACE_OPEN = 10,         /* SQUARE_BRACE_OPEN  */
  YYSYMBOL_SQUARE_BRACE_CLOSE = 11,        /* SQUARE_BRACE_CLOSE  */
  YYSYMBOL_PARENTHESIS_OPEN = 12,          /* PARENTHESIS_OPEN  */
  YYSYMBOL_PARENTHESIS_CLOSE = 13,         /* PARENTHESIS_CLOSE  */
  YYSYMBOL_CURLY_BRACE_OPEN = 14,          /* CURLY_BRACE_OPEN  */
  YYSYMBOL_CURLY_BRACE_CLOSE = 15,         /* CURLY_BRACE_CLOSE  */
  YYSYMBOL_ARROW = 16,                     /* ARROW  */
  YYSYMBOL_BITWISE_AND = 17,               /* BITWISE_AND  */
  YYSYMBOL_MULTIPLY = 18,                  /* MULTIPLY  */
  YYSYMBOL_ADD = 19,                       /* ADD  */
  YYSYMBOL_SUBTRACT = 20,                  /* SUBTRACT  */
  YYSYMBOL_NOT = 21,                       /* NOT  */
  YYSYMBOL_DIVIDE = 22,                    /* DIVIDE  */
  YYSYMBOL_MODULO = 23,                    /* MODULO  */
  YYSYMBOL_LESS_THAN = 24,                 /* LESS_THAN  */
  YYSYMBOL_GREATER_THAN = 25,              /* GREATER_THAN  */
  YYSYMBOL_LESS_THAN_EQUAL = 26,           /* LESS_THAN_EQUAL  */
  YYSYMBOL_GREATER_THAN_EQUAL = 27,        /* GREATER_THAN_EQUAL  */
  YYSYMBOL_EQUAL = 28,                     /* EQUAL  */
  YYSYMBOL_NOT_EQUAL = 29,                 /* NOT_EQUAL  */
  YYSYMBOL_LOGICAL_AND = 30,               /* LOGICAL_AND  */
  YYSYMBOL_LOGICAL_OR = 31,                /* LOGICAL_OR  */
  YYSYMBOL_QUESTION_MARK = 32,             /* QUESTION_MARK  */
  YYSYMBOL_COLON = 33,                     /* COLON  */
  YYSYMBOL_SEMICOLON = 34,                 /* SEMICOLON  */
  YYSYMBOL_ASSIGN = 35,                    /* ASSIGN  */
  YYSYMBOL_COMMA = 36,                     /* COMMA  */
  YYSYMBOL_IDENTIFIER = 37,                /* IDENTIFIER  */
  YYSYMBOL_INTEGER_CONSTANT = 38,          /* INTEGER_CONSTANT  */
  YYSYMBOL_CHAR_CONSTANT = 39,             /* CHAR_CONSTANT  */
  YYSYMBOL_STRING_LITERAL = 40,            /* STRING_LITERAL  */
  YYSYMBOL_THEN = 41,                      /* THEN  */
  YYSYMBOL_YYACCEPT = 42,                  /* $accept  */
  YYSYMBOL_primary_expression = 43,        /* primary_expression  */
  YYSYMBOL_constant = 44,                  /* constant  */
  YYSYMBOL_postfix_expression = 45,        /* postfix_expression  */
  YYSYMBOL_argument_expression_list_opt = 46, /* argument_expression_list_opt  */
  YYSYMBOL_argument_expression_list = 47,  /* argument_expression_list  */
  YYSYMBOL_unary_expression = 48,          /* unary_expression  */
  YYSYMBOL_unary_operator = 49,            /* unary_operator  */
  YYSYMBOL_cast_expression = 50,           /* cast_expression  */
  YYSYMBOL_multiplicative_expression = 51, /* multiplicative_expression  */
  YYSYMBOL_additive_expression = 52,       /* additive_expression  */
  YYSYMBOL_relational_expression = 53,     /* relational_expression  */
  YYSYMBOL_equality_expression = 54,       /* equality_expression  */
  YYSYMBOL_logical_and_expression = 55,    /* logical_and_expression  */
  YYSYMBOL_logical_or_expression = 56,     /* logical_or_expression  */
  YYSYMBOL_conditional_expression = 57,    /* conditional_expression  */
  YYSYMBOL_M = 58,                         /* M  */
  YYSYMBOL_N = 59,                         /* N  */
  YYSYMBOL_assignment_expression = 60,     /* assignment_expression  */
  YYSYMBOL_assignment_operator = 61,       /* assignment_operator  */
  YYSYMBOL_expression = 62,                /* expression  */
  YYSYMBOL_declaration = 63,               /* declaration  */
  YYSYMBOL_init_declarator = 64,           /* init_declarator  */
  YYSYMBOL_type_specifier = 65,            /* type_specifier  */
  YYSYMBOL_declarator = 66,                /* declarator  */
  YYSYMBOL_direct_declarator = 67,         /* direct_declarator  */
  YYSYMBOL_pointer = 68,                   /* pointer  */
  YYSYMBOL_parameter_list = 69,            /* parameter_list  */
  YYSYMBOL_parameter_declaration = 70,     /* parameter_declaration  */
  YYSYMBOL_initializer = 71,               /* initializer  */
  YYSYMBOL_statement = 72,                 /* statement  */
  YYSYMBOL_loop_statement = 73,            /* loop_statement  */
  YYSYMBOL_compound_statement = 74,        /* compound_statement  */
  YYSYMBOL_block_item_list_opt = 75,       /* block_item_list_opt  */
  YYSYMBOL_block_item_list = 76,           /* block_item_list  */
  YYSYMBOL_block_item = 77,                /* block_item  */
  YYSYMBOL_expression_statement = 78,      /* expression_statement  */
  YYSYMBOL_selection_statement = 79,       /* selection_statement  */
  YYSYMBOL_iteration_statement = 80,       /* iteration_statement  */
  YYSYMBOL_F = 81,                         /* F  */
  YYSYMBOL_X = 82,                         /* X  */
  YYSYMBOL_change_table = 83,              /* change_table  */
  YYSYMBOL_jump_statement = 84,            /* jump_statement  */
  YYSYMBOL_translation_unit = 85,          /* translation_unit  */
  YYSYMBOL_external_declaration = 86,      /* external_declaration  */
  YYSYMBOL_function_definition = 87,       /* function_definition  */
  YYSYMBOL_declaration_list_opt = 88,      /* declaration_list_opt  */
  YYSYMBOL_declaration_list = 89           /* declaration_list  */
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
#define YYFINAL  15
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   281

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  42
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  48
/* YYNRULES -- Number of rules.  */
#define YYNRULES  105
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  180

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   296


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
      35,    36,    37,    38,    39,    40,    41
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   107,   107,   113,   118,   124,   131,   136,   144,   151,
     170,   177,   182,   186,   193,   198,   206,   210,   246,   250,
     254,   258,   262,   269,   276,   290,   302,   314,   329,   333,
     345,   361,   365,   379,   393,   407,   424,   428,   444,   464,
     468,   484,   488,   501,   505,   528,   535,   545,   549,   567,
     572,   580,   586,   590,   601,   605,   609,   618,   628,   633,
     638,   658,   676,   688,   704,   712,   714,   719,   721,   727,
     738,   742,   747,   751,   755,   763,   768,   772,   776,   784,
     795,   799,   806,   810,   821,   825,   832,   836,   843,   856,
     873,   889,   907,   918,   931,   947,   952,   960,   962,   967,
     969,   974,   983,   985,   990,   992
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
  "IF", "INT", "RETURN", "VOID", "SQUARE_BRACE_OPEN", "SQUARE_BRACE_CLOSE",
  "PARENTHESIS_OPEN", "PARENTHESIS_CLOSE", "CURLY_BRACE_OPEN",
  "CURLY_BRACE_CLOSE", "ARROW", "BITWISE_AND", "MULTIPLY", "ADD",
  "SUBTRACT", "NOT", "DIVIDE", "MODULO", "LESS_THAN", "GREATER_THAN",
  "LESS_THAN_EQUAL", "GREATER_THAN_EQUAL", "EQUAL", "NOT_EQUAL",
  "LOGICAL_AND", "LOGICAL_OR", "QUESTION_MARK", "COLON", "SEMICOLON",
  "ASSIGN", "COMMA", "IDENTIFIER", "INTEGER_CONSTANT", "CHAR_CONSTANT",
  "STRING_LITERAL", "THEN", "$accept", "primary_expression", "constant",
  "postfix_expression", "argument_expression_list_opt",
  "argument_expression_list", "unary_expression", "unary_operator",
  "cast_expression", "multiplicative_expression", "additive_expression",
  "relational_expression", "equality_expression", "logical_and_expression",
  "logical_or_expression", "conditional_expression", "M", "N",
  "assignment_expression", "assignment_operator", "expression",
  "declaration", "init_declarator", "type_specifier", "declarator",
  "direct_declarator", "pointer", "parameter_list",
  "parameter_declaration", "initializer", "statement", "loop_statement",
  "compound_statement", "block_item_list_opt", "block_item_list",
  "block_item", "expression_statement", "selection_statement",
  "iteration_statement", "F", "X", "change_table", "jump_statement",
  "translation_unit", "external_declaration", "function_definition",
  "declaration_list_opt", "declaration_list", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-125)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-104)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      99,  -125,  -125,  -125,  -125,    -9,    12,  -125,  -125,  -125,
    -125,   -23,    11,    14,   -24,  -125,  -125,  -125,   241,  -125,
      -9,  -125,    99,    41,  -125,    14,   241,  -125,  -125,  -125,
    -125,  -125,  -125,  -125,  -125,  -125,  -125,  -125,    39,   -19,
     241,  -125,    77,    78,    86,    92,    -3,    91,  -125,  -125,
    -125,   -12,    40,  -125,  -125,    58,    81,  -125,    62,   241,
     241,    34,  -125,   241,  -125,  -125,   241,   241,   241,   241,
     241,   241,   241,   241,   241,   241,   241,  -125,  -125,    57,
     125,  -125,  -125,    -9,    -7,  -125,  -125,   114,    79,    67,
    -125,  -125,  -125,  -125,  -125,  -125,    77,    77,    78,    78,
      78,    78,    86,    86,   241,   241,  -125,  -125,   117,   207,
    -125,  -125,   113,  -125,  -125,  -125,   133,   134,  -125,  -125,
    -125,  -125,  -125,  -125,  -125,    99,  -125,  -125,   241,    92,
      -3,   241,   138,   241,  -125,   118,  -125,  -125,  -125,   125,
    -125,  -125,  -125,  -125,  -125,  -125,   125,  -125,   120,  -125,
     141,   136,  -125,   231,  -125,  -125,   241,  -125,   161,  -125,
     231,  -125,  -125,   151,   241,  -125,  -125,   161,   143,  -125,
    -125,   197,   125,  -125,  -125,  -125,  -125,  -125,   142,  -125
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,    55,    56,    54,   100,     0,     0,    97,    99,    64,
      59,     0,    52,    58,     0,     1,    98,    51,     0,   104,
       0,    94,   102,     0,    94,    57,     0,    18,    19,    20,
      21,    22,     2,     6,     7,     4,     8,     3,    16,    23,
       0,    24,    28,    31,    36,    39,    41,    43,    47,    69,
      53,    52,     0,   105,    61,     0,     0,    50,     0,     0,
      13,     0,    49,     0,    23,    17,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    45,    45,     0,
      81,    60,    63,    68,     0,    65,     5,     0,     0,    12,
      14,    11,    48,    25,    26,    27,    29,    30,    32,    33,
      34,    35,    37,    38,     0,     0,    45,    92,     0,     0,
      93,    87,     0,    84,    85,    70,     0,    45,    82,    71,
      72,    73,    74,    67,    62,     0,     9,    10,     0,    40,
      42,     0,     0,     0,    96,     0,    94,    86,   101,     0,
      66,    15,    46,    93,    46,    95,    81,    83,     0,    94,
       0,     0,    45,     0,    45,    79,     0,    45,     0,    44,
       0,    46,    45,    88,     0,    45,    46,     0,     0,    89,
      45,     0,    81,    90,    75,    76,    77,    78,     0,    91
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -125,  -125,  -125,  -125,  -125,  -125,   -32,  -125,   -36,    66,
      45,    65,    54,    55,  -125,     5,   -61,   -79,   -13,  -125,
     -26,    64,  -125,     1,   -17,   154,  -125,  -125,    46,  -125,
     -90,  -125,  -125,  -124,  -125,    31,   -86,     3,     6,  -125,
      29,   -22,    13,  -125,   170,  -125,  -125,  -125
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,    36,    37,    38,    88,    89,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,   104,    79,    57,    63,
     112,   113,    11,    20,    12,    13,    14,    84,    85,    50,
     114,   173,   115,   116,   117,   118,   119,   120,   121,   132,
     136,    52,   122,     6,     7,     8,    21,    22
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      58,     5,    56,    51,    65,    49,   124,     5,    64,     9,
      55,    17,    15,    10,     1,     1,    62,   105,     2,     2,
       3,     3,   151,    18,    23,  -103,    24,    77,    10,   125,
      93,    94,    95,    87,    64,    64,    64,    64,    64,    64,
      64,    64,    64,    64,    64,   131,    18,    90,   178,    59,
      92,    60,    54,    26,    80,    61,   139,    83,    27,    28,
      29,    30,    31,   148,     4,   150,   123,   157,   161,    81,
       4,    91,    64,    64,   162,    86,    19,   169,    32,    33,
      34,    35,   163,   135,     1,   174,    53,   168,     2,   106,
       3,   156,   127,   158,    82,    66,   160,    69,    70,    67,
      68,   164,     1,   128,   167,   142,     2,   144,     3,   171,
      71,    72,    73,    74,   146,   141,    98,    99,   100,   101,
      75,    76,    78,   -46,    64,   126,    83,   153,     1,   133,
     107,   108,     2,   109,     3,    96,    97,    26,   166,   110,
     102,   103,    27,    28,    29,    30,    31,   137,   138,   -80,
     143,   155,   145,   152,   154,   165,   170,   179,   129,   111,
     130,   159,    32,    33,    34,    35,   107,   108,    25,   109,
     147,   140,   149,    26,   175,   110,    16,   176,    27,    28,
      29,    30,    31,     0,   177,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   111,     0,     0,    32,    33,
      34,    35,   107,   108,     0,   109,     0,     0,     0,    26,
       0,   172,     0,     0,    27,    28,    29,    30,    31,    26,
       0,     0,     0,     0,    27,    28,    29,    30,    31,     0,
       0,   111,     0,     0,    32,    33,    34,    35,     0,     0,
       0,   134,     0,    26,    32,    33,    34,    35,    27,    28,
      29,    30,    31,    26,     0,     0,     0,     0,    27,    28,
      29,    30,    31,     0,     0,   111,     0,     0,    32,    33,
      34,    35,     0,     0,     0,     0,     0,     0,    32,    33,
      34,    35
};

static const yytype_int16 yycheck[] =
{
      26,     0,    24,    20,    40,    18,    13,     6,    40,    18,
      23,    34,     0,    37,     3,     3,    35,    78,     7,     7,
       9,     9,   146,    35,    10,    14,    12,    30,    37,    36,
      66,    67,    68,    59,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,   106,    35,    60,   172,    10,
      63,    12,    11,    12,    14,    16,   117,    56,    17,    18,
      19,    20,    21,   142,     0,   144,    83,   153,   158,    11,
       6,    37,   104,   105,   160,    13,    12,   167,    37,    38,
      39,    40,   161,   109,     3,   171,    22,   166,     7,    32,
       9,   152,    13,   154,    13,    18,   157,    19,    20,    22,
      23,   162,     3,    36,   165,   131,     7,   133,     9,   170,
      24,    25,    26,    27,   136,   128,    71,    72,    73,    74,
      28,    29,    31,    32,   156,    11,   125,   149,     3,    12,
       5,     6,     7,     8,     9,    69,    70,    12,   164,    14,
      75,    76,    17,    18,    19,    20,    21,    34,    15,    15,
      12,    15,    34,    33,    13,     4,    13,    15,   104,    34,
     105,   156,    37,    38,    39,    40,     5,     6,    14,     8,
     139,   125,   143,    12,   171,    14,     6,   171,    17,    18,
      19,    20,    21,    -1,   171,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    34,    -1,    -1,    37,    38,
      39,    40,     5,     6,    -1,     8,    -1,    -1,    -1,    12,
      -1,    14,    -1,    -1,    17,    18,    19,    20,    21,    12,
      -1,    -1,    -1,    -1,    17,    18,    19,    20,    21,    -1,
      -1,    34,    -1,    -1,    37,    38,    39,    40,    -1,    -1,
      -1,    34,    -1,    12,    37,    38,    39,    40,    17,    18,
      19,    20,    21,    12,    -1,    -1,    -1,    -1,    17,    18,
      19,    20,    21,    -1,    -1,    34,    -1,    -1,    37,    38,
      39,    40,    -1,    -1,    -1,    -1,    -1,    -1,    37,    38,
      39,    40
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     3,     7,     9,    63,    65,    85,    86,    87,    18,
      37,    64,    66,    67,    68,     0,    86,    34,    35,    63,
      65,    88,    89,    10,    12,    67,    12,    17,    18,    19,
      20,    21,    37,    38,    39,    40,    43,    44,    45,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    60,
      71,    66,    83,    63,    11,    60,    83,    60,    62,    10,
      12,    16,    35,    61,    48,    50,    18,    22,    23,    19,
      20,    24,    25,    26,    27,    28,    29,    30,    31,    59,
      14,    11,    13,    65,    69,    70,    13,    62,    46,    47,
      60,    37,    60,    50,    50,    50,    51,    51,    52,    52,
      52,    52,    53,    53,    58,    58,    32,     5,     6,     8,
      14,    34,    62,    63,    72,    74,    75,    76,    77,    78,
      79,    80,    84,    66,    13,    36,    11,    13,    36,    54,
      55,    58,    81,    12,    34,    62,    82,    34,    15,    58,
      70,    60,    62,    12,    62,    34,    83,    77,    59,    82,
      59,    75,    33,    83,    13,    15,    58,    78,    58,    57,
      58,    72,    78,    59,    58,     4,    62,    58,    59,    72,
      13,    58,    14,    73,    78,    79,    80,    84,    75,    15
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    42,    43,    43,    43,    43,    44,    44,    45,    45,
      45,    45,    46,    46,    47,    47,    48,    48,    49,    49,
      49,    49,    49,    50,    51,    51,    51,    51,    52,    52,
      52,    53,    53,    53,    53,    53,    54,    54,    54,    55,
      55,    56,    56,    57,    57,    58,    59,    60,    60,    61,
      62,    63,    64,    64,    65,    65,    65,    66,    66,    67,
      67,    67,    67,    67,    68,    69,    69,    70,    70,    71,
      72,    72,    72,    72,    72,    73,    73,    73,    73,    74,
      75,    75,    76,    76,    77,    77,    78,    78,    79,    79,
      80,    80,    81,    82,    83,    84,    84,    85,    85,    86,
      86,    87,    88,    88,    89,    89
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     1,     3,     1,     1,     1,     4,
       4,     3,     1,     0,     1,     3,     1,     2,     1,     1,
       1,     1,     1,     1,     1,     3,     3,     3,     1,     3,
       3,     1,     3,     3,     3,     3,     1,     3,     3,     1,
       4,     1,     4,     1,     9,     0,     0,     1,     3,     1,
       1,     3,     1,     3,     1,     1,     1,     2,     1,     1,
       4,     3,     5,     4,     1,     1,     3,     2,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     5,
       1,     0,     1,     3,     1,     1,     2,     1,     8,    11,
      14,    16,     0,     0,     0,     3,     2,     1,     2,     1,
       1,     7,     1,     0,     1,     2
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
  case 2: /* primary_expression: IDENTIFIER  */
#line 108 "A5_1.y"
        {
            (yyval.expr) = new expression();  // Create new expression
            (yyval.expr)->loc = (yyvsp[0].symp);           // Store pointer to entry in the symbol table
            (yyval.expr)->type = "non_bool";
        }
#line 1320 "A5_1.tab.c"
    break;

  case 3: /* primary_expression: constant  */
#line 114 "A5_1.y"
        {
            (yyval.expr) = new expression();  // Create new expression
            (yyval.expr)->loc = (yyvsp[0].symp);           // Store pointer to entry in the symbol table
        }
#line 1329 "A5_1.tab.c"
    break;

  case 4: /* primary_expression: STRING_LITERAL  */
#line 119 "A5_1.y"
        {
            (yyval.expr) = new expression();  // Create new expression
            (yyval.expr)->loc = symbolTable::gentemp(new symbolType("ptr"), (yyvsp[0].charval));  // Create a new temporary, and store the value in that temporary
            (yyval.expr)->loc->type->arrType = new symbolType("char");
        }
#line 1339 "A5_1.tab.c"
    break;

  case 5: /* primary_expression: PARENTHESIS_OPEN expression PARENTHESIS_CLOSE  */
#line 125 "A5_1.y"
        {
            (yyval.expr) = (yyvsp[-1].expr);    // Simple assignment
        }
#line 1347 "A5_1.tab.c"
    break;

  case 6: /* constant: INTEGER_CONSTANT  */
#line 132 "A5_1.y"
        {
            (yyval.symp) = symbolTable::gentemp(new symbolType("int"), convertIntToString((yyvsp[0].intval)));   // Create a new temporary, and store the value in that temporary
            emit("=", (yyval.symp)->name, (yyvsp[0].intval));
        }
#line 1356 "A5_1.tab.c"
    break;

  case 7: /* constant: CHAR_CONSTANT  */
#line 137 "A5_1.y"
        {
            (yyval.symp) = symbolTable::gentemp(new symbolType("float"), string((yyvsp[0].charval)));     // Create a new temporary, and store the value in that temporary
            emit("=", (yyval.symp)->name, string((yyvsp[0].charval)));
        }
#line 1365 "A5_1.tab.c"
    break;

  case 8: /* postfix_expression: primary_expression  */
#line 145 "A5_1.y"
        {
            (yyval.arr) = new Array();           // Create a new Array
            (yyval.arr)->Array = (yyvsp[0].expr)->loc;        // Store the location of the primary expression
            (yyval.arr)->type = (yyvsp[0].expr)->loc->type;   // Update the type
            (yyval.arr)->loc = (yyval.arr)->Array;
        }
#line 1376 "A5_1.tab.c"
    break;

  case 9: /* postfix_expression: postfix_expression SQUARE_BRACE_OPEN expression SQUARE_BRACE_CLOSE  */
#line 152 "A5_1.y"
        {
            (yyval.arr) = new Array();               // Create a new Array
            (yyval.arr)->type = (yyvsp[-3].arr)->type->arrType;   // Set the type equal to the element type
            (yyval.arr)->Array = (yyvsp[-3].arr)->Array;          // Copy the base
            (yyval.arr)->loc = symbolTable::gentemp(new symbolType("int"));  // Store address of new temporary
            (yyval.arr)->atype = "arr";              // Set atype to "arr"

            if((yyvsp[-3].arr)->atype == "arr") {        // If we have an "arr" type then, multiply the size of the sub-type of Array with the expression value and add
                symbol* sym = symbolTable::gentemp(new symbolType("int"));
                int sz = sizeOfType((yyval.arr)->type);
                emit("*", sym->name, (yyvsp[-1].expr)->loc->name, convertIntToString(sz));
                emit("+", (yyval.arr)->loc->name, (yyvsp[-3].arr)->loc->name, sym->name);
            }
            else {                          // Compute the size
                int sz = sizeOfType((yyval.arr)->type);
                emit("*", (yyval.arr)->loc->name, (yyvsp[-1].expr)->loc->name, convertIntToString(sz));
            }
        }
#line 1399 "A5_1.tab.c"
    break;

  case 10: /* postfix_expression: postfix_expression PARENTHESIS_OPEN argument_expression_list_opt PARENTHESIS_CLOSE  */
#line 171 "A5_1.y"
        {   
            // Corresponds to calling a function with the function name and the appropriate number of parameters
            (yyval.arr) = new Array();
            (yyval.arr)->Array = symbolTable::gentemp((yyvsp[-3].arr)->type);
            emit("call", (yyval.arr)->Array->name, (yyvsp[-3].arr)->Array->name, convertIntToString((yyvsp[-1].numParams)));
        }
#line 1410 "A5_1.tab.c"
    break;

  case 11: /* postfix_expression: postfix_expression ARROW IDENTIFIER  */
#line 178 "A5_1.y"
        { /* Ignored */ }
#line 1416 "A5_1.tab.c"
    break;

  case 12: /* argument_expression_list_opt: argument_expression_list  */
#line 183 "A5_1.y"
        {
            (yyval.numParams) = (yyvsp[0].numParams);    // Assign $1 to $$
        }
#line 1424 "A5_1.tab.c"
    break;

  case 13: /* argument_expression_list_opt: %empty  */
#line 187 "A5_1.y"
        {
            (yyval.numParams) = 0;     // No arguments, just equate to zero
        }
#line 1432 "A5_1.tab.c"
    break;

  case 14: /* argument_expression_list: assignment_expression  */
#line 194 "A5_1.y"
        {
            (yyval.numParams) = 1;                         // consider one argument
            emit("param", (yyvsp[0].expr)->loc->name);   // emit parameter
        }
#line 1441 "A5_1.tab.c"
    break;

  case 15: /* argument_expression_list: argument_expression_list COMMA assignment_expression  */
#line 199 "A5_1.y"
        {
            (yyval.numParams) = (yyvsp[-2].numParams) + 1;                    // consider one more argument, so add 1
            emit("param", (yyvsp[0].expr)->loc->name);   // emit parameter
        }
#line 1450 "A5_1.tab.c"
    break;

  case 16: /* unary_expression: postfix_expression  */
#line 207 "A5_1.y"
        {
            (yyval.arr) = (yyvsp[0].arr);    // Assign $1 to $$
        }
#line 1458 "A5_1.tab.c"
    break;

  case 17: /* unary_expression: unary_operator cast_expression  */
#line 211 "A5_1.y"
        {
            // Case of unary operator
            (yyval.arr) = new Array();
            switch((yyvsp[-1].unaryOp)) {
                case '&':   // Address
                    (yyval.arr)->Array = symbolTable::gentemp(new symbolType("ptr"));    // Generate a pointer temporary
                    (yyval.arr)->Array->type->arrType = (yyvsp[0].arr)->Array->type;                 // Assign corresponding type
                    emit("= &", (yyval.arr)->Array->name, (yyvsp[0].arr)->Array->name);              // Emit the quad
                    break;
                case '*':   // De-referencing
                    (yyval.arr)->atype = "ptr";
                    (yyval.arr)->loc = symbolTable::gentemp((yyvsp[0].arr)->Array->type->arrType);   // Generate a temporary of the appropriate type
                    (yyval.arr)->Array = (yyvsp[0].arr)->Array;                                      // Assign
                    emit("= *", (yyval.arr)->loc->name, (yyvsp[0].arr)->Array->name);                // Emit the quad
                    break;
                case '+':   // Unary plus
                    (yyval.arr) = (yyvsp[0].arr);    // Simple assignment
                    break;
                case '-':   // Unary minus
                    (yyval.arr)->Array = symbolTable::gentemp(new symbolType((yyvsp[0].arr)->Array->type->type));    // Generate temporary of the same base type
                    emit("= -", (yyval.arr)->Array->name, (yyvsp[0].arr)->Array->name);                              // Emit the quad
                    break;
                case '~':   // Bitwise not
                    (yyval.arr)->Array = symbolTable::gentemp(new symbolType((yyvsp[0].arr)->Array->type->type));    // Generate temporary of the same base type
                    emit("= ~", (yyval.arr)->Array->name, (yyvsp[0].arr)->Array->name);                              // Emit the quad
                    break;
                case '!':   // Logical not 
                    (yyval.arr)->Array = symbolTable::gentemp(new symbolType((yyvsp[0].arr)->Array->type->type));    // Generate temporary of the same base type
                    emit("= !", (yyval.arr)->Array->name, (yyvsp[0].arr)->Array->name);                              // Emit the quad
                    break;
            }
        }
#line 1495 "A5_1.tab.c"
    break;

  case 18: /* unary_operator: BITWISE_AND  */
#line 247 "A5_1.y"
        {
            (yyval.unaryOp) = '&';
        }
#line 1503 "A5_1.tab.c"
    break;

  case 19: /* unary_operator: MULTIPLY  */
#line 251 "A5_1.y"
        {
            (yyval.unaryOp) = '*';
        }
#line 1511 "A5_1.tab.c"
    break;

  case 20: /* unary_operator: ADD  */
#line 255 "A5_1.y"
        {
            (yyval.unaryOp) = '+';
        }
#line 1519 "A5_1.tab.c"
    break;

  case 21: /* unary_operator: SUBTRACT  */
#line 259 "A5_1.y"
        {
            (yyval.unaryOp) = '-';
        }
#line 1527 "A5_1.tab.c"
    break;

  case 22: /* unary_operator: NOT  */
#line 263 "A5_1.y"
        {
            (yyval.unaryOp) = '!';
        }
#line 1535 "A5_1.tab.c"
    break;

  case 23: /* cast_expression: unary_expression  */
#line 270 "A5_1.y"
        {
            (yyval.arr) = (yyvsp[0].arr);    // Simple assignment
        }
#line 1543 "A5_1.tab.c"
    break;

  case 24: /* multiplicative_expression: cast_expression  */
#line 277 "A5_1.y"
        {
            (yyval.expr) = new expression();          // Generate new expression
            if((yyvsp[0].arr)->atype == "arr") {        // atype "arr"
                (yyval.expr)->loc = symbolTable::gentemp((yyvsp[0].arr)->loc->type);  // Generate new temporary
                emit("=[]", (yyval.expr)->loc->name, (yyvsp[0].arr)->Array->name, (yyvsp[0].arr)->loc->name);     // Emit the quad
            }
            else if((yyvsp[0].arr)->atype == "ptr") {   // atype "ptr"
                (yyval.expr)->loc = (yyvsp[0].arr)->loc;          // Assign the symbol table entry
            }
            else {
                (yyval.expr)->loc = (yyvsp[0].arr)->Array;
            }
        }
#line 1561 "A5_1.tab.c"
    break;

  case 25: /* multiplicative_expression: multiplicative_expression MULTIPLY cast_expression  */
#line 291 "A5_1.y"
        {   
            // Indicates multiplication
            if(typecheck((yyvsp[-2].expr)->loc, (yyvsp[0].arr)->Array)) {     // Check for type compatibility
                (yyval.expr) = new expression();                                                  // Generate new expression
                (yyval.expr)->loc = symbolTable::gentemp(new symbolType((yyvsp[-2].expr)->loc->type->type));    // Generate new temporary
                emit("*", (yyval.expr)->loc->name, (yyvsp[-2].expr)->loc->name, (yyvsp[0].arr)->Array->name);               // Emit the quad
            }
            else {
                yyerror("Type Error");
            }
        }
#line 1577 "A5_1.tab.c"
    break;

  case 26: /* multiplicative_expression: multiplicative_expression DIVIDE cast_expression  */
#line 303 "A5_1.y"
        {
            // Indicates division
            if(typecheck((yyvsp[-2].expr)->loc, (yyvsp[0].arr)->Array)) {     // Check for type compatibility
                (yyval.expr) = new expression();                                                  // Generate new expression
                (yyval.expr)->loc = symbolTable::gentemp(new symbolType((yyvsp[-2].expr)->loc->type->type));    // Generate new temporary
                emit("/", (yyval.expr)->loc->name, (yyvsp[-2].expr)->loc->name, (yyvsp[0].arr)->Array->name);               // Emit the quad
            }
            else {
                yyerror("Type Error");
            }
        }
#line 1593 "A5_1.tab.c"
    break;

  case 27: /* multiplicative_expression: multiplicative_expression MODULO cast_expression  */
#line 315 "A5_1.y"
        {
            // Indicates modulo
            if(typecheck((yyvsp[-2].expr)->loc, (yyvsp[0].arr)->Array)) {     // Check for type compatibility
                (yyval.expr) = new expression();                                                  // Generate new expression
                (yyval.expr)->loc = symbolTable::gentemp(new symbolType((yyvsp[-2].expr)->loc->type->type));    // Generate new temporary
                emit("%", (yyval.expr)->loc->name, (yyvsp[-2].expr)->loc->name, (yyvsp[0].arr)->Array->name);               // Emit the quad
            }
            else {
                yyerror("Type Error");
            }
        }
#line 1609 "A5_1.tab.c"
    break;

  case 28: /* additive_expression: multiplicative_expression  */
#line 330 "A5_1.y"
        {
            (yyval.expr) = (yyvsp[0].expr);    // Simple assignment
        }
#line 1617 "A5_1.tab.c"
    break;

  case 29: /* additive_expression: additive_expression ADD multiplicative_expression  */
#line 334 "A5_1.y"
        {   
            // Indicates addition
            if(typecheck((yyvsp[-2].expr)->loc, (yyvsp[0].expr)->loc)) {       // Check for type compatibility
                (yyval.expr) = new expression();                                                  // Generate new expression
                (yyval.expr)->loc = symbolTable::gentemp(new symbolType((yyvsp[-2].expr)->loc->type->type));    // Generate new temporary
                emit("+", (yyval.expr)->loc->name, (yyvsp[-2].expr)->loc->name, (yyvsp[0].expr)->loc->name);                 // Emit the quad
            }
            else {
                yyerror("Type Error");
            }
        }
#line 1633 "A5_1.tab.c"
    break;

  case 30: /* additive_expression: additive_expression SUBTRACT multiplicative_expression  */
#line 346 "A5_1.y"
        {
            // Indicates subtraction
            if(typecheck((yyvsp[-2].expr)->loc, (yyvsp[0].expr)->loc)) {       // Check for type compatibility
                (yyval.expr) = new expression();                                                  // Generate new expression
                (yyval.expr)->loc = symbolTable::gentemp(new symbolType((yyvsp[-2].expr)->loc->type->type));    // Generate new temporary
                emit("-", (yyval.expr)->loc->name, (yyvsp[-2].expr)->loc->name, (yyvsp[0].expr)->loc->name);                 // Emit the quad
            }
            else {
                yyerror("Type Error");
            }
        }
#line 1649 "A5_1.tab.c"
    break;

  case 31: /* relational_expression: additive_expression  */
#line 362 "A5_1.y"
        {
            (yyval.expr) = (yyvsp[0].expr);    // Simple assignment
        }
#line 1657 "A5_1.tab.c"
    break;

  case 32: /* relational_expression: relational_expression LESS_THAN additive_expression  */
#line 366 "A5_1.y"
        {
            if(typecheck((yyvsp[-2].expr)->loc, (yyvsp[0].expr)->loc)) {                   // Check for type compatibility
                (yyval.expr) = new expression();                          // Generate new expression of type bool
                (yyval.expr)->type = "bool";
                (yyval.expr)->truelist = makelist(nextinstr());           // Create truelist for boolean expression
                (yyval.expr)->falselist = makelist(nextinstr() + 1);      // Create falselist for boolean expression
                emit("<", "", (yyvsp[-2].expr)->loc->name, (yyvsp[0].expr)->loc->name);    // Emit "if x < y goto ..."
                emit("goto", "");                               // Emit "goto ..."
            }
            else {
                yyerror("Type Error");
            }
        }
#line 1675 "A5_1.tab.c"
    break;

  case 33: /* relational_expression: relational_expression GREATER_THAN additive_expression  */
#line 380 "A5_1.y"
        {
            if(typecheck((yyvsp[-2].expr)->loc, (yyvsp[0].expr)->loc)) {                   // Check for type compatibility
                (yyval.expr) = new expression();                          // Generate new expression of type bool
                (yyval.expr)->type = "bool";
                (yyval.expr)->truelist = makelist(nextinstr());           // Create truelist for boolean expression
                (yyval.expr)->falselist = makelist(nextinstr() + 1);      // Create falselist for boolean expression
                emit(">", "", (yyvsp[-2].expr)->loc->name, (yyvsp[0].expr)->loc->name);    // Emit "if x > y goto ..."
                emit("goto", "");                               // Emit "goto ..."
            }
            else {
                yyerror("Type Error");
            }
        }
#line 1693 "A5_1.tab.c"
    break;

  case 34: /* relational_expression: relational_expression LESS_THAN_EQUAL additive_expression  */
#line 394 "A5_1.y"
        {
            if(typecheck((yyvsp[-2].expr)->loc, (yyvsp[0].expr)->loc)) {                   // Check for type compatibility
                (yyval.expr) = new expression();                          // Generate new expression of type bool
                (yyval.expr)->type = "bool";
                (yyval.expr)->truelist = makelist(nextinstr());           // Create truelist for boolean expression
                (yyval.expr)->falselist = makelist(nextinstr() + 1);      // Create falselist for boolean expression
                emit("<=", "", (yyvsp[-2].expr)->loc->name, (yyvsp[0].expr)->loc->name);   // Emit "if x <= y goto ..."
                emit("goto", "");                               // Emit "goto ..."
            }
            else {
                yyerror("Type Error");
            }
        }
#line 1711 "A5_1.tab.c"
    break;

  case 35: /* relational_expression: relational_expression GREATER_THAN_EQUAL additive_expression  */
#line 408 "A5_1.y"
        {
            if(typecheck((yyvsp[-2].expr)->loc, (yyvsp[0].expr)->loc)) {                   // Check for type compatibility
                (yyval.expr) = new expression();                          // Generate new expression of type bool
                (yyval.expr)->type = "bool";
                (yyval.expr)->truelist = makelist(nextinstr());           // Create truelist for boolean expression
                (yyval.expr)->falselist = makelist(nextinstr() + 1);      // Create falselist for boolean expression
                emit(">=", "", (yyvsp[-2].expr)->loc->name, (yyvsp[0].expr)->loc->name);   // Emit "if x >= y goto ..."
                emit("goto", "");                               // Emit "goto ..."
            }
            else {
                yyerror("Type Error");
            }
        }
#line 1729 "A5_1.tab.c"
    break;

  case 36: /* equality_expression: relational_expression  */
#line 425 "A5_1.y"
        {
            (yyval.expr) = (yyvsp[0].expr);    // Simple assignment
        }
#line 1737 "A5_1.tab.c"
    break;

  case 37: /* equality_expression: equality_expression EQUAL relational_expression  */
#line 429 "A5_1.y"
        {
            if(typecheck((yyvsp[-2].expr)->loc, (yyvsp[0].expr)->loc)) {                   // Check for type compatibility
                convertBoolToInt((yyvsp[-2].expr));                           // Convert bool to int
                convertBoolToInt((yyvsp[0].expr));
                (yyval.expr) = new expression();                          // Generate new expression of type bool
                (yyval.expr)->type = "bool";
                (yyval.expr)->truelist = makelist(nextinstr());           // Create truelist for boolean expression
                (yyval.expr)->falselist = makelist(nextinstr() + 1);      // Create falselist for boolean expression
                emit("==", "", (yyvsp[-2].expr)->loc->name, (yyvsp[0].expr)->loc->name);   // Emit "if x == y goto ..."
                emit("goto", "");                               // Emit "goto ..."
            }
            else {
                yyerror("Type Error");
            }
        }
#line 1757 "A5_1.tab.c"
    break;

  case 38: /* equality_expression: equality_expression NOT_EQUAL relational_expression  */
#line 445 "A5_1.y"
        {
            if(typecheck((yyvsp[-2].expr)->loc, (yyvsp[0].expr)->loc)) {                   // Check for type compatibility
                convertBoolToInt((yyvsp[-2].expr));                           // Convert bool to int
                convertBoolToInt((yyvsp[0].expr));
                (yyval.expr) = new expression();                          // Generate new expression of type bool
                (yyval.expr)->type = "bool";
                (yyval.expr)->truelist = makelist(nextinstr());           // Create truelist for boolean expression
                (yyval.expr)->falselist = makelist(nextinstr() + 1);      // Create falselist for boolean expression
                emit("!=", "", (yyvsp[-2].expr)->loc->name, (yyvsp[0].expr)->loc->name);   // Emit "if x != y goto ..."
                emit("goto", "");                               // Emit "goto ..."
            }
            else {
                yyerror("Type Error");
            }
        }
#line 1777 "A5_1.tab.c"
    break;

  case 39: /* logical_and_expression: equality_expression  */
#line 465 "A5_1.y"
        {
            (yyval.expr) = (yyvsp[0].expr);    // Simple assignment
        }
#line 1785 "A5_1.tab.c"
    break;

  case 40: /* logical_and_expression: logical_and_expression LOGICAL_AND M equality_expression  */
#line 469 "A5_1.y"
        {
            /*
                Here, we have augmented the grammar with the non-terminal M to facilitate backpatching
            */
            convertIntToBool((yyvsp[-3].expr));                                   // Convert the expressions from int to bool
            convertIntToBool((yyvsp[0].expr));
            (yyval.expr) = new expression();                                  // Create a new bool expression for the result
            (yyval.expr)->type = "bool";
            backpatch((yyvsp[-3].expr)->truelist, (yyvsp[-1].instr));                            // Backpatching
            (yyval.expr)->truelist = (yyvsp[0].expr)->truelist;                            // Generate truelist from truelist of $4
            (yyval.expr)->falselist = merge((yyvsp[-3].expr)->falselist, (yyvsp[0].expr)->falselist);    // Generate falselist by merging the falselists of $1 and $4
        }
#line 1802 "A5_1.tab.c"
    break;

  case 41: /* logical_or_expression: logical_and_expression  */
#line 485 "A5_1.y"
        {
            (yyval.expr) = (yyvsp[0].expr);    // Simple assignment
        }
#line 1810 "A5_1.tab.c"
    break;

  case 42: /* logical_or_expression: logical_or_expression LOGICAL_OR M logical_and_expression  */
#line 489 "A5_1.y"
        {
            convertIntToBool((yyvsp[-3].expr));                                   // Convert the expressions from int to bool
            convertIntToBool((yyvsp[0].expr));
            (yyval.expr) = new expression();                                  // Create a new bool expression for the result
            (yyval.expr)->type = "bool";
            backpatch((yyvsp[-3].expr)->falselist, (yyvsp[-1].instr));                           // Backpatching
            (yyval.expr)->falselist = (yyvsp[0].expr)->falselist;                          // Generate falselist from falselist of $4
            (yyval.expr)->truelist = merge((yyvsp[-3].expr)->truelist, (yyvsp[0].expr)->truelist);       // Generate truelist by merging the truelists of $1 and $4
        }
#line 1824 "A5_1.tab.c"
    break;

  case 43: /* conditional_expression: logical_or_expression  */
#line 502 "A5_1.y"
        {
            (yyval.expr) = (yyvsp[0].expr);    // Simple assignment
        }
#line 1832 "A5_1.tab.c"
    break;

  case 44: /* conditional_expression: logical_or_expression N QUESTION_MARK M expression N COLON M conditional_expression  */
#line 506 "A5_1.y"
        {   
            /*
                Note the augmented grammar with the non-terminals M and N
            */
            (yyval.expr)->loc = symbolTable::gentemp((yyvsp[-4].expr)->loc->type);      // Generate temporary for the expression
            (yyval.expr)->loc->update((yyvsp[-4].expr)->loc->type);
            emit("=", (yyval.expr)->loc->name, (yyvsp[0].expr)->loc->name);            // Assign the conditional expression
            list<int> l1 = makelist(nextinstr());
            emit("goto", "");                                   // Prevent fall-through
            backpatch((yyvsp[-3].stmt)->nextlist, nextinstr());               // Make list with next instruction
            emit("=", (yyval.expr)->loc->name, (yyvsp[-4].expr)->loc->name);
            list<int> l2 = makelist(nextinstr());               // Make list with next instruction
            l1 = merge(l1, l2);                                 // Merge the two lists
            emit("goto", "");                                   // Prevent fall-through
            backpatch((yyvsp[-7].stmt)->nextlist, nextinstr());               // Backpatching
            convertIntToBool((yyvsp[-8].expr));                               // Convert expression to bool
            backpatch((yyvsp[-8].expr)->truelist, (yyvsp[-5].instr));                        // When $1 is true, control goes to $4 (expression)
            backpatch((yyvsp[-8].expr)->falselist, (yyvsp[-1].instr));                       // When $1 is false, control goes to $8 (conditional_expression)
            backpatch(l1, nextinstr());
        }
#line 1857 "A5_1.tab.c"
    break;

  case 45: /* M: %empty  */
#line 529 "A5_1.y"
        {   
            // Stores the next instruction value, and helps in backpatching
            (yyval.instr) = nextinstr();
        }
#line 1866 "A5_1.tab.c"
    break;

  case 46: /* N: %empty  */
#line 536 "A5_1.y"
        {
            // Helps in control flow
            (yyval.stmt) = new statement();
            (yyval.stmt)->nextlist = makelist(nextinstr());
            emit("goto", "");
        }
#line 1877 "A5_1.tab.c"
    break;

  case 47: /* assignment_expression: conditional_expression  */
#line 546 "A5_1.y"
        {
            (yyval.expr) = (yyvsp[0].expr);    // Simple assignment
        }
#line 1885 "A5_1.tab.c"
    break;

  case 48: /* assignment_expression: unary_expression assignment_operator assignment_expression  */
#line 550 "A5_1.y"
        {
            if((yyvsp[-2].arr)->atype == "arr") {        // If atype is "arr", convert and emit
                (yyvsp[0].expr)->loc = convertType((yyvsp[0].expr)->loc, (yyvsp[-2].arr)->type->type);
                emit("[]=", (yyvsp[-2].arr)->Array->name, (yyvsp[-2].arr)->loc->name, (yyvsp[0].expr)->loc->name);
            }
            else if((yyvsp[-2].arr)->atype == "ptr") {   // If atype is "ptr", emit 
                emit("*=", (yyvsp[-2].arr)->Array->name, (yyvsp[0].expr)->loc->name);
            }
            else {
                (yyvsp[0].expr)->loc = convertType((yyvsp[0].expr)->loc, (yyvsp[-2].arr)->Array->type->type);
                emit("=", (yyvsp[-2].arr)->Array->name, (yyvsp[0].expr)->loc->name);
            }
            (yyval.expr) = (yyvsp[0].expr);
        }
#line 1904 "A5_1.tab.c"
    break;

  case 49: /* assignment_operator: ASSIGN  */
#line 568 "A5_1.y"
        { /* Ignored */ }
#line 1910 "A5_1.tab.c"
    break;

  case 50: /* expression: assignment_expression  */
#line 573 "A5_1.y"
        {
            (yyval.expr) = (yyvsp[0].expr);
        }
#line 1918 "A5_1.tab.c"
    break;

  case 51: /* declaration: type_specifier init_declarator SEMICOLON  */
#line 581 "A5_1.y"
        { /* Ignored */ }
#line 1924 "A5_1.tab.c"
    break;

  case 52: /* init_declarator: declarator  */
#line 587 "A5_1.y"
        {
            (yyval.symp) = (yyvsp[0].symp);
        }
#line 1932 "A5_1.tab.c"
    break;

  case 53: /* init_declarator: declarator ASSIGN initializer  */
#line 591 "A5_1.y"
        {   
            // Find out the initial value and emit it
            if((yyvsp[0].symp)->value != "") {
                (yyvsp[-2].symp)->value = (yyvsp[0].symp)->value;
            }
            emit("=", (yyvsp[-2].symp)->name, (yyvsp[0].symp)->name);
        }
#line 1944 "A5_1.tab.c"
    break;

  case 54: /* type_specifier: VOID  */
#line 602 "A5_1.y"
        {
            varType = "void";   // Store the latest encountered type in varType
        }
#line 1952 "A5_1.tab.c"
    break;

  case 55: /* type_specifier: CHAR  */
#line 606 "A5_1.y"
        {
            varType = "char";   // Store the latest encountered type in varType
        }
#line 1960 "A5_1.tab.c"
    break;

  case 56: /* type_specifier: INT  */
#line 610 "A5_1.y"
        {
            varType = "int";    // Store the latest encountered type in varType
        }
#line 1968 "A5_1.tab.c"
    break;

  case 57: /* declarator: pointer direct_declarator  */
#line 619 "A5_1.y"
        {
            symbolType* t = (yyvsp[-1].symType);
            // In case of multi-dimesnional arrays, keep on going down in a hierarchial fashion to get the base type
            while(t->arrType != NULL) {
                t = t->arrType;
            }
            t->arrType = (yyvsp[0].symp)->type;  // Store the base type
            (yyval.symp) = (yyvsp[0].symp)->update((yyvsp[-1].symType));    // Update
        }
#line 1982 "A5_1.tab.c"
    break;

  case 58: /* declarator: direct_declarator  */
#line 629 "A5_1.y"
        {/* Ignored */}
#line 1988 "A5_1.tab.c"
    break;

  case 59: /* direct_declarator: IDENTIFIER  */
#line 634 "A5_1.y"
        {
            (yyval.symp) = (yyvsp[0].symp)->update(new symbolType(varType));   // For an identifier, update the type to varType
            currentSymbol = (yyval.symp);                         // Update pointer to current symbol
        }
#line 1997 "A5_1.tab.c"
    break;

  case 60: /* direct_declarator: direct_declarator SQUARE_BRACE_OPEN assignment_expression SQUARE_BRACE_CLOSE  */
#line 639 "A5_1.y"
        {
            symbolType* t = (yyvsp[-3].symp)->type;
            symbolType* prev = NULL;
            // Keep moving recursively to get the base type
            while(t->type == "arr") {
                prev = t;
                t = t->arrType;
            }
            if(prev == NULL) {
                int temp = atoi((yyvsp[-1].expr)->loc->value.c_str());                // Get initial value
                symbolType* tp = new symbolType("arr", (yyvsp[-3].symp)->type, temp); // Create that type
                (yyval.symp) = (yyvsp[-3].symp)->update(tp);                                    // Update the symbol table for that symbol
            }
            else {
                int temp = atoi((yyvsp[-1].expr)->loc->value.c_str());                // Get initial value
                prev->arrType = new symbolType("arr", t, temp);         // Create that type
                (yyval.symp) = (yyvsp[-3].symp)->update((yyvsp[-3].symp)->type);                              // Update the symbol table for that symbol
            }
        }
#line 2021 "A5_1.tab.c"
    break;

  case 61: /* direct_declarator: direct_declarator SQUARE_BRACE_OPEN SQUARE_BRACE_CLOSE  */
#line 659 "A5_1.y"
        {
            symbolType* t = (yyvsp[-2].symp)->type;
            symbolType* prev = NULL;
            // Keep moving recursively to get the base type
            while(t->type == "arr") {
                prev = t;
                t = t->arrType;
            }
            if(prev == NULL) {
                symbolType* tp = new symbolType("arr", (yyvsp[-2].symp)->type, 0);
                (yyval.symp) = (yyvsp[-2].symp)->update(tp);
            }
            else {
                prev->arrType = new symbolType("arr", t, 0);
                (yyval.symp) = (yyvsp[-2].symp)->update((yyvsp[-2].symp)->type);
            }
        }
#line 2043 "A5_1.tab.c"
    break;

  case 62: /* direct_declarator: direct_declarator PARENTHESIS_OPEN change_table parameter_list PARENTHESIS_CLOSE  */
#line 677 "A5_1.y"
        {
            currentST->name = (yyvsp[-4].symp)->name;
            if((yyvsp[-4].symp)->type->type != "void") {
                symbol* s = currentST->lookup("return");    // Lookup for return value
                s->update((yyvsp[-4].symp)->type);
            }
            (yyvsp[-4].symp)->nestedTable = currentST;
            currentST->parent = globalST;   // Update parent symbol table
            switchTable(globalST);          // Switch current table to point to the global symbol table
            currentSymbol = (yyval.symp);             // Update current symbol
        }
#line 2059 "A5_1.tab.c"
    break;

  case 63: /* direct_declarator: direct_declarator PARENTHESIS_OPEN change_table PARENTHESIS_CLOSE  */
#line 689 "A5_1.y"
        {
            currentST->name = (yyvsp[-3].symp)->name;
            if((yyvsp[-3].symp)->type->type != "void") {
                symbol* s = currentST->lookup("return");    // Lookup for return value
                s->update((yyvsp[-3].symp)->type);
            }
            (yyvsp[-3].symp)->nestedTable = currentST;
            currentST->parent = globalST;   // Update parent symbol table
            switchTable(globalST);          // Switch current table to point to the global symbol table
            currentSymbol = (yyval.symp);             // Update current symbol
        }
#line 2075 "A5_1.tab.c"
    break;

  case 64: /* pointer: MULTIPLY  */
#line 705 "A5_1.y"
        {
            (yyval.symType) = new symbolType("ptr");     //  Create new type "ptr"
        }
#line 2083 "A5_1.tab.c"
    break;

  case 65: /* parameter_list: parameter_declaration  */
#line 713 "A5_1.y"
        { /* Ignored */ }
#line 2089 "A5_1.tab.c"
    break;

  case 66: /* parameter_list: parameter_list COMMA parameter_declaration  */
#line 715 "A5_1.y"
        { /* Ignored */ }
#line 2095 "A5_1.tab.c"
    break;

  case 67: /* parameter_declaration: type_specifier declarator  */
#line 720 "A5_1.y"
        { /* Ignored */ }
#line 2101 "A5_1.tab.c"
    break;

  case 68: /* parameter_declaration: type_specifier  */
#line 722 "A5_1.y"
        { /* Ignored */ }
#line 2107 "A5_1.tab.c"
    break;

  case 69: /* initializer: assignment_expression  */
#line 728 "A5_1.y"
        {
            (yyval.symp) = (yyvsp[0].expr)->loc;   // Simple assignment
        }
#line 2115 "A5_1.tab.c"
    break;

  case 70: /* statement: compound_statement  */
#line 739 "A5_1.y"
        {
            (yyval.stmt) = (yyvsp[0].stmt);    // Simple assignment
        }
#line 2123 "A5_1.tab.c"
    break;

  case 71: /* statement: expression_statement  */
#line 743 "A5_1.y"
        {
            (yyval.stmt) = new statement();           // Create new statement
            (yyval.stmt)->nextlist = (yyvsp[0].expr)->nextlist;    // Assign same nextlist
        }
#line 2132 "A5_1.tab.c"
    break;

  case 72: /* statement: selection_statement  */
#line 748 "A5_1.y"
        {
            (yyval.stmt) = (yyvsp[0].stmt);    // Simple assignment
        }
#line 2140 "A5_1.tab.c"
    break;

  case 73: /* statement: iteration_statement  */
#line 752 "A5_1.y"
        {
            (yyval.stmt) = (yyvsp[0].stmt);    // Simple assignment
        }
#line 2148 "A5_1.tab.c"
    break;

  case 74: /* statement: jump_statement  */
#line 756 "A5_1.y"
        {
            (yyval.stmt) = (yyvsp[0].stmt);    // Simple assignment
        }
#line 2156 "A5_1.tab.c"
    break;

  case 75: /* loop_statement: expression_statement  */
#line 764 "A5_1.y"
        {
            (yyval.stmt) = new statement();           // Create new statement
            (yyval.stmt)->nextlist = (yyvsp[0].expr)->nextlist;    // Assign same nextlist
        }
#line 2165 "A5_1.tab.c"
    break;

  case 76: /* loop_statement: selection_statement  */
#line 769 "A5_1.y"
        {
            (yyval.stmt) = (yyvsp[0].stmt);    // Simple assignment
        }
#line 2173 "A5_1.tab.c"
    break;

  case 77: /* loop_statement: iteration_statement  */
#line 773 "A5_1.y"
        {
            (yyval.stmt) = (yyvsp[0].stmt);    // Simple assignment
        }
#line 2181 "A5_1.tab.c"
    break;

  case 78: /* loop_statement: jump_statement  */
#line 777 "A5_1.y"
        {
            (yyval.stmt) = (yyvsp[0].stmt);    // Simple assignment
        }
#line 2189 "A5_1.tab.c"
    break;

  case 79: /* compound_statement: CURLY_BRACE_OPEN X change_table block_item_list_opt CURLY_BRACE_CLOSE  */
#line 785 "A5_1.y"
        {
            /*
                Here, the grammar has been augmented with non-terminals like X and change_table to allow creation of nested symbol tables
            */
            (yyval.stmt) = (yyvsp[-1].stmt);
            switchTable(currentST->parent);     // Update current symbol table
        }
#line 2201 "A5_1.tab.c"
    break;

  case 80: /* block_item_list_opt: block_item_list  */
#line 796 "A5_1.y"
        {
            (yyval.stmt) = (yyvsp[0].stmt);    // Simple assignment
        }
#line 2209 "A5_1.tab.c"
    break;

  case 81: /* block_item_list_opt: %empty  */
#line 800 "A5_1.y"
        {
            (yyval.stmt) = new statement();   // Create new statement
        }
#line 2217 "A5_1.tab.c"
    break;

  case 82: /* block_item_list: block_item  */
#line 807 "A5_1.y"
        {
            (yyval.stmt) = (yyvsp[0].stmt);    // Simple assignment
        }
#line 2225 "A5_1.tab.c"
    break;

  case 83: /* block_item_list: block_item_list M block_item  */
#line 811 "A5_1.y"
        {   
            /*
                This production rule has been augmented with the non-terminal M
            */
            (yyval.stmt) = (yyvsp[0].stmt);
            backpatch((yyvsp[-2].stmt)->nextlist, (yyvsp[-1].instr));    // After $1, move to block_item via $2
        }
#line 2237 "A5_1.tab.c"
    break;

  case 84: /* block_item: declaration  */
#line 822 "A5_1.y"
        {
            (yyval.stmt) = new statement();   // Create new statement
        }
#line 2245 "A5_1.tab.c"
    break;

  case 85: /* block_item: statement  */
#line 826 "A5_1.y"
        {
            (yyval.stmt) = (yyvsp[0].stmt);    // Simple assignment
        }
#line 2253 "A5_1.tab.c"
    break;

  case 86: /* expression_statement: expression SEMICOLON  */
#line 833 "A5_1.y"
        {
            (yyval.expr) = (yyvsp[-1].expr);    // Simple assignment
        }
#line 2261 "A5_1.tab.c"
    break;

  case 87: /* expression_statement: SEMICOLON  */
#line 837 "A5_1.y"
        {
            (yyval.expr) = new expression();  // Create new expression
        }
#line 2269 "A5_1.tab.c"
    break;

  case 88: /* selection_statement: IF PARENTHESIS_OPEN expression N PARENTHESIS_CLOSE M statement N  */
#line 844 "A5_1.y"
        {
            /*
                This production rule has been augmented for control flow
            */
            backpatch((yyvsp[-4].stmt)->nextlist, nextinstr());                   // nextlist of N now has nextinstr
            convertIntToBool((yyvsp[-5].expr));                                   // Convert expression to bool
            (yyval.stmt) = new statement();                                   // Create new statement
            backpatch((yyvsp[-5].expr)->truelist, (yyvsp[-2].instr));                            // Backpatching - if expression is true, go to M
            // Merge falselist of expression, nextlist of statement and nextlist of the last N
            list<int> temp = merge((yyvsp[-5].expr)->falselist, (yyvsp[-1].stmt)->nextlist);
            (yyval.stmt)->nextlist = merge((yyvsp[0].stmt)->nextlist, temp);
        }
#line 2286 "A5_1.tab.c"
    break;

  case 89: /* selection_statement: IF PARENTHESIS_OPEN expression N PARENTHESIS_CLOSE M statement N ELSE M statement  */
#line 857 "A5_1.y"
        {
            /*
                This production rule has been augmented for control flow
            */
            backpatch((yyvsp[-7].stmt)->nextlist, nextinstr());                   // nextlist of N now has nextinstr
            convertIntToBool((yyvsp[-8].expr));                                   // Convert expression to bool
            (yyval.stmt) = new statement();                                   // Create new statement
            backpatch((yyvsp[-8].expr)->truelist, (yyvsp[-5].instr));                            // Backpatching - if expression is true, go to first M, else go to second M
            backpatch((yyvsp[-8].expr)->falselist, (yyvsp[-1].instr));
            // Merge nextlist of statement, nextlist of N and nextlist of the last statement
            list<int> temp = merge((yyvsp[-4].stmt)->nextlist, (yyvsp[-3].stmt)->nextlist);
            (yyval.stmt)->nextlist = merge((yyvsp[0].stmt)->nextlist, temp);
        }
#line 2304 "A5_1.tab.c"
    break;

  case 90: /* iteration_statement: FOR F PARENTHESIS_OPEN X change_table expression_statement M expression_statement M expression N PARENTHESIS_CLOSE M loop_statement  */
#line 874 "A5_1.y"
        {
            /*
                This production rule has been augmented with non-terminals like F, X, change_table and M to handle the control flow, 
                backpatching, detect the kind of loop, create a separate symbol table for the loop block and give it an appropriate name
            */
            (yyval.stmt) = new statement();                   // Create a new statement
            convertIntToBool((yyvsp[-6].expr));                   // Convert expression to bool
            backpatch((yyvsp[-6].expr)->truelist, (yyvsp[-1].instr));           // Go to M3 if expression is true
            backpatch((yyvsp[-3].stmt)->nextlist, (yyvsp[-7].instr));           // Go back to M1 after N
            backpatch((yyvsp[0].stmt)->nextlist, (yyvsp[-5].instr));           // Go back to expression after loop_statement
            emit("goto", convertIntToString((yyvsp[-5].instr)));   // Emit to prevent fall-through
            (yyval.stmt)->nextlist = (yyvsp[-6].expr)->falselist;           // Exit loop if expression_statement is false
            blockName = "";
            switchTable(currentST->parent);
        }
#line 2324 "A5_1.tab.c"
    break;

  case 91: /* iteration_statement: FOR F PARENTHESIS_OPEN X change_table expression_statement M expression_statement M expression N PARENTHESIS_CLOSE M CURLY_BRACE_OPEN block_item_list_opt CURLY_BRACE_CLOSE  */
#line 890 "A5_1.y"
        {
            /*
                This production rule has been augmented with non-terminals like F, X, change_table and M to handle the control flow, 
                backpatching, detect the kind of loop, create a separate symbol table for the loop block and give it an appropriate name
            */
            (yyval.stmt) = new statement();                   // Create a new statement
            convertIntToBool((yyvsp[-8].expr));                   // Convert expression to bool
            backpatch((yyvsp[-8].expr)->truelist, (yyvsp[-3].instr));           // Go to M3 if expression is true
            backpatch((yyvsp[-5].stmt)->nextlist, (yyvsp[-9].instr));           // Go back to M1 after N
            backpatch((yyvsp[-1].stmt)->nextlist, (yyvsp[-7].instr));           // Go back to expression after loop_statement
            emit("goto", convertIntToString((yyvsp[-7].instr)));   // Emit to prevent fall-through
            (yyval.stmt)->nextlist = (yyvsp[-8].expr)->falselist;           // Exit loop if expression_statement is false
            blockName = "";
            switchTable(currentST->parent);
        }
#line 2344 "A5_1.tab.c"
    break;

  case 92: /* F: %empty  */
#line 908 "A5_1.y"
        {   
            /*
            This non-terminal indicates the start of a for loop
            */
            blockName = "FOR";
        }
#line 2355 "A5_1.tab.c"
    break;

  case 93: /* X: %empty  */
#line 919 "A5_1.y"
        {   
            // Used for creating new nested symbol tables for nested blocks
            string newST = currentST->name + "." + blockName + "$" + to_string(STCount++);  // Generate name for new symbol table
            symbol* sym = currentST->lookup(newST);
            sym->nestedTable = new symbolTable(newST);  // Create new symbol table
            sym->name = newST;
            sym->nestedTable->parent = currentST;
            sym->type = new symbolType("block");    // The type will be "block"
            currentSymbol = sym;    // Change the current symbol pointer
        }
#line 2370 "A5_1.tab.c"
    break;

  case 94: /* change_table: %empty  */
#line 932 "A5_1.y"
        {   
            // Used for changing the symbol table on encountering functions
            if(currentSymbol->nestedTable != NULL) {
                // If the symbol table already exists, switch to that table
                switchTable(currentSymbol->nestedTable);
                emit("label", currentST->name);
            }
            else {
                // If the symbol table does not exist already, create it and switch to it
                switchTable(new symbolTable(""));
            }
        }
#line 2387 "A5_1.tab.c"
    break;

  case 95: /* jump_statement: RETURN expression SEMICOLON  */
#line 948 "A5_1.y"
        {
            (yyval.stmt) = new statement();
            emit("return", (yyvsp[-1].expr)->loc->name);  // Emit return alongwith return value
        }
#line 2396 "A5_1.tab.c"
    break;

  case 96: /* jump_statement: RETURN SEMICOLON  */
#line 953 "A5_1.y"
        {
            (yyval.stmt) = new statement();
            emit("return", "");             // Emit return without any return value
        }
#line 2405 "A5_1.tab.c"
    break;

  case 97: /* translation_unit: external_declaration  */
#line 961 "A5_1.y"
        { /* Ignored */ }
#line 2411 "A5_1.tab.c"
    break;

  case 98: /* translation_unit: translation_unit external_declaration  */
#line 963 "A5_1.y"
        { /* Ignored */ }
#line 2417 "A5_1.tab.c"
    break;

  case 99: /* external_declaration: function_definition  */
#line 968 "A5_1.y"
        { /* Ignored */ }
#line 2423 "A5_1.tab.c"
    break;

  case 100: /* external_declaration: declaration  */
#line 970 "A5_1.y"
        { /* Ignored */ }
#line 2429 "A5_1.tab.c"
    break;

  case 101: /* function_definition: type_specifier declarator declaration_list_opt change_table CURLY_BRACE_OPEN block_item_list_opt CURLY_BRACE_CLOSE  */
#line 975 "A5_1.y"
        {   
            currentST->parent = globalST;
            STCount = 0;
            switchTable(globalST);          // After reaching end of a function, change cureent symbol table to the global symbol table
        }
#line 2439 "A5_1.tab.c"
    break;

  case 102: /* declaration_list_opt: declaration_list  */
#line 984 "A5_1.y"
        { /* Ignored */ }
#line 2445 "A5_1.tab.c"
    break;

  case 103: /* declaration_list_opt: %empty  */
#line 986 "A5_1.y"
        { /* Ignored */ }
#line 2451 "A5_1.tab.c"
    break;

  case 104: /* declaration_list: declaration  */
#line 991 "A5_1.y"
        { /* Ignored */ }
#line 2457 "A5_1.tab.c"
    break;

  case 105: /* declaration_list: declaration_list declaration  */
#line 993 "A5_1.y"
        { /* Ignored */ }
#line 2463 "A5_1.tab.c"
    break;


#line 2467 "A5_1.tab.c"

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

#line 996 "A5_1.y"


void yyerror(string s) {
    /*
        This function prints any error encountered while parsing
    */
    cout << "Error occurred: " << s << endl;
    cout << "Line no.: " << yylineno << endl;
    cout << "Unable to parse: " << yytext << endl; 
}
