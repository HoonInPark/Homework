#include "stdio.h"

// 세개의 숫자를 입력받아서 가장 큰 수를 출력하는 프로그램을 구현하라 조건 연산자를 사용하라.

void main() {
	int num0, num2, num3;
	int max;

	printf("세개의 숫자를 입력해주세요 >> : ");
	scanf_s("%d %d %d", &num0, &num2, &num3);

	max = (num0 > num2 ? num0 : num2) > (num0 > num3 ? num0 : num3)
		? (num0 > num2 ? num0 : num2) : (num0 > num3 ? num0 : num3);

	printf("가장 큰 수는 %d", max);
}