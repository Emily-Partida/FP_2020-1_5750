//Programa que recide dos parametros y muestra la potencia con dos decimales
#include <stdio.h>
#include <stdlib.h>
int main(int argc, char* argu[])
{
int a;//declaramos las variables a utilizar
int b;
int c=1;
a=atof(argu[1]);//convertimos los argumentos
b=atof(argu[2]);
for(int i=0; i<b; i++){
    c=c*a;// el resultado se va a gusrdar en otra variable
}
printf("%.2d\n",c);// muestra el resultado del programa con dos decimales
return 0;
}
