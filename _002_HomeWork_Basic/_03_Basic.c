#include <stdio.h>

// do while 문을 이용해서 1 부터 10까지의 합을 출력하세요

void main() {
	int i = 1;
	int sum = 0;
	do
	{
		sum += i;
		printf("%d\n", sum);
		i++;
	} while (i <= 10);
}