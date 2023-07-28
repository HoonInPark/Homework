#include "stdio.h"

/*1. 홀수를 입력하면 됩니다.  
   7를 입력하면
   *
  ***
 *****
*******
 *****
  ***
   *
이렇게 출력하세요.*/

void main() {
	int input; 

here:
	printf("홀수7을 입력하면 문자가 출력됩니다. >> : ");
	scanf_s("%d", &input);

	if (input == 7)
	{
		for (int i = 0; i < 4; i++)
		{
			if (i == 0)
			{
				printf("   ");
			}
			else if (i == 1)
			{
				printf("  ");
			}
			else if (i == 2)
			{
				printf(" ");
			}
			printf("\*");
			for (int p = 0; p < i; p++)
			{
				printf("\**");
			}
			printf("\n");
		}

		for (int i = 0; i < 3; i++)
		{
			if (i == 0)
			{
				printf(" ");
			}
			else if (i == 1)
			{
				printf("  ");
			}
			else if (i == 2)
			{
				printf("   ");
			}
			printf("\*");
			for (int p = 2; p > i; p--)
			{
				printf("\**");
			}
			printf("\n");
		}
	}
	else
	{
		printf("숫자를 다시 입력해주세요.");
		goto here;
	}
}