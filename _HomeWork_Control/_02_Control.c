#include "stdio.h"

//5개의 값을 입력받고 최대값과 최소값을 추출하세요

void main() {
	int num;
	int max, min;
	printf("5개의 값을 입력하세요 >> : ");
	for (int i = 0; i < 5; i++)
	{
		scanf_s("%d", &num);
		if (i == 0)
		{
			max = num;
			min = num;
		}

		if (num > max)
		{
			max = num;
		}
		else if (num < min)
		{
			min = num;
		}
	}
	printf("최대값은 %d 입니다. \n", max);
	printf("최소값은 %d 입니다. \n", min);
}