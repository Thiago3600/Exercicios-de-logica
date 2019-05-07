#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	
	int i=0,j,k,l;
	k=1;
	l=65;
	char a=0;
	
//	system("mode con:cols=15 lines=10");
	while(i<500){
			printf("%d = %c ", a, a);
		
			a++;
			i++;
	 	
	 	printf("\n");
	}	
	
	getchar();
	
	return 0;
}
