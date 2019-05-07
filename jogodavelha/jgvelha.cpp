#include <iostream>
#include <conio.h>


/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;


void printgame(void);
int verifyWinner(void);
void togglePlayer(void);
void score(void);
void inicio(void);
//char verificaVelha(mat[3][3]);

char matriz[3][3]{'1', '2', '3', '4', '5', '6', '7', '8', '9'};
char c, a='X', v;
int i, j, b, X=0, O=0, w;

int main(int argc, char** argv) {
	
		inicio();
	
		return 0;
	}
	
	
void printgame(void){
	system("cls");
	cout<<"Jogo da velha!\n";
	cout<<"Score:\n"<<"X = "<<X<<"\n"<<"O = "<<O<<"\n\n";
	
	for(i=0; i<3; i++){
		for(j=0; j<3; j++){
			cout<<matriz[i][j]<<" ";
			}	
			cout<<"\n";
		}
}

int verifyWinner(void){
	
	if(w==1){
			w=0;
			cout<<"Deseja jogar mais uma vez 's' para sim ou 'n' para nao\n";
			c=getche();
			c=tolower(c);
			a='X';
			switch(c){
				case 's':
					v=49;
					for(i=0; i<3; i++){
						for(j=0; j<3; j++){
							matriz[i][j]=v;
							v++;
						}	
					}
					break;
				case 'n':
					exit(0);
					break;
				default:
					cout<<"Digite uma resposta valida";
					break;
			}
			system("cls");
		}
	
}

void togglePlayer(void){
	
	if(a=='X'){
			a='O';
		}else{
			a='X';
		}
	
}
void score(void){
	cout<<endl;
	printgame();
	for(i=0; i<3; i++){
				if(matriz[i][0]=='O'&&matriz[i][1]=='O'&&matriz[i][2]=='O'){
					cout<<"'O' ganhou!!\n";
					O++;
					w=1;
				}	
		}	
		
		
		for(j=0; j<3; j++){
				if(matriz[0][j]=='O'&&matriz[1][j]=='O'&&matriz[2][j]=='O'){
					cout<<"'O' ganhou!!\n";
					O++;
					w=1;
				}	
		}	
		
		for(i=0; i<3; i++){
				if(matriz[i][0]=='X'&&matriz[i][1]=='X'&&matriz[i][2]=='X'){
					cout<<"'X' ganhou!!\n";
					X++;
					w=1;
				}	
		}	
		
		
		for(j=0; j<3; j++){
				if(matriz[0][j]=='X'&&matriz[1][j]=='X'&&matriz[2][j]=='X'){
					cout<<"'X' ganhou!!\n";
					X++;
					w=1;
				}	
		}
		
		if(matriz[0][0]=='X'&&matriz[1][1]=='X'&&matriz[2][2]=='X'){
			cout<<"'X' ganhou!!\n";
			X++;
			w=1;
		}
		if(matriz[0][2]=='X'&&matriz[1][1]=='X'&&matriz[2][0]=='X'){
			cout<<"'X' ganhou!!\n";
			X++;
			w=1;
		}	
		if(matriz[0][0]=='O'&&matriz[1][1]=='O'&&matriz[2][2]=='O'){
			cout<<"'O' ganhou!!\n";
			O++;
			w=1;
		}
		if(matriz[0][2]=='O'&&matriz[1][1]=='O'&&matriz[2][0]=='O'){
			cout<<"'O' ganhou!!\n";
			O++;
			w=1;
		}	
	
	
	
}
void inicio(void){
	
	while(1){	
		do{			
			printgame();
			cout<<"Digite um numero que corresponde ao lugar de: "<<a<<"\n";
			c=getche();
			for(i=0; i<3; i++){
				for(j=0; j<3; j++){
					if(c==matriz[i][j]){
						i=3;
						j=3;
						b=0;
					}else{
						b=1;
					}
				}	
			}
		}while(b==1);
			
		for(i=0; i<3; i++){
			for(j=0; j<3; j++){
				if(matriz[i][j]==c&&matriz[i][j]!='X'&&matriz[i][j]!='O'){
					matriz[i][j]=a;
				}
			}	
		}
	togglePlayer();
	score();
	verifyWinner();
	}
}
/*char verificaVelha(mat[3][3]){
	
	for(i=0; i<3; i++){
			for(j=0; j<3; j++){
				
			}	
		}	
	
	
}*/
