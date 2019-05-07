#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
	const int ba = 4;
	const int na = 4;

int main(int argc, char *argv[]) {
	

	
	float nta[4][4] = {0};
	float ma[4] = {0};
	
	float me=0;
	
	int aluno;
	int nota;
	
	printf("Insira as 4 notas do aluno 1:\n");
	
	for (aluno = 0;aluno<na; aluno++){
		
		for(nota = 0; nota<ba; nota++){
			
			scanf("%f", &nta[aluno][nota]);
			me += nta[aluno][nota];
		}
		ma[aluno]=me/ba;
		me=0;
		printf("Insira as 4 notas do aluno %i:\n", aluno+2);	
	}
	
	for (aluno=0; aluno<na; aluno++){
		printf("A media do aluno %i e %.2f\n", aluno +1, ma[aluno]);
	}
		
	
	system("pause");
	
	
	return 0;
}
