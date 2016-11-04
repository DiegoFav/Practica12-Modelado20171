#include <stdio.h>	//incluimos la libreria stdio.h para imprimir en la consola

void swap(int *a, int *b) 	//funcion swap que intercambia los valores de dos enteros, acepta dos apuntadores a enteros.
{
	int tmp = *a;	//entero temporal para guardar el valor de a
	*a = *b;		//le asigno el valor que apunta b al valor donde apunta a
	*b = tmp;		//le asign
}

int main() 		//funcion main
{
	int a = 1, b = 2;								//Declaramos e inicializamos dos enteros a y b.
	printf("1)\nAntes  : a = %d b = %d\n", a, b);	//imprimimos su estados iniciales, usamos el formato %d en la cadena para pasarle un entero
	swap(&a, &b);									//llamamos la funcion swap donde les pasamos las referencias (&) de a y b
	printf("Despues: a = %d b = %d\n", a, b);		//Volvemos a imprimir a y b despues de hacer el swap.
	a = 3, b = 89;									//Hacemos otro caso prueba con otros valores. Mismo procedimiento que arriba.
	printf("2)\nAntes  : a = %d b = %d\n", a, b);
	swap(&a, &b);
	printf("Despues: a = %d b = %d\n", a, b);
	return 0;		//regresamos el entero que dijimos que regresa main
}
