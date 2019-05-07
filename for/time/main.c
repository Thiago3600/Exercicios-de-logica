#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "portuguese");
	
	int h1, h2, m1, m2, s1, s2, d;
	
	
	for (s2 = 0; s2<=9; s2++){
		
		for (d = 0; d<=1000; d++){
			printf("%i\n", d);
			system("cls");
		}
		
		printf("%i\n", s2);
	
	}
	return 0;
}
