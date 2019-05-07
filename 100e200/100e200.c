#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	setlocale (LC_ALL, "portuguese");
	
	int i, a=0;
	
	while(getch()!=27){
		system("cls");
		printf("Digite varios numeros: ");
		scanf("%i", &i);
		
		while(i>0){
			system("cls");
			printf("Digite varios numeros: ");
			scanf("%i", &i);
			if(i>=100&&i<=200){
				a++;
			}
		}
		
		printf("Foram digitados %d numeros entre 100 e 200\n", a);
		printf("Digite esc para sair ou qualquer outra tecla para continuar: ");
		
		fflush(stdin);
		getch();
	}
	return 0;
}
