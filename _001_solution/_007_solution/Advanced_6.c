#include <stdio.h>
#include <stdlib.h>

#define NUM_COMPARE 3

int makeRandNum() {
	return rand() % 10;
}

int getUserInput() {
	int num;
	printf("���ڸ� �Է��ϼ��� >> ");
	scanf_s("%d", &num);
	return num;
}

int countBall(int _userInput[NUM_COMPARE]) {
	int computerInput[NUM_COMPARE];

	int strike = 0;
	int ball = 0;

	for (int i = 0; i < NUM_COMPARE; i++)
		computerInput[i] = makeRandNum();

	// ����� �Է°� ��ǻ���� ������ ��
	

	if (!(strike * ball)) // �� �� �ϳ��� 0�̸� 0�� �ƴ� �༮�� �����Ϸ��� ����ϵ�, �� �� 0�̸� �׳� 0 ����.
	{

	}
	else
	{

	}

	return 0;
}

void main() {
	int userInput[NUM_COMPARE];
	for (int i = 0; i < NUM_COMPARE; i++)
		userInput[i] = getUserInput();


}