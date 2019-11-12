#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct node{

	int cantidad;
    struct node* next;
    char tipo[30];
    char identificador[30];
}nodoIdentificador;

typedef struct node2{
	char exp1[20];
	char exp2[20];
	char operacion[20];
    struct node2* next;

}nodoControlTipos;

typedef struct node3{
  char funcion[20];
  char tipoRetorno[20];
  char tipoParametro[20];
struct node3* next;
}nodoFuncion;


nodoIdentificador *primeroId=NULL;
nodoControlTipos *primeroTipos = NULL;
nodoFuncion *primeroFuncion = NULL;


int idEncontrado(nodoIdentificador* lista,char* iden){
	nodoIdentificador* aux = primeroId;
	while(aux!=NULL){
		if(!strcmp(aux->identificador, iden)){
            aux->cantidad ++;
			return 1;
		}else{
		aux=aux->next;
		}
	}
	return 0;
}
int buscarTipo (char* iden){
	nodoIdentificador* aux = primeroId;
	while(aux!=NULL){
		if(!strcmp(aux->identificador, iden)){
            //aux->cantidad ++;
			if(strcmp(aux->tipo,"int")== 0 || strcmp(aux->tipo,"char")== 0 || strcmp(aux->tipo,"float")== 0 || strcmp(aux->tipo,"double")== 0){return 1;} else { return 2;};
		}else{
		aux=aux->next;
		}


	}
	return 0;
}
void agregarId(char *iden, char *tipoDato){
    nodoIdentificador *nuevo;
	nuevo = (nodoIdentificador *) malloc (sizeof(nodoIdentificador));
    if (nuevo == NULL) printf( "No hay memoria disponible!\n");
  	strcpy(nuevo -> identificador, iden);
  	strcpy(nuevo -> tipo, tipoDato);
    nuevo -> cantidad = 1;
    nuevo -> next = NULL;
    if(idEncontrado(nuevo,iden)==0){
     if (primeroId==NULL) {
            primeroId = nuevo;
            //ultimoPr = nuevo;
        } else {
            nodoIdentificador* aux=primeroId;
            while(aux->next!=NULL){
                aux=aux->next;
            }
            aux->next=nuevo;
        }
	}

}

void funcion (){


}

void recorrerListaId(){

    nodoIdentificador *auxiliar=primeroId;
    printf("\n__________Mostrando la lista de identificadores:\n\n");
    while (auxiliar!=NULL) {
            printf( "Nombre: %s\n", auxiliar->identificador);
            printf( "Cantidad : %d\n", auxiliar->cantidad);
            printf( "Tipo : %s\n\n", auxiliar->tipo);
            auxiliar = auxiliar->next;
	}
 }

 void agregarControlTipos(char *exp1, char* exp2, char* operacion){
    nodoControlTipos *nuevo;
	nuevo = (nodoControlTipos *) malloc (sizeof(nodoControlTipos));
    if (nuevo == NULL) printf( "No hay memoria disponible!\n");

  	strcpy(nuevo -> exp1, exp1);
  	strcpy(nuevo -> exp2, exp2);
  	strcpy(nuevo -> operacion, operacion);
  	//printf("agrego %s ", iden);
    nuevo -> next = NULL;
     if (primeroTipos==NULL) {
            primeroTipos = nuevo;
            //ultimoPr = nuevo;
        } else {
            nodoControlTipos* aux=primeroTipos;
            while(aux->next!=NULL){
                aux=aux->next;
            }
            aux->next=nuevo;
        }
	}


  void recorrerListaControlTipos(){

    nodoControlTipos *auxiliar=primeroTipos;
    printf("\n__________No se corresponden los tipos de:\n\n");
    while (auxiliar!=NULL) {
            printf( "La operacion %s de %s y %s \n\n", auxiliar->operacion, auxiliar->exp1, auxiliar->exp2);
            auxiliar = auxiliar->next;
	}
 }

 void agregarFuncion(char *retorno, char* nombre, char* parametro){
    nodoFuncion*nuevo;
	nuevo = (nodoFuncion *) malloc (sizeof(nodoFuncion));
    if (nuevo == NULL) printf( "No hay memoria disponible!\n");

  	strcpy(nuevo -> tipoRetorno, retorno);
  	strcpy(nuevo -> funcion, nombre);
  	strcpy(nuevo -> tipoParametro, parametro);
    nuevo -> next = NULL;

     if (primeroFuncion==NULL) {
            primeroFuncion = nuevo;
            //ultimoPr = nuevo;
        } else {
            nodoFuncion* aux=primeroFuncion;
            while(aux->next!=NULL){
                aux=aux->next;
            }
            aux->next=nuevo;
        }
	}

void recorrerListaFuncion(){

    nodoFuncion *auxiliar=primeroFuncion;
    printf("\n__________Se han declarado las siguientes funciones:\n\n");
    while (auxiliar!=NULL) {
            printf( "Nombre: %s\n", auxiliar->funcion);
            printf( "Retorno : %s\n", auxiliar->tipoRetorno);
            printf( "Parametro : %s\n\n", auxiliar->tipoParametro);
            auxiliar = auxiliar->next;
	}
 }


int chequearTipo(char* unString,char* otroString){
    if (strcmp(unString,otroString)==0){
        return 1;
    } else {return 2;}
}

int calcularTipo(char* potencialIdentificador, int tipoOriginal){
    if (idEncontrado(primeroId,potencialIdentificador)){

        return buscarTipo(potencialIdentificador);

    }
    return tipoOriginal;
}



void recorrerListaDobleDeclaracion (){
	nodoIdentificador *auxiliar=primeroId;
	while (auxiliar != NULL){
		if(auxiliar->cantidad > 1){
			printf ("Existen multiples declaraciones de la variable: %s\n",auxiliar->identificador);
		}
		auxiliar = auxiliar->next;

	}
}

void reporte(){
    printf("\n");
    recorrerListaId();
    recorrerListaFuncion();
    recorrerListaControlTipos();
    recorrerListaDobleDeclaracion();

}



yyerror(char *s){
    extern int yylineno;
    printf("\n Error sintactico %s. En la linea %i \n\n",s,yylineno);
}


