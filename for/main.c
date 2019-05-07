#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int a;
	char b[256
	];
	int c;
		
		printf("Digite a base do sistema numerico\n");
		scanf("%i", &c);
		inicio:
		system("cls");
		printf("Digite um decimal numero para transformar\n");
		scanf("%d", &a);
		
		itoa(a, b, c);
		
		
		printf("%s", b);
		
		
		/*while(num1!=0){
					
			bin=num1%2;
			num1=num1/2;
			printf("%i", bin);
		}
		*/
		system("\npause>null");
		goto inicio;
	return 0;
}
