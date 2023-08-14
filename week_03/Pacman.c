#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <conio.h>
#include <time.h>
#include <corecrt_math.h>


#define MAP_SIZE 35

int map[MAP_SIZE][MAP_SIZE] =
{
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	{0,2,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,0},
	{0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,1,0,1,1,1,1,1,1,1,1,1,1,0},
	{0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,0,1,0,1,1,1,1,1,1,1,1,1,1,0},
	{0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,0,1,4,1,0,1,0,1,1,1,1,1,1,1,1,1,1,0},
	{0,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,0,1,1,1,1,1,1,1,1,1,1,0},
	{0,1,1,1,1,1,1,0,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,0},
	{0,1,1,1,1,1,1,0,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0},
	{0,1,1,1,1,1,1,0,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0},
	{0,1,1,1,0,0,0,0,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,0},
	{0,1,1,1,0,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,0},
	{0,1,1,1,0,1,1,1,1,1,1,1,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,0},
	{0,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,0},
	{0,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,0},
	{0,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,1,1,1,0},
	{0,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,0},
	{0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,0,1,1,1,4,1,1,0},
	{0,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,0,1,1,1,1,1,1,1,0,1,1,1,1,1,1,0},
	{0,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0},
	{0,0,0,1,1,1,1,1,1,0,0,0,0,0,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0},
	{0,1,0,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0},
	{0,1,0,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0},
	{0,1,0,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,0},
	{0,1,0,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,0},
	{0,1,0,1,1,0,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,0},
	{0,1,0,1,1,0,1,1,1,0,1,1,4,1,0,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,0,1,1,0},
	{0,1,0,1,1,0,1,1,1,0,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,0,1,1,0},
	{0,1,0,0,0,0,1,1,1,0,1,1,1,1,0,1,1,1,0,0,0,0,0,0,0,0,1,1,1,1,1,0,1,1,0},
	{0,1,1,1,1,1,1,1,1,0,1,1,1,1,0,1,1,1,0,1,1,1,1,1,1,0,1,1,1,0,0,0,1,1,0},
	{0,1,1,1,1,1,0,0,0,0,1,1,1,1,0,1,1,1,0,1,1,1,1,1,1,0,1,1,1,0,1,1,1,1,0},
	{0,1,1,1,1,1,0,1,1,1,1,1,1,1,0,1,1,1,0,1,1,1,1,1,1,0,1,1,1,0,1,1,1,1,0},
	{0,1,1,1,1,1,0,1,1,1,1,1,1,1,0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,4,1,1,1,0},
	{0,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,0},
	{0,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,0},
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}
};
int pacman[] = { 1, 1 };

//int monster_01[] = { x, y, 심볼};
int monster_01[] = { 4, 19, 1 };
int monster_02[] = { 16, 31, 1 };
int monster_03[] = { 25, 12, 1 };
int monster_04[] = { 31, 30, 1 };

int score = 0;
char move;
bool _bThreadStart = true;
bool _bWhile = true;

void init();
void gotoxy(int x, int y);
void Map();
void userInput();
int movement();
int gameOver();
int random_Axis();
int random_Add();
void move_monster(int* monster);

DWORD WINAPI ThreadFunc1(void* data)
{	
	while (_bThreadStart) {
		Sleep(500);
		
		move_monster(monster_01);
		move_monster(monster_02);
		move_monster(monster_03);
		move_monster(monster_04);

		movement();
	}
	return 0;
}

void main()
{
	HANDLE thread1 = CreateThread(NULL, 0, ThreadFunc1, NULL, 0, NULL);
	init();
	Map();
	while (_bWhile)
	{
		userInput();
		movement();		
	}
	gameOver();
	gotoxy(20, 20);
}

void init()
{
	system("mode con: cols=40 lines=40 | title PACMAN GAME");

	HANDLE consoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);
	CONSOLE_CURSOR_INFO ConsoleCursor;
	ConsoleCursor.bVisible = 0;
	ConsoleCursor.dwSize = 1;
	SetConsoleCursorInfo(consoleHandle, &ConsoleCursor);
}

