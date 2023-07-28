#include "stdio.h"

//while문을 이용해서 100부터 1까지 홀수만 출력하세요.

void main() {
	int i = 100;

	while (i > 0)
	{
		if (i % 2 == 1) 
		{
			printf("%d\n", i);
		}
		i--;
	}
}