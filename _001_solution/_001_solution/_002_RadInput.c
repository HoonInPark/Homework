#include "stdio.h"

void main() {
	float rad;
	printf("반지름을 입력하세요 >> ");
	scanf_s("%f", &rad);
	
	printf("둘레 = %10.2lf cm\n", 2 * 3.14 * rad);
	printf("넓이 = %10.2lf cm^2\n", 2 * 3.14 * rad * rad);
	printf("부피 = %10.2lf cm^3\n", 3.14 * rad * rad * rad);
}