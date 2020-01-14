#ifndef lint
static const char yysccsid[] = "@(#)yaccpar	1.9 (Berkeley) 02/21/93";
#endif

#define YYBYACC 1
#define YYMAJOR 1
#define YYMINOR 9
#define YYPATCH 20130304

#define YYEMPTY        (-1)
#define yyclearin      (yychar = YYEMPTY)
#define yyerrok        (yyerrflag = 0)
#define YYRECOVERING() (yyerrflag != 0)

#define YYPREFIX "yy"

#define YYPURE 0

#line 2 "yacc_parser.y"
	#include <stdio.h>
	extern int line;
#line 22 "y.tab.c"

#ifndef YYSTYPE
typedef int YYSTYPE;
#endif

/* compatibility with bison */
#ifdef YYPARSE_PARAM
/* compatibility with FreeBSD */
# ifdef YYPARSE_PARAM_TYPE
#  define YYPARSE_DECL() yyparse(YYPARSE_PARAM_TYPE YYPARSE_PARAM)
# else
#  define YYPARSE_DECL() yyparse(void *YYPARSE_PARAM)
# endif
#else
# define YYPARSE_DECL() yyparse(void)
#endif

/* Parameters sent to lex. */
#ifdef YYLEX_PARAM
# define YYLEX_DECL() yylex(void *YYLEX_PARAM)
# define YYLEX yylex(YYLEX_PARAM)
#else
# define YYLEX_DECL() yylex(void)
# define YYLEX yylex()
#endif

/* Parameters sent to yyerror. */
#ifndef YYERROR_DECL
#define YYERROR_DECL() yyerror(const char *s)
#endif
#ifndef YYERROR_CALL
#define YYERROR_CALL(msg) yyerror(msg)
#endif

extern int YYPARSE_DECL();

