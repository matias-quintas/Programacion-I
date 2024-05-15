#include <stdio.h>
#define p printf
#define s scanf

int main(void){
    ejercicio1();
}

int explicacion (){
    int num;
    num = 12 && 1; // si hago asi devuelve Verdadero, pero si pongo 0 && 5 tira falso porque devuelve 0
    num = 12 || 0; // devuelve 0 solo cuando ambos numeros sean 0

    if (num)
        p("%d: Distinto de cero", num);
    else
        p("%d: Es igual a 0", num);

    return 0;
}

int ejercicio1 (){

    int anioBiciesto;

    s("%d", &anioBiciesto);

    if(!(anioBiciesto%4)){
        p("El anio %d es biciesto", anioBiciesto);
    }else{
        p("El anio %d no es biciesto", anioBiciesto);
    }
}

int ejercicio2 (){

    int ;

    s("%d", &);

    if(){
        p("", );
    }else{
        p("", );
    }
}
