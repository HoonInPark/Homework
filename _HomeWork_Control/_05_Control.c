#include "stdio.h"
/*1을 입력하면 구구단의 홀수단만 출력하고
   2를 입력하면 구구단의 짝수단만 출력하세요*/

void main() {
	int num = 0;
here:
	printf("1을 입력하면 홀수단, 2를 입력하면 짝수단을 출력합니다 >> : ");
	scanf_s("%d", &num);

	if (num == 1)
	{
		for (int i = 1; i <= 9; i++)
		{
			printf("1단 : %d  ,3단 : %d  ,5단 : %d  ,7단 : %d  ,9단 : %d\n",
				1 * i, 3 * i, 5 * i, 7 * i, 9 * i);
		}
	}
	else if (num == 2)
	{
		for (int i = 1; i <= 9; i++)
		{
			printf("2단 :  %d  ,4단 : %d  ,6단 : %d  ,8단 : %d\n",
				    2 * i, 4 * i, 6 * i, 8 * i);

		}
	}
	else
	{
		printf("숫자를 다시 입력하세요.\n");
		goto here;
	}
}