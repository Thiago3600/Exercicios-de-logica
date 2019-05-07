#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int i, a, b, c;
	
	for(i=0; i<15; i++){
		scanf("%i", &a);
		b=b+a;
	}
	c=b/15;
	
	printf("A soma = %d\n", b);
	printf("A media = %d", c);
	
	getch();
	return 0;
}
