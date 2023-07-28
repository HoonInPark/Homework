#include "stdio.h"

void main() {
	float r;
	float h;


	printf("밑변의 길이 r를 입력하세요 : ");
	scanf_s("%f", &r);
	printf("높이의 길이 h를 입력하세요 : ");
	scanf_s("%f", &h);

	printf("삼각형의넓이 : r 곱하기 높이 h * 0.5 = %f x %f x 0.5 = %.2f ", r, h, r * h * 0.5f);
}