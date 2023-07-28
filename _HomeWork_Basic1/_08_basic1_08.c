#include "stdio.h"

// 두개의 정수를 입력받아서 그 중 큰 수를 출력하는 프로그램을 구현하라. 조건 연산자(삼항연산자를 사용하라) 

void main() {
	int num1, num2;
	int result;

	printf("정수1를 입력하세요 >> :");
	scanf_s("%d", &num1);
	printf("정수2를 입력하세요 >> :");
	scanf_s("%d", &num2);

	if (num1 == num2)
	{
		printf("수를 다시 입력하세요.");
	}
	else
	{
		result = (num1 > num2) ? num1 : num2; // 삼항 연산자 이용
		printf("둘중에 더 큰 수는 %d 입니다.", result);
	}
}