#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define len 20

void palindromo(char cadena[len]);

int main(){
	char cadena[len];

	do{
		printf("Ingrese una palabra: ");
		memset(cadena, '\0', len); //Nos permite rellenar la cadena con un caracter especificado, en este caso nulo
		scanf("%s", &cadena);
		palindromo(cadena);
	}while(strcmp(cadena, "salir") != 0);

	return 0;
}
void palindromo(char cadena[len]){
	int a,b;
	a = 0;
	for(b = strlen(cadena) - 1;b >= 0; a++, b--){
		printf("%c - %c\n", cadena[b], cadena[a]);
		if(cadena[b] == cadena[a]){
			if((a == strlen(cadena) - 1)){
				printf("Es palindromo.\n");
			}
		}
		else{
			printf("No es palindromo.\n");
			break;
		}
	}
}