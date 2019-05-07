#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int a;
	int absoluto();
	inicio:
	fflush(stdin);
	printf("Digite um numero\n");
	scanf("%i", &a);
	
	
	if(a<0){	
	absoluto(a);
	}		
	else{
		printf("O valor e %i\n", a);
	}
	goto inicio;
	return 0;
}


int absoluto(int x){
	
	x *=-1;
	printf("O valor abs e %i\n", x);
	
	
	return x;
	
}
