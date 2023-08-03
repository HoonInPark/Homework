#include <stdio.h>
#include <stdlib.h>

int Absolutevalue(int num01, int num02)
{
	int value = abs(num01 - num02);

	return value;
}

int main()
{
	int num01 = 0, num02 = 0, value = 0;

	printf("[정수 2개를 입력하세요.]\n -> ");
	scanf_s("%d %d", &num01, &num02);

	value = Absolutevalue(num01, num02);
	printf("[절댓값 : %d]\n", value);
	
	return 0;
}