#define DTYPE 257
#define STRING 258
#define VAR 259
#define NUM 260
#define MAIN 261
#define FNUM 262
#define IF 263
#define ELSE 264
#define COMP 265
#define LOGICOP 266
#define ARITHOP 267
#define ASSIGNOP 268
#define FOR 269
#define UNARYOP 270
#define WHILE 271
#define MACRO 272
#define HEADER 273
#define YYERRCODE 256
static const short yylhs[] = {                           -1,
    0,    0,    1,    2,    2,    3,    3,    3,    3,    3,
    3,    4,    9,    9,    9,    9,    9,    9,    9,    9,
    5,    5,   10,   10,   10,   10,   10,   10,    6,    6,
    6,    6,   11,   11,   11,   11,    7,   12,   12,   13,
   13,   13,   13,   13,    8,
};
static const short yylen[] = {                            2,
    7,    9,    1,    2,    0,    1,    1,    1,    1,    3,
    1,    3,    1,    3,    5,    3,    3,    5,    3,    5,
    7,   11,    3,    3,    3,    5,    5,    5,    6,    6,
    4,    4,    3,    3,    1,    1,   11,    2,    1,    5,
    5,    3,    3,    2,    7,
};
static const short yydefred[] = {                         0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    3,    0,    6,
    7,    8,    9,   11,    0,    0,    0,    0,    0,    0,
    0,    0,    1,    4,    0,    0,    0,   12,   10,    0,
    0,    0,    0,    0,   39,    0,    0,    0,    0,    0,
    0,   16,    0,   31,    0,   32,    0,    0,   38,    0,
    0,    2,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,   20,   15,   18,    0,    0,
   29,   30,    0,    0,    0,    0,    0,    0,   33,   34,
   26,   27,   28,    0,    0,    0,   45,    0,   44,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,   22,
   40,   41,   37,
};
static const short yydgoto[] = {                          3,
   17,   18,   19,   20,   21,   22,   23,   24,   27,   43,
   68,   46,   96,
};
static const short yysindex[] = {                      -240,
 -246, -254,    0,  -11, -231,  -10, -217,  -87,    7, -214,
   12, -203,  -61,   18,   20,   29,  -54,    0, -214,    0,
    0,    0,    0,    0,  -53,  -28,   13,   14, -237, -185,
 -239, -185,    0,    0, -214, -212, -203,    0,    0,  -56,
  -55, -190,   35, -203,    0,   19,   36,  -46,   37,   38,
   39,    0, -225,    0, -225,    0, -208,  -43,    0, -185,
  -39,    0, -203, -203, -203, -182, -181,   28,   30, -176,
 -174, -173, -214,   40, -214,    0,    0,    0, -225, -225,
    0,    0, -185, -185, -185,  -30, -165,  -27,    0,    0,
    0,    0,    0, -168,  -60,   56,    0,  -22,    0, -192,
  -20, -214, -167, -163, -214,  -19, -225, -225,  -18,    0,
    0,    0,    0,
};
static const short yyrindex[] = {                         0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,  -17,
    0,    0,    0,    0,    0,    0,    0,    0,  -17,    0,
    0,    0,    0,    0,    0,   43,    0,    0,    0,    0,
    0,    0,    0,    0,  -17,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,   46,   50,
   51,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,  -35,  -34,    0,    0,  -32,
  -31,  -29,  -17,    0,  -17,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0, -123,    0,    0,    0,    0,    0,    0,
    0,  -17,   70,   71,  -17,    0,    0,    0,    0,    0,
    0,    0,    0,
};
static const short yygindex[] = {                         0,
   78,  -14,    0,    0,    0,    0,    0,    0,  -23,  -21,
  -42,    0,    0,
};
#define YYTABLESIZE 212
static const short yytable[] = {                         29,
  100,   21,   54,   56,   34,   35,   36,   45,   23,   24,
   47,   25,   69,   52,    4,   37,    1,   44,    5,   26,
   59,   40,   41,   35,   36,    7,   23,   24,    6,   25,
    8,    2,   36,   66,   67,   10,   89,   90,   74,   76,
   77,   78,   12,    9,   13,   49,   11,   50,   14,   51,
   70,   71,   25,   72,   15,   26,   16,   30,   86,   31,
   88,   91,   92,   93,  111,  112,  103,  104,   32,   35,
   33,   38,   39,   42,   57,   58,   61,   60,   62,   73,
   63,   64,   65,   75,   79,   80,   81,  106,   82,   83,
  109,   84,   85,   95,   94,   98,  101,   97,   87,  107,
  102,   13,  105,  108,   19,  110,  113,    5,   14,   17,
   42,   43,   48,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,   21,    0,   21,    0,    0,    0,   21,
    0,    0,    0,    0,    0,   21,    0,   21,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,   28,   99,
   53,   55,
};
static const short yycheck[] = {                         61,
   61,  125,   59,   59,   19,   41,   41,   31,   41,   41,
   32,   41,   55,   37,  261,   44,  257,  257,  273,  259,
   44,  259,  260,   59,   59,  257,   59,   59,   40,   59,
   41,  272,   61,  259,  260,  123,   79,   80,   60,   63,
   64,   65,  257,  261,  259,  258,   40,  260,  263,  262,
  259,  260,   41,  262,  269,  259,  271,   40,   73,   40,
   75,   83,   84,   85,  107,  108,  259,  260,   40,  123,
  125,   59,   59,  259,  265,   41,   41,   59,  125,  123,
   44,   44,   44,  123,  267,  267,   59,  102,   59,  266,
  105,  266,  266,  259,  125,  264,   41,  125,   59,  267,
  123,   59,  123,  267,   59,  125,  125,  125,   59,   59,
   41,   41,   35,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,  257,   -1,  259,   -1,   -1,   -1,  263,
   -1,   -1,   -1,   -1,   -1,  269,   -1,  271,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,  270,  270,
  267,  267,
};
#define YYFINAL 3
#ifndef YYDEBUG
#define YYDEBUG 0
#endif
#define YYMAXTOKEN 273
#if YYDEBUG
static const char *yyname[] = {

"end-of-file",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,"'('","')'",0,0,"','",0,0,0,0,0,0,0,0,0,0,0,0,0,0,"';'",0,"'='",0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,"'{'",0,"'}'",0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
"DTYPE","STRING","VAR","NUM","MAIN","FNUM","IF","ELSE","COMP","LOGICOP",
"ARITHOP","ASSIGNOP","FOR","UNARYOP","WHILE","MACRO","HEADER",
};
static const char *yyrule[] = {
"$accept : prog",
"prog : DTYPE MAIN '(' ')' '{' body '}'",
"prog : MACRO HEADER DTYPE MAIN '(' ')' '{' body '}'",
"body : stmtlist",
"stmtlist : stmt stmtlist",
"stmtlist :",
"stmt : declaration",
"stmt : if_stmt",
"stmt : arithmetic_stmt",
"stmt : for_stmt",
"stmt : VAR UNARYOP ';'",
"stmt : while_stmt",
"declaration : DTYPE var_list ';'",
"var_list : VAR",
"var_list : VAR '=' NUM",
"var_list : VAR '=' NUM ',' var_list",
"var_list : VAR ',' var_list",
"var_list : VAR '=' FNUM",
"var_list : VAR '=' FNUM ',' var_list",
"var_list : VAR '=' STRING",
"var_list : VAR '=' STRING ',' var_list",
"if_stmt : IF '(' condition ')' '{' stmtlist '}'",
"if_stmt : IF '(' condition ')' '{' stmtlist '}' ELSE '{' stmtlist '}'",
"condition : VAR COMP VAR",
"condition : VAR COMP NUM",
"condition : VAR COMP FNUM",
"condition : VAR COMP VAR LOGICOP condition",
"condition : VAR COMP NUM LOGICOP condition",
"condition : VAR COMP FNUM LOGICOP condition",
"arithmetic_stmt : VAR '=' VAR ARITHOP arithlist ';'",
"arithmetic_stmt : VAR '=' NUM ARITHOP arithlist ';'",
"arithmetic_stmt : VAR '=' VAR ';'",
"arithmetic_stmt : VAR '=' NUM ';'",
"arithlist : VAR ARITHOP arithlist",
"arithlist : NUM ARITHOP arithlist",
"arithlist : VAR",
"arithlist : NUM",
"for_stmt : FOR '(' for_declaration ';' condition ';' for_arithmetic ')' '{' stmtlist '}'",
"for_declaration : DTYPE var_list",
"for_declaration : var_list",
"for_arithmetic : VAR '=' VAR ARITHOP arithlist",
"for_arithmetic : VAR '=' NUM ARITHOP arithlist",
"for_arithmetic : VAR '=' VAR",
"for_arithmetic : VAR '=' NUM",
"for_arithmetic : VAR UNARYOP",
"while_stmt : WHILE '(' condition ')' '{' stmtlist '}'",

};
#endif

