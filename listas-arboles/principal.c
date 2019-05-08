//Funciones Manual de uso
/*
	NOMBRE_LISTA = crear_lista()
	NOMBRE_LISTA = agregar_inicio(NOMBRE_LISTA, NUMERO, CARACTER)
	recorrer_lista(NOMBRE_LISTA)
	NOMBRE_LISTA = agregar_posicion(NOMBRE_LISTA, NUMERO, CARACTER, POSICION - 1)
	NOMBRE_LISTA = agregar_final(NOMBRE_LISTA, NUMERO, CARACTER)
	NOMBRE_LISTA = eliminar_inicio(NOMBRE_LISTA)
	NOMBRE_LISTA = eliminar_final(NOMBRE_LISTA)
	NOMBRE_LISTA = eliminar_posicion(NOMBRE_LISTA, POSICION)
	NOMBRE_LISTA = ordenar_lista(NOMBRE_LISTA)
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// Importamos los dos archivos, es neceseario que esten en la misma carpeta
#include "lista.c" 
#include "arbol.c"

int main() // <-- Funcion Principal
{
	lista *NuevaLista; // <- creamos un nuevo elemento de tipo lista
	NuevaLista = crear_lista(); // <- hacemos uso de la funciona crear_lista() que esta dentro del archivo lista.c
	NuevaLista = agregar_inicio(NuevaLista, 5, 'c'); // <- hacemos un llamado a la funcion agregar_inicio(), como en la funcion retornamos la lista con el valor agregado por eso es que le asignamos a la NuevaLista lo que retorne de la funcion
	NuevaLista = agregar_inicio(NuevaLista, 4, 'c');
	NuevaLista = agregar_inicio(NuevaLista, 3, 'c');
	recorrer_lista(NuevaLista); // <- hacemos un llamado a la funcion recorrer_lista, con el objetivo de poder visualizar que realmente lo esta agregando al inicio
	printf("\n");
	NuevaLista = agregar_posicion(NuevaLista, 2, 'c', 2); // <- esta funcion agrega 1 + la posicion dada, por lo tanto al imprimir deberia mostarlo en la posicion 3
	recorrer_lista(NuevaLista); // <- hacemos un llamado a la funcion recorrer_lista, con el objetivo de poder visualizar que realmente lo esta agregando en la posicion 3 de la lista
	return 0;
}