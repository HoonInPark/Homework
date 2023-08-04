
#include <stdio.h>

cls()
{
	system("cls");
}

int wantNum()
{
	int i;
	printf("원하는 수를 입력하세요 : ");
	scanf_s("%d", &i);
	return i;
}

int mulCalc(int num)
{
	int i=1;
	for (num; 1 <= num; num--)
	{
		i *= num;
	}
	return i;
}


void main()
{
	cls();
	int num = wantNum();
	int Fac = mulCalc(num);
	printf("%d ! = %d", num, Fac);
}