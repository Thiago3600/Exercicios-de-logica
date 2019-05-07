#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	setlocale (LC_ALL, "portuguese");
	
	int a[15], b[15], i, x;
	
	
	for(i=0; i<=14; i++){
		scanf("%i", &a[i]);
		b[i]=1;
		for(x=0; x<a[i]; x++){
			b[i]=b[i]*a[x];
		}
	}
	for(i=0; i<=14; i++){
		printf("a[%i]\n", a[i]);
		printf("b[%i]\n\n", b[i]);
	}

	return 0;
}
