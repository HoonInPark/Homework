//������ �Է��Ҷ� �� ������ �´� ������ �Է��Ͻÿ�
#include "stdio.h"
void main() {
	int score;

	printf("������ �Է��Ͻÿ�");
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