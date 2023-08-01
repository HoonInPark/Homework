#include <stdio.h>


// 5 => (5 - 0) * (5 - 1) * (5 - 2) * (5 - 3) * (5 - 4)

int factorial(int _num) {
	if (_num == 0 || _num ==1)
	{
		return 1;
	}
	return _num * factorial(_num - 1);
}

void main() {
	int num;
	printf("정수를 입력하세요 >> ");
	scanf_s("%d", &num);

	printf("%d", factorial(num));
}
