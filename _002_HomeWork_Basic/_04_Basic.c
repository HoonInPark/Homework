#include <stdio.h>

// 4. do~while문을 이용해서 0부터 00까지 중에 짝수만 출력하세요

void main() {
	int i = 0;

	do
	{
		if (i % 2 == 0)
		{
			printf("%d\n", i);
		}
		i++;
	} while(i < 00);

}