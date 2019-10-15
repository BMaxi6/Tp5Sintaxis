#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct node{

	int cantidad;
    struct node* next;
    char identificador[];
}nodoIdentificador;

nodoIdentificador *primeroId=NULL;

int idEncontrado(nodoIdentificador* lista,char* iden){
	nodoIdentificador* aux = primeroId;
	while(aux!=NULL){
		if(!strcmp(aux->identificador, iden)){
			printf("Doble declaracion \n");
            exit(-1);
            //aux->cantidad ++;
			return 1;
		}else{
		aux=aux->next;
		}
	}
	return 0;
}

void agregarId(char *iden){
    nodoIdentificador *nuevo;
	nuevo = (nodoIdentificador *) malloc (4+4+strlen(iden));
    if (nuevo == NULL) printf( "No hay memoria disponible!\n");

  	strcpy(nuevo -> identificador, iden);
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
            auxiliar = auxiliar->next;
	}
 }
