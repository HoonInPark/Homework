#include "stdio.h"

//양의 정수를 입력받고 그 수만큼 "감사합니다"를 출력하세요

void main(){
	int num;

	printf("양의 정수를 입력하세요 >> : ");
	scanf_s("%d", &num);
	if ( num < 0)
	{
		printf("숫자를 다시 입력하세요.");
	}
	else if (num == 0)
	{
		printf("프로그램을 종료합니다.");
	}
	else
	{
		for (int i = 1; i <= num; i++)
		{
			printf("감사합니다.\n");
		}
	}
}