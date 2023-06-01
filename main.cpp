#include <iostream>
#include "hero.h"
#include <Windows.h>
#include <conio.h>

using namespace std;

int main()
{
	int SIZE;
	Hero hero;
	
	cout << endl;
	
	cout << "Press: ";
	cout << "\nw = move_forward";
	cout << "\na = move_backward";
	cout << "\ns = move_right";
	cout << "\nd = move_left";
	cout << "\nz = close\n";
	
	cout << endl;
	
	hero.locate(100, 100);
	hero.draw();
	
	char key;
	for(int i = 0; i < SIZE; i++)
	{
		key = _getch();
		
		if(key == 'w')
		{
			hero.move_forward();
		}
		else if(key == 'a')
		{
			hero.move_backward();
		}
		else if(key == 's')
		{
			hero.move_right();
		}
		else if(key == 'd')
		{
			hero.move_left();
		}
		else if(key == 'z')
		{
			break;
		}
		else
		{
			cout << "Invalid key, press w, a, s, d or z to close from looping!" << endl;
			continue;
		}
		
		hero.draw();
		Sleep(250);
	}
	return 0;
}
