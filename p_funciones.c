#include <stdio.h>		//incluimos la libreria stdio.h para imprimir en la consola

/* Declaración de funciones */
int misterio1(int (*fun) (int), int);		//Declaramos funcion mistrio1, regresa un entero; recibe un apuntador a una funcion que regresa un entero y recibe un entero, y otro entero
void misterio2(void (*fun) (int), int);		//Declaramos funcion mistrio2, regresa nada; recibe un apuntador a una funcion que regresa nada y recibe un entero, y otro entero
int cuadrado_num(int);						//Declaramos la funcion cuadrado_num, regresa un entero y recibe un entero
void imprime_num(int);						//Declaramos funcion imprime_num, no regresa nada, recibe un entero

int main()		//funcion main, regresa entero
{

  int (*fun1) (int);			//Declaramos un apuntador a una funcion fun1, regresa y recibe entero,
  void (*fun2) (int);			//declaramos otro apuntador a una funcion fun2, regresa nada y recibe entero.

  fun1 = &cuadrado_num;			//a fun1 le pasamos la referencia de la funion cuadrado_num
  fun2 = &imprime_num;			//a fun2 le pasamos la referencia de la funion imprime_num

  int var = misterio1(fun1, 3);	//llamamos misterio1 a la cual le pasamos fun1 y el entero 3, y guardamos lo que regresa en un entero var.
  misterio2(fun2, var);			//llamamos misterio2 y le pasamos fun2 y var.
}


int misterio1(int (*fun) (int), int num)	//definimos misterio1
{
    return fun(num);						//regresamos el entero que regresa la funcion fun al ser llamada, pasandole num
}

void misterio2(void (*fun) (int), int num)	//definimos misterio2
{
    fun(num);								//solamente llamamos a la funcion fun y le pasamos num
}

int cuadrado_num(int num)					//definimos cuadrado_num
{
    return num * num;						//regresamos num*num o el cuadrado de num
}

void imprime_num(int num)					//definimos imprime_num
{
    printf("Tada: %d\n", num);				//usando printf imrpimimos num 
}
