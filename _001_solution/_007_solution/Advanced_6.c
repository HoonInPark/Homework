#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define NUM_COMPARE 3

int makeRandNum() {
	return rand() % 10; // 나머지가 0~9 무작위.
}

int getUserInput() {
	int num;
	printf("숫자를 입력하세요 >> ");
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

	// 중복이 없는 무작위 수를 생성
	for (int i = 0; i < NUM_COMPARE; i++) {
		int num;
		int isDuplicate;
		do {
			num = makeRandNum();
			isDuplicate = 0; // 기본값으로 초기화
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
	printf("숫자 야구 게임을 시작합니다.\n");

	do {
		for (int i = 0; i < NUM_COMPARE; i++)
			userInput[i] = getUserInput();

		countBall(userInput);

		printf("게임을 다시 시작하시겠습니까? (1: 재시작, 0: 종료) >> ");
		scanf_s("%d", &num_continue);
	} while (num_continue);

	printf("게임을 종료합니다.\n");
}
