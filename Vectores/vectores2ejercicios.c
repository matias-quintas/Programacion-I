#include <stdio.h>
#include <time.h>
#define p printf
#define s scanf
#define TAMANO_VECTOR 5

int sumaVector(void);
float promVector(int);

int main(void)
{
    int suma;
    float prom;

    suma = sumaVector();
    prom = promVector(suma);

    p("\nSuma: %d", suma);
    p("\nPromedio: %.2f", prom);
    p("\n");
    return 0;
}

int sumaVector(void)
{   
    int v[TAMANO_VECTOR];
    int sum = 0;
    for (int i = 0; i < TAMANO_VECTOR; i++)
    {
        p("Dato %d de %d: ", i+1, TAMANO_VECTOR);
        s("%d", &v[i]);
        sum=sum+v[i];
        
    }
    return sum;
}

float promVector(int sum)
{
    float prom = sum/(TAMANO_VECTOR*1.00);
    return prom;
}