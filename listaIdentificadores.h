#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct node{

	int cantidad;
    struct node* next;
    char tipo[30];
    char identificador[];
}nodoIdentificador;

typedef struct node2{
	char exp1[20];
	char exp2[20];
	char operacion[20];
    struct node2* next;

}nodoControlTipos;

nodoIdentificador *primeroId=NULL;
nodoControlTipos *primeroTipos = NULL;

int idEncontrado(nodoIdentificador* lista,char* iden){
	nodoIdentificador* aux = primeroId;
	while(aux!=NULL){
		if(!strcmp(aux->identificador, iden)){
			printf("Doble declaracion \n");
            //aux->cantidad ++;
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
	nuevo = (nodoIdentificador *) malloc (4+4+strlen(iden));
    if (nuevo == NULL) printf( "No hay memoria disponible!\n");
  	strcpy(nuevo -> identificador, iden);
  	strcpy(nuevo -> tipo, tipoDato);
  	//printf("agrego %s ", iden);
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


void recorrerListaId(){

    nodoIdentificador *auxiliar=primeroId;
    printf("\n__________Mostrando la lista de identificadores:\n\n");
    while (auxiliar!=NULL) {
            printf( "Nombre: %s\n", auxiliar->identificador);
            printf( "Cantidad : %d\n", auxiliar->cantidad);
            printf( "Tipo : %s\n", auxiliar->tipo);
            auxiliar = auxiliar->next;
	}
 }

 void agregarControlTipos(char *exp1, char* exp2, char* operacion){
    nodoControlTipos *nuevo;
    printf("hola \n");
	nuevo = (nodoControlTipos *) malloc (sizeof(nodoControlTipos));
    printf("hola \n");
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
    printf("\n__________No se corresponden los tipos de la operacion %s de:\n\n" , auxiliar->operacion);
    while (auxiliar!=NULL) {
            printf( " %s y %s \n", auxiliar->exp1, auxiliar->exp2);
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
        printf(" Si ves esto significa que encontro el id, no que es doble declaracion \n");
        return buscarTipo(potencialIdentificador);

    }
    return tipoOriginal;
}
