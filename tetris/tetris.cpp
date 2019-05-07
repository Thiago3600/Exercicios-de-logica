#include <iostream>
#include <windows.h>
#include <conio.h>
#include <time.h>


int i, j, h=20, w=20, k, pc, a=0;
char ch='o';
char mat['h']['w']{'\0'};
void inicio(void);
char modo(char c);
char pecas(void);
void game(void);
void tetris(void);
void movimento(void);
int limiteW(void);
int direcao(void);
char tela(int s);
int bottom(void);
int VerificaParede(void);
void rotacao(char r);
void pontuacao(void);
int pcX[4]{'\0'}, pcY[4]{'\0'}, parede['h']['w']{'\0'};

using namespace std;
int main(int argc, char** argv) {
	inicio();
	return 0;
}

void inicio(void){
	char select='1', menu1=62, menu2='\0', menu='\0';
	while(1){
		system("cls");
		cout<<"Tetris."<<endl;
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
	
	system("cls");
	
	for(i=0; i<h; i++){
		for(j=0; j<w; j++){
			
			if(i==0||i==h-1){
				mat[i][j]=219;
			}
			if(j==0||j==w-1){
				mat[i][j]=219;
			}			
		}
	}
	
	tetris();
	
}

char tela(int s){
	
	system("cls");
	for(i=0; i<h; i++){
		for(j=0; j<w; j++){
			printf("%c",mat[i][j]);
		}
		printf("\n");
	}
	printf("Score = %i\n", s);
}

void tetris(void){
	
	int dir;
	
	while(1){
		
		pc=pecas();
		tela(a);
		
		/*for(i=0;i<4;i++){
			
			printf("pcx[%i] = %i\n", i, pcX[i]);
			printf("pcy[%i] = %i", i, pcY[i]);
			cout<<endl;
		}*/
		
		while(bottom()!=1){
			Sleep(500);
			tela(a);
			
		for(i=0;i<4;i++){
			
			printf("pcx[%i] = %i\n", i, pcX[i]);
			printf("pcy[%i] = %i", i, pcY[i]);
			cout<<endl;
		}
			
			for(i=0;i<4;i++){
				mat[pcX[i]][pcY[i]]='\0';
			}
			
			for(i=3;i>=0;i--){
				pcX[i]++;
			}
			
			
			movimento();
			
			for(i=0;i<4;i++){
				mat[pcX[i]][pcY[i]]=ch;
			}
			
			
	//	system("pause>null");
		
			
		}
		
		for(i=0;i<4;i++){
			parede[pcX[i]][pcY[i]]=1;
		}
		pontuacao();
		
	}
}
char pecas(void){
	
	srand(time(NULL));
	
	int bloco, posi;
	posi=w/2;
	//Posição inicial
	mat[1][posi]=ch;
	pcX[0]=1;
	pcY[0]=posi;
	
	bloco=1+rand()%7;

	
	switch(bloco){
		//Peça 'T'
		case -1:
			for(j=posi-1, i=1;j<=posi+1;j++, i++){		
				mat[2][j]=ch;
				pcX[i]=2;
				pcY[i]=j;
			}
			break;
		//Peça 'Z'
		case -2:
			mat[2][posi]=ch;
			pcX[1]=2;
			pcY[1]=posi;
			
			mat[2][posi-1]=ch;
			pcX[2]=2;
			pcY[2]=posi-1;
			
			mat[3][posi-1]=ch;
			pcX[3]=3;
			pcY[3]=posi-1;
			break;
		//Peça 'I'
		case 3:
			for(i=2, j=1;i<5;i++, j++){
				mat[i][posi]=ch;
				pcX[j]=i;
				pcY[j]=posi;
			}
			break;
		//Peça 'L'
		case 4:
			for(i=2, j=1;i<4;i++, j++){
				mat[i][posi]=ch;
				pcX[j]=i;
				pcY[j]=posi;
			}
			mat[3][posi+1]=ch;
			pcX[3]=3;
			pcY[3]=posi+1;
			break;
		//Peça 'J'
		case 5:
			for(i=2, j=1;i<4;i++, j++){
				mat[i][posi]=ch;
				pcX[j]=i;
				pcY[j]=posi;
			}
			mat[3][posi-1]=ch;
			pcX[3]=3;
			pcY[3]=posi-1;
			break;
		//Peça 'S'
		case 6:
			mat[2][posi]=ch;
			pcX[1]=2;
			pcY[1]=posi;
			
			mat[2][posi+1]=ch;
			pcX[2]=2;
			pcY[2]=posi+1;
			
			mat[3][posi+1]=ch;
			pcX[3]=3;
			pcY[3]=posi+1;
			break;
		//Peça 'O'
			case 7:
			
			mat[1][posi+1]=ch;
			pcX[1]=1;
			pcY[1]=posi+1;
			
			mat[2][posi]=ch;
			pcX[2]=2;
			pcY[2]=posi;
			
			mat[2][posi+1]=ch;
			pcX[3]=2;
			pcY[3]=posi+1;
			
			break;
	}
	return bloco;
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
				//'D'
				case 68:
				//'d'
				case 100:
				//'E'
				case 69:
				//'e'
				case 101:
					rotacao(c);
					break;
			}
		}
	
	return c;	
}

