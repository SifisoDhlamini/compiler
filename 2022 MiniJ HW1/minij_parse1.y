%{
	#include <stdio.h>
	#include <stdlib.h>
	#include "minij.h"
	#include "minij_parse.h"
%}

%token CLASS PUB STATIC
%left  AND OR NOT
%left  LT LE EQ
%left  ADD MINUS
%left  TIMES
%token LBP RBP LSP RSP LP RP
%token INT BOOLEAN
%token IF ELSE
%token WHILE PRINT
%token ASSIGN
%token VOID MAIN STR
%token RETURN
%token SEMI COMMA
%token THIS NEW DOT
%token ID LIT TRUE FALSE
%token COMMENT

%expect 24		//reduced conflict

%%
prog		: mainc cdcls
		{ printf("Program -> MainClass ClassDecl*\n");
		  printf("Parsed OK!\n"); }
		|
		{ printf("****** Parsing failed!\n"); }	
		;

mainc		: CLASS ID LBP PUB STATIC VOID MAIN LP STR LSP RSP ID RP LBP stmts RBP RBP
		{ printf("MainClass -> class id lbp public static void main lp string lsp rsp id rp lbp Statemet* rbp rbp\n"); }
		;

cdcls		: cdcl cdcls
		{ printf("(for ClassDecl*) cdcls : cdcl cdcls\n"); }
		|
		{ printf("(for ClassDecl*) cdcls : \n"); }
		;

cdcl		: CLASS ID LBP vdcls mdcls RBP
		{ printf("ClassDecl -> class id lbp VarDecl* MethodDecl* rbp\n"); }
		;

vdcls		: vdcl vdcls
		{ printf("(for VarDecl*) vdcls : vdcl vdcls\n"); }
		|
		{ printf("(for VarDecl*) vdcls : \n"); }
		;

vdcl		: type ID SEMI
		{ printf("VarDecl -> Type id semi\n"); }
		;

mdcls		: mdcl mdcls
		{ printf("(for MethodDecl*) mdcls : mdcl mdcls\n"); }
		|
		{ printf("(for MethodDecl*) mdcls : \n"); }
		;

mdcl		: PUB type ID LP formals RP LBP vdcls stmts RETURN exp SEMI RBP
		{ printf("MethodDecl -> public Type id lp FormalList rp lbp Statements* return Exp semi rbp\n"); }
		;

formals	: type ID frest
		{ printf("FormalList -> Type id FormalRest*\n"); }
		|
		{ printf("FormalList -> \n"); }
		;

frest		: COMMA type ID frest
		{ printf("FormalRest -> comma Type id FormalRest\n"); }
		|
		{ printf("FormalRest -> \n"); }
		;
	
type		: INT LSP RSP
		{ printf(" Type -> int lsp rsp \n");}
		| BOOLEAN
		{ printf(" Type -> boolean \n");}
		| INT
		{ printf(" Type -> int \n");}
		| ID
		{ printf(" Type -> id \n");}
		;

stmt		: LBP stmts RBP
		{ printf(" Statement -> LBP stmts RBP \n");}
		| IF LP exp RP stmt ELSE stmt
		{ printf(" Statement -> IF LP exp RP stmt ELSE stmt \n");}
		| WHILE LP exp RP stmt
		{ printf(" Statement -> WHILE LP exp RP stmt \n");}
		| PRINT LP exp RP SEMI
		{ printf(" Statement -> PRINT LP exp RP SEMI \n");}
		| ID ASSIGN exp SEMI
		{ printf(" Statement -> ID ASSIGN exp SEMI \n");}
		| ID LSP exp RSP ASSIGN exp SEMI
		{ printf(" Statement -> ID LSP exp RSP ASSIGN exp SEMI \n");}
		| vdcl
		{ printf(" Statement -> vdcl \n");}
		| LP exp RP
		{ printf(" Statement -> LP stmts RP \n");}
		;
stmts		: stmt stmts
		{ printf("Statement -> stmt stmts \n");}
		| 
		{ printf("Statement -> \n");}
		;
exp		: exp ADD exp
		{ printf("exp -> exp ADD exp \n");}
		| exp MINUS exp
		{ printf("exp -> exp MINUS exp \n");}
		| exp TIMES exp
		{ printf("exp -> exp TIMES exp \n");}
		| exp AND exp
		{ printf("exp -> exp AND exp \n");}
		| exp OR exp
		{ printf("exp -> exp OR exp \n");}
		| exp LT exp
		{ printf("exp -> exp LT exp \n");}
		| exp LE exp
		{ printf("exp -> exp LE exp \n");}
		| exp EQ exp
		{ printf("exp -> exp EQ exp \n");}
		| ID LSP exp RSP
		{ printf("exp -> ID LSP exp RSP \n");}
		| ID LP explist RP
		{ printf("exp -> ID LP explist RP \n");}
		| LP exp RP
		{ printf("exp -> LP exp RP \n");}
		| exp DOT exp
		{ printf("exp -> exp DOT exp \n");}
		| LIT
		{ printf("exp -> LIT \n");}
		| TRUE
		{ printf("exp -> TRUE \n");}
		| FALSE
		{ printf("exp -> FALSE \n");}
		| ID
		{ printf("exp -> ID \n");}
		| THIS
		{ printf("exp -> THIS \n");}
		| NEW INT LSP exp RSP
		{ printf("exp -> NEW INT LSP exp RSP \n");}
		| NEW ID LP RP
		{ printf("exp -> NEW ID LP RP \n");}
		| NOT exp
		{ printf("exp -> NOT exp \n");}
		;
explist	: exp exprest
		{ printf("explist -> exp exprests \n");}
		|
		{ printf("explist -> \n");}			
		;

exprest	: COMMA exp
		{ printf("Exprest -> COMMA exp \n");}
		;


%%

int yyerror(char *s)
{
	printf("%s\n",s);
	return 1;
}

