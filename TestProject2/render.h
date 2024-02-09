#pragma once
#include "raylib.h"
#include <string>
#include <map>

class renderEngine
{
private:
	int screenWidth;
	int screenHeight;

	std::map<int, Texture2D> textures;

	void initalizeWindow(void);

	void drawFloorPlane(int xDraw, int yDraw);
public:
	void loadTexture(std::string Texture, int TextureID);

	void drawFrame(int xDraw, int yDraw);

	renderEngine(int screenWidth, int screenHeight);
	~renderEngine();
};