#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int x, y, z;
	char frase[100];
	
	FILE *arquivo;
	arquivo = fopen("Comp.csv", "r");
	
	if(arquivo==NULL){
		printf("Arquivo não encontrado.\n");
		system("pause>null");
		return 0;
	}	
	
	fgets(frase, 100, arquivo);
	printf("%s", frase);
	
	
	fclose(arquivo);
	
	
	
	return 0;
};
