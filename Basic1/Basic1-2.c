#include <stdio.h>

void main() {
	int a, b, c;

	printf("���� 3���� �Է��Ͻÿ�>> ");
	scanf_s("%d %d %d", &a, &b, &c);

	if (a > b && a > c)
		printf("%d", a);
	else if (b > a && b > c)
		printf("%d", b);
	else 
		printf("%d", c);
}