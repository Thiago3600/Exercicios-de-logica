#include <stdio.h>
#include <stdlib.h>



int main(int argc, char *argv[]) {
	
	float p, x, y;
	
	printf("Informe peso em Kg: ");
	scanf("%f", &p);
	
	if(p>50){
		x=p-50;
		y=x*4;
	}else{
		x=0;
		y=0;
	}
	
	printf("O peso e de %.3f e ultrapassou %.3f Kg e a multa e de R$ %.2f reais", p, x, y);
	
	
	system("pause>null");
	return 0;
}
