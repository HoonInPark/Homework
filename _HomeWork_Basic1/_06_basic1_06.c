#include "stdio.h"

/* 나무를 찍을 회수와 몇번마다 "쿵"을 반복할지 입력받고 출력하세요
나무를 찍을 회수를 -1을 입력하기 전까지는 계속 반복해서 질의하고 출력하세요 */

void main(){
	while (1)
	{
		int count = 0;
		int koong = 0;

		printf("나무를 찍을 횟수를 입력하세요 >> : ");
		scanf_s("%d", &count);
		printf("몇번마다 쿵을 반복할지 입력하세요 >> : ");
		scanf_s("%d", &koong);

		if (count == -1)
		{
			break;
		}
		else
		{
			if (count == 0)
			{
				printf("나무를 찍지않았습니다.");
			}
			else
			{
				for (int i = 0; i <= count; i++)
				{
					if (i % koong == 0)
					{
						printf("쿵\n");
					}
					else
					{
						printf("나무를 %d번 찍었습니다.\n", i);
					}
				}
			}
		}
	}
}