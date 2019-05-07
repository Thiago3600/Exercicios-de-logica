#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	struct lista{
		int valor;
		struct lista *proximo;
	};
	
	struct lista m1, m2, m3;
	struct lista *gancho = &m1;
	
	m1.valor = 10;
	m2.valor = 20;
	m3.valor = 30;
	
	
	m1.proximo = &m2;
	m2.proximo = &m3;
	m3.proximo = (struct lista *)0;
	
	while(gancho != (struct lista *)0){
		printf("%i \n", gancho->valor);
		gancho=gancho->proximo;
	}
	
	
	
	
	return 0;
}
