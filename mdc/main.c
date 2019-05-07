#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	
	int x = 31, y = 40, a = 1, b, c, d;
	
	if(x%y==0){
		x=x/y;
		printf("O resultado é %i\n", x);
	}else{
		
		while(a<=abs(x)&&a<=abs(y)){
			b = x%a;
			c = y%a;
			if(b==0&&c==0){
				//printf(" %i/%i \n", b, c);
				d=a;
				//printf("d = %i\n", d);
				//system("pause>null");
			}
			a++;
			//printf("a = %i\n", a);
		}
		printf("Máximo divisor comum de %i/%i é %i\n", x, y, d);
		a=x/d;
		b=y/d;
		printf(" %i/%i \n", a, b);
	}
	
	
	return 0;
}
