#include <stdio.h>
#include <time.h>
#define p printf
#define s scanf

// Prototipos:


int main(void)
{
    int numRandom;
    srand(time(NULL)); //inicializa el contador random

    for (int i = 0; i < 10; i++)
    {
        numRandom = rand()%(21) + 5;
        p("%d\n", numRandom);
    }
    
    return 0;
}
