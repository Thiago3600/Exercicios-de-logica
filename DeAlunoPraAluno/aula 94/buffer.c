#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	void limp(void);
	
	char a, b, c, d, e, f;
	
	
	a=getchar();
	limp();
	
	return 0;
}

void limp(void){
	char c;
	while((c=getchar())!='\n'&&c!=EOF);
	
}
