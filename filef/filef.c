#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main(int argc, char *argv[]) {
	setlocale (LC_ALL, "portuguese");
	
	char frase[1000];
	
	
	FILE *file;
	file = fopen("string.txt", "r");
	
	
	
	if(file == NULL){
		printf("Não foi possivel abrir o arquivo\n");
		getchar();
		exit(0);
	}
	
	while(fgets(frase, 1000, file) != NULL){
		printf("%s", frase);
	}
	
	fclose(file);
	
	
	system("pause<null");
	
	
	return 0;
}
