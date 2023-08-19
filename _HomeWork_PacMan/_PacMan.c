#include <stdio.h>
#include <time.h>
#include <windows.h>
#include <stdlib.h>
#include <conio.h>

#define Up 72
#define Down 80
#define Left 75
#define Right 77



char map[15][40] ={
	{"1111111111111111111111111111111111111111"},
	{"1P00000000000000000000000000000000000001"},
	{"1011111111111101111101111111111101111101"},
	{"1011111111111101111101111111111101111101"},
	{"1011111111111101111101111111111101111101"},
	{"1000000000000000111101111111111101111101"},
	{"1110111101111110000000000000000000000001"},
	{"1110111101111111111111111011111111111101"},
	{"1110111100000001111111111011111111111101"},
	{"1000000001111100000000111011111111111101"},
	{"1011110111111111011111111011111111111101"},
	{"1011110111111111011111111011111111111101"},
	{"1011110111111111011111000011111111111101"},
	{"1000000000000000000000011000000000000001"},
	{"1111111111111111111111111111111111111111"},
	};
void gotoxy(int x, int y);

void gotoxy(int x, int y)
{
	COORD pos = { x,y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}

void CreateMap(int* x, int* y)
{
	system("cls");
	int h, w;

	for (int h = 0; h < 15; h++)
	{
		for (int w = 0; w < 40; w++)
		{
			char temp = map[h][w];
			if (temp == '0')
				printf("*");
			else if (temp == '1')
				printf("#");
			else if (temp == 'P') {
				*x = w;
				*y = h;
				printf("C");
			}
		}
		printf("\n");
	}
}

int ScanAster()
{
	int h, w;
	int aster = 1;
	for (int h = 0; h < 15; h++)
	{
		for (int w = 0; w < 40; w++)
		{
			if (map[h][w] == '*')
			{
				aster += 1;
			}
		}
	}

	return aster;
}

void Move(int* x, int* y, int moveX, int moveY)
{
	//현재 좌표를 받아옴 , 자신이 있던자리 처리, 이동할 좌표 입력, 이동 후 처리
	int afterX, afterY;
	afterX = *x + moveX;
	afterY = *y + moveY;

	gotoxy(*x, *y);
	printf(" ");

	gotoxy(afterX, afterY);
	printf("C");

	*x = afterX;
	*y = afterY;
}


void Playing()
{
	int playing = 1;
	int x, y;

	CreateMap(&x, &y);
	int key;
	while (playing)
	{
		if (_kbhit())
		{
			key = _getch();
			if (key == 224)
				key = _getch();
			switch (key)
			{
			case Up:
				if (map[y - 1][x] != '1')
				{
					Move(&x, &y, 0, -1);
				}
				break;
			case Down:
				if (map[y + 1][x] != '1')
				{
					Move(&x, &y, 0, 1);
				}
				break;
			case Left:
				if (map[y][x - 1] != '1')
				{
					Move(&x, &y, -1, 0);
				}
				break;
			case Right:
				if (map[y][x + 1] != '1')
				{
					Move(&x, &y, 1, 0);
				}
				break;
			default:
				break;
			}
		}
		// 맵을 검사해서 asterisk가 남아있지 않으면 isplaying에 0을 대입.
		if (ScanAster() == 0)
		{
			playing = 0;
		}
	}
}

void main() {
	Playing();
}