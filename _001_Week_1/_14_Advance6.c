#include <stdio.h>

void main() {

	int score;

	printf("�����Է�: ");
	scanf_s("%d", &score);


	switch (score / 10)
	{
	case '10':
		printf("%d���� ���� A�Դϴ�.", score);
		break;
	case '9':
		printf("%d���� ���� A�Դϴ�.", score);
		break;
	case '8':
		printf("%d���� ���� B�Դϴ�.", score);
		break;
	case '7':
		printf("%d���� ���� C�Դϴ�.", score);
		break;
	case '6':
		printf("%d���� ���� D�Դϴ�.", score);
		break;
	default:
		printf("%d���� ���� F�Դϴ�.", score);
		break;
	}
}