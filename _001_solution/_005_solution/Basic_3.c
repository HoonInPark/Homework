#include <stdio.h>

void doWhilePrint(int int_lower, int int_interval, int int_upper) {
	int int_temp = int_lower;
	
	do
	{
		int_lower += int_interval;
		int_temp += int_lower;
	} while (int_lower < int_upper);

	printf("총합은 %d입니다!!!", int_temp);
}

void main() {
	printf("어느 숫자부터 시작하시겠습니까? >> ");
	int num_lower;
	scanf_s("%d", &num_lower);
	printf("간격은 얼마로 하시겠습니까? >> ");
	int num_interval;
	scanf_s("%d", &num_interval);
	printf("어디까지 하시겠습니까? >> ");
	int num_upper;
	scanf_s("%d", &num_upper);

	doWhilePrint(num_lower, num_interval, num_upper);
}