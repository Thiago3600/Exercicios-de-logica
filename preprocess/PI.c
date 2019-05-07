#include <stdio.h>
#include <stdlib.h>

#define PI 3.14159
#define NULO 0



double areaCirculo(double raio){
	return raio*raio*PI;
}




int main(int argc, char *argv[]) {
	
	double areaCirculo(double raio);
	double r;
	int i = 3;
	
	while(i!=NULO){
		printf("Digite um numero: ");
		scanf("%lf", &r);
		printf("A area do circulo e %lf\n", areaCirculo(r));
		--i;
	}
	
	
	
	return 0;
}
