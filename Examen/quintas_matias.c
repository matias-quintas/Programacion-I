#include <stdio.h>
#define p printf
#define s scanf

//Prototipos:
int menu(void);
void registrarAsistencia(int*, int*, int*);
void mostrarAsistencia(int, int, int);
void mostrarEstadisticas(int, int, int);
int encontrarMasConcurrida(int, int, int);
int encontrarMenosConcurrida(int, int, int);



int main(void)
{
    int op;

    int aula=0, biblioteca=0, laboratorio=0;


    p("\n*******************************************\n");
    p("******** Instituto T%ccnico Militar ********\n", 130);
    p("********     GOTITAS DEL SABER      ********\n");
    p("*******************************************\n");

    do
    {
        op = menu();
        switch (op)
        {
        case 1:
            registrarAsistencia(&aula, &biblioteca, &laboratorio);
            p("Gracias por ingresar los datos.");
            break;
        case 2:
            mostrarAsistencia(aula, biblioteca, laboratorio);
            break;
        case 3:
            mostrarEstadisticas(aula, biblioteca, laboratorio);
            break;
        case 4:
            int res=encontrarMasConcurrida(aula, biblioteca, laboratorio);
            break;
        case 5:
            int res=encontrarMenosConcurrida(aula, biblioteca, laboratorio);
            break;
        case 0:
            p("\n*** Sali%c del sistema. ***\n", 162);
            break;
        default:
            p("*** LA OPCI%cN SELECCIONADA NO EXISTE ***", 224);
            break;
        }
    } while (op != 0);

    return 0;
}

int menu(void)
{
    int op;

    p("\n1. Cargar cantidad de alumnos por %crea.\n", 160);
    p("2. Mostrar datos ingresados por %crea.\n", 160);
    p("3. Mostrar Estad%csticas.\n", 161);
    p("4. Encontrar %crea m%cs concurrida.\n", 160, 160);
    p("5. Encontrar %crea menos concurrida.\n", 160);
    p("0. SALIR.\n\n", 160);
    p("INGRESAR OPCI%cN: ", 224);
    s("%d", &op);

    return op;
}

void registrarAsistencia(int* aula, int* biblioteca, int* laboratorio)
{
    p("Ingrese la cantidad de estudiantes en el Aula:");
    s("%d", aula);
    if (aula<0)
    {
        p("Error, no se pueden ingresar numeros menores a 0.\n");
        aula=0;
    } else
    {
        p("Ingrese la cantidad de estudiantes en la Biblioteca:");
        s("%d", biblioteca);
        if (biblioteca<0)
        {
            p("Error, no se pueden ingresar numeros menores a 0.\n");
            biblioteca=0;
        } else
        {
            p("Ingrese la cantidad de estudiantes en el Laboratorio:");
            s("%d", laboratorio);
            if (laboratorio<0)
            {
                p("Error, no se pueden ingresar numeros menores a 0.\n");
                laboratorio=0;
            } else {
                p("Datos ingresados correctamente: \n");
            }

        }
    }
}

void mostrarAsistencia(int aula, int biblioteca, int laboratorio)
{
    p("Cantidad de estudiantes en el Aula: %d\n", aula);
    p("Cantidad de estudiantes en la Biblioteca: %d\n", biblioteca);
    p("Cantidad de estudiantes en el Laboratorio: %d\n", laboratorio);
}

void mostrarEstadisticas(int aula, int biblioteca, int laboratorio)
{
    float aux, promedioTotal, porcentajeAula, porcentajeBiblio, porcentajeLab;
    aux = (aula + biblioteca + laboratorio);
    promedioTotal= aux/3;
    porcentajeAula = (aula*100)/aux;
    porcentajeBiblio = (aula*100)/aux;
    porcentajeLab = (aula*100)/aux;

    p("Promedio general: %.2f por %crea.\n", promedioTotal, 160);
    p("Porcentaje de asistencia: \n");
    p("Aula: %.2f | Biblioteca: %.2f | Laboratorio: %.2f\n", porcentajeAula, porcentajeBiblio, porcentajeLab);
}

int encontrarMasConcurrida(int aula, int biblioteca, int laboratorio)
{
    float respuesta;
    if(aula>=biblioteca && aula>=laboratorio)
        respuesta=aula;
    else if (biblioteca>=aula && biblioteca>=laboratorio)
        respuesta=biblioteca;
    else
        respuesta=laboratorio;
    return respuesta;
}

int encontrarMenosConcurrida(int aula, int biblioteca, int laboratorio)
{
    float respuesta;
    if(aula<=biblioteca && aula<=laboratorio)
        respuesta=aula;
    else if (biblioteca<=aula && biblioteca<=laboratorio)
        respuesta=biblioteca;
    else
        respuesta=laboratorio;
    return respuesta;
}
