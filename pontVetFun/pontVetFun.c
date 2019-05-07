#include <stdio.h>
#include <stdlib.h>

int somaVetor(int vetor[], const int n){
	int soma = 0;
	int *ponteiro;
	int *const finalVetor = vetor + 10;
	
	
	for(ponteiro=vetor; ponteiro<finalVetor; ++ponteiro){
		soma+=*ponteiro;
	}
	
	return soma;
}

int main(int argc, char *argv[]) {
	
	
	int somaVetor(int vetor[], const int n);
	int vetor[10]={5,5,5,5,5,5,5,5,5,5};
	
	printf("A soma dos membros do vetor = %i", somaVetor(vetor, 10));
	
	
	return 0;
}
