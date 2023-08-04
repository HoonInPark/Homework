#include <stdio.h>

void cls()
{
	system("cls");
}

int SelectNum()
{
	int num;
	printf("원하시는 수를 입력하세요 : ");
	scanf_s("%d", &num);
	return num;
}

int Baesu(int first, int second)
{
	int i, yaksu, MinBaesu;
	for (i = 1; i <= first && i <= second; i++)
	{
		if (first % i == 0 && second % i == 0)
			yaksu = i;
		MinBaesu = (first * second) / yaksu;
	}
	return MinBaesu;
}

void main()
{
	cls();
	int first = SelectNum();
	int second = SelectNum();

	int MinBaesu = Baesu(first, second);
	printf("입력하신 두 수의 최소공배수는 %d입니다.", MinBaesu);
	getch();
}