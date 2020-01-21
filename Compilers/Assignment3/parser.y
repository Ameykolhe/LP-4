%{
	#include <stdio.h>
	#include "symTab.h"
	FILE *logfile;
	symtab sTab;
	int yylex();
	int yyerror();
	char *datatype;

%}


%token <iValue> NUM
%token <fValue> FNUM
%token <sValue> DTYPE
%token <sValue> STRING
%token <sValue> VAR
%token <sValue> ARITHOP
%token <sValue> EQUAL

%start prog


%%

prog: stmtlist;

stmtlist: stmt stmtlist;

stmt: declaration;

declaration: DTYPE varlist ';' {printf("Declaration Statement : DTYPE - %s", $1);}

varlist: VAR varlist | VAR;

%%

int yyerror(char * s)
{
	fprintf(stderr, "%s\n", s);
	return -1;
}


int main(void)
{
	iterator=0;
	extern FILE *yyin;
	yyin = fopen("data/sample.txt", "r");
	yyparse();
	return 0;
}