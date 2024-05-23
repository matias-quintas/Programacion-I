#include <stdio.h>

#define p printf
#define s scanf

int main(void /*Aca adentro van los argumentos*/)
{
    return 0;
}

// Prototipos:

int suma(int num1, int num2) // La funcion devuelve un entero pero recibe 2 argumentos enteros.
{
    int resultado;
    resultado= num1 + num2;
    return resultado;

    /* Otra forma
    
    return num1+num2;

    */
} 

//----------------------

// Declarar prototipos: int suma(int, int);
// Declarar main: int main(){suma(variable1, variable2);};
// Declarar funcion: int suma(int num1, int num2){/*Codigo*/};

// int cargarDatos(int*, int*)
void cargarDatos(int* num1, int* num2)
{
    s("%d", num1); // en el main es cargarDatos(&num1, &num2)
}