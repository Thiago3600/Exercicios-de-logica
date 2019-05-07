#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char *argv[]) {
	setlocale (LC_ALL, "portuguese");
	
	int a=6, i, x=1;
	i=1;
	while(i<=a){
		x=x*i;
		i++;
	}
	printf("O fatorial de %d é %d", a, x);
	
	
	system("pause>null");
	
	return 0;
}
