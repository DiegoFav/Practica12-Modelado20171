#include <stdio.h>		//incluimos la libreria stdio.h para imprimir en la consola

int main() {	//funcion main
	printf("El tipo short tiene tamaño %lu\n", sizeof(short));					//imprimimos en el formato especificado 
	printf("El tipo int tiene tamaño %lu\n", sizeof(int));						//en el argumento de la cadena hay un '%lu'
	printf("El tipo unsigned int tiene tamaño %lu\n", sizeof(unsigned int));	//aqui se especifica que se va a pasar un
	printf("El tipo apuntador a int tiene tamaño %lu\n", sizeof(int*));			//dato de tipo unsigned long int, ya que este
	printf("El tipo char tiene tamaño %lu\n", sizeof(char));					//es el tipo que regresa sizeof().
	printf("El tipo float tiene tamaño %lu\n", sizeof(float));					//Luego se pasa el dato que vamos a imprimir
	printf("El tipo double tiene tamaño %lu\n", sizeof(double));				//					 (el valor que regresa sizeof())
	return 0;		//Regresamos el entero 0 que quiere main que regrese.
}
