#include <stdio.h>

void main() {
	int total = 0;
	int kor[10];

	for (int i = 0; i <= 9; i++)
	{
		printf("���ڸ� �Է��ϼ��� >> ");
		scanf_s("%d", &kor[i]);
	}
	for (int i = 0; i <= 9; i++)
	{
		total += kor[i];
	}
	printf("���� %d", total);
}