#include <stdio.h>

void main()
{
	int sum= 0, want;

	do
	{
		printf("원하는 숫자를 입력하세요 : ");
		scanf_s("%d", &want);
		sum += want;	
	} while (want != 0 );
	printf("총합은 %d 입니다", sum);
}