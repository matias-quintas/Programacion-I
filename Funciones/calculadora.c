#include<stdio.h>

#define p printf
#define s scanf

// Prototipos:
void saludo(void);
int menu(void);
void cargarDatos(float*, float*);
void suma(float, float);
void resta(float, float);
void multiplicacion(float, float);
void division(float, float);
float evaluarDivision(float, float);
void imprimirResultado(float, char, float, float);

int main(void)
{
    float num1, num2, resultado, resDiv;
    int op;

    saludo();

    do
    {
        op = menu();

        if(op>0 && op<5)
            cargarDatos(&num1, &num2);

        switch(op)
        {
            case 1:
                suma(num1, num2);
                break;
            case 2:
                resta(num1, num2);
                break;
            case 3:
                multiplicacion(num1, num2);
                break;
            case 4:
                division(num1, num2);
                break;
            case 0:
                p("\n*** Sali%c del sistema. ***\n", 162);
                break;
            default:
                p("\n*** Opci%cn incorrecta. ***\n", 162);
        }
    }while(op !=0 );

    return 0;
}

void saludo(void)
{
    p("***********************\n");
    p("** SUPER CALCULADORA **\n");
    p("***********************\n\n");
}

int menu(void)
{
    int op;
    p("\n1. Suma.");
    p("\n2. Resta.");
    p("\n3. Multiplicaci%cn.", 162);
    p("\n4. Divisi%cn.", 162);
    p("\n0. Salir.");
    p("\n** Elija opci%cn: ", 162);
    s("%d", &op);

    return op;
}

void cargarDatos(float* num1, float* num2)
{
    p("Ingrese primer n%cmero: ", 163);
    s("%f", num1);
    p("\nIngrese segundo n%cmero: ", 163);
    s("%f", num2);
}

void suma(float num1, float num2)
{
    float resul;
    resul = num1 + num2;
    imprimirResultado(num1, '+', num2, resul);
}

void resta(float num1, float num2)
{
    float resul;
    resul = num1 - num2;
    imprimirResultado(num1, '-', num2, resul);
}

void multiplicacion(float num1, float num2)
{
    float resul;
    resul = num1 * num2;
    imprimirResultado(num1, '*', num2, resul);
}

void division(float num1, float num2)
{
    float resDiv;
    if(num2==0)
        p("\nSINTAX ERROR\n");
    else
    {
        resDiv = evaluarDivision(num1, num2);
        imprimirResultado(num1, '/', num2, resDiv);
    }
}

float evaluarDivision(float num1, float num2)
{
    float resul;
    resul = num1 / num2;
    return resul;
}

void imprimirResultado(float num1, char operacion,float num2, float resul)
{
    p("\n%.2f %c %.2f = %.2f\n", num1, operacion, num2, resul);
}
