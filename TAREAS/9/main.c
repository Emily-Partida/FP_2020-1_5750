//Programa que recibe un parametro y nos da la suma de sus digitos 
#include <stdio.h>
#include <stdlib.h>
int main(int argc, char*argu[])
{
	int x;//Declaramos la variable que ocuparemos 
	int suma=0;
	x=atoi(argu[1]);
	//Hacemos que la funcion se repita hasta el ultimo numero 
	while(x>0){
		suma=suma+x%10;//Con esta operacion se van a ir sumando todos los numeros anteriores
		x=x/10;
	}
	printf("%i\n", suma);//Se muestra el reslutado 
	return 0;
}