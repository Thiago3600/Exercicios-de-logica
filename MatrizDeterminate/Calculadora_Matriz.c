#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int  i, j, k, p, m, n, s, a, c, l, w, x, y, z, esp1, esp2;
char vet[100];

long int matrizA ['w']['x']={0}, matrizB ['y']['z']={0}, matrizC ['w']['z']={0};

void OpMatriz();
void DivMatriz(long int d1['w']['x'], long int d2['y']['z']);
void Adicao(long int d1['w']['x'], long int d2['y']['z']);
void Subtracao(long int d1['w']['x'], long int d2['y']['z']);

void MultMatriz();
void TamanhoMatrizes(void);
void TamanhoMatrizA(void);
void TamanhoMatrizB(void);
void ElementosMatrizA(long int a['w']['x']);
void ElementosMatrizB(long int b['y']['z']);
void PrintMatrizA(long int pma['w']['x']);
void PrintMatrizB(long int pmb['y']['z']);
void LimpaMatriz();


long int matrizN['a']['a'], det;
long int DeterminanteNxN(long int m['a']['a']);
long int inversa(long int m['a']['a']);
void MatrizInversa();
long int mdc(x, y);
void inicio();

int main(int argc, char *argv[]) {	
	setlocale(LC_ALL, "portuguese");
		inicio();
	return 0;
}


void inicio(){
	char b;
	int op;
	while(b!=27){
		system("cls");
		system("title Calculadora de matriz");
		printf("Qual tipo de calculo deseja:\n");
		printf("1 - Soma\n");
		printf("2 - Subtração\n");
		printf("3 - Divisão\n");
		printf("4 - Multiplicação\n");
		printf("5 - Determinante\n");
		printf("6 - Inversa\n");
		printf("0 - Para sair do programa\n");
		scanf("%i", &op);
		switch(op){
			case 0:
				return 0;
			break;
			case 1:
				OpMatriz();
				Adicao(matrizA, matrizB);
			break;
			case 2:
				OpMatriz();
				Subtracao(matrizA, matrizB);
			break;
			case 3:
				OpMatriz();
				DivMatriz(matrizA, matrizB);
			break;
			case 4:
				MultMatriz();
			break;
			case 5:
				Matriz();
				DeterminanteNxN(matrizN);
			break;
			case 6:
				Matriz();
				inversa(matrizN);
			break;
			default:
				printf("Digite o codigo correto.\n");
			break;
		}
		LimpaMatriz();
		b=getche();
	}
}

void OpMatriz(){
	TamanhoMatrizA();
	y=w;
	z=x;
	ElementosMatrizA(matrizA);
	ElementosMatrizB(matrizB);	
}



void Matriz(){
	system("cls");
	printf("Digite a ordem da matriz: ");
	scanf("%i", &a);
	
	
	for(c=0; c<a; c++){
		for(l=0; l<a; l++){
			printf("Digite os elementos da matriz\n");
			for(i=0; i<a; i++){
				printf("|");
				for(j=0; j<a; j++){
					printf(" %4.0i |", matrizN [i][j]);
				}	
				printf("\n");
			}
			printf("\n");
			scanf("%i", &matrizN [c][l]);
			system("cls");
			printf("Matriz A %ix%i\n", a, a);	
		}	
	}
}

void Adicao(long int d1['w']['x'], long int d2['y']['z']){
	
	printf("Função Adição\n");
	
	for(i=0; i<w; i++){
			for(j=0; j<x; j++){
				matrizC[i][j]=d1[i][j]+d2[i][j];
			}
		}
		
		for(i=0; i<w; i++){
			for(j=0; j<x; j++){
				esp1=sprintf(vet,"%i", matrizC[i][j]);
				if(esp1>esp2){
					esp2=esp1;
				}
			}
		}
		
		
	for(i=0; i<w; i++){
		printf("|");
		for(j=0; j<x; j++){
			esp1=sprintf(vet,"%i ", matrizC[i][j]);
			for(m=0;m<=esp2-esp1+2;m++){
				printf(" ");
			}
			printf("%i |", matrizC[i][j]);
		
		}
		printf("\n");
	}
	
	system("pause>null");
	
}

void Subtracao(long int d1['w']['x'], long int d2['y']['z']){
	
	printf("Função Subtração\n");
	
	for(i=0; i<w; i++){
		for(j=0; j<x; j++){
			matrizC[i][j]=d1[i][j]-d2[i][j];
		}	
	}
	
	
		for(i=0; i<w; i++){
			for(j=0; j<x; j++){
				esp1=sprintf(vet,"%i", matrizC[i][j]);
				if(esp1>esp2){
					esp2=esp1;
				}
			}
		}
		
		
	for(i=0; i<w; i++){
		printf("|");
		for(j=0; j<x; j++){
			esp1=sprintf(vet,"%i ", matrizC[i][j]);
			for(m=0;m<=esp2-esp1+2;m++){
				printf(" ");
			}
			printf("%i |", matrizC[i][j]);
		
		}
		printf("\n");
	}
	
	
	system("pause>null");
	
}


void DivMatriz(long int d1['w']['x'], long int d2['y']['z']){

	printf("Função DivMatriz\n");
	
	for(i=0; i<w; i++){
			printf("|");
			for(j=0; j<x; j++){
				mdc(d1[i][j], d2[i][j]);
			}	
			printf("\n");
		}
		
		
	
	system("pause>null");
	
}


void MultMatriz(){
	
	
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
	for(i=0; i<w; i++){
		for(j=0; j<x; j++){
			esp1=sprintf(vet,"%i", matrizC[i][j]);
			if(esp1>esp2){
				esp2=esp1;
			}
		}
	}
	
	
	for(i=0; i<w; i++){
		printf("|");
		for(j=0; j<x; j++){
			esp1=sprintf(vet,"%i ", matrizC[i][j]);
			for(m=0;m<=esp2-esp1+2;m++){
				printf(" ");
			}
			printf("%i |", matrizC[i][j]);
		
		}
		printf("\n");
	}
		
	LimpaMatriz();
}


