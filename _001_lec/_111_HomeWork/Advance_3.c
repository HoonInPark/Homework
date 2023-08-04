#include "stdio.h"

void main()
{
	int a, b, c, big;
	printf("첫번째 숫자를 입력하세요 : ");
	scanf_s("%d", &a);
	printf("첫번째 숫자를 입력하세요 : ");
	scanf_s("%d", &b);
	printf("첫번째 숫자를 입력하세요 : ");
	scanf_s("%d", &c);

	big = (a > b && a > c) ? a : b;
	big = (big > c) ? big : c;
	printf("큰 숫자는 %d 입니다.", big);
}