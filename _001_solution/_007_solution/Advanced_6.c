#include <stdio.h>
#include <stdlib.h>

#define NUM_COMPARE 3

int makeRandNum() {
	return rand() % 10;
}

int getUserInput() {
	int num;
	printf("숫자를 입력하세요 >> ");
	scanf_s("%d", &num);
	return num;
}

int countBall(int _userInput[NUM_COMPARE]) {
	int computerInput[NUM_COMPARE];

	int strike = 0;
	int ball = 0;

	for (int i = 0; i < NUM_COMPARE; i++)
		computerInput[i] = makeRandNum();

	// 사용자 입력과 컴퓨터의 난수를 비교
	

	if (!(strike * ball)) // 둘 중 하나가 0이면 0이 아닌 녀석을 리턴하려고 노력하되, 둘 다 0이면 그냥 0 리턴.
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