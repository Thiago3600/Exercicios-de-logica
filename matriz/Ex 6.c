#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	system("title Maior e Menor Valor");
	
	float a[4][7], menor, maior;
	int  i, j, x, y;
	
	printf("Maior e Menor Valor:\n\n\n");
	
	for (i=0; i<4; i++)
	{
		for (j=0; j<7; j++)
		{
			printf("Linha %d; Coluna %d; Valor: ", i+1, j+1);
			scanf("%f", &a[i][j]);
		}
	}
	
	printf("\n\nVerificando o menor valor presente na matriz a cima:");
	
	maior = a[0][0];
	
	for (i=0; i<4; i++)
	{
		for (j=0; j<7; j++)
		{
			if (a[i][j] > maior)
			{
				maior = a[i][j];
				x = i+1;
				y = j+1;				
				printf("\n\nLinha %i; Coluna %i; aior valor: %.0f", x, y, maior);		
			}					
		}
		
	}
	printf("\n\nLinha %d; Coluna %d; Maior valor: %.0f", x, y, maior);
	
	menor = a[0][0];
		
	for (i=0; i<4; i++)
	{
		printf("\n\nLinha %i; Coluna %i; enor valor: %.0f\n\n", x, y, menor);
		for (j=0; j<7; j++)
		{
			if (a[i][j] < menor)
			{
				menor = a[i][j];
				x = i+1;
				y = j+1;
				printf("\n\nLinha %i; Coluna %i; enor valor: %.0f\n\n", x, y, menor);							
			}			
		}
	}
	printf("\n\nLinha %d; Coluna %d; Menor valor: %.0f\n\n", x, y, menor);
		
	system("PAUSE");
	return 0;
}
