#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include "../include/finalproject.h"

void logic(int *dinoX, int *dinoY, int *obstacleX, int *obstacleY, int *jumpCounter, int *jumping, int *score, int *floorY, int *gameover) {
	if (*gameover) {
		drawGameover();
		return;
	}

	if (*jumpCounter > 0) {
		*dinoY -= 2;
		(*jumpCounter)--;
	}
	else if (*dinoY < 10) {
		(*dinoY)++;
	}

	if (*jumpCounter == 0 && *dinoY == 10) {
		*jumping = 0;
	}

	if (*obstacleX > 0)
		(*obstacleX)--;
	else {
		*obstacleX = 50 + rand() % 10;
		*obstacleY = 10;
		(*score)++;
	}

	if (*dinoX == *obstacleX && *dinoY == *obstacleY)
		*gameover = 1;
	if (*dinoY >= *floorY)
		*dinoY = *floorY;
}