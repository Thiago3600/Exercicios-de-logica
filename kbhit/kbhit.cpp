// C++ program to demonstrate use of kbhit() 
#include <iostream> 
#include <conio.h> 

#define VK_LEFT 0x25
#define VK_UP 0x26
#define VK_RIGHT 0x27
#define VK_DOWN 0x28

using namespace std;
  
int main() 
{ 
    int c;
    while(1){
		if(kbhit){
			c=getch();
			printf("%i\n", c);
			switch(c){
				case 72:
					printf("\nSeta pra cima\n");
					break;
				case 77:
					printf("\nSeta pra direita\n");
					break;
				case 80:
					printf("\nSeta pra baixo\n");
					break;
				case 75:
					printf("\nSeta pra esquerda\n");
					break;
			}
		}
    }
  
    return 0; 
}
