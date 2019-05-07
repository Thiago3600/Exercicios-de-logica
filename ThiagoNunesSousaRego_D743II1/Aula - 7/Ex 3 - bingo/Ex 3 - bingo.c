#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	setlocale (LC_ALL, "portuguese");
	
	system("title Bingo");
	
	int a[5]={0}, r, i, j, temp;
	
	inicio:	
	system("cls");
	
	
	r=0;
	
	a[0]=1+rand()%9;
	a[1]=1+rand()%9;
	a[2]=1+rand()%9;
	


	
	
	printf("Bem vindo ao bingo\n");
	printf("Digite sua aposta, teste sua sorte com tres numeros de 1 a 9\n");
	scanf("%i", &a[3]);
	scanf("%i", &a[4]);
	scanf("%i", &a[5]);
 
 	for(i=0;i<3;i++){	
		for(j=i+1;j<3;j++){
			if(a[i]>a[j]){
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
			
		}
	}
	for(i=3;i<6;i++){	
		for(j=i+1;j<6;j++){
			if(a[i]>a[j]){
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	
	
	
	
	
	
 	printf("Os numeros sorteados\n");
	for(i=0;i<6;i++){
		printf(" %d ", a[i]);
		if(i==2){
			printf("\nSeus numeros da sorte\n");
		}
	}
	
	
	
	for(j=0;j<3;j++){
		
		for(i=3;i<6;i++){
			
			if(a[j]==a[i]){
			a[j]=0;
			a[i]=0;
			r++;
			}
			
		}
		
	}
	
	
	

	printf("\nVocê obteve %d acertos!", r);
	
	
	
	system("pause>null");
	
	
	goto inicio;
	
	return 0;
}
