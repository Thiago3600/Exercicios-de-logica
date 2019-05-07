#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char *argv[]) {
	setlocale (LC_ALL, "portuguese");
	
	int x, y, z, i;
	inicio:
	system("cls");
	i=1;
	y=0;
	z=1;
	char a=65;
	
	printf("Digite 20 numeros numeros\n");
	
	while(i<21){
		
		printf("\nDigite o valor de %c: ", a);
		a++;
		scanf("%i", &x);
		
		if(x<0){
			printf("Só numeros inteiros e positivos!!\n");
			system("pause>null");
			goto inicio;
				
		}else{
			if(x%2==0){
				y=y+x;
			}else{
				z=z*x;	
			}
			
		}
		
		
		
		i++;
		
	}
	
	printf("\nA soma dos pares é %i, e o produto dos ímpares é %i.\n", y, z);
	
	
	system("pause>null");
	
	
	return 0;
}
