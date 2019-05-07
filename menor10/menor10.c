#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int a;
	
	printf("Digite um numero: ");
	scanf("%i", &a);
	
	
		
		if(a>=10){
		
		printf("Numero fora do intervalo\n");
		}
		else
		{
		a=a % 2;
		switch (a){
			
			case 0:
			printf("numero par e menor que 10\n");
			break;
			
			default:
			printf("numero impar e menor que 10\n");
		}
	}
		
	
	
	
	return 0;
}
