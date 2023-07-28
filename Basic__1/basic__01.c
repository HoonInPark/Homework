/*정수 3개를 입력받고 이 3개의 수로 삼각형을 만들 수 있는지를 판별하세요
삼각형이 가능하려면 두 변의 합이 다른 한 변의 합보다 반드시 커야 합니다.
(조건문 사용하세요)
*/

#include "stdio.h"

void main() {
	int a, b, c;
	printf("세 수를 입력하시오\n");
	scanf_s("%d %d %d", &a, &b, &c);
	if (a + b > c) {
		printf("삼각형이 가능합니다");
	}
	else {
		printf("불가능합니다");
	}
}