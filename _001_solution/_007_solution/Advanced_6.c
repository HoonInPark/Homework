#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define NUM_COMPARE 3

int makeRandNum() {
	return rand() % 10; // �������� 1~9 ������.	
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
	} 
}

void countBall(int _userInput[NUM_COMPARE]) {
	int strike = 0;
	int ball = 0;
	srand(time(NULL));

	// ����� �Է°� ��ǻ���� ������ (������ ���ÿ�) �� 1. ������ ���� �ֳ�? 2. �� ���� �ε����� ��ġ�ϳ�?
	for (int i = 0; i < NUM_COMPARE; i++)
	{
		int randNum_temp = makeRandNum();

		for (int j = 0; j < NUM_COMPARE; j++) {
			if (randNum_temp == _userInput[j] && i == j) 
				strike++; 
			else if (randNum_temp == _userInput[j] && i != j) 
				ball++;	
		}

		showResult(randNum_temp, _userInput);
	}

	if (strike < 3) 
		printf("%d strike %d ball", strike, ball); 
	else 
		printf("%d strike out!!", strike); 
}

void main() {
	int userInput[NUM_COMPARE];

	for (int i = 0; i < NUM_COMPARE; i++)
		userInput[i] = getUserInput();

	countBall(userInput);
}