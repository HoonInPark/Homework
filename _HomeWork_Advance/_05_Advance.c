#include "stdio.h"

/*5. 5를 입력하면
o
*o
**o
***o
****o
이렇게 출력하세요.*/

void main() {
	int input;

	printf("숫자를 입력하세요('5'를 입력하면 문자가 출력됩니다.) >> :");
	scanf_s("%d", &input);

	for (int i = 1; i <= 5; i++)
	{
		for (int p = 1;  p < i;  p++)
		{
			printf("\*");
		}
		printf("\o\n");
	}
}