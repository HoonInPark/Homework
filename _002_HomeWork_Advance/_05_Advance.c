#include <stdio.h>

/*함수사용) 5. 정수 n을 입력받고 n!을 구하세요.(factorial)
   5를 입력한경우 0*2*3*4*5를 구하세요.*/

int sum = 0;
int inputMain;

int InputPrice()
{
	int input;

	printf("정수 n을 입력하세요 >> ");
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