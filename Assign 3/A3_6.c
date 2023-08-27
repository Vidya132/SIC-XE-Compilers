#include<stdio.h>

int main(int argc,char *argv[]) {
    int token;
    FILE *fp;
    fp = fopen("output.txt","w");
    while (token = yylex()) {
        if(token==MULTI_COMMENT){
            char *c = yytext;
            c++;
            c++;
            char *c1;
            c1 = c;
            while(c1[0]!='*'){
                c1++;
            }
            c1[0] = '\0';
            fprintf(fp,"<MULTI LINE COMMENT, %d, %s>\n", token,c);
        }else if (token==SINGLE_COMMENT){
            char *c = yytext;
            c++;
            c++;
            char *c1 = c;
            while(c1[0]!='\n'){
                c1++;
            }
            c1[0] = '\0';
            fprintf(fp,"<SINGLE LINE COMMENT, %d, %s>\n", token,c);
        }else if(token==CHAR){
            fprintf(fp,"<KEYWORD, %d, %s>\n ", token, yytext);
        }else if(token==ELSE){
            fprintf(fp,"<KEYWORD, %d, %s>\n", token, yytext);
        }else if(token==FOR){
            fprintf(fp,"<KEYWORD, %d, %s>\n", token, yytext);
        }else if(token==IF){
            fprintf(fp,"<KEYWORD, %d, %s>\n", token, yytext);
        }else if(token==INT){
            fprintf(fp,"<KEYWORD, %d, %s>\n", token, yytext);
        }else if(token==RETURN){
            fprintf(fp,"<KEYWORD, %d, %s>\n", token, yytext);
        }else if(token==VOID){
            fprintf(fp,"<KEYWORD, %d, %s>\n", token, yytext);
        }else if(ID){
            fprintf(fp,"<IDENTIFIER, %d, %s>\n", token, yytext); 
        }else if(token==INT_CONSTANT){
            fprintf(fp,"<INTEGER CONSTANT, %d, %s>\n", token, yytext); 
        }else if(token==CHAR_CONSTANT){
            fprintf(fp,"<CHAR CONSTANT, %d, %s>\n", token, yytext); 
        }else if(token==STRING_CONSTANT){
            char *c = yytext;
            c++;
            char *c1 = c;
            while(c1[0]!='"'){
                c1++;
            }
            c1[0] = '\0';
            fprintf(fp,"<STRING CONSTANT, %d, %s>\n", token, c); 
        }else if(token==LSQBRACKET){
            fprintf(fp,"<PUNCTUATOR, %d, %s>\n", token, yytext); 
        }else if(token==RSQBRACKET){
            fprintf(fp,"<PUNCTUATOR, %d, %s>\n", token, yytext); 
        }else if(token==LBRACE){
            fprintf(fp,"<PUNCTUATOR, %d, %s>\n", token, yytext); 
        }else if(token==RBRACE){
            fprintf(fp,"<PUNCTUATOR, %d, %s>\n", token, yytext); 
        }else if(token==LPARAN){
            fprintf(fp,"<PUNCTUATOR, %d, %s>\n", token, yytext); 
        }else if(token==RPARAN){
            fprintf(fp,"<PUNCTUATOR, %d, %s>\n", token, yytext); 
        }else if(token==ARROW){
           fprintf(fp,"<PUNCTUATOR, %d, %s>\n", token, yytext);  
        }else if(token==BIT_AND){
            fprintf(fp,"<PUNCTUATOR, %d, %s>\n", token, yytext); 
        }else if(token==PLUS){
            fprintf(fp,"<PUNCTUATOR, %d, %s>\n", token, yytext); 
        }else if(token==SUB){
            fprintf(fp,"<PUNCTUATOR, %d, %s>\n", token, yytext); 
        }else if(token==MULT){
            fprintf(fp,"<PUNCTUATOR, %d, %s>\n", token, yytext); 
        }else if(token==DIV){
            fprintf(fp,"<PUNCTUATOR, %d, %s>\n", token, yytext); 
        }else if(token==MOD){
            fprintf(fp,"<PUNCTUATOR, %d, %s>\n", token, yytext); 
        }else if(token==LOG_NOT){
            fprintf(fp,"<PUNCTUATOR, %d, %s>\n", token, yytext); 
        }else if(token==LOG_AND){
            fprintf(fp,"<PUNCTUATOR, %d, %s>\n", token, yytext); 
        }else if(token==LOG_OR){
            fprintf(fp,"<PUNCTUATOR, %d, %s>\n", token, yytext); 
        }else if(token==LESS){
            fprintf(fp,"<PUNCTUATOR, %d, %s>\n", token, yytext); 
        }else if(token==GREATER){
            fprintf(fp,"<PUNCTUATOR, %d, %s>\n", token, yytext); 
        }else if(token==LESSEQ){
            fprintf(fp,"<PUNCTUATOR, %d, %s>\n", token, yytext); 
        }else if(token==GREATEREQ){
            fprintf(fp,"<PUNCTUATOR, %d, %s>\n", token, yytext); 
        }else if(token==EQUALS){
            fprintf(fp,"<PUNCTUATOR, %d, %s>\n", token, yytext); 
        }else if(token==NOTEQ){
            fprintf(fp,"<PUNCTUATOR, %d, %s>\n", token, yytext); 
        }else if(token==QUES){
            fprintf(fp,"<PUNCTUATOR, %d, %s>\n", token, yytext); 
        }else if(token==COLON){
            fprintf(fp,"<PUNCTUATOR, %d, %s>\n", token, yytext); 
        }else if(token==SEMICOLON){
            fprintf(fp,"<PUNCTUATOR, %d, %s>\n", token, yytext); 
        }else if(token==ASSIGN){
            fprintf(fp,"<PUNCTUATOR, %d, %s>\n", token, yytext); 
        }else if(token==COMMA){
            fprintf(fp,"<PUNCTUATOR, %d, %s>\n", token, yytext); 
        }else if(token==NEW_LINE){
            fprintf(fp,"<PUNCTUATOR, %d, %s>\n", token, yytext); 
        }
    }

    return 0;

}
