#include <stdio.h>

#define pi 3.14
#define p printf //imprime en consola
#define s scanf //es para introducir información


/*
int main()
{ //todo codigo en c debe tener esta funcion principal
    //printf("Hola, Mundo!\n");
    return 0;
}


// _numRandom es para numeros aleatorios


int main2()
{
    int num;
    return 0;
}

void main(){
    // vacio, no nececita un return, es recomendable usar el main porque esta de void no va a terminar nunca.
}
*/

int main()
{
    int num1, num2, suma;
//    p("Ingrese un numero: ");
    s("%d", &num1);
//    p("Ingrese otro numero: ");
    s("%d", &num2);
    suma = num1+num2;
//    p("la suma es: %d", suma);
    p("\n %d + %d = %d", num1, num2, suma);

// el %d o %f para el float representan el tipo de dato que se va a mostrar
    return 0;
}


// Ejercitación

