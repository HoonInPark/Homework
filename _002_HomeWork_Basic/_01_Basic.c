#include <stdio.h>

//1. do while 문을 이용하여 1부터 100까지 출력하시오.

void main() {
	int i = 1;
	do
	{
		printf("%d\n", i++);
	} while (i <= 100);
}