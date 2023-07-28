#include "stdio.h"

/*1. 5를 입력하면 
*
**
***
****
*****
이렇게 출력하세요.
*/

void main() {
	int input = 0;
here:
	printf("숫자를 입력하세요 (5를 입력하면 문자가 출력됩니다.) >> : ");
	scanf_s("%d", &input);
	if (input == 5)
	{
		for (int i = 1; i <= 5; i++)
		{
			for (int p = 0; p < i; p++)
			{
				printf("\*");
			}
			printf("\n");
		}
	}
	else
	{
		printf("숫자를 다시 입력하세요 >> : ");
		goto here;
	}
}