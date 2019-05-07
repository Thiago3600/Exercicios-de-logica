#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char *argv[]) {
	setlocale (LC_ALL, "portuguese");
	
	int i, x, y=0;
	
	printf("Digite um numero para somar seus termos: ");
	scanf("%i", &x);
	
	for(i=1; i<=x; i++){
		y=i+y;
	}
	printf("A soma é = %d", y);
	
	getch();
	
	return 0;
}
