#include "stdio.h"

void main() {
	int rad;
	double pi = 3.14;

	printf("반지름 입력 >> ");
	scanf_s("%d", &rad); /*&는 메모리상에서의 주소를 의미한다.*/

	printf("반지름이 %d인 원의 둘레는 %.2lf, 넓이는 %.2lf입니다.", rad, rad*2*pi, rad*rad*pi);
}