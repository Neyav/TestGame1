#include <string>

#include "render.h"
#include "raylib.h"

// Private: These functions are my no no square. Don't touch me there.

void renderEngine::initalizeWindow(void)
{
	InitWindow(screenWidth, screenHeight, "Avoid the shit eaters");

	SetTargetFPS(60);
}

void renderEngine::drawFloorPlane(int xDraw, int yDraw)
{
	auto BackgroundImage = textures.find(0);

	// xDraw and yDraw are the center of the screen in game cordinates.
	// Convert them to screen cordinates.

	

}

// public functions
void renderEngine::loadTexture(std::string Texture, int TextureID)
{
	// Load a texture from Texture into raylib and keep it as being referable by its unique Texture ID
	Image LoadedImage;
	Texture2D LoadedTexture;

	LoadedImage = LoadImage(Texture.c_str());
	LoadedTexture = LoadTextureFromImage(LoadedImage);

	UnloadImage(LoadedImage);

	textures.insert({ TextureID, LoadedTexture });
}

void renderEngine::drawFrame(int xDraw, int yDraw)
{
	BeginDrawing();

	ClearBackground(BLACK);

	// Draw the background image.
	this->drawFloorPlane(xDraw, yDraw);
	

	EndDrawing();
}

renderEngine::renderEngine(int screenWidth, int screenHeight)
{
	this->screenWidth = screenWidth;
	this->screenHeight = screenHeight;

	this->initalizeWindow();
}

renderEngine::~renderEngine()
{
	
}