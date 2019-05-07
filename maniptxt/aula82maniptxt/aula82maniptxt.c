#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int x, y, z;
	
	FILE *arquivo;
	arquivo = fopen("string.txt", "r");
	
	if(arquivo==NULL){
		printf("Arquivo não encontrado.\n");
		system("pause>null");
		return 0;
	}	
	
	fscanf(arquivo, "%i %i %i", &x, &y, &z);
	
	printf("%i %i %i\n", x, y, z);
	
	fclose(arquivo);
	
	
	
	return 0;
}
