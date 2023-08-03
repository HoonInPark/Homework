#include <stdio.h>

int Recursive(int n)
{
	if (n == 0 || n == 1)
	{
		return 1;
	}
	else
	{
		return n * Recursive(n - 1);
	}
}

int main() 
{
	int n;
	printf("[정수 n을 입력하세요.]\n -> ");
	scanf_s("%d", &n);

	int result = Recursive(n);
	printf("[%d! = %d]\n", n, result);

	return 0;
}
