#include <stdio.h>
#include <stdlib.h>

#define NUM_COMPARE 3

int makeRandNum() {
	return rand() % 10; // 나머지가 1~9 무작위. 
}

int getUserInput() {
	int num;
	printf("숫자를 입력하세요 >> ");
	scanf_s("%d", &num);
	return num;
}

void countBall(int _userInput[NUM_COMPARE]) {
	int strike = 0;
	int ball = 0;

	// 사용자 입력과 컴퓨터의 난수를 (생성과 동시에) 비교 1. 동일한 수가 있냐? 2. 그 수와 인덱스가 일치하냐?
	for (int i = 0; i < NUM_COMPARE; i++)
	{
		int randNum_temp = makeRandNum();

		for (int j = 0; j < NUM_COMPARE; j++) {
			if (randNum_temp == _userInput[j] && i == j) {	strike++; }
			else if (randNum_temp == _userInput[j] && i != j) {	ball++;	}
		}
	}
}

void main() {
	int userInput[NUM_COMPARE];

	for (int i = 0; i < NUM_COMPARE; i++)
		userInput[i] = getUserInput();


}