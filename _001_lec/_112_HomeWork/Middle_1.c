#include <stdio.h>

void main()
{
	int a, b, baesu, yaksu;

	printf("첫번째 숫자를 입력하세요 : ");
	scanf_s("%d", &a);
	printf("두번째 숫자를 입력하세요 : ");
	scanf_s("%d", &b);

	// 최대공약수 공식

	for (int i = 1; i <= a && i<= b; i++)
	{
		if (a % i == 0 && b % i == 0)
			yaksu = i;
	}

	// 최소공배수 공식 

	printf("%d와 %d의 최소공배수는 %d 입니다. ", a, b, (a*b/yaksu));
}