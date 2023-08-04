#include <stdio.h>

void cls()
{
	system("cls");
}

int SelectNum()
{
	int num;
		printf("원하시는 정수를 입력하세요 : ");
		scanf_s("%d", &num);
		return num;
}

int vsBig(int first, int second)
{
	if (first > second)
		return first;

	else
		return second;
}

int vsSml(int first, int second)
{
	if (first < second)
		return first;

	else
		return second;
}


void main()
{
	cls();
	int first = SelectNum();
	int second = SelectNum();

	int big = vsBig(first, second);
	int sml = vsSml(first, second);

	printf("두 수중 큰 수는 %d이고 작은수는 %d 입니다.", big, sml);
}