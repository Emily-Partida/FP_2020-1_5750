#include <stdio.h>
#include <stdlib.h>
int main(int argc, char*argu[]){
	double y=0;
	for (int i=1;i<argc;i++){
		double z=atof(argu[i]);
		y=z+y;
	}
	double promedio = y/(argc-1);
	printf("%.2lf\n", promedio);
	return 0;

}

