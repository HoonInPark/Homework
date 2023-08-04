#include "stdio.h"

void main()
{
	float a, b;
	char c;

	printf("연산자를 입력하세요 : ");
	scanf_s("%c", &c); 
	// 왜 이 두줄을 위에 써야만 작동이 될까요? 숫자를 먼저 입력받으면 작동이 되지 않습니다. 살려줘!!

	printf("첫번째 수를 입력하세요 : ");
	scanf_s("%f", &a);
	printf("두번째 수를 입력하세요 : ");
	scanf_s("%f", &b);

	switch (c)
	{
	case '+':
		printf("%f\n", a+b);
		break;
	case '-':
		printf("%f\n", a-b);
		break;
	case '*':
		printf("%f\n", a*b);
		break;
	case '/':
		printf("%f\n", a/b);
		break;
	default :
		printf("제대로된 연산자가 아닙니다.\n");
		break;
	}
}