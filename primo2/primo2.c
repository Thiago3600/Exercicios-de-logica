#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main(int argc, char *argv[]) {
	setlocale (LC_ALL, "portuguese");
	
	int a, i;
	float j;
	inicio:
	system("cls");
	printf("Digite um numero: ");
	scanf("%i", &a);
	switch(a){
		case 0:
			printf("\n %i não é primo, pois tem infinitos divisores\a", a);
			break;
		case 1: 
			printf("\n %i é primo", a);
			break;
		default:
		//	if(a<0){
		//		a=a*-1;
		//	}
			
			for(i=2; i<=a; i++){
		
			j=a%i;
			
		
			if((j==0)&&(a!=i)){
			
				while(i<=a){
					j=a%i;
					if((j==0)&&(a!=i)){
						printf("\n %i nao é primo e é divisível por %i = %i", a, i, a/i);
					}
					i++;
				}
			
			}else if((a==i)&&(j==0)){
				printf("\n %i é primo", a);	
				}
			}
			
	}
	
	
	
	printf("\n Fim");	
	//getchar();
	system("pause>null");
	goto inicio;
	
	
	
	
	
	return 0;
}
