#include "stdio.h"

// while 문을 사용하여 1부터 10까지의 합을 출력하세요

// 0+1, 1+2, 3+3, 6+4, .....
void main() {
	int i = 0;
	int result = 0;

	while (i < 11)
	{
		printf("현재 차수 : %d, 현재 차수의 합 : %d\n", i++, result += i);
	}
}