#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	setlocale (LC_ALL, "portuguese");
	
	int i;
	i=100;

	while(i<=200){
		
		if(i%2==0){
			printf("%d\n", i);
		}
		i++;
	}
		
		getch();
	
	return 0;
}
