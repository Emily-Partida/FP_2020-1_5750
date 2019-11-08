//programa que recibe dos parametros y muestra la conversion de °C a °F y al revés
#include <stdio.h>
#include <stdlib.h>
int main(int argc, char*argu[]){
    //Declaramos las variables que utilizaremos
float x;
float y;
float z;
x=atof(argu[1]);//convertimos a flotantes
y=atof(argu[2];
if (x!=0){//Si X es diferente de 0 convertimos de °F a °C
    z=(y-32)/1.8;//Colocamos formula para la conversion
    printf("%.2f\n", z);//mostramos el resultado
    return 0;
}
else if(x==0){//En otro caso si X es igul a 0 se convierte de °C a °F
    z=32+(y*1.8);//Colocamos formula para la conversion
    printf("%.2f\n", z);//mostramos el resultado
    return 0;
}
return 0;
}