void movimento(void){
	
	int d, l, time=0;
	
	d=direcao();
	
	
	while(d!=0){
			
			l=limiteW();
			
			for(i=0;i<4;i++){
				mat[pcX[i]][pcY[i]]='\0';
			}	
			
			if(d==2&&l!=2){
				
				for(i=3;i>=0;i--){
					pcY[i]++;
				}
				
			}else{
				
				if(d==4&&l!=4){
					for(i=3;i>=0;i--){
						pcY[i]--;
					}
			
				}
					
			}
			
			for(i=0;i<4;i++){
				mat[pcX[i]][pcY[i]]=ch;
			}
			tela(a);
			
			time++;
			
			if(time==10){
				d=0;
			}else{
				d=direcao();
			}
		}
	
}

int limiteW(void){
	
	int lw=0;
	
	for(i=3;i>=0;i--){
		if(pcY[i]<2||pcX[i]<2||parede[pcX[i]][pcY[i]-1]==1){
				lw=4;
				i=-1;
			}else{
				if(pcY[i]>(w-3)||pcX[i]>(w-3)||parede[pcX[i]][pcY[i]+1]==1){
						lw=2;
						i=-1;
					}else{
						lw=3;
					}
				}
			}
		
	
	return lw;
}

int bottom(void){
	
	int b=0;
	
	for(k=3;k>=0;k--){
		if(pcX[k]==h-2||VerificaParede()==1){
			b=1;
			k=-1;
			Sleep(100);
		}else{
			b=0;
			}
		}
		
		
		
	return b;
}

int VerificaParede(void){
	
	int v=0;
	
	for(i=0;i<4;i++){
		if(parede[pcX[i]+1][pcY[i]]==1){
			v=1;
			i=5;
		}else{
			v=0;
		}
	}
	return v;
}

