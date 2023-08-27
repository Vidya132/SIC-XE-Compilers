%{
    #include "A4_6.tab.h"
    int count = 1;
%}


/*keywords*/
CHAR                       	"char"
ELSE                       	"else"
FOR                        	"for"
IF                         	"if"
INT                        	"int"
RETURN                      	"return"
VOID                        	"void"

/*Identifier*/
ID                         	[a-zA-Z_][a-zA-Z0-9_]*

/*constants*/
DIG_SEQ                     	[0-9]+
SIGN                        	[+-]
NONZERO_INT_CONST           	[1-9][0-9]*
INT_CONST                   	"0"|{NONZERO_INT_CONST}		
ESC_SEQ				[\\][']|[\\]["]|[\\][?]|[\\][\\]|[\\][a]|[\\][b]|[\\][f]|[\\][n]|[\\][r]|[\\][t]|[\\][v]
C_CHAR				[^'\n\\]|{ESC_SEQ}
C_CHAR_SEQ			{C_CHAR}+
CHAR_CONST			[']{C_CHAR_SEQ}[']

/*string literals */
S_CHAR 				[^"\n\\]|{ESC_SEQ}
S_CHAR_SEQ			{S_CHAR}+
STRING_CONST			["]{S_CHAR_SEQ}["]|["]["]

/* comments*/
SINGLE_COMMENT			[/][/][^\n]*[\n]
SENTENCE			[^*]|[*]+[^/*]
MULTI_COMMENT			[/][*]{SENTENCE}*[*]+[/]

/*white space */
WS                          	[ \t\n]
NEW_LINE                    	[\n]


%%
{MULTI_COMMENT}					{return MULTI_COMMENT;}
{SINGLE_COMMENT}				{return SINGLE_COMMENT;}
{CHAR}						{return CHAR;}
{ELSE}						{return ELSE;}
{FOR}						{return FOR;}
{IF}						{return IF;}
{INT}						{return INT;}
{RETURN}					{return RETURN;}
{VOID}						{return VOID;}


{ID}						{return ID;}

{INT_CONST}					{return INT_CONST;}
{CHAR_CONST}					{return CHAR_CONST;}
{STRING_CONST}					{return STRING_CONST;}


"["						{return LSQBRACKET;}
"]"						{return RSQBRACKET;}
"{"						{return LBRACE;}
"}"						{return RBRACE;}
"("						{return LPARAN;}
")"						{return RPARAN;}
"->"						{return ARROW;}
"<="						{return LESSEQ;}
">="						{return GREATEREQ;}
"=="						{return EQUALS;}
"!="						{return NOTEQ;}
"&"						{return BIT_AND;}
"+"						{return PLUS;}
"-"						{return SUB;}
"*"						{return MULT;}
"/"						{return DIV;}
"%"						{return MOD;}
"!"						{return LOG_NOT;}
"&&"						{return LOG_AND;}
"||"						{return LOG_OR;}
"<"						{return LESS;}
">"						{return GREATER;}
"?"						{return QUES;}
":"						{return COLON;}
";"						{return SEMICOLON;}
"="						{return ASSIGN;}
","						{return COMMA;}
{NEW_LINE}                      {printf("\n*****************LINE %d****************\n",count);count++;}
{WS}							{/* Ignore whitespace */}
%%
