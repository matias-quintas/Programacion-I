#include <stdio.h>
#define p printf
#define s scanf

int main(void)
{
    bucleWhile();
    bucleDoWhile();
    bucleFor();
    return 0;
}


int bucleWhile()
{
    int cont, cant;
    p("Escribir una cantidad: ");
    s("%d", &cant);
    cont = 1;

    while (cont <= cant)
    {
        p("%d\n", cont);
        cont++;
    }
    

    return 0;
}

int bucleDoWhile()
{
    int cont, cant;
    p("Escribir una cantidad: ");
    s("%d", &cant);
    cont = 1;

    while (cont <= cant)
    {
        p("%d\n", cont);
        cont++;
    }
    //cont=1;
    do
    {
        p("%d\n", cont);
        cont++;
    } while (cont<=cant);
    
    
    return 0;
}

int bucleFor()
{
    int cont, cant;
    p("Escribir una cantidad: ");
    s("%d", &cant);
    cont = 1;

    for (size_t i = 0; i < cont; i++)
    {
        /* code */
    }
    
    

    return 0;
}