int      yydebug;
int      yynerrs;

int      yyerrflag;
int      yychar;
YYSTYPE  yyval;
YYSTYPE  yylval;

/* define the initial stack-sizes */
#ifdef YYSTACKSIZE
#undef YYMAXDEPTH
#define YYMAXDEPTH  YYSTACKSIZE
#else
#ifdef YYMAXDEPTH
#define YYSTACKSIZE YYMAXDEPTH
#else
#define YYSTACKSIZE 10000
#define YYMAXDEPTH  500
#endif
#endif

#define YYINITSTACKSIZE 500

typedef struct {
    unsigned stacksize;
    short    *s_base;
    short    *s_mark;
    short    *s_last;
    YYSTYPE  *l_base;
    YYSTYPE  *l_mark;
} YYSTACKDATA;
/* variables for the parser stack */
static YYSTACKDATA yystack;
#line 71 "yacc_parser.y"

void yyerror(char * s) 
/* yacc error handler */
{    
	fprintf(stdout, "%s at line %d\n", s, line); 
}  
   
int main(void)  
{ 
	extern FILE *yyin, *yyout;
	yyin = fopen("data/sample.c", "r");
	return yyparse(); 
}
#line 306 "y.tab.c"

#if YYDEBUG
#include <stdio.h>		/* needed for printf */
#endif

