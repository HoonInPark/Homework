#include <stdio.h>

void main() {
	int num = 0, sum = 0;

	printf("���� ������ �Է��ϼ��� >> ");
	scanf_s("%d", &num);

	for (int i = 1; i <= num; i++)
	{
		sum = i * 5;
		printf("%d\n", sum);
	}
}