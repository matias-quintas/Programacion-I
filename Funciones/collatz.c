//Imprimir la secuencia de Collatz para un n�mero ingresado por el usuario.

#include<stdio.h>
#define p printf
#define s scanf

// Prototipos:
int menu(void);
void cargarDato(int*);
void collatz(int);

int main(void)
{
    unsigned int num, op;

    do
    {
        op = menu();
        switch(op)
        {
            case 1:
                cargarDato(&num);
                collatz(num);
                break;
            case 2:
                p("\n ** CHAUCITO BABAI.  **");
                break;
            default:
                p("\n ** Opci%cn incorrecta.  **", 162);
                break;
        }

    }while(op != 2);

    return 0;
}

int menu(void)
{
    int op;
    p("\n1. Ingresar n%cmero y mostrar secuencia de Collatz.", 163);
    p("\n2. SALIR.");
    p("\n  Ingrese opci%cn: ", 162);
    s("%d", &op);
    return op;
}

void cargarDato(int* numero)
{
    p("\nIngrese un n%cmero: ", 163);
    s("%d", numero);
}

void collatz(int numerito)
{
    while(numerito != 1)
        if(numerito%2==0)
        {
           numerito/=2;
           p("%d  ",numerito);
        }
        else
        {
           numerito=3*numerito+1;
           p("%d  ",numerito);
        }
}
