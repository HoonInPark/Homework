#include <stdio.h>

//두 수를 입력받고 최소공배수를 구하세요. 수학공부좀 열심히할걸.............

void main() {
	int input1, input2;
	int price1 = 0;
	int price2 = 1;
	int i = 1;
	int j = 1;
	printf("두 정수를 입력하세요 >> ");
	scanf_s("%d %d", &input1, &input2);

	while (1)
	{
		if (price1 == price2)
		{
			printf("두 수의 최소공배수는 %d 입니다.", price1);
			break;
		}
		else if (price1 < price2) {
			price1 = input1 * i++;
		}
		else if (price2 < price1)
		{
			price2 = input2 * j++;
		}
	}

}