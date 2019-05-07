#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main(int argc, char *argv[]) {
	setlocale (LC_ALL, "portuguese");
	
	int a, i;
	
	
	for(i=10;i<=20;i=i+2){
		a=a+i;
	}
	printf("%i\n", a);
	
	return 0;
}
