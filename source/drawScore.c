#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include "../include/Cproject.h"

void drawScore(int score) {
	gotoxy(0, 0);
	printf("Score: %d", score);
}