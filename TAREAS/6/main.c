//programa que hace una lista y va multiplicando cada uno excepto un elemento en la lita
#include <stdio.h>
#include <stdlib.h>
int main(int argc, char*argv[]){
int a=1;//muestras que inicia en 0
int b,c,d;//variables de entrada que se usaran
for(int i=1; i<argc ; i++){//se muestra la lista
    c=atoi(argv[i]);
    a=a*c;
}
for(int w=1; w<argc; w++){
    d=atoi(argv[w]);
    b=a/d;
    printf("%i\n",b);
}
return 0;
}

