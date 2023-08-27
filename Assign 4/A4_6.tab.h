/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison interface for Yacc-like parsers in C

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_YY_A4_6_TAB_H_INCLUDED
# define YY_YY_A4_6_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
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
    CHAR = 10,                     /* CHAR  */
    ELSE = 11,                     /* ELSE  */
    FOR = 12,                      /* FOR  */
    IF = 13,                       /* IF  */
    INT = 14,                      /* INT  */
    RETURN = 15,                   /* RETURN  */
    VOID = 16,                     /* VOID  */
    ID = 17,                       /* ID  */
    INT_CONST = 18,                /* INT_CONST  */
    CHAR_CONST = 19,               /* CHAR_CONST  */
    STRING_CONST = 20,             /* STRING_CONST  */
    LSQBRACKET = 21,               /* LSQBRACKET  */
    RSQBRACKET = 22,               /* RSQBRACKET  */
    LBRACE = 23,                   /* LBRACE  */
    RBRACE = 24,                   /* RBRACE  */
    LPARAN = 25,                   /* LPARAN  */
    RPARAN = 26,                   /* RPARAN  */
    ARROW = 27,                    /* ARROW  */
    BIT_AND = 28,                  /* BIT_AND  */
    PLUS = 29,                     /* PLUS  */
    SUB = 30,                      /* SUB  */
    MULT = 31,                     /* MULT  */
    DIV = 32,                      /* DIV  */
    MOD = 33,                      /* MOD  */
    LOG_NOT = 34,                  /* LOG_NOT  */
    LOG_AND = 35,                  /* LOG_AND  */
    LOG_OR = 36,                   /* LOG_OR  */
    LESS = 37,                     /* LESS  */
    GREATER = 38,                  /* GREATER  */
    LESSEQ = 39,                   /* LESSEQ  */
    GREATEREQ = 40,                /* GREATEREQ  */
    EQUALS = 41,                   /* EQUALS  */
    NOTEQ = 42,                    /* NOTEQ  */
    QUES = 43,                     /* QUES  */
    COLON = 44,                    /* COLON  */
    SEMICOLON = 45,                /* SEMICOLON  */
    ASSIGN = 46,                   /* ASSIGN  */
    COMMA = 47,                    /* COMMA  */
    SINGLE_COMMENT = 48,           /* SINGLE_COMMENT  */
    MULTI_COMMENT = 49,            /* MULTI_COMMENT  */
    NEW_LINE = 50                  /* NEW_LINE  */
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


#endif /* !YY_YY_A4_6_TAB_H_INCLUDED  */
