#include <stdio.h>

void main()
{
	int kor[] = { 99, 100, 88, 78, 89 };
	int* pArr = kor; // �迭�� �̸����� �迭�� ù��° �ּҰ��̴�.

	printf("%p\n", kor);
	printf("%p\n", kor[0]);

	for (int i = 0; i < sizeof(kor) / sizeof(int); i++)
	{
		printf("%d, ", pArr[i]);
	}

	printf("\n");

	for (int i = 0; i < sizeof(kor) / sizeof(int); i++)
	{
		printf("%d, ", (pArr + i));
	}
	printf("\n");
}