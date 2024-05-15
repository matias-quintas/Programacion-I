#include <stdio.h>
#define p printf
#define s scanf

int main(void)
{

/* 1. Preguntar entre tres figuras: cuadrado rectangulo y circulo.
luego pedir los datos necesarios para mostrar el area y el perimetro de la figura elegida
*/
    int fig;
    float base, alt, area, per;
    p("Elija una figura:\n1. Cuadrado\n2. Rectangulo\n3. Circulo");
    s("%d", &fig);

    switch (fig)
    {
        case 1:
            p("Ingrese uno de los lados del cuadrado:");
            s("%f", &base);
            area= base*base;
            per= base*4;
            P("El area es %.2f y el perimetro es %.2f", area, per);
            break;
        case 2:
            p("Ingrese la base del rectangulo:");
            s("%f", &base);
            p("Ingrese la altura del rectangulo:");
            s("%f", &alt);
            area= base*alt;
            per= (base*2) + (alt*2);
            P("El area es %.2f y el perimetro es %.2f", area, per);
            break;
        case 3:
            break;
        default:  p("No registrado");
            break;
    }
    return 0;
}
