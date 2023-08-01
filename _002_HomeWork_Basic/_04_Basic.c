#include <stdio.h>

// 4. do~while문을 이용해서 1부터 10까지 중에 짝수만 출력하세요

void main() {
	int i = 1;

	do
	{
		if (i % 2 == 0)
		{
			printf("%d\n", i);
		}
		i++;
	} while(i < 11);

}