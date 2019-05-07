#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	
	void alfabetico(char var);
	
	char nome[20];
	
	printf("Digite uma palavra: ");
	scanf("%s", &nome);
	
	int i = 0;
	while(nome[i]!='\0'){
		alfabetico(nome[i]);
		++i;
	}
	
	system("pause>null");
	
	return 0;
}

void alfabetico(char var){
	
	if((var>='a'&&var<='z')||(var>='A'&&var<='Z')){
		printf("%c = É letra!!\n", var);
	}else{
		printf("%c = Não é letra!!\n", var);
	}
	
	
}
