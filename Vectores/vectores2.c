#include <stdio.h>
#include <time.h>
#define TAMANO_VECTOR 5

int main()
{
    int vector[TAMANO_VECTOR]={23,67,54,6,45};
    int i;
    srand(time(NULL));
    // Inicializar el vector con valores
    for (i = 0; i < TAMANO_VECTOR; i++)
    {
        vector[i] = rand()%(100-20+1)-20;
    }
    
    //Imprimir el vector
    printf("\nValores del Vector:\n\n ");
    for (i = 0; i < TAMANO_VECTOR; i++)
    {
        printf("vector[%d]=%2d y vive en la direccion 0x%x\n ", i, vector[i], &vector[i]);
    }
    printf("\n");
    
    return 0;
}

