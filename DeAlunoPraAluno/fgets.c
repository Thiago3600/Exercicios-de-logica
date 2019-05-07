#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	
	char x[100];

	FILE *file = fopen("teste.txt", "r");
		
	fgets(x, 100, file);
	printf("%s\n", x);
	
	freopen("teste2.txt", "r", file);
	
	fgets(x, 100, file);
	printf("%s\n", x);








	/*gets(x);
	scanf("%s", &x);
	fgets(x, 100, stdin);
	printf("%s", x);
	
	freopen("teste.txt", "r", stdin);
	
	fgets(x, 100, stdin);
	printf("%s", x);*/
	
	
	
	
	
	return 0;
}
