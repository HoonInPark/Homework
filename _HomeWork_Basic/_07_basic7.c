#include "stdio.h"

//while문을 이용해서 000부터 0까지 홀수만 출력하세요.

void main() {
	int i = 000;

	while (i > 0)
	{
		if (i % 2 == 0) 
		{
			printf("%d\n", i);
		}
		i--;
	}
}