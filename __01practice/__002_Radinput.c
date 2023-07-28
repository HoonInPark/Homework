//정수 3개를 입력받아 삼각형이 될 수 있는지 파악해라.

#include "stdio.h"

void main() {
	float a, b;
	//밑변과 높이 길이 입력
	printf("밑변 입력하기>>>");
	scanf_s("%f", &a);
	printf("높이 입력하기>>>");
	scanf_s("%f", &b);
	printf("삼각형의 넓이는 %.2lf입니다\n", a * b / 2);

}