#include <stdio.h>

// 2. do while문을 이용하여 10 부터 20 까지 출력하세요

void main() {
	int i = 10;

	do {
		printf("%d\n", i++);
	} while (i <= 20);
}