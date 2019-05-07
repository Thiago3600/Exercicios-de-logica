#include <SDL/SDL.h>
#include <iostream>

int main( int argc, char* args[] )
{
    //Iniciar SDL
    SDL_Init(SDL_INIT_EVERYTHING);

	std::cout<<"Hello world!";
	
    //Fechar SDL
    SDL_Quit();
    return 0;
}