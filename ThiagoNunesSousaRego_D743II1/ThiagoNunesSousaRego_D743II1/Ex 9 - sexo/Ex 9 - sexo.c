#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	setlocale (LC_ALL, "portuguese");
	
	char n[50], s;
	int f=0, m=0;
	
	printf("\nDigite o nome: ");
	scanf("%s", &n);
	
	
	while(strcmp(n, "fim")!=0){
		fflush(stdin);
		printf("\nDigite 'F' para feminino ou 'M' para masculino: ");
		scanf("%c", &s);
		s=tolower(s);
	
		switch(s){
			case 'f':
				f++;
			break;
			case 'm':
				m++;
			break;
			default:
				printf("\nDigite um caracter válido");
			break;
				
		}
		printf("\nDigite o nome: ");
		scanf("%s", &n);
		
		
	}
	
	printf("\nTem %d do sexo feminino, e %d do sexo masculino\n", f, m);
	
	
	
	system("pause>null");
	return 0;
}
