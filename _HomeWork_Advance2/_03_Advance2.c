#include "stdio.h"

/*3. 369게임을 작성합니다.
   1~99까지의 정수를 입력받고
   3,6,9중 하나가 있으면 "박수짝"을 출력하고
   2개가 있으면 "박수짝짝"을 출력하세요
   예를 들어 13은 "박수짝"
   36인 경우는 "박수짝짝"을 출력하면 됩니다.*/

void main() {
	int input; 
	int i = 0;
	while (1)
	{
	here:
		printf("3,6,9 게임을 작성합니다 1~99 까지의 정수를 입력해주세요. >> : ");
		scanf_s("%d", &input);
		if (input == 3 || input == 6 || input == 9 || input % 10 == 3 || input % 10 == 6 || input % 10 == 9
			|| input / 10 == 3 || input / 10 == 6 || input / 10 == 9)
		{
			if ((input / 10 == 3 && (input % 10 == 3 || input % 10 == 6 || input % 10 == 9)))
			{
				printf("박수짝짝!\n");
				goto here;
			}
			else if ((input / 10 == 6 && (input % 10 == 3 || input % 10 == 6 || input % 10 == 9)))
			{
				printf("박수짝짝!\n");
				goto here;
			}
			else if ((input / 10 == 9 && (input % 10 == 3 || input % 10 == 6 || input % 10 == 9)))
			{
				printf("박수짝짝!\n");
				goto here;
			}
			printf("박수짝!\n");
			i++;
		}
		else if (input == 0)
		{
			printf("프로그램을 종료합니다.");
			break;
		}
		else
		{
			printf("%d\n", input);
		}
	}
}