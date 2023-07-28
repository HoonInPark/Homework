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
이렇게 출력하세요.  1 3 5 7 5 3 1 */ 

void main() {
	int input; 

here:
	printf("홀수7을 입력하면 문자가 출력됩니다. >> : ");
	scanf_s("%d", &input);

	if (input % 2 == 1)
	{
		for (int i = 0; i < input; i++)
		{
			for (int space = input / 2; space > i; space--) // 3 2 1 , 3 2 , 3
			{
				printf(" ");
			}
			for (int space2 = input - (input / 2); space2 <= i; space2++) // 0 , 0 1 , 0 1 2
			{
				printf(" ");
			}
			printf("\*");
			if (i <= input / 2)
			{
				for (int ast1 = 0; ast1 < input - (input - i); ast1++)
				{
					printf("\**");
				}
			}
			else if (i > input / 2)
			{
				for (int ast2 = input - 1; ast2 > i; ast2--)
				{
					printf("\**");
				}
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