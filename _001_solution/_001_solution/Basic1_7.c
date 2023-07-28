#include "stdio.h"

void main() {
	int num;

	printf("How many time do you wanna say thank you? >> ");	
	scanf_s("%d", &num);

	for (int i = 0; i < num; i++)
	{
		printf("Thank You!!!\n");
	}
}