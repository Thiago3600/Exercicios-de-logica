#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	setlocale (LC_ALL, "portuguese");
	
	int a, i, x=1;
	
		
		
	printf("Digite um numero para calcular o fatorial: ");
	scanf("%i", &a);
		
	
		
	for(i=1; i<=a; i++){
		x=x*i;
	}
	printf("O fatorial de %d é %i", a, x);
	
	system("pause>null");
	
		
		
			
	return 0;
}
