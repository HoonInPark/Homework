#include <stdio.h>

// 11. for문을 이용해서 1부터 10까지 합을 출력하세요

void main() {

	int sum = 0;
	for (int i = 1; i < 11; i++)
	{
		sum += i;
	}

	printf("1부터 10까지의 합은 %d입니다.", sum);
}