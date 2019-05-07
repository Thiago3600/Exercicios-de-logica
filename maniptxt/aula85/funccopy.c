#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	void copiarConteudo(FILE *arquivo1, FILE *arquivo2);
	
	int x, y, z;
	char frase[]="Segunda linha";
	
	FILE *arquivo1;
	FILE *arquivo2;
	arquivo1 = fopen("string1.txt", "r");
	
	if(arquivo1==NULL){
		printf("Arquivo não encontrado.\n");
		system("pause>null");
		return 0;
	}	
	
	arquivo2 = fopen("string2.txt", "w");
	
	copiarConteudo(arquivo1, arquivo2);
	
	fputs(frase, arquivo2);
	
	fclose(arquivo1);
	fclose(arquivo2);
	
	return 0;
}

void copiarConteudo(FILE *arquivo1, FILE *arquivo2){
	printf("Dentro da funcao");
	system("pause>null");
	char leitor[1000];
	
	while(fgets(leitor, 1000, arquivo1) != NULL){
		fputs(leitor, arquivo2);
	}
}









