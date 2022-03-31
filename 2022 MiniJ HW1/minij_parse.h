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

#ifndef YY_YY_MINIJ_PARSE_H_INCLUDED
# define YY_YY_MINIJ_PARSE_H_INCLUDED
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
    COMMENT = 288,                 /* COMMENT  */
    THIS = 289,                    /* THIS  */
    NEW = 290,                     /* NEW  */
    DOT = 291,                     /* DOT  */
    ID = 292,                      /* ID  */
    LIT = 293,                     /* LIT  */
    TRUE = 294,                    /* TRUE  */
    FALSE = 295,                   /* FALSE  */
    NOT = 296                      /* NOT  */
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


#endif /* !YY_YY_MINIJ_PARSE_H_INCLUDED  */