#include <stdio.h>

#include <stdlib.h>

#include <string.h>

#include <time.h>

// manejo de punteros

int main()

{

    int i, a;

    int *ptr;

    printf("Ingrese un valor de i:");

    scanf("%d", &i);

    printf("Ingrese un valor de a:");

    scanf("%d", &a);

    ptr = &i;

    printf("contenido de i=%d\n", i);

    printf("contenido de a=%d\n", a);

    printf("contenido de ptr=%d y direccion de ptr:%p\n",*ptr, (void *)ptr);

    printf("direccion de a: %p\n", (void *)&a);

    printf("direccion de i: %p\n", (void *)&i);

    printf("direccion de ptr: %p\n", (void *)ptr);

    return 0;

}

    /*

    En C, void* es un tipo de puntero genérico. 

    Puede apuntar a cualquier tipo de dato, 

    ya sea un int, float, char, 

    o cualquier otro tipo. Cuando utilizamos %p 

    como formato de salida en la función printf, 

    estamos esperando un argumento que sea un puntero. 

    */





















#include <stdio.h>

#include <stdlib.h>

#include <string.h>

#include <time.h>

// manejo de punteros

void sumar(int,int,int*);

int main()

{

    int i, a, resultado=0;

    int *ptr;

    printf("Ingrese un valor de i:");

    scanf("%d", &i);

    printf("Ingrese un valor de a:");

    scanf("%d", &a);

    ptr=&resultado;

    sumar(i,a,ptr);

    printf("valor de la suma:%d\n",*ptr);

    printf("contenido de i=%d\n", i);

    printf("contenido de a=%d\n", a);

    printf("contenido de ptr=%d\n", *ptr);

    printf("direccion de a: %p\n", (void *)&a);

    printf("direccion de i: %p\n", (void *)&i);

    printf("direccion de ptr: %p\n", (void *)ptr);

    return 0;

    /*

    En C, void* es un tipo de puntero genérico. 

    Puede apuntar a cualquier tipo de dato, 

    ya sea un int, float, char, 

    o cualquier otro tipo. Cuando utilizamos %p 

    como formato de salida en la función printf, 

    estamos esperando un argumento que sea un puntero. 

    */

}

void sumar(int x, int y,int *r)

{

    *r=x+y;

}





















#include <stdio.h>

#include <stdlib.h>

#include <string.h>

#include <time.h>

// Ejercicio 1 del Power Point de Punteros

// manejo de punteros, Intercambio de valores

void intercambio(int *, int *);

int main() 

{

    int num1, num2;

    printf("Ingrese el valor 1: ");

    scanf("%d", &num1);

    printf("Ingrese el valor 2: ");

    scanf("%d", &num2);

    printf("Valores originales: num1 = %d, num2 = %d\n", num1, num2);

    // Llamando a la función intercambio para intercambiar los valores

    intercambio(&num1, &num2);

    printf("Valores intercambiados: num1 = %d, num2 = %d\n", num1, num2);

    return 0;

}

// Función para intercambiar dos valores usando referencias

void intercambio(int *a, int *b) {

    int temp = *a;

    *a = *b;

    *b = temp;

}