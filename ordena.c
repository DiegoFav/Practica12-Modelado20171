#include <stdio.h>	//incluimos la libreria stdio.h para imprimir en la consola

#define NUM 7		//Creamos una macro para hacer el programa mas facil de modificar, el compilador intercambia cada instancia de NUM por 7.

void bubble_sort(int *arr , int n) {	//definimos y declaramos bubble_sort, recibe un apuntador(arreglo) a un entero y un numero de elementos.
	int i, swap;						//declaramos variables i, swap
	do {								//hacemos un do-while
		swap = 0;						//inicializamos swap a 0
		for(i = 0; i < n; i++) {		//hacemos un for de i en [0,n-1] donde recorremos los pares
			if(arr[i-1] > arr[i]) {		//si el anterior es mayor al siguiente
				int tmp = arr[i-1];		//los intercambiamos de lugar, esto es lo mismo que la funcion swap
				arr[i-1] = arr[i];		//decidi no usarla.
				arr[i] = tmp;		
				swap = 1;				//decimos que se modifico el arreglo
			}
		}
		n--;							//decrementamos n por 1, ya que sabemos que el ultimo elemento ya esta ordenado.
	} while(swap);						//si swap = 0, se sale del while, si es 1 entonces sigue el ciclo.
}										//fin de funcion bubble_sort, como regresa void no es necesario regresar algo

int main() {	//funcion principal main
	int  i, arr[NUM] = {4, 3, 9, 1, 15, 2, 88};		//declaramos e inicializamos el entero i y un arreglo de enteros arr con entradas ya definidas.
	printf("Antes: [");								//imprimimos el arreglo en un formato agradable
	for (i = 0; i < NUM; i++)						//hacemos un for loop con i en [i, NUM-1] para pasar por cada elemennto de arr
		printf("%d ", arr[i]);						//imprimimos el elemento en la posicion i de arr
	printf("]\nDespues: [");							
	bubble_sort(arr, NUM);							//llamamos a bubble_sort, le pasamos el arreglo(apunta a la primera posicion del arregrlo) y el numero de elem que tiene 
	for (i = 0; i < NUM; i++)						//imprimimos arr ordenada ahora si
		printf("%d ", arr[i]);
	printf("]\n");
	return 0;		//regresamos el entero que dijimos que regresa main
}
