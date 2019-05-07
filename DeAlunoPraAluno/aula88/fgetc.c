#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	char x[100];
	int i = 0;
	
	FILE *file = fopen("teste.txt", "r");
	
	while((x[i]=fgetc(file))!=EOF){
		++i;
	} 
	
	x[++i]='\0';
	
	printf("%s", x);
	
	
	
	return 0;
}
