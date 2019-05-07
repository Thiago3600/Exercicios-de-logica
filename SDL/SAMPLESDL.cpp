#include "SDL.h"   // todos os programas com SDL usarão isto
#include <stdio.h>
#include <stdlib.h>

int main() {

    puts("Iniciando SDL...");

    // Inicia defaults, vídeo e áudio, e checa se houve erro
    if ( (SDL_Init(SDL_INIT_VIDEO|SDL_INIT_AUDIO)==-1) ) {
        printf( "Erro iniciando SDL: %s.\n", SDL_GetError() );
        return -1;
    }

    puts("SDL foi iniciada com sucesso.");
    puts("Hello, SDL world!");

    puts("Terminando SDL...");

    // Desliga os sistemas da SDL
    SDL_Quit();

    puts("Encerrando o programa...");

    return 0;
}
