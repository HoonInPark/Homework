#include "stdio.h"

//구구단의 홀수단만 출력하세요(3, 5, 7, 9단)

void main() {
	for (int i = 1; i <= 9; i++)
	{
		printf("3단 : %d  5단 : %d  7단 : %d  9단 : %d\n", 3 * i, 5 * i, 7 * i, 9 * i);
	}
}