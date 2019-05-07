#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main(int argc, char *argv[]) {
	setlocale (LC_ALL, "portuguese");
	
	int i;
	float a;
	
	
	
	for(i=1;i<=150;i++){
		a=i%5;
		
		if(a==0){
			printf("O numero %i é divisível por 5\n", i);
			
		}
	}
	
	
	
	system("pause>null");
	return 0;
}
