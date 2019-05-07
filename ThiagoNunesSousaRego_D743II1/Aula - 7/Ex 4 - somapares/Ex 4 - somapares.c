#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int a, b, i;
	b=0;
	printf("Digite 4 numeros para somar os pares:\n");
	
	for(i=1; i<5; i++){
		
		scanf("%d", &a);
		
		if(a%2==0){
			b=b+a;
		}
		
		
	}
	printf("\nO resultado e = %i\n", b);
	
	
	system("pause>null");
	return 0;
}
