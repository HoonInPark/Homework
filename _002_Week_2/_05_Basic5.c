#include <stdio.h>

void main() {
	int i = 1, num = 0;

	printf("양의 정수를 입력하세요>> ");
	scanf_s("%d", &num);

	do {
		printf("감사합니다\n", i++);
	} while (i <= num);
}