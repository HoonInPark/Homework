/* 점수를 입력받고 A ~ F학점으로 출력하는 예제를 구글에서 찾으세요.
   (if~else구분으로 되어 있습니다.)
   이를 switch case문으로 바꾸세요.*/
#include "stdio.h"

void main() {
	int score;
	printf("점수를 입력하시오\n");
	scanf_s("%d", &score);
	switch (score)
	{
	case 'a':
		 score;
		break;
	case 80:
		"B";
		break;
	case 70:
		"C";
		break;
	default:

		"F";
	}
}