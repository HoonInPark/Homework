#include <stdio.h>

void main() {
	int num, n, i = 1;

	printf("나무를 찍을 회수>> ");
	scanf_s("%d", &num);

	printf("몇번 마다 쿵을 반복할것 인가?>> ");
	scanf_s("%d", &n);

	while (i >= num) 
	{
		if ((i / 10 == n ) && (i % 10 == n), i++)
		printf("쿵");
	}
	
		


}