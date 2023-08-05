#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define NUM_COMPARE 3

int makeRandNum() {
	return rand() % 10; // �������� 0~9 ������.
}

int getUserInput() {
	int num;
	printf("���ڸ� �Է��ϼ��� >> ");
	scanf_s("%d", &num);
	return num;
}

void showResult(int _result, int _userInput[NUM_COMPARE]) {
	static int callFuncCount = 0;
	printf("%d ", _result);
	callFuncCount++;

	if (callFuncCount >= NUM_COMPARE) {
		printf("\n");
		for (int i = 0; i < NUM_COMPARE; i++)
			printf("%d ", _userInput[i]);
		printf("\n");
		callFuncCount = 0;
	}
}

void countBall(int _userInput[NUM_COMPARE]) {
	int strike = 0;
	int ball = 0;

	srand(time(NULL));
	int randNum_Arr[NUM_COMPARE];

	// �ߺ��� ���� ������ ���� ����
	for (int i = 0; i < NUM_COMPARE; i++) {
		int num;
		int isDuplicate;
		do {
			num = makeRandNum();
			isDuplicate = 0; // �⺻������ �ʱ�ȭ
			for (int j = 0; j < i; j++) {
				if (randNum_Arr[j] == num) {
					isDuplicate = 1;
					break;
				}
			}
		} while (isDuplicate);
		randNum_Arr[i] = num;
	}

	for (int i = 0; i < NUM_COMPARE; i++) {
		for (int j = 0; j < NUM_COMPARE; j++) {
			if (randNum_Arr[i] == _userInput[j] && i == j) {
				strike++;
			}
			else if (randNum_Arr[i] == _userInput[j] && i != j) {
				ball++;
			}
		}

		showResult(randNum_Arr[i], _userInput);
	}

	if (strike < 3)
		printf("%d strike %d ball\n", strike, ball);
	else
		printf("%d strike out!!\n", strike);
}

void main() {
	int userInput[NUM_COMPARE];
	int num_continue;
	printf("���� �߱� ������ �����մϴ�.\n");

	do {
		for (int i = 0; i < NUM_COMPARE; i++)
			userInput[i] = getUserInput();

		countBall(userInput);

		printf("������ �ٽ� �����Ͻðڽ��ϱ�? (1: �����, 0: ����) >> ");
		scanf_s("%d", &num_continue);
	} while (num_continue);

	printf("������ �����մϴ�.\n");
}
