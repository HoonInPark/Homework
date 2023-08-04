#include <stdio.h>

void main() {
	int total = 0;
	int kor[10];

	for (int i = 0; i <= 9; i++)
	{
		printf("숫자를 입력하세요 >> ");
		scanf_s("%d", &kor[i]);
	}
	for (int i = 0; i <= 9; i++)
	{
		total += kor[i];
	}
	printf("합은 %d", total);
}