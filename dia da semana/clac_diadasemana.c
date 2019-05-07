#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int dia, mes, ano, x, y, a;
	inicio:
	system("cls");
	printf("\n\tCalcule o dia da semana de uma data especifica\n");
	printf("\n\tDigite o ano 'AAAA':");
	scanf("%i", &ano);
	printf("\n\tDigite o mes 'mm':");
	scanf("%i", &mes);
	printf("\n\tDigite o dia 'dd':");
	scanf("%i", &dia);
	
	x=dia+2*mes+((3*(mes+1))/5)+ano+(ano/4)-(ano/100)+(ano/400)+2;
	y=x % 7;
	a=((3*(mes+1))/5);
	printf("\n\A conta de ((3*(mes+1))/5)=%i\n\n", a);
	printf("\n\tO valor de x = %i\n\n", x);
	system("\tpause");
	if(y== 1){
	printf("\n\tO dia da semana foi no domingo\n\n");
	}
	if(y== 2){
	printf("\n\tO dia da semana foi na segunda-feira\n\n");
	}
	if(y== 3){
	printf("\n\tO dia da semana foi na terca-feira\n\n");	
	}
	if(y== 4){
	printf("\n\tO dia da semana foi na quarta-feira\n\n");	
	}
	if(y== 5){
	printf("\n\tO dia da semana foi na quinta-feira\n\n");	
	}
	if(y== 6){
	printf("\n\tO dia da semana foi na sexta-feira\n\n");	
	}
	if(y== 7){
	printf("\n\tO dia da semana foi no sabado\n\n");
	}
	else{
	
 	system("\tpause");
 	goto inicio;
 	
	}
		
	
	
	
	return 0;
}
