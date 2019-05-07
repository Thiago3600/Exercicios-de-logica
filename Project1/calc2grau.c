#include <stdio.h>
#include <stdlib.h>
#include <math.h>




float a, b, c, d, e, f, r;



int main(int argc, char *argv[]) {
	
	char i[50];
	
	inicio:
	system("cls");		
	printf("\n\tCalculadora de equacao do segundo grau\n\n\n");
	printf("\n\tDigite o valor de a: ");
	scanf("%f", &a);
	printf("\n\tDigite o valor de b: ");
	scanf("%f", &b);
	printf("\n\tDigite o valor de c: ");
	scanf("%f", &c);
	
	d=(b*b)-4*a*c;
	printf("\n\tO resultado de delta: %.2f ", d);
	
	r=sqrt(d);
	printf("\n\tA raiz de delta: %f ", r);
	
	e=((-b)+r)/2*(a);
	f=((-b)-r)/2*(a);
	
	printf("\n\tO primeiro valor: %f ", e);
	printf("\n\tO segundo valor: %f \n\n", f);
	
 	
	printf("\n\tDeseja calcular novamente, 'sim' ou 'nao'?");
	scanf("%s", i);
	
	

	if(strcmp(i, "sim")== 0){
		
	
	goto inicio;	
	
	}
	if(strcmp(i, "nao")==0){
		printf("\n\tTem certeza?");
		scanf("%s", i);
		
		if(strcmp(i, "sim")== 0){
		goto fim;	
		}
		if(strcmp(i, "nao")== 0){
		goto inicio;	
		}
	}
	else{
	goto fim;
	}
	
	fim:
	return 0;
}
