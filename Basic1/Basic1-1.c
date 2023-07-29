#include <stdio.h>

void main() {
	int a, b;

	printf("정수 2개를 입력하시오>> ");
	scanf_s("%d %d", &a, &b);

	if (a > b)
		printf("%d", a);
	else 
		printf("%d", b);
}