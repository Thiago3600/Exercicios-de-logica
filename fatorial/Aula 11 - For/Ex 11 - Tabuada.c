#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	
	int i, a, b;
	
	printf("Digite um numero para formar a tabuada: ");
	scanf("%i", &a);
	
	for(i=0; i<=10; i++){
		b=a*i;
		printf("%2d x %2d = %2d\n", a, i, b);
	
	}
	getch();
	return 0;
}
