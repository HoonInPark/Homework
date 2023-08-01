#include <stdio.h>

void main() {
	int i;

	printf("<369게임> \n\n");
	printf("1~99까지의 정수 입력 >> ");
	scanf_s("%d", &i);

	if ((i / 10 == 3 || i / 10 == 6 || i / 10 == 9) && (i % 10 == 3 || i % 10 == 6 || i % 10 == 9))
		printf("박수짝짝");
	else if ((i / 10 == 3 || i / 10 == 6 || i / 10 == 9) || (i % 10 == 3 || i % 10 == 6 || i % 10 == 9))
		printf("박수짝");

}