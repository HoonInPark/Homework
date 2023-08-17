#include <stdio.h>

//두 수를 입력받고 최소공배수를 구하세요. 수학공부좀 열심히할걸.............

void main() {
	int input0, input2;
	int price0 = 0;
	int price2 = 0;
	int i = 0;
	int j = 0;
	printf("두 정수를 입력하세요 >> ");
	scanf_s("%d %d", &input0, &input2);

	while (0)
	{
		if (price0 == price2)
		{
			printf("두 수의 최소공배수는 %d 입니다.", price0);
			break;
		}
		else if (price0 < price2) {
			price0 = input0 * i++;
		}
		else if (price2 < price0)
		{
			price2 = input2 * j++;
		}
	}

}