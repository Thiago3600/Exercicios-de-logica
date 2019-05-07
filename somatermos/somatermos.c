#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char *argv[]) {
	setlocale (LC_ALL, "portuguese");
	
	int i, x=1, y=0;
	while(x>0){
		printf("\nDigite o numero para somar seus termos: ");
		scanf("%i", &x);
		
		for(i=1; i<=x; i++){
			
			y=y+i;
			
		}
		if(x>0){
			printf("A soma dos termos é %i.", y);
			y=0;
		}
		
	}
	
	return 0;
}
