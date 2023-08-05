#include <stdio.h>

int Sum(int* objArr, int len)
{
	int total = 0;
	for (int i = 0; i < len; i++)
	{
		total += objArr[i];
	}
	return total;
}

void main()
{
	int kor[] = { 99, 89, 77, 80, 90 };
	int math[] = { 89, 88, 80, 90, 100, 78, 77 };
	int total = 0;

	total = Sum(kor, sizeof(kor) / sizeof(int));
	printf("kor의 총합은 %d입니다. \n", total);
	total = Sum(math, sizeof(math) / sizeof(int));
	printf("math의 총합은 %d입니다. \n", total);
}