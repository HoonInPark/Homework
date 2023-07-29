#include <stdio.h>

void main() {
	int a, b, c;
	printf("정수 3개를 입력하시오>> ");
	scanf_s("%d %d %d", &a, &b, &c);

	(c < a + b && b < a + c && a < b + c) ? (printf("가능합니다.")) : (printf("불가능합니다."));
}

	