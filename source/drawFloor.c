#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include "../include/finalproject.h"

void drawFloor(int floorY) {
	for (int i = 0; i < 80; i++) {
		gotoxy(i, floorY);
		printf("=");
	}
}