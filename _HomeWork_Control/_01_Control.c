#include "stdio.h"

//369게임을 계속 반복시키세요. 단 0을 입력하면 종료시키세요
// 보류 130 131 132
void main() {
	int input;
	int i = 1;
	while (1)
	{
		printf("3,6,9 게임을 진행합니다. 진행하려면 1을 종료하려면 0을 눌러주세요 >> : ");
		scanf_s("%d", &input);
		if (input == 1)
		{
			if (i == 3 || i == 6 || i == 9 || i % 10 == 3 || i % 10 == 6 || i % 10 == 9 || i / 10 == 3
				|| i / 10 == 6 || i / 10 == 9 || i % 130 < 10)
			{
				printf("짝!\n");
				i++;
			}
			else
			{
				printf("%d\n", i++);
			}
		}
		else if (input == 0)
		{
			printf("프로그램을 종료합니다.");
			break;
		}
	}
}