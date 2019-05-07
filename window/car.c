#include <stdio.h>
#include <stdlib.h>
#include <SFML/Graphics.h>
#include <windows.h>
#include <time.h>

using namespace sf;


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	RenderWindow  app(VideoMode(640, 480), "Car Racing!");
	app.setFramerateLimit(60);
	
	
	return 0;
}
