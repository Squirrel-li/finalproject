#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include "../include/Cproject.h"

void gotoxy(int x, int y) {
	COORD coord;
	coord.X = x;
	coord.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}