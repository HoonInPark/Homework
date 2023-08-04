#include <stdio.h>

void main() {
	int kor[10];

	for (int i = 0; i <= 9; i++)
	{
		printf("정수를 입력하세요 >> ");
		scanf_s("%d", &kor[i]);
	}
	for (int i = 0; i <= 9; i++)
	{
		if (kor[i] != 0 && kor[i] % 2 == 0)
			printf("%d\n", kor[i]);
		else if (kor[i] != 0 && kor[i] % 3 == 0)
			printf("%d\n", kor[i]);
	}
}