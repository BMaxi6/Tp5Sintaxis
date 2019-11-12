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

%error-verbose


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
%token <s> DIVIDIDO_IGUAL
%type <s> identificadorA
%type <s> exp
%type <s> sentenciaDeclaracion
%type <s> listaParametros
%type <s> parametro
%type <s> listaIdentificadores
%type <s> sentenciaReturn

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



definicionFuncion: parametro '(' listaParametros')' '{' listadoDeSentencias '}' {printf("Se ha definido una funcion \n");}
;
listadoDeSentencias:
					| sentenciaSwitch listadoDeSentencias
					| sentenciaDo listadoDeSentencias
					| sentenciaFor listadoDeSentencias
					| sentenciaWhile listadoDeSentencias
					| sentenciaIfElse listadoDeSentencias
					| sentenciaAsignacion listadoDeSentencias
					| sentenciaReturn listadoDeSentencias
					| listadoDeSentenciasDeDeclaracion listadoDeSentencias
;
sentenciaDo: DO '{' listadoDeSentencias '}' {printf( "Se ha declarado una sentencia do \n");}


sentenciaFor :	 PALABRA_RESERVADA '(' sentenciaDeclaracion exp ';' identificadorA '+''+' ')' '{' listadoDeSentencias '}'  {printf("Se ha declarado una sentencia for\n"); fputs("Se ha declarado una sentencia for \n", yyout);}
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

sentenciaReturn:
				|PALABRA_RESERVADA exp ';'
;

listadoDeSentenciasDeDeclaracion:
									| sentenciaDeclaracion
									| sentenciaDeclaracion ';' listadoDeSentenciasDeDeclaracion 
;

sentenciaDeclaracion:	TIPO_DATO IDENTIFICADOR ';'				  {agregarId($<s.cadena>2,$<s.cadena>1); $<s.tipo>2 = chequearTipo($<s.cadena>1,"int");}
						| TIPO_DATO listaIdentificadores ';'      {agregarId($<s.cadena>2,$<s.cadena>1); }
						| TIPO_DATO IDENTIFICADOR '[' exp ']' ';' {agregarId($<s.cadena>2,$<s.cadena>1);printf("Se ha declarado un arreglo \n");}
						| TIPO_DATO '*' IDENTIFICADOR';'          {agregarId($<s.cadena>3,$<s.cadena>1);}
						| parametro '(' listaParametros')' ';'    { agregarFuncion( $<s.cadena>1, $<s.cadena>2, $<s.cadena>4);}
						
;

sentenciaAsignacion: parametro '=' exp ';' 
					|parametro MAS_IGUAL exp ';' 
					|parametro MENOS_IGUAL exp ';' 
					|parametro POR_IGUAL exp ';' 
					|parametro DIVIDIDO_IGUAL exp ';' 
					

;


parametro:
			| TIPO_DATO IDENTIFICADOR
			| IDENTIFICADOR 

;

listaIdentificadores: 	  identificadorA
						| listaIdentificadores ',' identificadorA 
						

;

identificadorA:		  IDENTIFICADOR 
					| IDENTIFICADOR '=' exp {/*printf("Se le asigna al identificador %s el valor %f \n", $<s.cadena>1 ,$<s.valor>3)*/}
					               

;

listaParametros: TIPO_DATO
				| TIPO_DATO ',' listaParametros
				|TIPO_DATO IDENTIFICADOR
				|TIPO_DATO IDENTIFICADOR ',' listaParametros

;