#include <stdlib.h>	/* needed for malloc, etc */
#include <string.h>	/* needed for memset */

/* allocate initial stack or double stack size, up to YYMAXDEPTH */
static int yygrowstack(YYSTACKDATA *data)
{
    int i;
    unsigned newsize;
    short *newss;
    YYSTYPE *newvs;

    if ((newsize = data->stacksize) == 0)
        newsize = YYINITSTACKSIZE;
    else if (newsize >= YYMAXDEPTH)
        return -1;
    else if ((newsize *= 2) > YYMAXDEPTH)
        newsize = YYMAXDEPTH;

    i = (int) (data->s_mark - data->s_base);
    newss = (short *)realloc(data->s_base, newsize * sizeof(*newss));
    if (newss == 0)
        return -1;

    data->s_base = newss;
    data->s_mark = newss + i;

    newvs = (YYSTYPE *)realloc(data->l_base, newsize * sizeof(*newvs));
    if (newvs == 0)
        return -1;

    data->l_base = newvs;
    data->l_mark = newvs + i;

    data->stacksize = newsize;
    data->s_last = data->s_base + newsize - 1;
    return 0;
}

#if YYPURE || defined(YY_NO_LEAKS)
static void yyfreestack(YYSTACKDATA *data)
{
    free(data->s_base);
    free(data->l_base);
    memset(data, 0, sizeof(*data));
}
#else
#define yyfreestack(data) /* nothing */
#endif

#define YYABORT  goto yyabort
#define YYREJECT goto yyabort
#define YYACCEPT goto yyaccept
#define YYERROR  goto yyerrlab

