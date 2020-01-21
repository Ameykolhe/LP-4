%{
	#include <stdio.h>
	#include <stdlib.h>
	#include <string.h>
	#include "y.tab.h"

	char *datatype;
%}

number [0-9]+
type_keyword int | float | double | char
float_number [0-9]+\.[0-9]+
variable [a-zA-Z][a-zA-Z0-9]*
arithmetic_operator '+' | '-' | '*' | '/'
string_literal \"(\\.|[^"\\])*\"

%%

[\n\t]+ {};
"=" {yylval.sValue = "="; return EQUAL;}
{string_literal} {yylval.sValue = strdup(yytext); return STRING;}
{type_keyword} {yylval.sValue = strdup(yytext); datatype = strdup(yytext); return DTYPE;}
{arithmetic_operator} {yylval.sValue = strdup(yytext); return ARITHOP;}
{variable} {yylval.sValue = strdup(yytext); return VAR;}
{float_number} {yylval.fValue = atof(yytext); return FNUM;}
{number} {yylval.iValue = atoi(yytext); return NUM;}
. {return yytext[0];}


%%

int yywrap(){

	return 1;
}