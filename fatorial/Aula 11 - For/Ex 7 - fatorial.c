#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char *argv[]) {
	setlocale (LC_ALL, "portuguese");
	
	int a=6, i, x=1;
	
	for(i=1; i<=a; i++){
		x=x*i;
	}
	printf("O fatorial de %d � %d", a, x);
	
	
	system("pause>null");
	
	return 0;
}
