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

int ABSvalue(int first, int second)
{
	int ABS = first - second;
	if (first - second > 0)
		return ABS;

	else
		return -ABS;
}

void main()
{
	cls();
	int first = SelectNum();
	int second = SelectNum();
	int ABS = ABSvalue(first, second);

	printf("두 수 차이의 절대값은 %d입니다.", ABS);
}