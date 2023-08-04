#include <stdio.h>

void main() {
	int kor[10];

	for (int i = 0; i <= 9; i++)
	{
		printf("3의 배수를 차례대로 입력 >> ", i);
		scanf_s("%d", &kor[i]);
	}
	for (int i = 9; i >= 0; i--) 
	{
	printf("%d\n", kor[i]);
	}
}