int
YYPARSE_DECL()
{
    int yym, yyn, yystate;
#if YYDEBUG
    const char *yys;

    if ((yys = getenv("YYDEBUG")) != 0)
    {
        yyn = *yys;
        if (yyn >= '0' && yyn <= '9')
            yydebug = yyn - '0';
    }
#endif

    yynerrs = 0;
    yyerrflag = 0;
    yychar = YYEMPTY;
    yystate = 0;

#if YYPURE
    memset(&yystack, 0, sizeof(yystack));
#endif

    if (yystack.s_base == NULL && yygrowstack(&yystack)) goto yyoverflow;
    yystack.s_mark = yystack.s_base;
    yystack.l_mark = yystack.l_base;
    yystate = 0;
    *yystack.s_mark = 0;

yyloop:
    if ((yyn = yydefred[yystate]) != 0) goto yyreduce;
    if (yychar < 0)
    {
        if ((yychar = YYLEX) < 0) yychar = 0;
#if YYDEBUG
        if (yydebug)
        {
            yys = 0;
            if (yychar <= YYMAXTOKEN) yys = yyname[yychar];
            if (!yys) yys = "illegal-symbol";
            printf("%sdebug: state %d, reading %d (%s)\n",
                    YYPREFIX, yystate, yychar, yys);
        }
#endif
    }
    if ((yyn = yysindex[yystate]) && (yyn += yychar) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == yychar)
    {
#if YYDEBUG
        if (yydebug)
            printf("%sdebug: state %d, shifting to state %d\n",
                    YYPREFIX, yystate, yytable[yyn]);
#endif
        if (yystack.s_mark >= yystack.s_last && yygrowstack(&yystack))
        {
            goto yyoverflow;
        }
        yystate = yytable[yyn];
        *++yystack.s_mark = yytable[yyn];
        *++yystack.l_mark = yylval;
        yychar = YYEMPTY;
        if (yyerrflag > 0)  --yyerrflag;
        goto yyloop;
    }
    if ((yyn = yyrindex[yystate]) && (yyn += yychar) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == yychar)
    {
        yyn = yytable[yyn];
        goto yyreduce;
    }
    if (yyerrflag) goto yyinrecovery;

    yyerror("syntax error");

    goto yyerrlab;

yyerrlab:
    ++yynerrs;

yyinrecovery:
    if (yyerrflag < 3)
    {
        yyerrflag = 3;
        for (;;)
        {
            if ((yyn = yysindex[*yystack.s_mark]) && (yyn += YYERRCODE) >= 0 &&
                    yyn <= YYTABLESIZE && yycheck[yyn] == YYERRCODE)
            {
#if YYDEBUG
                if (yydebug)
                    printf("%sdebug: state %d, error recovery shifting\
 to state %d\n", YYPREFIX, *yystack.s_mark, yytable[yyn]);
#endif
                if (yystack.s_mark >= yystack.s_last && yygrowstack(&yystack))
                {
                    goto yyoverflow;
                }
                yystate = yytable[yyn];
                *++yystack.s_mark = yytable[yyn];
                *++yystack.l_mark = yylval;
                goto yyloop;
            }
            else
            {
#if YYDEBUG
                if (yydebug)
                    printf("%sdebug: error recovery discarding state %d\n",
                            YYPREFIX, *yystack.s_mark);
#endif
                if (yystack.s_mark <= yystack.s_base) goto yyabort;
                --yystack.s_mark;
                --yystack.l_mark;
            }
        }
    }
    else
    {
        if (yychar == 0) goto yyabort;
#if YYDEBUG
        if (yydebug)
        {
            yys = 0;
            if (yychar <= YYMAXTOKEN) yys = yyname[yychar];
            if (!yys) yys = "illegal-symbol";
            printf("%sdebug: state %d, error recovery discards token %d (%s)\n",
                    YYPREFIX, yystate, yychar, yys);
        }
#endif
        yychar = YYEMPTY;
        goto yyloop;
    }

yyreduce:
#if YYDEBUG
    if (yydebug)
        printf("%sdebug: state %d, reducing by rule %d (%s)\n",
                YYPREFIX, yystate, yyn, yyrule[yyn]);
#endif
    yym = yylen[yyn];
    if (yym)
        yyval = yystack.l_mark[1-yym];
    else
        memset(&yyval, 0, sizeof yyval);
    switch (yyn)
    {
    }
    yystack.s_mark -= yym;
    yystate = *yystack.s_mark;
    yystack.l_mark -= yym;
    yym = yylhs[yyn];
    if (yystate == 0 && yym == 0)
    {
#if YYDEBUG
        if (yydebug)
            printf("%sdebug: after reduction, shifting from state 0 to\
 state %d\n", YYPREFIX, YYFINAL);
#endif
        yystate = YYFINAL;
        *++yystack.s_mark = YYFINAL;
        *++yystack.l_mark = yyval;
        if (yychar < 0)
        {
            if ((yychar = YYLEX) < 0) yychar = 0;
#if YYDEBUG
            if (yydebug)
            {
                yys = 0;
                if (yychar <= YYMAXTOKEN) yys = yyname[yychar];
                if (!yys) yys = "illegal-symbol";
                printf("%sdebug: state %d, reading %d (%s)\n",
                        YYPREFIX, YYFINAL, yychar, yys);
            }
#endif
        }
        if (yychar == 0) goto yyaccept;
        goto yyloop;
    }
    if ((yyn = yygindex[yym]) && (yyn += yystate) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == yystate)
        yystate = yytable[yyn];
    else
        yystate = yydgoto[yym];
#if YYDEBUG
    if (yydebug)
        printf("%sdebug: after reduction, shifting from state %d \
to state %d\n", YYPREFIX, *yystack.s_mark, yystate);
#endif
    if (yystack.s_mark >= yystack.s_last && yygrowstack(&yystack))
    {
        goto yyoverflow;
    }
    *++yystack.s_mark = (short) yystate;
    *++yystack.l_mark = yyval;
    goto yyloop;

yyoverflow:
    yyerror("yacc stack overflow");

yyabort:
    yyfreestack(&yystack);
    return (1);

yyaccept:
    yyfreestack(&yystack);
    return (0);
}
