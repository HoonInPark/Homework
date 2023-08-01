#include <stdio.h>

void main() {
	int a, b, c;
	printf("정수 3개를 입력하시오>> ");
	scanf_s("%d %d %d", &a, &b, &c);
	if (c < a + b && b < a + c && a < b + c)
		printf("삼각형을 만들수 있습니다.");
	else
		printf("삼각형을 만들수 없습니다.");
}