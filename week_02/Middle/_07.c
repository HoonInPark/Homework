#include <stdio.h>
#include <stdlib.h>

int Absolutevalue(int num01, int num02)
{
	int value = abs(num01 - num02);
	printf("[절댓값 : %d]\n", value);

}

int main()
{
	int num01 = 0, num02 = 0;

	printf("[정수 2개를 입력하세요.]\n -> ");
	scanf_s("%d %d", &num01, &num02);

	Absolutevalue(num01, num02);

	return 0;
}
