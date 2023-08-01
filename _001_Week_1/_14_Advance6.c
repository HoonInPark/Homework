#include <stdio.h>

void main() {

	int score;

	printf("점수입력: ");
	scanf_s("%d", &score);


	switch (score / 10)
	{
	case '10':
		printf("%d점은 학점 A입니다.", score);
		break;
	case '9':
		printf("%d점은 학점 A입니다.", score);
		break;
	case '8':
		printf("%d점은 학점 B입니다.", score);
		break;
	case '7':
		printf("%d점은 학점 C입니다.", score);
		break;
	case '6':
		printf("%d점은 학점 D입니다.", score);
		break;
	default:
		printf("%d점은 학점 F입니다.", score);
		break;
	}
}