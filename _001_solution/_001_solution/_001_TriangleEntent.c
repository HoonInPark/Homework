#include "stdio.h"

void main() {
	float Mit_Beon;
	float Nop_E;

	printf("밑변을 입력하세요 >> ");
	scanf_s("%f", &Mit_Beon);
	
	printf("높이를 입력하세요 >> ");
	scanf_s("%f", &Nop_E);

	printf("삼각형의 넓이는 %f 입니다.", 0.5f * Mit_Beon * Nop_E);
}