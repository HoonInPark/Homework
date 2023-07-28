#include "stdio.h"

// 나무를 찍을 회수와 몇번마다 "쿵"을 반복할지 입력받고 출력하세요.

void main() {
	int count = 0;
	int koong = 0;

	printf("나무를 찍을 횟수를 입력하세요 >> : ");
	scanf_s("%d", &count);
	printf("몇번마다 쿵 을 반복할지 입력하세요 >> : ");
	scanf_s("%d", &koong);
	if (count == 0)
	{
		printf("나무를 0 번 찍었습니다.");
	}
	else
	{
		for (int i = 1; i <= count; i++)
		{
			if (i % koong == 0)
			{
				printf("쿵\n");
			}
			else
			{
				printf("나무를 %d 번 찍었습니다.\n", i);
			}
		}
	}
}