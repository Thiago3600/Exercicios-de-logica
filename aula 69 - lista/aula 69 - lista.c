#include <stdio.h>
#include <stdlib.h>

struct lista{
	int valor;
	struct lista *proximo;
};


struct lista *procurarValor(struct lista *pLista, int valor){
	while(pLista != (struct lista *)0){
		if(pLista->valor == valor){
			return (pLista);
		}else{
			pLista = pLista -> proximo;
		}
	}
	return(struct lista *) 0;
};



int main(int argc, char *argv[]) {
	
	struct lista *procurarValor(struct lista *pLista, int valor);
	
	struct lista m1, m2, m3;
	struct lista *resultado, *gancho = &m1;
	
	int n;
	
	m1.valor = 10;
	m2.valor = 20;
	m3.valor = 30;
		
	m1.proximo = &m2;
	m2.proximo = &m3;
	m3.proximo = (struct lista *)0;
	
	
	printf("Digite um valor: ");
	scanf("%i", &n);
	
	
	resultado = procurarValor(gancho, n);
	
	
	if(resultado == (struct lista *)0){
		printf("Valor nao encontrado.\n");
	}else{
		printf("Valor %i encontrado.\n", resultado->valor);
	}
	
	
	
	
	system("pause>null");
	return 0;
}
