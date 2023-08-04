// 살려줘!!!

#include <stdio.h>

void main()
{
	int sum = 0, want=0;

	for (want; want ==0; want+0)
	{
		printf("원하는 숫자를 입력하세요 : ");
		scanf_s("%d", &want);
		sum += want;

		if (want == 0)
			break;
	}
}