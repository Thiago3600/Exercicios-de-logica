#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
    for(int i = 0; i<1000; ++i)
    {	
    	system("cls");
        if(GetKeyState(VK_UP)<0)
        {
            cout<<"UP pressed"<<GetKeyState(VK_UP)<<endl;
        }
        else{
            cout<<"UP not pressed"<<GetKeyState(VK_UP)<<endl;
		}
		if(GetKeyState(VK_RIGHT)<0)
        {
            cout<<"RIGHT pressed"<<GetKeyState(VK_RIGHT)<<endl;
        }
        else{
            cout<<"RIGHT not pressed"<<GetKeyState(VK_RIGHT)<<endl;
		}
		if(GetKeyState(VK_LEFT)<0)
        {
            cout<<"LEFT pressed"<<GetKeyState(VK_LEFT)<<endl;
        }
        else{
            cout<<"LEFT not pressed"<<GetKeyState(VK_LEFT)<<endl;
		}
		if(GetKeyState(VK_DOWN)<0)
        {
            cout<<"DOWN pressed"<<GetKeyState(VK_DOWN)<<endl;
        }
        else{
            cout<<"DOWN not pressed"<<GetKeyState(VK_DOWN)<<endl;
		}
        Sleep(150);
    }

    return 0;
}
