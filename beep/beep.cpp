// C++ program to demonstrate use of kbhit() 
#include <iostream> 
#include <conio.h> 
#include <windows.h> 


#define VK_LEFT 0x25
#define VK_UP 0x26
#define VK_RIGHT 0x27
#define VK_DOWN 0x28

using namespace std;
  
int main() 
{ 
    int c, freq=500, dur=500;
    while(1){
		if(kbhit){
			c=getch();
			printf("%i\n", c);
			switch(c){
				case 72:
					printf("\nSeta pra cima\n");
					freq=freq+50;
					break;
				case 77:
					printf("\nSeta pra direita\n");
					dur=dur+50;
					break;
				case 80:
					printf("\nSeta pra baixo\n");
					freq=freq-50;
					break;
				case 75:
					printf("\nSeta pra esquerda\n");
					dur=dur-50;;
					break;
			}
		}
		while(kbhit()==0){
			system("cls");
			Beep(freq, dur);
			cout<<"Frequencia = "<<freq<<endl;
			cout<<"Duracao = "<<dur<<endl;
		}
    }
  
    return 0; 

}
