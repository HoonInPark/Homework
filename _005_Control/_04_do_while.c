#include "stdio.h"

void main() {
	int i = 1;

	do {
		printf("%d\n", i++);
	} while (i <= 10); // 먼저 실행하고 while문에서 조건을 확인
}