#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int x, y, z;
	char frase[]="Segunda linha";
	printf("%s", frase);
	
	FILE *arquivo;
	arquivo = fopen("string.txt", "a");
	
	if(arquivo==NULL){
		printf("Arquivo não encontrado.\n");
		system("pause>null");
		return 0;
	}	
	
	
	fputs(frase, arquivo);
	fprintf(arquivo, "\nPrimeira linha\n");
	
	fclose(arquivo);
	
	
	
	return 0;
}
