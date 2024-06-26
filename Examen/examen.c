#include <stdio.h>
#define p printf
#define s scanf

// Prototipos
void saludo(void);
int menu(void);
void cargarDatos(int*, float*);
int validarGanador(int, int, int, int);


int main(void)
{
    // Variables de control
    int num;
    int cantidad1 = 0, cantidad2 = 0, cantidad3 = 0;
    float promedio1 = 0.0, promedio2 = 0.0, promedio3 = 0.0;

    // Variables para mostrar resultados
    int ganadorMayCantidad, premioPezMasGrande = 0, totalPeces;
    float promedioPeces = 0.0;
    
    saludo();

    do
    {
        num = menu();
        switch (num)
        {
        case 1:
            cargarDatos(&cantidad1, &promedio1);
            break;
        case 2:
            cargarDatos(&cantidad2, &promedio2);
            break;
        case 3:
            cargarDatos(&cantidad3, &promedio3);
            break;
        case 0:
            ganadorMayCantidad = validarGanador(cantidad1, cantidad2, cantidad3, 0);
            premioPezMasGrande = validarPezMasGrande();
            totalPeces = cantidad1+cantidad2+cantidad3;
            p("Ganador, mas cantidad de peces: %d\n", ganadorMayCantidad);
            //p("\nPremio al pez de mayor tama%co: %d", 164, premioPezMasGrande);
            p("\nTotal de peces: %d", totalPeces);
            //p("\nPromedio de tama%cos: %.2f", 164, promedioPeces);
            break;
        default:
            p("\n*** Opci%cn incorrecta. ***\n", 162);
            break;
        }
    } while (num!=0);
    return 0;
}

void saludo(void)
{
    p("Bienvenido al juego");
}

int menu(void)
{
    int num;
    p("\n\n### Seleccione el numero del jugador al que le va a agregar los datos. ###\n");
    p("\n1. Ricardo");
    p("\n2. Alonso");
    p("\n3. Juan Manuel");
    p("\n0. Mostrar resultados");
    p("\nElegir numero: ");
    s("%d", &num);
    
    return num;
}

void cargarDatos(int* num1, float* num2){
    p("\nIngresar cantidad de  peces: ");
    s("%d", num1);
    p("Ingresar promedio de tama%co: ", 164);
    s("%f", num2);
}

int validarGanador(int num1, int num2, int num3, int ganador)
{
    if (num1>=num2 && num1>=num3)
    {
        ganador=1;
    } else if (num2>=num1 && num2>=num3)
    {
        ganador=2;
    } else 
    {
        ganador=3;
    }
    return ganador;
}