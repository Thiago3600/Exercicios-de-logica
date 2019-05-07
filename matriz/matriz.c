#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int l, c;
	float matriz [3][3] = { 1, 2, 3, 4, 5, 6, 7, 18, 9};
	l=0;
	c=0;
	
	
	for(l=00;l<=2; l++){
		for(c=00;c<=2; c++){
			printf("| %2.0f |", matriz[l][c]);
		}
		printf("\n");
	}
	system("\npause>null");
	
	return 0;
}