// Função que encontra uma determinante nxn
long int DeterminanteNxN(long int m['a']['a']){
	int k, x, y;
	long int matriz['a']['a'], d=1;
	//	Esse for descarrega a matriz m para uma matriz temporaria
	
	for(i=0; i<a; i++){
		printf("|");
		for(j=0; j<a; j++){
			printf(" %4.0i |", matrizN [i][j]);
		}	
		printf("\n");
	}
	
	for(i=0; i<a; i++){
		for(j=0; j<a; j++){
			matriz[i][j]=m[i][j];
		}
	}
	l=0;
	c=0;
	
	for(k=0; k<a; k++){	
		for(i=0; i<a; i++){
			for(j=0; j<a; j++){
				if(i!=l){
					matriz[i][j]=(m[l][c]*m[i][j]-m[c][j]*m[i][l])/d;
				}
			}
		}
		for(x=0; x<a; x++){
			for(y=0; y<a; y++){
				m[x][y]=matriz[x][y];
			}		
		}
		d=matriz[l][c];
		l++;		
		c++;
	}	
	
	

	printf("A determinante é %i\n", d);
}
long int  inversa(long int  m['a']['a']){
	int t=a+a;
	int k, x, y;
	long int inv['a']['t']={0}, matriz['a']['t']={0}, d=1;
	
	for(i=0; i<a; i++){
		for(j=0; j<a; j++){
			matriz[i][j]=m[i][j];		
		}	
	}
	for(i=0; i<a; i++){
		for(j=a; j<t; j++){
			if(i==j-a){
				matriz[i][j]=1;		
			}	
		}	
	}
	for(i=0; i<a; i++){
		for(j=0; j<t; j++){
			inv[i][j]=matriz[i][j];	
		}	
	}
	printf("\n");
	l=0;
	c=0;
	
	for(k=0; k<a; k++){	
		for(i=0; i<a; i++){
			for(j=0; j<t; j++){
				if(i!=l){
					inv[i][j]=((matriz[l][c]*matriz[i][j])-(matriz[c][j]*matriz[i][l]))/d;
				}	
			/*
				for(x=0; x<a; x++){
					printf("|");
					for(y=0; y<t; y++){
						printf(" %4i |", inv [x][y]);
					}	
					printf("\n");
				}
				printf("\n");
			printf("\ninv[%i][%i]-->%i = matriz[%i][%i]--> %i * matriz[%i][%i]--> %i - matriz[%i][%i]--> %i * matriz[%i][%i]--> %i / %i\n", i, j, inv[i][j], l, c, matriz[l][c], i, j, matriz[i][j], c, j, matriz[c][j], i, l, matriz[i][l], d);	
			system("pause>null");*/
			}
		}
		for(x=0; x<a; x++){
			for(y=0; y<t; y++){
				matriz[x][y]=inv[x][y];
			}		
		}
		d=matriz[l][c];
		l++;		
		c++;
		
	}
	
	if(d==0){
		printf("\nA matriz nao tem inversa a determinante = %i\n", det);
	}else{
		
		for(i=0; i<a; i++){
			for(j=0; j<a; j++){
				m[i][j]=inv[i][j+a];		
			}	
		}
		
		
		
	
		for(i=0; i<a; i++){
			printf("|");
			for(j=0; j<a; j++){
				mdc(m[i][j], d);
			}	
			printf("\n");
		}
	
	
	}
	
	return 0;
}



long int mdc(x, y) {
	
long int a = 1, b, c, d;
	
	if(x%y==0){
		x=x/y;
		printf(" %i |", x);
	}else{
		
		while(a<=abs(x)&&a<=abs(y)){
			b = x%a;
			c = y%a;
			if(b==0&&c==0){
				d=a;
			}
			a++;
		}
		a=x/d;
		b=y/d;
	
		if(a<0&&b<0){
			a=a*-1;
			b=b*-1;
		}else{
			if(a>0&&b<0){
				a=a*-1;
				b=b*-1;	
			}
		}	
		printf(" %i/%i |", a, b);
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
void ElementosMatrizA(long int a['w']['x']){
	for(c=0; c<w; c++){
			for(l=0; l<x; l++){
				printf("Digite os elementos da matriz A\n");
				scanf("%i", &a [c][l]);
				system("cls");
				printf("Matriz A %ix%i\n", w, x);
				PrintMatrizA(a);
			}	
		}
		printf("\n");
}
void ElementosMatrizB(long int b['y']['z']){
	for(c=0; c<y; c++){
		for(l=0; l<z; l++){
			printf("Digite os elementos da matriz B\n");
			scanf("%i", &b[c][l]);
			PrintMatrizA(matrizA);
			printf("\n");
			PrintMatrizB(b);
		}	
	}

}
void PrintMatrizA(long int pma['w']['x']){
	system("cls");
	printf("Matriz A %ix%i\n", w, x);
	for(i=0; i<w; i++){
		printf("|");
		for(j=0; j<x; j++){
			printf(" %4i |", pma [i][j]);
		
			}	
		printf("\n");
	}
	printf("\n");
}
void PrintMatrizB(long int pmb['y']['z']){
	
	printf("Matriz B %ix%i\n", y, z);
	for(i=0; i<y; i++){
		printf("|");
		for(j=0; j<z; j++){
			printf(" %4i |", pmb [i][j]);
			
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
	for(i=0; i<a; i++){
		for(j=0; j<a; j++){
			matrizN [i][j]=0;
			
		}
	}
	
}










