#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	double v = -1.006756756756757, fractpart, intpart, result, test;
	int i = 1;
	
	fractpart = modf(v, &intpart);
	
	printf(" %lf = %lf + %lf \n", v, fractpart, intpart);
	
	if(fractpart == 0){
		printf("Igual a zero\n");
	}else{
		printf("Nao eh igual a zero\n");
	}
	
	
	
	while(fractpart != 0){
		result = fractpart * i;
		printf("%lf = %lf * %i\n", result, fractpart, i);
		
		test = modf(result, &intpart);
		printf("%lf\n", test);
		if(test != 0){
			printf("Nao eh igual a zero\n");
		}else{
			printf("Igual a zero\n");
		}
		
		system("pause>null");
		i++;
	}
	
	printf("Ultimo denominador = %i\n", i);
	
	
	return 0;
}
