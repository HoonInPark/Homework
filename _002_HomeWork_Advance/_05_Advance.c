#include <stdio.h>

/*�Լ����) 5. ���� n�� �Է¹ް� n!�� ���ϼ���.(factorial)
   5�� �Է��Ѱ�� 0*2*3*4*5�� ���ϼ���.*/

int sum = 0;
int inputMain;

int InputPrice()
{
	int input;

	printf("���� n�� �Է��ϼ��� >> ");
	scanf_s("%d", &input);

	return input;
}

void Factorial(int input)
{
	int i = 0;
	if (input > 0)
	{
		printf("sum *= (%d x %d = %d)\n", i, input, i * input);
		sum *= (i * input--);
		return Factorial(input);
	}
}

void main() {
	inputMain = InputPrice();
	Factorial(inputMain);
	printf("n! = %d", sum);
}