#include <stdio.h>

void main() {
	int a, b;

	printf("���� 2���� �Է��Ͻÿ�>> ");
	scanf_s("%d %d", &a, &b);

	if (a > b)
		printf("%d", a);
	else 
		printf("%d", b);
}