#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main(int argc, char** argv) {
	
	
	char vet[100];
	
	int i, j, k, l, x, y, m, espaco;
	
	long int mat[3][3];
	
	
	for(i=0; i<3; i++){
		for(j=0; j<3; j++){
			scanf("%i", &mat[i][j]);
		}
	}
	
	for(i=0; i<3; i++){
		printf("|");
		for(j=0; j<3; j++){
			k=printf(" %i ", mat[i][j]*-1);
			if(k>l){
				l=k;
			}
		}
		printf("\n");
	}
	
	printf("%i\n", l);
	
	for(i=0; i<3; i++){
		printf("|");
		for(j=0; j<3; j++){
			espaco=sprintf(vet,"%i ", mat[i][j]*-1);
			for(m=0;m<=l-espaco;m++){
				printf(" ");
			}
			printf("%i |", mat[i][j]*-1);
		
		}
		printf("\n");
	}
	
	return 0;
}




