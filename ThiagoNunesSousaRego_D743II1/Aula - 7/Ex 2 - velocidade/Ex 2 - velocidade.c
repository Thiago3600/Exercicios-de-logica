#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	float v, vp, m, x;
	
	printf("Digite a velocidade em Km/h permitido na Av: ");
	scanf("%f", &vp);
	
	printf("Digite a velocidade do veiculo em Km/h : ");
	scanf("%f", &v);
	
	x=v-vp;
	
	if(x>0&&x<=10){
		m=50;
	}else{
		if(x>10&&x<30){
			m=100;
		}else{
			if(x>30){
				m=200;
			}else{
				m=0;
			}
		}
	}
	
	printf("A velocidade permitida da via e de %.0f Km/h,\n o veiculo estava a %.0f Km/h, e a multa e de R$ %.2f \n\n", vp, v, m);
	
	system("pause>null");
	
	
	
	return 0;
}
