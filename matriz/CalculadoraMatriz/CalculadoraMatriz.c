#include <stdio.h>
#include <stdlib.h>

//matriz A w são linhas, x são colunas
//matriz B y são linhas, z são colunas

int l, c, i, j, w, x, y, z;
float matrizA ['w']['x']={0}, matrizB ['y']['z']={0}, matrizC ['w']['z']={0};
void TamanhoMatrizes(void);
void TamanhoMatrizA(void);
void TamanhoMatrizB(void);
void ElementosMatrizA(float a['w']['x']);
void ElementosMatrizB(float b['y']['z']);
void PrintMatrizA(float pma['w']['x']);
void PrintMatrizB(float pmb['y']['z']);
void LimpaMatriz();

int main(int argc, char *argv[]) {
	char s;
	
	

	

	while(s!=27){
		
		TamanhoMatrizes();
		ElementosMatrizA(matrizA);
		ElementosMatrizB(matrizB);
		
		for(l=0; l<w; l++){
			for(c=0; c<z; c++){	
				for(j=0; j<=x; j++){
					matrizC [c][l]=matrizC [c][l]+(matrizA [c][j]*matrizB [j][l]);
						}
					}	
				}
			printf("Matriz C %ix%i resultante:\n\n", w, z);
			for(c=0; c<w; c++){
				printf("|");
				for(l=0; l<z; l++){
					printf(" %4.0f |", matrizC [c][l]);
				}	
			printf("\n");
			}
			
		LimpaMatriz();
		s=getche();
	}
	return 0;
}

void TamanhoMatrizes(void){

	
	do{
			TamanhoMatrizA();
			TamanhoMatrizB();
			
			system("cls");
			printf("Matriz A %ix%i\n", w, x);
			if(w!=z){
				printf("\nA matriz A tem que ter a mesma quantidade linhas\nque a matriz B!");
				printf("\nMatriz A %ix%i\n", w, x);
				printf("Matriz B %ix%i\n", y, z);
				system("pause>null");
			}else {
				if(y!=x){
					printf("\nA matriz A tem que ter a mesma quantidade colunas\nque a matriz B!");
					printf("\nMatriz A %ix%i\n", w, x);
					printf("Matriz B %ix%i\n", y, z);
					system("pause>null");
				}
			}
		}while(w!=z||y!=x);
	
}
void TamanhoMatrizA(void){
	
	system("cls");
	printf("Matriz:\n");
	printf("Quantas linhas tem a matriz A: ");
	scanf("%i", &w);
	printf("Quantas colunas tem a matriz A: ");
	scanf("%i", &x);
	printf("\n");
	
}
void TamanhoMatrizB(void){
	
	printf("Quantas linhas tem a matriz B: ");
	scanf("%i", &y);
	printf("Quantas colunas tem a matriz B: ");
	scanf("%i", &z);
	
	
}
void ElementosMatrizA(float a['w']['x']){
	for(c=0; c<w; c++){
			for(l=0; l<x; l++){
				printf("Digite os elementos da matriz A\n");
				scanf("%f", &a [c][l]);
				system("cls");
				printf("Matriz A %ix%i\n", w, x);
				PrintMatrizA(a);
			}	
		}
		printf("\n");
}
void ElementosMatrizB(float b['y']['z']){
	for(c=0; c<y; c++){
		for(l=0; l<z; l++){
			printf("Digite os elementos da matriz B\n");
			scanf("%f", &b[c][l]);
			PrintMatrizA(matrizA);
			printf("\n");
			PrintMatrizB(b);
		}	
	}

}
void PrintMatrizA(float pma['w']['x']){
	system("cls");
	printf("Matriz A %ix%i\n", w, x);
	for(i=0; i<w; i++){
		printf("|");
		for(j=0; j<x; j++){
			printf(" %4.0f |", pma [i][j]);
		
			}	
		printf("\n");
	}
	printf("\n");
}
void PrintMatrizB(float pmb['y']['z']){
	
	printf("Matriz B %ix%i\n", y, z);
	for(i=0; i<y; i++){
		printf("|");
		for(j=0; j<z; j++){
			printf(" %4.0f |", pmb [i][j]);
			
			}	
		printf("\n");
	}
	printf("\n");
	
}

void LimpaMatriz(){
	
	for(i=0; i<w; i++){
		for(j=0; j<x; j++){
			matrizA [i][j]=0;
			
		}
	}
	for(i=0; i<y; i++){
		for(j=0; j<z; j++){
			matrizB [i][j]=0;
			
		}
	}
	for(i=0; i<w; i++){
		for(j=0; j<z; j++){
			matrizC [i][j]=0;
			
		}
	}
	
}



