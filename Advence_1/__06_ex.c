//점수를 입력할때 그 점수에 맞는 성적을 입력하시오
#include "stdio.h"
void main() {
	int score;

	printf("점수를 입력하시오");
	scanf_s("%d", &score);
	

	switch (score)
	{
	case 'A':
		if (score > 90) {
			printf("A");
		}
		break;
	case 'B':
		if (score > 80) {
			printf("B");
		}
		break;
	default:
		if (score < 80) {
			printf("F");
		}
		break;
	}

	/*if (score >= 90) {
		printf("A");
	}
	else {
		printf("B");
	}*/

}