#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {

	double num1 = 0, num2 = 0;
	double sp1 = 0, sp2 = 0;
	char vet[100] = {'\0'};
	
	printf("SP1 = ");
	scanf("%lf", &num1);
	printf("SP2 = ");
	scanf("%lf", &num2);
	
	sp1 = sprintf(vet , "%lf", num1);
	sp2 = sprintf(vet , "%lf", num2);
    
    if (sp1 > sp2) {
    	printf("SP1 e maior");
	} else if ( sp2 > sp1) {
		printf("SP2 e maior");
	}
	
	printf("\nSP1 = %.0lf e SP2 = %.0lf", sp1, sp2);
	system("pause>null");
		return 0;
     	
}
