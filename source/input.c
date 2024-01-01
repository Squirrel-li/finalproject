#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include "../include/Cproject.h"

void input(int *dinoY, int *jumping, int *jumpCounter, int *gameover) {
	if (_kbhit()) {
		switch (_getch()) {
		case ' ':
			if (*dinoY == 10 && !(*jumping) && !(*gameover)) {
				*jumping = 1;
				*jumpCounter = 3;
			}
			break;
		case 'x':
			*gameover = 1;
			break;
		}
	}
}