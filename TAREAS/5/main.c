//ptograma que regresa valor de numeros y pone valor a letras
#include <stdio.h>
#include <stdlib.h>

int valor(char m){
int z;
switch(m){
    case 'J':
    case 'Q':
    case 'K':
       z=10;
       break;
    case 'A':
        z=11;
        break;
        }
        return z;
}
int main(int argc, char *argv[]){
int imprimir, coi;//coi es lo mismo que char o int
for(int i=1; i<argc; i++){//con esta funcion se recorre la lista en 1
    coi=argv[i][0]=='J'||
    argv[i][0]=='Q'||argv[i][0]=='K'
    ||argv[i][0]=='A';
    if (coi==1){//si pones un caracter va a usar la funcion valor
        imprimir=valor(argv[i][0]);
    }
    else{
        imprimir=atoi(argv[i]);
    }
    printf("%i\n",imprimir);
}
return 0;
}

