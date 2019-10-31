%{
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
#include "listaIdentificadores.h"
extern FILE *yyin;
extern FILE *yyout;
//#define YYDEBUG 1
%}

%union {
char cadena[30];
int entero;
char caracter;
}

//%verbose

%token <entero> NUM
%token <cadena> IDENTIFICADOR
%token <cadena> TIPO_DATO
%token <cadena> PALABRA_RESERVADA
%token <cadena> DO
%token <cadena> WHILE
%token <cadena> CHAR
%token <cadena> LITERAL_CADENA
%token <cadena> MAYOR_IGUAL
%token <cadena> MENOR_IGUAL
%token <cadena> IGUALDAD
%token <cadena> AND
%token <cadena> OR
%token <cadena> DESIGUALDAD
%token <cadena> CASE
%token <cadena> BREAK
%token <cadena> DEFAULT
%token <cadena> MAS_IGUAL
%token <cadena> MENOS_IGUAL
%token <cadena> POR_IGUAL
%token <cadena> DIVIDIDO_IGUAL

%type <cadena> identificadorA
%type <cadena> exp
%type <cadena> sentenciaDeclaracion
%type <cadena> listaTipoDeDato
%type <cadena> parametro
%type <cadena> listaIdentificadores

%%

input:    /* vacío */
        | input line
;

line:     '\n'
		| listadoDeSentenciasDeDeclaracion '\n'
		| definicionFuncion  '\n'
		| sentenciaSwitch '\n'
		| sentenciaWhile '\n'
		| sentenciaFor '\n'
		| sentenciaDo '\n'
		| sentenciaIfElse '\n'
		| sentenciaAsignacion '\n'
		| error '\n' { yyerrok; }

;



definicionFuncion: sentenciaDeclaracion '{' listadoDeSentencias '}' {printf("Se ha definido una funcion \n");}

listadoDeSentencias:
					| sentenciaSwitch listadoDeSentencias
					| sentenciaDo listadoDeSentencias
					| sentenciaFor listadoDeSentencias
					| sentenciaWhile listadoDeSentencias
					| sentenciaIfElse listadoDeSentencias
					| sentenciaAsignacion listadoDeSentencias
					| listadoDeSentenciasDeDeclaracion listadoDeSentencias

sentenciaDo: DO '{' listadoDeSentencias '}' {printf( "Se ha declarado una sentencia do \n");}

;

sentenciaFor :	 PALABRA_RESERVADA '(' sentenciaDeclaracion ';' exp ';' identificadorA '+''+' ')' '{' listadoDeSentencias '}' '\n' {printf("Se ha declarado una sentencia for\n"); fputs("Se ha declarado una sentencia for \n", yyout);}
				| PALABRA_RESERVADA '(' sentenciaDeclaracion ';' exp ';' identificadorA '-''-' ')' '{' listadoDeSentencias '}' {printf("Se ha declarado una sentencia for\n")}

;


sentenciaIfElse: PALABRA_RESERVADA '(' exp ')' '{' listadoDeSentencias '}' {printf ("Se declaro un if \n");} sentenciaElse
;

sentenciaElse:
				| PALABRA_RESERVADA '{' listadoDeSentencias '}' {printf ("Se declaron un else \n");}

;

sentenciaWhile: WHILE '(' exp ')' '{' listadoDeSentencias '}' {printf ("Se declaro un while \n");}

;

sentenciaSwitch:
				| PALABRA_RESERVADA '(' exp ')' '{' sentenciaCase '}' {printf ("Se declaro un switch \n");}

;

sentenciaCase:
				| CASE exp ':' listadoDeSentencias BREAK ';' {printf ("Se declaro un case \n");}
				| sentenciaCase DEFAULT ':' listadoDeSentencias {printf ("Se declaro el default \n");}

listadoDeSentenciasDeDeclaracion:
									| sentenciaDeclaracion
									| sentenciaDeclaracion ';' listadoDeSentenciasDeDeclaracion
;

sentenciaDeclaracion:	 TIPO_DATO listaIdentificadores ';' {printf("Se han declarado variables \n");}
						| TIPO_DATO IDENTIFICADOR '[' exp ']' ';' {printf("Se ha declarado un arreglo \n");}
						| TIPO_DATO '*' IDENTIFICADOR';' {printf("Se ha declarado un puntero \n");}
						| parametro '(' listaTipoDeDato')' ';'  {printf("Se ha declarado una funcion \n");fputs("Se ha declarado una funcion \n", yyout);}
;

sentenciaAsignacion: parametro '=' exp ';' 
					|parametro MAS_IGUAL exp ';' {printf("Se ha declarado una sentencia de asignacion \n")}
					|parametro MENOS_IGUAL exp ';' {printf("Se ha declarado una sentencia de asignacion \n")}
					|parametro POR_IGUAL exp ';' {printf("Se ha declarado una sentencia de asignacion \n")}
					|parametro DIVIDIDO_IGUAL exp ';' {printf("Se ha declarado una sentencia de asignacion \n")}
					

;


parametro:
			| TIPO_DATO IDENTIFICADOR 
			| IDENTIFICADOR 

;

listaIdentificadores: 	  identificadorA
						| listaIdentificadores ',' identificadorA   

;

identificadorA:		  IDENTIFICADOR { 	agregarId($1);}
					| IDENTIFICADOR '=' exp {printf("Se asigna al identificador %s el valor %s \n",$1,$3); agregarId($1); recorrerListaId(); fprintf(yyout, "Se asigna al identificador \"%s\" el valor %s \n",$1,$3)}

;

listaTipoDeDato: TIPO_DATO
				| TIPO_DATO ',' listaTipoDeDato

;

exp: 
			| LITERAL_CADENA
			| IDENTIFICADOR
			| NUM {itoa($1,$$,10)}
			| CHAR
			| exp '+' exp	
			| exp '-' exp
			| exp '>' exp
			| exp '<' exp
			| exp IGUALDAD exp
			| exp MAYOR_IGUAL exp
			| exp MENOR_IGUAL exp
			| exp DESIGUALDAD exp
			| exp AND exp
			| exp OR exp
;

%%

main ()
{
 // yydebug = 1;

yyin = fopen("entrada.txt","r+");
yyout = fopen("salida.txt","wt+");

  yyparse ();



}
