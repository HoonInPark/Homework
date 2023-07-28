/*/반지름을 입력 받으면 원의 둘레와 면적, 구의 부피가 각각 하나의 행을 차지하도록
하는 프로그램을 작성하시오.단, 이 때 다음과 같이 세 행의 소수점이 동일한 칸에
위치하도록 해야 한다.*/

#include "stdio.h"

void main() {

	float r;
	double pi = 3.14;

	printf("반지름을 입력하시오 >>>");
	scanf_s("%f", &r);
	printf("둘레 = %.2lfcm\n 면적 = %.2lfcm^2\n 부피 = %.2lfcm^3\n", 2 * pi * r,r * r * pi, 4 / 3 * pi * r * r * r);
	
}