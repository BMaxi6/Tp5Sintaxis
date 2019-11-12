%{
#include "TP5bison.tab.h"
#include <string.h>
#include <stdlib.h>
%}

%option yylineno

%%


(\+=)										 { strcpy(yylval.s.cadena, yytext); return MAS_IGUAL;}
(\-=)										 { strcpy(yylval.s.cadena, yytext); return MENOS_IGUAL;}
(\*=)										 { strcpy(yylval.s.cadena, yytext); return POR_IGUAL;}
(\/=)										 { strcpy(yylval.s.cadena, yytext); return DIVIDIDO_IGUAL;}
[0-9]+                                       { strcpy(yylval.s.cadena, yytext); yylval.s.valor = atoi(yytext); yylval.s.tipo = 1; return NUM; }
[0-9]+("."[0-9]+)?                           { strcpy(yylval.s.cadena, yytext); yylval.s.valor = atof(yytext); yylval.s.tipo = 1; return NUM; }
while 										 { strcpy(yylval.s.cadena, yytext); return WHILE;}
do 											 { strcpy(yylval.s.cadena, yytext); return DO;}
case										 { strcpy(yylval.s.cadena, yytext); return CASE;}
break										 { strcpy(yylval.s.cadena, yytext); return BREAK;}
default										 { strcpy(yylval.s.cadena, yytext); return DEFAULT;}
for|switch|case|if|else|return				 { strcpy(yylval.s.cadena, yytext); return PALABRA_RESERVADA;}
char|int|float|double|void|struct|enum|bool  { strcpy(yylval.s.cadena, yytext); return TIPO_DATO; }
(\'[a-zA-Z]\')                               { strcpy(yylval.s.cadena, yytext); yylval.s.tipo = 1; return CHAR;}
[a-zA-Z_]([a-zA-Z_]|[0-9])*                  { strcpy(yylval.s.cadena, yytext); yylval.s.tipo = 2; return IDENTIFICADOR; }
(>=)										 { strcpy(yylval.s.cadena, yytext); return MAYOR_IGUAL;}
(<=)										 { strcpy(yylval.s.cadena, yytext); return MENOR_IGUAL;}
(==)										 { strcpy(yylval.s.cadena, yytext); return IGUALDAD;}
(&&)										 { strcpy(yylval.s.cadena, yytext); return AND;}
(\|\|)										 { strcpy(yylval.s.cadena, yytext); return OR;}
(\!\=)										 { strcpy(yylval.s.cadena, yytext); return DESIGUALDAD;}
\"([ -!#-~]|\\\")*\"			 			 { strcpy(yylval.s.cadena, yytext); yylval.s.tipo = 2; return LITERAL_CADENA;}

"="     { return '='; }
","     { return ','; }
";"     { return ';'; }
"+"     { return '+'; }
"-"     { return '-'; }
"*"     { return '*'; }
"/"     { return '/'; }
"%"     { return '%'; }
")"     { return ')'; }
"("     { return '('; }
"{"     { return '{'; }
"}"     { return '}'; }
"["     { return '['; }
"]"     { return ']'; }
"&"     { return '&'; }
"|"     { return '|'; }
"<"     { return '<'; }
">"     { return '>'; }
"!"     { return '!'; }
":"		{ return ':'; }

"\n"    { return '\n'; }

%%
