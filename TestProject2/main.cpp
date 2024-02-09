#include "raylib.h"
#include "render.h"

int main()
{
	const int screenWidth = 800;
	const int screenHeight = 600;
	bool gameExit = false;
	
	renderEngine gameRender(800,600);

	gameRender.loadTexture("background.png", 0);

	while (WindowShouldClose() == false)
	{
		gameRender.drawFrame(0, 0);
	}

	return 0;
}