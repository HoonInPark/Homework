#include <stdio.h>
#include <Windows.h	>
#include <conio.h>
#define LEFT 75
#define RIGHT 77
#define UP 72
#define DOWN 80
#define ARROW 224
void GotoXY(int x, int y) {
	COORD Pos;
	Pos.X = x;
	Pos.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
}
void CursorView(char show)
{
	CONSOLE_CURSOR_INFO ConsoleCursor;
	ConsoleCursor.bVisible = show;
	ConsoleCursor.dwSize = 1;
	SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &ConsoleCursor);
}
int x = 30;
int y = 7;
int main(void) {

	CursorView(0);
	GotoXY(x, y);
	printf("��");
	while (1) {
		if (_kbhit()) {
			int nkey = _getch();
			if (nkey == ARROW) {
				nkey = _getch();
				switch (nkey) {
				case UP:
					system("cls");
					GotoXY(x, --y);
					printf("��");
					break;
				case LEFT:
					system("cls");
					GotoXY(x = x - 2, y);
					printf("��");
					break;
				case RIGHT:
					system("cls");
					GotoXY(x = x + 2, y);
					printf("��");
					break;
				case DOWN:
					system("cls");
					GotoXY(x, ++y);
					printf("��");
					break;

				}
			}
		}
	}

	return 0;
}
