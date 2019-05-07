#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main(int argc, char *argv[]) {
	setlocale (LC_ALL, "portuguese");
	
	float a, b;
	int i;
	
	printf("Entre com 15 numeros\n");
	
	for(i=1; i<=15; i++){
		scanf("%f", &a);
		b=b+a;
	}
	
	printf("\nA soma é %f\n", b);
	a=b/15;
	
	printf("A média é %f\n\n", a);
	
	
	system("pause");
	return 0;
}
