#include<iostream>
#include<stdlib.h>
#include<string.h>
#include<conio.h>

struct structNodo
{
	char simbolo;
	struct structNodo *siguiente;
};

typedef struct structNodo nodo;

nodo *crearLista(nodo *lista);
nodo *push(char simbolo, nodo *pila); //push para insertar elemento
nodo *insertNodoFinal(char simbolo,nodo *lista);
nodo *pop(char *valor, nodo *pila);//pop para sacar un elemento
void imprimirExpresion(nodo *lista);

int expresionBalanceada(char expresion[]);
int esOperador(char simbolo);
int prioridad(char operador);
nodo *infijaPostfija(char expresion[]);


int main()
{
	
	return 0;
}

nodo *crearLista(nodo *lista)
{
	return lista=NULL;
}

nodo *push(char simbolo, nodo *pila)
{
	nodo *nodoNuevo;
	
	nodoNuevo=(nodo *) malloc(sizeof(nodo));
	
	if(nodoNuevo!=NULL)
	{
		nodoNuevo->simbolo=simbolo;
		nodoNuevo->siguiente=pila;
		
		pila=nodoNuevo;
	}
	return pila;
}

nodo *insertarNodoFinal(char simbolo, nodo *lista)
{
	nodo *nodoNuevo, *nodoAuxiliar;
	
	nodoNuevo=(nodo *) malloc(sizeof(nodo));
	
	if(nodoNuevo!=NULL)
	{
		nodoNuevo->simbolo=simbolo;
		nodoNuevo->siguiente=NULL;
		
		if(lista=NULL)
		lista=nodoNuevo;
		
		else{
			nodoAuxiliar=lista;
			
			while(nodoAuxiliar->siguiente!=NULL)
			nodoAuxiliar=nodoAuxiliar->siguiente;
			
			nodoAuxiliar->siguiente=nodoNuevo;
			
		}
		
	}
	return lista;
}

nodo *pop(char *valor, nodo *pila)
{
	nodo *nodoAuxiliar;
	char dato;
	
	if(pila==NULL)
	printf("Pila Vacia");
	else
	{
		nodoAuxiliar->simbolo;
		
		dato=nodoAuxiliar->simbolo;
		
		pila=nodoAuxiliar->siguiente;
		
		*valor=dato;
		
		free(nodoAuxiliar);
	}
	return pila;
}

void imprimirExpresion(nodo *lista)
{
	nodo *nodoAuxiliar=lista;
	
	printf("POSTFIJA");
	
	while(nodoAuxiliar!=NULL)
	{
		printf("%c",nodoAuxiliar->simbolo);
		nodoAuxiliar=nodoAuxiliar->siguiente;
	}
}