void rotacao(char r){
	
	static int rot=1;
	
	r=tolower(r);
	
	for(i=0;i<4;i++){
		mat[pcX[i]][pcY[i]]='\0';
	}
	
	switch(r){
		case 'd':
			
			switch(pc){
				//Peça 'T'
				case 1:
														
					pcX[1]=pcX[0];
					pcY[1]=pcY[0];
					pcX[0]=pcX[3];
					pcY[0]=pcY[3];
				//	pcX[2]=pcX[2];
				//	pcY[2]=pcY[2];
					
					switch(rot){
						case 1:
							pcX[3]=pcX[3]+1;
							pcY[3]=pcY[3]-1;
							rot=2;
							break;
						case 2:
							pcX[3]=pcX[3]-1;
							pcY[3]=pcY[3]-1;
							rot=3;
							break;
						case 3:
							pcX[3]=pcX[3]-1;
							pcY[3]=pcY[3]+1;
							rot=4;
							break;
						case 4:
							pcX[3]=pcX[3]+1;
							pcY[3]=pcY[3]+1;
							rot=1;
							break;
							
					}
					break;
				//Peça 'Z'
				case 2:
					
					switch(rot){
						case 1:
							pcY[1]=pcY[1]-2;
							pcX[0]=pcX[0]+2;
							rot=2;
							break;
						case 2:
							pcY[1]=pcY[1]+2;
							pcX[0]=pcX[0]-2;
							rot=1;
							break;
					
					}
					
					break;
				//Peça 'I'
				case 3:
					
					switch(rot){
						case 1:
							pcX[0]=pcX[0]+1;
							pcY[0]=pcY[0]-1;
							for(i=1;i<4;i++){
								pcX[i]=pcX[0];
								pcY[i]=pcY[i-1]+1;
							}
							rot=2;
							break;
						case 2:
							pcX[0]=pcX[0]-1;
							pcY[0]=pcY[0]+1;
							for(i=1;i<4;i++){
								pcX[i]=pcX[i-1]+1;
								pcY[i]=pcY[0];
							}
							rot=1;
							break;
					
					}
					
					
					break;
				//Peça 'L'
				case 4:
					
					switch(rot){
						case 1:
							pcX[0]=pcX[0]+1;
							pcY[0]=pcY[0]+2;
							for(i=1;i<3;i++){
								pcX[i]=pcX[i-1];
								pcY[i]=pcY[i-1]-1;
							}
							pcX[3]=pcX[2]+1;
							pcY[3]=pcY[2];
																					
							rot=2;
							break;
						case 2:
							pcX[0]=pcX[0]+2;
							pcY[0]=pcY[0]-1;
							for(i=1;i<3;i++){
								pcX[i]=pcX[i-1]-1;
								pcY[i]=pcY[i-1];
							}
							pcX[3]=pcX[2];
							pcY[3]=pcY[2]-1;
							rot=3;
							break;
						case 3:
							pcX[0]=pcX[0]-1;
							pcY[0]=pcY[0]-2;
							for(i=1;i<3;i++){
								pcX[i]=pcX[i-1];
								pcY[i]=pcY[i-1]+1;
							}
							pcX[3]=pcX[2]-1;
							pcY[3]=pcY[2];
							rot=4;
							break;
						case 4:
							pcX[0]=pcX[0]-2;
							pcY[0]=pcY[0]+1;
							for(i=1;i<3;i++){
								pcX[i]=pcX[i-1]+1;
								pcY[i]=pcY[i-1];
							}
							pcX[3]=pcX[2];
							pcY[3]=pcY[2]+1;
							rot=1;
							break;
							
					}
					
					break;
				//Peça 'J'
				case 5:
					
					switch(rot){
						case 1:
							pcX[0]=pcX[0]+1;
							pcY[0]=pcY[0]+2;
							for(i=1;i<3;i++){
								pcX[i]=pcX[i-1];
								pcY[i]=pcY[i-1]-1;
							}
							pcX[3]=pcX[2]-1;
							pcY[3]=pcY[2];
																					
							rot=2;
							break;
						case 2:
							pcX[0]=pcX[0]+2;
							pcY[0]=pcY[0]-1;
							for(i=1;i<3;i++){
								pcX[i]=pcX[i-1]-1;
								pcY[i]=pcY[i-1];
							}
							pcX[3]=pcX[2];
							pcY[3]=pcY[2]+1;
							rot=3;
							break;
						case 3:
							pcX[0]=pcX[0]-1;
							pcY[0]=pcY[0]-2;
							for(i=1;i<3;i++){
								pcX[i]=pcX[i-1];
								pcY[i]=pcY[i-1]+1;
							}
							pcX[3]=pcX[2]+1;
							pcY[3]=pcY[2];
							rot=4;
							break;
						case 4:
							pcX[0]=pcX[0]-2;
							pcY[0]=pcY[0]+1;
							for(i=1;i<3;i++){
								pcX[i]=pcX[i-1]+1;
								pcY[i]=pcY[i-1];
							}
							pcX[3]=pcX[2];
							pcY[3]=pcY[2]-1;
							rot=1;
							break;
							
					}
					
					break;
				//Peça 'S'
				case 6:
					
					switch(rot){
						case 1:
							pcY[0]=pcY[0]+2;
							pcX[3]=pcX[3]-2;
							rot=2;
							break;
						case 2:
							pcY[0]=pcY[0]-2;
							pcX[3]=pcX[3]+2;
							rot=1;
							break;
					
					}
					
					break;
				
			}
			
			
			break;
	}
	Sleep(400);
	
}
void pontuacao(void){
	
	int cont=0, b, linha, ponto=0, limpa=h-2, m, n;
	
	for(i=h-2;i>1;i--){
		a=0;
		for(j=1;j<w-1;j++){
			if(parede[i][j]==1){
				a++;
			}else{
				a=0;
			}
		}
		if(a==w-2){
			linha=i;
			for(k=1;k<w-1;k++){
				parede[i][k]=2;
			}
			ponto=1;
		}
	}
	if(ponto==1){
		for(i=h-2;i>1;i--){
			for(j=1;j<w-1;j++){
				if(parede[i][j]==2){
					parede[i][j]=0;
					mat[i][j]='\0';
				}
			}
		}
		for(i=h-2;i>1;i--){
			a=0;
			for(j=1;j<w-1;j++){
				if(parede[i][j]==0){
					a++;
				}else{
					a=0;
				}
			}
			if(a==w-2){
				for(m=i;m>1;m--){
					for(n=1;n<w-1;n++){
						parede[m][n]=parede[m-1][n];
						mat[m][n]=mat[m-1][n];
					}
				}
				i++;
				limpa--;
				if(limpa==1){
					i=0;
				}
			}
		}
	}
	tela(a);
}
