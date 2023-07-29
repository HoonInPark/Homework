#include <stdio.h>

void main() {
	int a, b, c;

	printf("정수 3개를 입력하시오>> ");
	scanf_s("%d %d %d", &a, &b, &c);

	if (a > b && a > c)
		printf("%d", a);
	else if (b > a && b > c)
		printf("%d", b);
	else 
		printf("%d", c);
}