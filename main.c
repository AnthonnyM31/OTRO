#include <stdio.h>
#include "funciones.h"

int main (int argc,char*argv[]){
    float puntos[4][3];
    float distacias [6];
    for (int i=0; i <4; i++){
        puntos[i][0]=ingresevalor('x',i);
        puntos[i][1]=ingresevalor('y',i);
        puntos[i][2]=ingresevalor('z',i);
    }
    float areasuperficial = calularareasuperficial(puntos);
    printf ("el area superficial de la piramide es: %f",areasuperficial);

    return 0;
}
