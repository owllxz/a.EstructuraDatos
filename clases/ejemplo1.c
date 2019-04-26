#include <stdio.h>

int funcion(int parametro1, int parametro2, int parametro3);

int main(void){
	int a,b,c;
	a = 1;
	b = 2;
	c = 3;
	c = funcion(a,b,c);
	printf("%d\n", c);
	return 0;
}
int funcion(int parametro1, int parametro2, int parametro3){
	printf("%d - %d - %d\n", parametro1, parametro2, parametro3);
	parametro3 = parametro1 + parametro2 + parametro3;
	return parametro3;
}