exp: 
			| LITERAL_CADENA
			| IDENTIFICADOR
			| CHAR
			
			| exp '-' exp                   {$<s.tipo>1 = calcularTipo($<s.cadena>1,$<s.tipo>1);$<s.tipo>3 = calcularTipo($<s.cadena>3,$<s.tipo>3);if ($<s.tipo>1==$<s.tipo>3){$<s.valor>$ = $<s.valor>1 - $<s.valor>3; $<s.tipo>$ = $<s.tipo>1;}else{agregarControlTipos($<s.cadena>1, $<s.cadena>3, "resta");  }}
			| exp '>' exp                   {$<s.tipo>1 = calcularTipo($<s.cadena>1,$<s.tipo>1);$<s.tipo>3 = calcularTipo($<s.cadena>3,$<s.tipo>3);if ($<s.tipo>1==$<s.tipo>3){$<s.valor>$ = $<s.valor>1 > $<s.valor>3; $<s.tipo>$ = $<s.tipo>1;}else{ agregarControlTipos($<s.cadena>1, $<s.cadena>3, "mayor");  }}
			| exp '<' exp                   {$<s.tipo>1 = calcularTipo($<s.cadena>1,$<s.tipo>1);$<s.tipo>3 = calcularTipo($<s.cadena>3,$<s.tipo>3);if ($<s.tipo>1==$<s.tipo>3){$<s.valor>$ = $<s.valor>1 < $<s.valor>3; $<s.tipo>$ = $<s.tipo>1;}else{ agregarControlTipos($<s.cadena>1, $<s.cadena>3,"menor");  }}
			| exp IGUALDAD exp		        {$<s.tipo>1 = calcularTipo($<s.cadena>1,$<s.tipo>1);$<s.tipo>3 = calcularTipo($<s.cadena>3,$<s.tipo>3);if ($<s.tipo>1==$<s.tipo>3){$<s.valor>$ = $<s.valor>1 == $<s.valor>3; $<s.tipo>$ = $<s.tipo>1;}else{ agregarControlTipos($<s.cadena>1, $<s.cadena>3, "igualdad");  }}
			| exp MAYOR_IGUAL exp           {$<s.tipo>1 = calcularTipo($<s.cadena>1,$<s.tipo>1);$<s.tipo>3 = calcularTipo($<s.cadena>3,$<s.tipo>3);if ($<s.tipo>1==$<s.tipo>3){$<s.valor>$ = $<s.valor>1 >= $<s.valor>3; $<s.tipo>$ = $<s.tipo>1;}else{ agregarControlTipos($<s.cadena>1, $<s.cadena>3, "mayor igual");  }}
			| exp MENOR_IGUAL exp           {$<s.tipo>1 = calcularTipo($<s.cadena>1,$<s.tipo>1);$<s.tipo>3 = calcularTipo($<s.cadena>3,$<s.tipo>3);if ($<s.tipo>1==$<s.tipo>3){$<s.valor>$ = $<s.valor>1 <= $<s.valor>3; $<s.tipo>$ = $<s.tipo>1;}else{ agregarControlTipos($<s.cadena>1, $<s.cadena>3, "menor igual");  }}
			| exp DESIGUALDAD exp           {$<s.tipo>1 = calcularTipo($<s.cadena>1,$<s.tipo>1);$<s.tipo>3 = calcularTipo($<s.cadena>3,$<s.tipo>3);if ($<s.tipo>1==$<s.tipo>3){$<s.valor>$ = $<s.valor>1 != $<s.valor>3; $<s.tipo>$ = $<s.tipo>1;}else{ agregarControlTipos($<s.cadena>1, $<s.cadena>3,"desigualdad");  }}
			| exp AND exp                   {$<s.tipo>1 = calcularTipo($<s.cadena>1,$<s.tipo>1);$<s.tipo>3 = calcularTipo($<s.cadena>3,$<s.tipo>3);if ($<s.tipo>1==$<s.tipo>3){$<s.valor>$ = $<s.valor>1 && $<s.valor>3; $<s.tipo>$ = $<s.tipo>1;}else{ agregarControlTipos($<s.cadena>1, $<s.cadena>3, "and");  }}
			| exp OR exp                    {$<s.tipo>1 = calcularTipo($<s.cadena>1,$<s.tipo>1);$<s.tipo>3 = calcularTipo($<s.cadena>3,$<s.tipo>3);if ($<s.tipo>1==$<s.tipo>3){$<s.valor>$ = $<s.valor>1 || $<s.valor>3; $<s.tipo>$ = $<s.tipo>1;}else{agregarControlTipos($<s.cadena>1, $<s.cadena>3, "or");  }}
			| NUM 
			| exp '*' exp                   {$<s.tipo>1 = calcularTipo($<s.cadena>1,$<s.tipo>1);$<s.tipo>3 = calcularTipo($<s.cadena>3,$<s.tipo>3);if ($<s.tipo>1==$<s.tipo>3){$<s.valor>$ = $<s.valor>1 * $<s.valor>3; $<s.tipo>$ = $<s.tipo>1;}else{ agregarControlTipos($<s.cadena>1, $<s.cadena>3, "multiplicacion");  }}
			| exp '/' exp                   {$<s.tipo>1 = calcularTipo($<s.cadena>1,$<s.tipo>1);$<s.tipo>3 = calcularTipo($<s.cadena>3,$<s.tipo>3);if ($<s.tipo>1==$<s.tipo>3){$<s.valor>$ = $<s.valor>1 / $<s.valor>3; $<s.tipo>$ = $<s.tipo>1;}else{ agregarControlTipos($<s.cadena>1, $<s.cadena>3, "division");  }}
			| exp '+' exp                   {$<s.tipo>1 = calcularTipo($<s.cadena>1,$<s.tipo>1);$<s.tipo>3 = calcularTipo($<s.cadena>3,$<s.tipo>3);if ($<s.tipo>1==$<s.tipo>3){$<s.valor>$ = $<s.valor>1 + $<s.valor>3; $<s.tipo>$ = $<s.tipo>1;}else{ agregarControlTipos( $<s.cadena>1, $<s.cadena>3, "suma");}}
			
;

%%

main ()
{
 // yydebug = 1;

yyin = fopen("entrada.txt","r+");
yyout = fopen("salida.txt","wt+");



yyparse ();



reporte();



}
