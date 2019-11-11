%{
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include "listaIdentificadores.h"
extern FILE *yyin;
extern FILE *yyout;
//#define YYDEBUG 1
%}

%union {
	struct{
     char cadena[50];
     float valor;
     int tipo;
	}s;
}

//%verbose

%token <s> NUM
%token <s> IDENTIFICADOR
%token <s> TIPO_DATO
%token <s> PALABRA_RESERVADA
%token <s> DO
%token <s> WHILE
%token <s> CHAR
%token <s> LITERAL_CADENA
%token <s> MAYOR_IGUAL
%token <s> MENOR_IGUAL
%token <s> IGUALDAD
%token <s> AND
%token <s> OR
%token <s> DESIGUALDAD
%token <s> CASE
%token <s> BREAK
%token <s> DEFAULT
%token <s> MAS_IGUAL
%token <s> MENOS_IGUAL
%token <s> POR_IGUAL
%token <s> DIVIDIDO
%token <s> DIVIDIDO_IGUAL
%type <s> identificadorA
%type <s> exp
%type <s> sentenciaDeclaracion
%type <s> listaTipoDeDato
%type <s> parametro
%type <s> listaIdentificadores

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
;
listadoDeSentencias:
					| sentenciaSwitch listadoDeSentencias
					| sentenciaDo listadoDeSentencias
					| sentenciaFor listadoDeSentencias
					| sentenciaWhile listadoDeSentencias
					| sentenciaIfElse listadoDeSentencias
					| sentenciaAsignacion listadoDeSentencias
					| listadoDeSentenciasDeDeclaracion listadoDeSentencias
;
sentenciaDo: DO '{' listadoDeSentencias '}' {printf( "Se ha declarado una sentencia do \n");}


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
;

listadoDeSentenciasDeDeclaracion:
									| sentenciaDeclaracion
									| sentenciaDeclaracion ';' listadoDeSentenciasDeDeclaracion 
;

sentenciaDeclaracion:	TIPO_DATO IDENTIFICADOR ';'				  {agregarId($<s.cadena>2,$<s.cadena>1);printf( "Se declaro %s " , $<s.cadena>1); recorrerListaId();$<s.tipo>2 = chequearTipo($<s.cadena>1,"int");}
						| TIPO_DATO listaIdentificadores ';'      {printf("Se han declarado variables \n"); agregarId($<s.cadena>2,$<s.cadena>1); recorrerListaId(); }
						| TIPO_DATO IDENTIFICADOR '[' exp ']' ';' {agregarId($<s.cadena>2,$<s.cadena>1);printf("Se ha declarado un arreglo \n");}
						| TIPO_DATO '*' IDENTIFICADOR';'          {agregarId($<s.cadena>3,$<s.cadena>1);printf("Se ha declarado un puntero \n");}
						| parametro '(' listaTipoDeDato')' ';'    {printf("Se ha declarado una funcion \n");fputs("Se ha declarado una funcion \n", yyout);}
						
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

identificadorA:		  IDENTIFICADOR {}
					| IDENTIFICADOR '=' exp {printf("Se asigna al identificador %s el valor %f \n",$<s.cadena>1,$<s.valor>3);}

;

listaTipoDeDato: TIPO_DATO
				| TIPO_DATO ',' listaTipoDeDato

;

