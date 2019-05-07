#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	
	char palavra[100];
	int a=0;
	
	printf("Digite uma palavra: ");
	scanf("%s", &palavra);
	
	
	while(palavra[a]!='\0'){
		
		a++;
		
	}
	
	printf("a = %i ", a+1);
	
	//printf("A palavra: %s", palavra);	
	
	
	
	
	
	return 0;
}
