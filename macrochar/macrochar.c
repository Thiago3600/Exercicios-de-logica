#include <stdio.h>
#include <stdlib.h>

#define MAIOR(x, y) x>y ? x:y
#define E_MINUSCULO(char) char >= 'a' && char <= 'z'

int main(int argc, char *argv[]) {
	
	char x = 98;
	
	if(E_MINUSCULO(x)){
		printf("E uma letra minuscula\n");
	}else{
		printf("Nao e uma letra minuscula\n");
	}
	
	printf("%i\n", MAIOR(100, 50));
	
	return 0;
}
