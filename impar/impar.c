#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int r, a;
	
	a=999;
	
	for( ;a<=1500;a++){
		r=a%2;
		if(r!=0){
			printf("O numero %d e impar\n", a);
		}
	}
	
	
	
	
	return 0;
}
