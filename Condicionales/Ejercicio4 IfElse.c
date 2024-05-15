#include <stdio.h>
#define p printf
#define s scanf

int main(void)
{
  float cofA, cofB, resultado;
  p("Ecuacion A X + B = 0");
  p("\nEscriba el valor del coeficiente A: ");
  s("%f", cofA);
  p("\nEscriba el valor del coeficiente B: ");
  s("%f", cofB);

  if (cofA==0 && cofB==0)
    p("\nTodos los numeros tiene solucion.");
  else if (cofA==0)
    p("\nLa ecuacion no tiene solucion.");
  else
    resultado= -cofB/cofA;
    p("\nLa ecuacion tiene una solucion %.1f", resultado);  
  
}