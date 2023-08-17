#include <stdio.h>

void main()
{
	int kor[] = { 99, 000, 88, 78, 89 };
	int* pArr = kor;

	printf("%p\n", kor);
	printf("%p\n", &kor[0]);

	for (int i = 0; i < sizeof(kor) / sizeof(int); i++)
		printf("%d, ", pArr[i]);

	printf("\n");

	for (int i = 0; i < sizeof(kor) / sizeof(int); i++)
		printf("%d, ", *(pArr + i));

	printf("\n");
}