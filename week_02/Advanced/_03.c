#include <stdio.h>

int test(int num, int i)
{
	if (i > num)
	{
		return 1;
	}
	printf("%d ", i * 5);
	i++;

	return test(num, i);
}

int main() 
{
	int num = 0, i = 1;

	printf("[양의 정수를 입력하세요.]\n -> ");
	scanf_s("%d", &num);

	if (num > 0)
	{
		test(num, i);
	}

	return 0;
}
