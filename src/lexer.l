%{
#include "parser.tab.h"
#include <ctype.h>
int lineno  = 1;   
int nbCarac = 1;
%}

%option noinput nounput
%option noyywrap
%x COMMENTAIRE

%%
"/*"               {BEGIN(COMMENTAIRE);}
"//".*        ;
[\t ]        ;
\n  {lineno++; nbCarac = 0;}
[*/%]         {nbCarac++;yylval.operation = yytext[0];return(DIVSTAR);}
[0-9]+      {nbCarac++;yylval.num = atoi(yytext);return(NUM);}
"static"        {nbCarac++;strcpy(yylval.declStatic , yytext) ;  return(STATIC);} 
"void"          {nbCarac++;strcpy(yylval.typeVar , yytext); return(VOID);}
("int"|"char")  {nbCarac++;strcpy(yylval.typeVar , yytext) ;return(TYPE);}
"while"         {nbCarac++;return(WHILE);} 
"return"        {nbCarac++;return(RETURN);} 
"else"          {nbCarac++;return(ELSE);} 
"if"          {nbCarac++;return(IF);} 
[A-Za-z_][a-zA-Z0-9_]* {nbCarac++;strcpy(yylval.ident , yytext); return(IDENT);}
\'\\(n|t|0)\'    {nbCarac++;strcpy(yylval.caracter , yytext) ;return(CHARACTERE);}
\'.\'       {nbCarac++;strcpy(yylval.caracter , yytext);return(CHARACTERE);} 
(==|!=)            {nbCarac++;strcpy(yylval.ordre , yytext);return(EQ);}
(<|>|<=|>=) {nbCarac++;strcpy(yylval.ordre , yytext);return(ORDER);}
[-+]        {nbCarac++;yylval.operation = yytext[0]; return(ADDSUB);}
&&            {nbCarac++;strcpy(yylval.ordre , yytext);return(AND);}
\|\|           {nbCarac++;strcpy(yylval.ordre , yytext);return(OR);}
.              {nbCarac++;return yytext[0];}

<COMMENTAIRE>(."*/"|"*/")         { BEGIN(INITIAL);nbCarac++;}
<COMMENTAIRE>.     ;
<COMMENTAIRE>\n     { lineno++; nbCarac = 0;}
%%


