#include <stdio.h>
#include <stdlib.h>

#define SIM 100
#define NAO -100

int main(int argc, char *argv[]) {
	
	
	int x;
	printf("Digite um numero: ");
	scanf("%i", &x);
	
	if(x<=10){
		printf("%i", NAO);
	}else{
		printf("%i", SIM);
	}
	
	
	
	
	
	
	
	
	return 0;
}
