#include <stdio.h>
#include <stdlib.h>
#include "..\include\finalproject.h"

int score = 0;

int main()
{
	drawWelcome();

	input(&dinoY, &jumping, &jumpCounter, &gameover);
	drawScore(score);
	
	system("pause");
	return 0;
}