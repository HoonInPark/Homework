#include <stdio.h>

void main() {
	int a, b, c;
	printf("���� 3���� �Է��Ͻÿ�>> ");
	scanf_s("%d %d %d", &a, &b, &c);

	(c < a + b && b < a + c && a < b + c) ? (printf("�����մϴ�.")) : (printf("�Ұ����մϴ�."));
}

	