exp: 
			| LITERAL_CADENA
			| IDENTIFICADOR
			| CHAR
			
			| exp '-' exp                   {$<s.tipo>1 = calcularTipo($<s.cadena>1,$<s.tipo>1);$<s.tipo>3 = calcularTipo($<s.cadena>3,$<s.tipo>3);if ($<s.tipo>1==$<s.tipo>3){$<s.valor>$ = $<s.valor>1 - $<s.valor>3; $<s.tipo>$ = $<s.tipo>1;}else{printf("No se corresponden los tipos de datos en la resta\n"); agregarControlTipos($<s.cadena>1, $<s.cadena>3, "resta"); recorrerListaControlTipos();}}
			| exp '>' exp                   {$<s.tipo>1 = calcularTipo($<s.cadena>1,$<s.tipo>1);$<s.tipo>3 = calcularTipo($<s.cadena>3,$<s.tipo>3);if ($<s.tipo>1==$<s.tipo>3){$<s.valor>$ = $<s.valor>1 > $<s.valor>3; $<s.tipo>$ = $<s.tipo>1;}else{printf("No se corresponden los tipos de datos en la operacion mayor\n"); agregarControlTipos($<s.cadena>1, $<s.cadena>3, "mayor"); recorrerListaControlTipos();}}
			| exp '<' exp                   {$<s.tipo>1 = calcularTipo($<s.cadena>1,$<s.tipo>1);$<s.tipo>3 = calcularTipo($<s.cadena>3,$<s.tipo>3);if ($<s.tipo>1==$<s.tipo>3){$<s.valor>$ = $<s.valor>1 < $<s.valor>3; $<s.tipo>$ = $<s.tipo>1;}else{printf("No se corresponden los tipos de datos en la operacion menor\n"); agregarControlTipos($<s.cadena>1, $<s.cadena>3,"menor"); recorrerListaControlTipos();}}
			| exp IGUALDAD exp		        {$<s.tipo>1 = calcularTipo($<s.cadena>1,$<s.tipo>1);$<s.tipo>3 = calcularTipo($<s.cadena>3,$<s.tipo>3);if ($<s.tipo>1==$<s.tipo>3){$<s.valor>$ = $<s.valor>1 == $<s.valor>3; $<s.tipo>$ = $<s.tipo>1;}else{printf("No se corresponden los tipos de datos en la operacion igualdad\n"); agregarControlTipos($<s.cadena>1, $<s.cadena>3, "igualdad"); recorrerListaControlTipos();}}
			| exp MAYOR_IGUAL exp           {$<s.tipo>1 = calcularTipo($<s.cadena>1,$<s.tipo>1);$<s.tipo>3 = calcularTipo($<s.cadena>3,$<s.tipo>3);if ($<s.tipo>1==$<s.tipo>3){$<s.valor>$ = $<s.valor>1 >= $<s.valor>3; $<s.tipo>$ = $<s.tipo>1;}else{printf("No se corresponden los tipos de datos en la operacion mayor/igual\n"); agregarControlTipos($<s.cadena>1, $<s.cadena>3, "mayor igual"); recorrerListaControlTipos();}}
			| exp MENOR_IGUAL exp           {$<s.tipo>1 = calcularTipo($<s.cadena>1,$<s.tipo>1);$<s.tipo>3 = calcularTipo($<s.cadena>3,$<s.tipo>3);if ($<s.tipo>1==$<s.tipo>3){$<s.valor>$ = $<s.valor>1 <= $<s.valor>3; $<s.tipo>$ = $<s.tipo>1;}else{printf("No se corresponden los tipos de datos en la operacion menor/igual\n"); agregarControlTipos($<s.cadena>1, $<s.cadena>3, "menor igual"); recorrerListaControlTipos();}}
			| exp DESIGUALDAD exp           {$<s.tipo>1 = calcularTipo($<s.cadena>1,$<s.tipo>1);$<s.tipo>3 = calcularTipo($<s.cadena>3,$<s.tipo>3);if ($<s.tipo>1==$<s.tipo>3){$<s.valor>$ = $<s.valor>1 != $<s.valor>3; $<s.tipo>$ = $<s.tipo>1;}else{printf("No se corresponden los tipos de datos en la operacion desigualdad\n"); agregarControlTipos($<s.cadena>1, $<s.cadena>3,"desigualdad"); recorrerListaControlTipos();}}
			| exp AND exp                   {$<s.tipo>1 = calcularTipo($<s.cadena>1,$<s.tipo>1);$<s.tipo>3 = calcularTipo($<s.cadena>3,$<s.tipo>3);if ($<s.tipo>1==$<s.tipo>3){$<s.valor>$ = $<s.valor>1 && $<s.valor>3; $<s.tipo>$ = $<s.tipo>1;}else{printf("No se corresponden los tipos de datos en la operacion and\n"); agregarControlTipos($<s.cadena>1, $<s.cadena>3, "and"); recorrerListaControlTipos();}}
			| exp OR exp                    {$<s.tipo>1 = calcularTipo($<s.cadena>1,$<s.tipo>1);$<s.tipo>3 = calcularTipo($<s.cadena>3,$<s.tipo>3);if ($<s.tipo>1==$<s.tipo>3){$<s.valor>$ = $<s.valor>1 || $<s.valor>3; $<s.tipo>$ = $<s.tipo>1;}else{printf("No se corresponden los tipos de datos en la operacion or\n"); agregarControlTipos($<s.cadena>1, $<s.cadena>3, "or"); recorrerListaControlTipos();}}
			| NUM 
			| exp '*' exp                   {$<s.tipo>1 = calcularTipo($<s.cadena>1,$<s.tipo>1);$<s.tipo>3 = calcularTipo($<s.cadena>3,$<s.tipo>3);if ($<s.tipo>1==$<s.tipo>3){$<s.valor>$ = $<s.valor>1 * $<s.valor>3; $<s.tipo>$ = $<s.tipo>1;}else{printf("No se corresponden los tipos de datos en la multipliacion\n"); agregarControlTipos($<s.cadena>1, $<s.cadena>3, "multiplicacion"); recorrerListaControlTipos();}}
			| exp '/' exp                   {$<s.tipo>1 = calcularTipo($<s.cadena>1,$<s.tipo>1);$<s.tipo>3 = calcularTipo($<s.cadena>3,$<s.tipo>3);if ($<s.tipo>1==$<s.tipo>3){$<s.valor>$ = $<s.valor>1 / $<s.valor>3; $<s.tipo>$ = $<s.tipo>1;}else{printf("No se corresponden los tipos de datos en la division\n"); agregarControlTipos($<s.cadena>1, $<s.cadena>3, "division"); recorrerListaControlTipos();}}
			| exp '+' exp                   {$<s.tipo>1 = calcularTipo($<s.cadena>1,$<s.tipo>1);$<s.tipo>3 = calcularTipo($<s.cadena>3,$<s.tipo>3);if ($<s.tipo>1==$<s.tipo>3){$<s.valor>$ = $<s.valor>1 + $<s.valor>3; $<s.tipo>$ = $<s.tipo>1;}else{printf("No se corresponden los tipos de datos en la suma\n"); agregarControlTipos( $<s.cadena>1, $<s.cadena>3, "suma"); recorrerListaControlTipos();}}
			
;

%%

main ()
{
 // yydebug = 1;

yyin = fopen("entrada.txt","r+");
yyout = fopen("salida.txt","wt+");

yyparse ();



}
