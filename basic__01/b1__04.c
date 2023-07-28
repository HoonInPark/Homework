/*정수를 입력받고 절대값을 구하라( -5, 5 => 5) */
#include "stdio.h"
void main() {
	int a;
	printf("정수를 입력하시오>>> ");
	scanf_s("%d", &a);
	if (a > 0) {

		printf("절대값은 %d입니다.", a);
	}
	else {
		printf("절대값은 %d입니다.", -a);
	}
}