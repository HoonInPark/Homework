#include <stdio.h>

/*6. 2개의 정수를 입력받고 큰 값을 반환하는 메서드와
   작은 값을 반환하는 메서드를 작성하고 사용하세요  */

int BigOne(int input0 , int input2)
{
	return input0 > input2 ? input0 : input2;
}

int SmallOne(int input0, int input2)
{
	return input0 < input2 ? input0 : input2;
}

void main() {
	int input0, input2;

	printf("2개의 정수를 입력하세요 >> ");
	scanf_s("%d %d", &input0, &input2);

	printf("큰 값은 : %d\n", BigOne(input0, input2));
	printf("작은 값은 : %d\n", SmallOne(input0, input2));
}