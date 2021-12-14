
#define OLC_PGE_APPLICATION
#include "olcPixelGameEngine.h"

class Example : public olc::PixelGameEngine
{
public:
	Example()
	{
		sAppName = "Example";
	}

public:
	bool OnUserCreate() override
	{
		// Called once at the start, so create things here
		return true;
	}

	bool OnUserUpdate(float fElapsedTime) override
	{
		// called once per frame
		for (int x = 0; x < ScreenWidth(); x++)
			for (int y = 0; y < ScreenHeight(); y++)
				Draw(x, y, olc::Pixel(rand() % 255, rand() % 255, rand() % 255));

		return true;
	}
};

int main()
{
	Example demo;
	if (demo.Construct(800, 600, 1, 1))
	{
		demo.Start();
	}

	// TODO:
	/*
	Create class(es) for all the objects that will move around the screen
	- Ship
	- Asteroids
	- Bullets
	- Explosions

	Let's keep it to the original game, so lets make all the moving objects out of polygons.
	Hint: DrawPolygonDecal()

	Each object will need:
	- Array/vector of points to define it's shape.
	- Position
	- Rotation
	- Velocity (magnitude and direction)

	Let's begin with the following functionality:
	1. Draw a ship on the screen.
	2. Make it move
	3. Make it move using arrow keys.
	4. Make it move at a costant speed (let's discuss)
	5. Make it wrap around screen.
	6. Left/right rotate ship
	7. Up/Down to accelerate/decelerate ship


	Some other things to keep in mind
	- Game state: level, score, lives, ...
	- Ship and asteroids need to wrap around screen
	- Colision detection (this will be fun)
	-
	-
	*/

	return 0;
}
