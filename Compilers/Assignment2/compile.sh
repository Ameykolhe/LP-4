lex lex.l
yacc -d yacc_parser.y
gcc y.tab.c lex.yy.c -o parser
output="$(./parser)"

if [ -z "$output" ]
then
	echo "Compiled Successfully"
	echo "No errors"
else
	echo "Error"
fi

date
