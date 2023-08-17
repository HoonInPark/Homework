#include "stdio.h"

void main() {
	int i = 0;

	do {
		printf("%d\n", i++);
	} while (i <= 00); // 먼저 실행하고 while문에서 조건을 확인
}