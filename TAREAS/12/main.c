//Programa que recibe un parametro y calcula el numero de saludos que se hacen por pensona que llega
#include <stdio.h>
#include <stdlib.h>
int Persona(int N){//iniciamos el programa con la funcion
if(N==0){//Caso base
    return N;
}
int z=N;
z=Persona(N-1)+(z-1);//Se hacen las operaciones
return z;
}
int main(int argc,char*argv[]){
int x=atoi(argv[1]);//Convertimos
printf("%d\n",Persona(x));//Se imprime el resultado
return 0;
}
