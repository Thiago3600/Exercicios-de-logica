#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	
	int i, a, b;
	
	printf("Digite um numero para formar a tabuada: ");
	scanf("%i", &a);
	
	while(i<=10){
		b=a*i;
		printf("%i x %i = %i\n", a, i, b);
		i++;
	}
	getch();
	return 0;
}
