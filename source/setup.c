#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include "..\include\finalproject.h"

void setup(int *dinoX, int *dinoY, int *obstacleX, int *obstacleY, int *floorY, int *score, int *jumpCounter, int *jumping, int *gameover) {
	*dinoX = 10;
	*dinoY = 10;
	*obstacleX = 50;
	*obstacleY = 10;
	*floorY = 12;
	*score = 0;
	*jumpCounter = 0;
	*jumping = 0;
	*gameover = 0;
}