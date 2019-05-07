#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main(int argc, char *argv[]) {
	setlocale (LC_ALL, "portuguese");
	
	
	
	int i, j, n;

	FILE *arquivo;
	arquivo = fopen("primo.txt", "a");
	
	
	i=1; 
	n=1;
	
	

	while(i<=n){
		j=n%i;
		if((j==0)&&(i==1)){
			i++;
			for( ;i<n+1;i++){		
				j=n%i;	
				if((j==0)&&(n!=i)){
					goto fim;
				}
				else if((j==0)&&(n==i)){
					printf("%i e primo\n", n);
					fprintf(arquivo, "\n%i", n);
					
					
				}
			}
		}
		fim:
		i=1;
		n++;
	//	system("pause>null");
	}
	
	return 0;
}
