#include "stdio.h"

/* 두개의 실수를 입력받고 덧셈 뺄셈 곱셈 나눗셈을
+ - / * 기호를 입력받고 연산결과를 출력하라*/

void main() {
	char op;

	float num1;
	float num2;
	float result;


	printf("연산자를 입력하세요. >> : "); // 질문 연산자를 입력하는 scanf_s 를 제일 위로 올리니까 코드가 실행이됨. 이유모름
	scanf_s("%c", &op);
	printf("실수1를 입력하세요. >> : ");
	scanf_s("%f", &num1);
	printf("실수2를 입력하세요. >> : ");
	scanf_s("%f", &num2);

	switch (op)
	{
	case '+':
		result = num1 + num2;
		printf("두수의 합은 %.2f 입니다.", result);
		break;
	case '-':
		result = num1 - num2;
		printf("두수의 뺄셈은 %.2f 입니다.", result);
		break;
	case '*':
		result = num1 * num2;
		printf("두수의 곱은 %.2f 입니다.", result);
		break;
	case '/':
		result = num1 / num2;
		printf("두수의 나눗셈은 %.2f 입니다.", result);
		break;
	default:
		printf("올바른 연산자를 입력해주세요.");
		break;
	}
}