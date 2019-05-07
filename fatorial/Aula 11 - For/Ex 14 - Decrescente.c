#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int i;
	
	for(i=10; i>0; i--){
		printf("%d\n", i);
	}
	
	getch();
	return 0;
}