void gotoxy(int x, int y)
{
	COORD pos = { x, y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}

void Map()
{
	for (int i = 0; i < MAP_SIZE; i++)
	{
		for (int j = 0; j < MAP_SIZE; j++)
		{
			switch (map[i][j])
			{
			case 0:
				gotoxy(i, j);
				printf("#");
				break;
			case 1:
				gotoxy(i, j);
				printf("*");
				break;
			case 2:
				gotoxy(i, j);
				printf("O");
				break;
			case 3:
				gotoxy(i, j);
				printf(" ");
				break;
			case 4:
				gotoxy(i, j);
				printf("M");
				break;
			default:
				break;
			}
		}
	}
}

void userInput()
{
	move = _getch();
}

int movement()
{
	int x = pacman[0];
	int y = pacman[1];
	int x_new = 0;
	int y_new = 0;
	switch (move)
	{
	case 'w':
		x_new = x;
		y_new = y - 1;
		if (map[x_new][y_new] != 0)
		{
			if (map[x_new][y_new] == 4)
			{
				_bWhile = false;
				return 0;
			}
			else
			{
				gotoxy(x, y);
				printf(" ");	
				map[x][y] = 3;
				score++;

				gotoxy(x_new, y_new);
				printf("O");

				map[x_new][y_new] = 2;
				pacman[0] = x_new;
				pacman[1] = y_new;
			}			
		}
		else
		{
			userInput();
		}
		break;
	case 's':
		x_new = x;
		y_new = y + 1;
		if (map[x_new][y_new] != 0)
		{
			if (map[x_new][y_new] == 4)
			{
				_bWhile = false;
				return 0;
			}
			else
			{
				gotoxy(x, y);
				printf(" ");
				map[x][y] = 3;
				score++;

				gotoxy(x_new, y_new);
				printf("O");

				map[x_new][y_new] = 2;
				pacman[0] = x_new;
				pacman[1] = y_new;
			}
		}
		else
		{
			userInput();
		}
		break;
	case 'a':
		x_new = x - 1;
		y_new = y;
		if (map[x_new][y_new] != 0)
		{
			if (map[x_new][y_new] == 4)
			{
				_bWhile = false;
				return 0;
			}
			else
			{
				gotoxy(x, y);
				printf(" ");
				map[x][y] = 3;
				score++;

				gotoxy(x_new, y_new);
				printf("O");

				map[x_new][y_new] = 2;
				pacman[0] = x_new;
				pacman[1] = y_new;
			}
		}
		else
		{
			userInput();
		}
		break;
	case 'd':
		x_new = x + 1;
		y_new = y;
		if (map[x_new][y_new] != 0)
		{
			if (map[x_new][y_new] == 4)
			{
				_bWhile = false;
				return 0;
			}
			else
			{
				gotoxy(x, y);
				printf(" ");
				map[x][y] = 3;
				score++;

				gotoxy(x_new, y_new);
				printf("O");

				map[x_new][y_new] = 2;
				pacman[0] = x_new;
				pacman[1] = y_new;
			}
		}
		else
		{
			userInput();
		}
		break;
	default:
		break;
	}
}

int gameOver()
{
	_bThreadStart = false;

	for (int i = 0; i < MAP_SIZE; i++)
	{
		for (int j = 0; j < MAP_SIZE; j++)
		{
			gotoxy(i, j);
			printf(" ");
		}
	}	

	gotoxy(10, 15);
	printf("-GAME OVER-\n%d", score);

	return 0;
}

// 1:세로 / 0 : 가로, +/-
int random_Axis()
{		
	int random_nAxis;

	random_nAxis = rand() % 2;
	return random_nAxis;
}

int random_Add()
{
	int random_nAdd, nAdd;
	int nValue = 0;
	
	random_nAdd = rand() % 2;

	if (random_nAdd == 0)
	{
		nAdd = -1;
	}
	else if (random_nAdd == 1)
	{
		nAdd = 1;
	}
	return nAdd;
}

void move_monster(int* monster)
{
	int x_old = monster[0];
	int y_old = monster[1];
	int x_new = 0;
	int y_new = 0;
	int nAxis = random_Axis();
	int nAdd = random_Add();
	int nSymbol = monster[2];


	if (nAxis == 1) // y축
	{
		y_new = y_old + nAdd;
		x_new = x_old;
	}
	else if (nAxis == 0)// x축
	{
		x_new = x_old + nAdd;
		y_new = y_old;
	}

	if (map[x_new][y_new] != 0)
	{
		if (map[x_new][y_new] != 2)
		{
			if (nSymbol == 1)
			{
				gotoxy(x_old, y_old);
				printf("*");
				map[x_old][y_old] = 1;
			}
			else if (nSymbol == 3)
			{
				gotoxy(x_old, y_old);
				printf(" ");
				map[x_old][y_old] = 3;
			}

			monster[2] = map[x_new][y_new];
			gotoxy(x_new, y_new);
			printf("M");

			monster[0] = x_new;
			monster[1] = y_new;
			map[x_new][y_new] = 4;
		}
		else
		{
			_bWhile = false;
		}
	}
	else
	{
		nAxis = random_Axis();
		nAdd = random_Add();
	}
}
