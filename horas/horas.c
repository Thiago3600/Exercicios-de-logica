#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

struct horario{
		int horas;
		int minutos;
		int segundos;	
	};

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	
	void receberHorarios(struct horario lista[5]);
	void printHorarios(struct horario lista[5]);
	
	
	struct horario batata[5];
	
	
	receberHorarios(batata);
	printHorarios(batata);
	
	
	
	
	system("pause>null");
	return 0;
}


void receberHorarios(struct horario lista[5]){
	
	int i;
	for(i=0; i<5; i++){
		
		printf("Digite o %i horario(hh:mm:ss): ", i+1);
		scanf("%i:%i:%i\n", &lista[i].horas,
						    &lista[i].minutos,
						    &lista[i].segundos);
	}
		
}

void printHorarios(struct horario lista[5]){
	
	int i;
	for(i=0; i<5; i++){
		
		
		printf("%i:%i:%i\n", 
						   lista[i].horas,
						   lista[i].minutos,
						   lista[i].segundos);
	}
	
	
}
