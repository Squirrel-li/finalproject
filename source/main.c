#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include "..\include\finalproject.h"

int main() {
	int dinoX, dinoY, obstacleX, obstacleY, floorY, score, jumpCounter, jumping, gameover;

	drawWelcome();
	setup(&dinoX, &dinoY, &obstacleX, &obstacleY, &floorY, &score, &jumpCounter, &jumping, &gameover);

	while (!gameover) {
		system("cls");
		drawDino(dinoX, dinoY);
		drawObstacle(obstacleX, obstacleY);
		drawFloor(floorY);
		drawScore(score);
		input(&dinoY, &jumping, &jumpCounter, &gameover);
		logic(&dinoX, &dinoY, &obstacleX, &obstacleY, &jumpCounter, &jumping, &score, &floorY, &gameover);
		Sleep(100);
	}

	system("cls");
	drawGameover();
	system("pause");
	return 0;
}
