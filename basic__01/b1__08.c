/*두개의 정수를 입력받아서 그 중 큰 수를 출력하는 프로그램을 구현하라.
조건 연산자(삼항연산자를 사용하라) */
#include "stdio.h"

void main() {
	int num1, num2,bigger;

	printf("insert 1st num>>>");
	scanf_s("%d", &num1);
	printf("insert 2nd num>>>");
	scanf_s("%d", &num2);

	bigger = num1 > num2 ? num1 : num2;
	//num1이 num2보다 크면 bigger에 num1을 할당 그렇지 않다면 num2 할당

	printf("%d", bigger);
}