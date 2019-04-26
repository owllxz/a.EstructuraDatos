#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void transformar(char cadena[20]);

int main(void){
	char cadena[20]; // Cadena en donde vamos a almacenar lo introducido por teclado

	scanf("%s", &cadena); // lectura de los caracteres mediante entrada estandar
	printf("%s\n", cadena); // resultados mostrados mediante salida estandar

	transformar(cadena);
	return 0;
}
void transformar(char cadena[20]){
	int i = 0;
	while(i < strlen(cadena)){ // ciclo con el cual recorreremos la cadena de caracteres
		if(cadena[i] < 91 && cadena[i] > 64){
			printf("%c", cadena[i] + 32);
		}
		else if(cadena[i] < 123 && cadena[i] > 96){
			printf("%c", cadena[i] - 32);
		}
		i++;
	}
}