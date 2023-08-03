#include <stdio.h>

int gugudan(int num, int i)
{
	if (i == 0)
	{
		return 1;
	}
	printf("[%d * %d = %d]\n", num, i, num * i);
	i--;

	return gugudan(num, i);
}

int main() 
{
	int num = 0, i = 9;
	printf("[구구단을 입력하세요.(1 ~ 9단)]\n -> ");
	scanf_s("%d", &num);

	gugudan(num, i);

	return 0;
}
