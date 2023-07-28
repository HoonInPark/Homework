#include "stdio.h"

// 정수를 입력받고 절대값을 구하라( -5, 5 => 5) 

int main() {

	int num;

	printf("정수를 입력하세요 >> : ");
	if (scanf_s("%d", &num) < 0)
	{
		num *= -1;
		printf("정수 num의 절대값은 %d 입니다.", num);
	}
	else if (scanf_s("%d", &num) > 0)
	{
		printf("정수 num의 절대값은 %d 입니다.", num);
	}
	else
	{
		printf("올바른 정수 값을 입력해주세요");
	}
	// 질문 0의 절대값도 표현하고싶은데 어떻게 표현하나..
}