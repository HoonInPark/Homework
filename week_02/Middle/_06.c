#include <stdio.h>

int Max(int num01, int num02)
{
	return (num01 > num02) ? num01 : num02;
}

int Min(int num01, int num02)
{
	return (num01 < num02) ? num01 : num02;
}

int main()
{
	int num01 = 0, num02 = 0, max = 0, min = 0;

	printf("[2개의 정수를 입력하세요.]\n -> ");
	scanf_s("%d %d", &num01, &num02);

	max = Max(num01, num02);
	min = Min(num01, num02);

	printf("[큰 값 : %d / 작은 값 : %d]\n", max, min);

	return 0;
}
