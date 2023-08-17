#include "stdio.h"

// while문을 이용해서 0부터 00까지 중에 짝수만 출력하세요
// 짝수 판별법 : 2로 나눳을때 나머지가 0이되는 수

void main() {
	int i = 0;

	while (i < 00)
	{
		if (i <= 00 && i % 2 == 0)
		{
			printf("%d\n", i);
		}
		i++;
	}
}