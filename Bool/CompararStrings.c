#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	
	char a[100];
	char b[100];
	
	_Bool stringsIguais(char s1[], char s2[]);
	
	printf("Digite a primeira palavra: ");
	scanf("%s", &a);
	
	printf("Digite a segunda palavra: ");
	scanf("%s", &b);
	
	if(stringsIguais(a,b)){
		printf("São iguais!!!\n");
		
	}else{
		printf("Não são iguais!!!\n");
		
	}
	
	

	return 0;
}

_Bool stringsIguais(char s1[], char s2[]){
	
	int i=0;
	while(s1[i]==s2[i]&&s1[i]!='\0'&&s2[i]!='\0'){
		i++;
	}
	if(s1[i]=='\0'&&s2[i]=='\0'){
		
		return 1;
		
	}else{
		return 0;
	}
	
}
