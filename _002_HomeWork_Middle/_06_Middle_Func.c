#include <stdio.h>

/*6. 2개의 정수를 입력받고 큰 값을 반환하는 메서드와
   작은 값을 반환하는 메서드를 작성하고 사용하세요  */

int BigOne(int input1 , int input2)
{
	return input1 > input2 ? input1 : input2;
}

int SmallOne(int input1, int input2)
{
	return input1 < input2 ? input1 : input2;
}

void main() {
	int input1, input2;

	printf("2개의 정수를 입력하세요 >> ");
	scanf_s("%d %d", &input1, &input2);

	printf("큰 값은 : %d\n", BigOne(input1, input2));
	printf("작은 값은 : %d\n", SmallOne(input1, input2));
}