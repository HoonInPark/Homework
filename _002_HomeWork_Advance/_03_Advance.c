#include <stdio.h>

/*�Լ����) ���� ���� �Է¹ް�, �� ����ŭ 5�� ����� ����ϼ���.
   ��) 7 -> 5 10 15 20 25 30 35*/

void PrintFiveMul(int input)
{
	for (int i = 1; i <= input; i++)
	{
		printf("%d\n", 5 * i);
	}
}

void main() {
	int input;

	printf("���� ������ �Է��ϼ��� >> ");
	scanf_s("%d", &input);

	PrintFiveMul(input);
}