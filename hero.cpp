#include "hero.h"
#include <iostream>

Hero::Hero()
{
	std::cout << "A hero is created\n";
}

Hero::~Hero()
{
	std::cout << "A hero is deleted\n";
}

void Hero::locate(int _x, int _y)
{
	posX = _x;
	posY = _y;
}

void Hero::draw()
{
	std::cout << "Draw a hero at " << posX << ", " << posY << std::endl;
}

void Hero::move_forward()
{
	--posY;
}

void Hero::move_backward()
{
	++posY;
}

void Hero::move_right()
{
	++posX;
}

void Hero::move_left()
{
	--posX;
}
