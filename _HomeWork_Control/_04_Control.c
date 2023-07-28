#include "stdio.h"

// 구구단의 짝수단만 출력하세요(2, 4, 6, 8단)

void main() {
	for (int i = 1; i <= 9; i++)
	{
		printf("2단 : %d  4단 : %d  6단 : %d  8단 : %d  \n", 2 * i, 4 * i, 6 * i, 8 * i);
	}
}