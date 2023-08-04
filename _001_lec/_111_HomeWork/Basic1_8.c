#include "stdio.h"

void main()
{
	int a, b, big;

	printf("첫 번째 수를 입력하세요 : ");
	scanf_s("%d", &a);
	printf("두 번째 수를 입력하세요 : ");
	scanf_s("%d", &b);

	big = a > b ? a : b;
	printf("큰수는 %d 입니다.", big);
}