#include <stdio.h>

int main()
{
	int num = 0;

	printf("[출력할 구구단을 입력하세요.]\n -> ");
	scanf_s("%d", &num);
	
	for (int i = 9; i > 0; i--)
	{
		printf("[%d * %d = %d]\n", num, i, num * i);
	}

	return 0;
}
