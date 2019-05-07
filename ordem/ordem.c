#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int i, j, temp;
	int n=0;
	char c=64;
	int ordem['n']={0};
	
	printf("Digite quantidade de linhas\n");
	scanf("%i", &n);	
	
	for (i=0;i<n;i++){
			printf("Digite valor de %c: ", c+1);
			scanf("%i", &ordem[i]);	
			c++;
		}
	printf("\n");
	
	
	for(i=0;i<n;i++){	
		for(j=i+1;j<n;j++){
			if(ordem[i]>ordem[j]){
				temp=ordem[i];
				ordem[i]=ordem[j];
				ordem[j]=temp;
			}
		}
	}
	for(j=0; j<n; j++){
		printf("%i ", ordem[j]);
	}
	system("pause>null");
	return 0;
}
