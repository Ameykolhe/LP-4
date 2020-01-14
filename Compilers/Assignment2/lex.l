%{
	#include <stdio.h>
	#include "y.tab.h"
	int line = 0;
%}

number [0-9]+
variable [a-zA-Z_][0-9a-zA-Z_]*
float_number {number}\.{number}
type_keyword int|float|char|double|long|void
unary_operator \+\+|\-\-
assignment \+=|\-=|\*=|\/=
arithmetic_operator \+|\-|\*|\/
logical_operator &&|\|\|
bitwise_operator &|\||\^
comparators ==|!=|<|>|<=|>=
string_literal \"(\\.|[^"\\])*\"


%%
[\t ]+ {};
"#include" {return MACRO;}
"<".+\.h">" {return HEADER;}
"main" {return MAIN;}
"if" {return IF;}
"else" {return ELSE;}
"for" {return FOR;}
"while" {return WHILE;}
{string_literal} {return STRING;}
{unary_operator} {return UNARYOP;}
{type_keyword} {return DTYPE;}
{comparators} {return COMP;}
{arithmetic_operator} {return ARITHOP;}
{assignment} {return ASSIGNOP;}
{logical_operator} {return LOGICOP;}
{variable} {return VAR;}
{float_number} {return FNUM;}
{number} {return NUM;}
. {return yytext[0];}
\n {line++;}
%%

int yywrap(){

	return 1;
}