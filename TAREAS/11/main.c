// programa que recibe 3 paramentros como precondiciones y saca la raiz de un numero
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
double RAIZ(double x, double tol, double candidato)//Se incia el programa con la funcion y los paramentros
{
       double division, diferencia, promedio; //ponemos las operaciones que se utilizaran
     division=x/candidato;
diferencia=fabs(division-candidato);
while(diferencia>tol){//Si la diferencia es mayor a la tolerancia hace las operaciones, promedio y candidato, si no regresa el candidato
    division=x/candidato;
    diferencia=fabs(division-candidato);
    promedio=(candidato+division)/2;
    candidato=promedio;
}
return candidato;//Si no regresa el candidato
}
int main(int argc,char* argv[]){
double numero, tolerancia, ans,candidato;
//Convertimos a flotantes
numero=atof(argv[1]);
candidato=atof(argv[3]);
tolerancia=atof(argv[2]);
ans=RAIZ(numero, tolerancia, candidato);
printf("%lf\n", ans);//mostramos el valor
return 0;
}
