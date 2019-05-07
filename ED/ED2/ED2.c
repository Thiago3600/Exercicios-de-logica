#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int m, calc, i;
	
	scanf("%i", &m);
	while(m>0){
		calc=0;
		if(m%2==0){
			for(i=1;i<=m;i++){
				if(m%i==0){
					calc=calc+1;
					printf(" %d \n", calc);
				}else{
					for(i=1;i<m;i++){
						calc=calc+1;
					}
					printf(" %d \n", calc);
				}
			
			}
	
		}
			scanf("%i", &m);
	}
	return 0;
}






