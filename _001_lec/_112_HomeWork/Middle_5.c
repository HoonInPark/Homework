#include <stdio.h>

void cls()
{
	system("cls");
}

int selNum()
{
	int want, j=1;
	printf("원하는 정수를 입력하세요 : ");
	scanf_s("%d", &want);
	
	for (want; want > 0; want--)
	{
		j *= want;
	}
	return j;
}

void main()
{
	cls();
	int want = selNum();
	
	printf("입력한수의 팩토리알 값은 %d입니다.", want);
}