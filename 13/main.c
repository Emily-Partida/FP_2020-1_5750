//Programa que ordena de menor a mayor una lista de numeros
#include <stdio.h>
#include <stdlib.h>
int main(int argc,char*argu[]){//Se hace la lita que ocuparemos en el programa
int numeros[argc-1];
int i=0, j=1, numero;//ocuparemos una variable que guarde los argu
while(i<argc-1){//Se copia a una nueva lista
    numero=atoi(argu[j]);
    numeros[i]=numero;
    i++;
    j++;
}
int temporal;//Se pone una nueva variable
for(i=1; i<argc-1;i++){
    for(j=0;j<argc-1-i;j++){//Con el for se intercambian los numeros de menor a mayor
        if(numeros[j]>numeros[j+1]){
                //Se guarda en la nueva variable que pusimos
            temporal=numeros[j];
        //Retrocede el numero que sigue
            numeros[j]=numeros[j+1];
            //El numero siguiente se cambia por el que se guardo en la variable nueva
            numeros[j+1]=temporal;
        }
    }
}
for(int i=0; i<argc-1; i++){//Se imprime la lista de menor a mayor
    printf("%i\n", numeros[i]);
}
return 0;
}


