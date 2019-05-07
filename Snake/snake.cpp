#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>
#include <time.h>



using namespace std;
int i, j, w = 25, h = 20;
 

int inicio(void);
char modo(char c);
void game(void);
int direcao(void);
char tela(char mat['h']['w'], int s);
char movimento(char mat['h']['w']);
int caudaX[50]{1}, caudaY[50]{1};
int Cauda(int cx, int cy);

int main(int argc, char** argv) {
	
	inicio();
	
	return 0;
}

int inicio(void){
	
	system("mode con:cols=25 lines=25");
	char select='1', menu1=62, menu2='\0', menu='\0';
	while(1){
		system("cls");
		cout<<"Snake game."<<endl;
		cout<<menu1<<" Start game"<<endl;
		cout<<menu2<<" Exit"<<endl;
		
		menu=getch();
		if(menu==72){
			menu1=62;
			menu2='\0';
			select='1';
		}
		if(menu==80){
			menu1='\0';
			menu2=62;
			select='0';
		}
		if(menu==13){modo(select);}
	}
	
}
char modo(char c){
	
	switch(c){
		case '0':
			exit(0);
			break;
		case '1':
			game();
			break;
	}
	
}

void game(void){
	
	
	
	char matriz['h']['w']{'\0'};
	system("cls");
	
	for(i=0; i<h; i++){
		for(j=0; j<w; j++){
			
			if(i==0||i==h-1){
				matriz[i][j]='#';
			}
			if(j==0||j==w-1){
				matriz[i][j]='#';
			}
		}
	}
	
	movimento(matriz);
	
}



int direcao(void){
	int c;
	if(kbhit()==1){
		
			c=getch();
			
			switch(c){
				//Seta pra cima
				case 72:
					c=1;
					break;
				//Seta pra direita
				case 77:
					c=2;
					break;
				//Seta pra baixo
				case 80:
					c=3;
					break;
				//Seta pra esquerda
				case 75:
					c=4;
					break;
				//ESC pra voltar ao inicio
				case 27:
					inicio();
					break;
			}
		}
	
	return c;	
}

char tela(char mat['h']['w'], int s){
	
	system("cls");
	for(i=0; i<h; i++){
		for(j=0; j<w; j++){
			printf("%c",mat[i][j]);
		}
		printf("\n");
	}
	printf("Score = %i\n", s-1);
}
char movimento(char mat['h']['w']){
	
	int x=2, y=2, t1, t2, dir=2, milisec=100, fx, fy, score=1;
	srand(time(NULL));
	
	
	while(1){
		do{
			fx=1+rand()%(h-2);
			fy=1+rand()%(w-2);
		}while(mat[fx][fy]=='o');
		mat[fx][fy]='@';
	do{
			if(mat[x][y]!='o'){
				mat[x][y]=254;
			}else{
				printf("Game over!");
				system("pause>null");
				inicio();
			}
			
			Sleep(milisec);
			tela(mat, score);
			mat[caudaX[score]][caudaY[score]]='\0';	
			caudaX[0]=x;
			caudaY[0]=y;		
			
			if(direcao()!=0){
				if(direcao()==dir+1||direcao()==dir-1||direcao()==dir+3||direcao()==dir-3){
					dir=direcao();
				}
			}
			
			switch(dir){
				case 1:
					x--;
					break;
				case 2:
					y++;	
					break;
				case 3:
					x++;
					break;
				case 4:
					y--;
					break;
				default:
					dir=2;
					break;
			}
			
			mat[caudaX[0]][caudaY[0]]='o';
			
			for(i=score+1;i>0;i--){
				caudaX[i]=caudaX[i-1];
				caudaY[i]=caudaY[i-1];
			}
			
			if(y==w-1||y==0||x==h-1||x==0){
				cout<<"Game over\n";
				system("pause>null");
				inicio();
			}
		}while(mat[fx][fy]=='@');
		score++;
		Beep(150,200);
		if(score>5&&score<10){
			milisec=80;
		}
		if(score==10){
			milisec=50;
		}
		
	}
}


















