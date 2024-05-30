#include <stdio.h>
#define p printf
#define s scanf

// Prototipos:
void cargarDato(int*);
int maximo(int, int);
int minimo(int, int);

int main(void)
{
    int num, max, min, flag=1;

    cargarDato(&num);
    while (num)
    {
        if (flag)
        {
            max=num;
            min=num;
            flag=0;
        } else
        {
            max = maximo(max, num);
            min = minimo(min, num);
        }
        cargarDato(&num);
    }

    if (flag)
    {
        p("No paso nada");
    } else
    {
        p("Max.: %d\n", max);
        p("Min.: %d\n", min);
    }
    
    
    return 0;
}

void cargarDato(int* dato)
{
    s("%d", dato);
}

int maximo(int num1, int num2)
{
    int aux;
    if (num1>=num2)
    {
        aux = num1;
    } else
    {
        aux = num2;
    }  
    return aux;
}

int minimo(int num1, int num2)
{
    int aux;
    if (num1<=num2)
    {
        aux = num1;
    } else
    {
        aux = num2;
    }
    return aux;
}
