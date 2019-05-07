#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	setlocale (LC_ALL, "portuguese");
	
	int i, a=0;
	
	printf("Digite um numero positivo: ");
	scanf("%i", &i);
	
	while(i>0){
		system("cls");
		printf("Digite um numero positivo: ");
		scanf("%i", &i);
		a++;
	}
	
	printf("Foram digitados %d numeros positivos", a);
	
	
	system("pause>null");
	return 0;
}
