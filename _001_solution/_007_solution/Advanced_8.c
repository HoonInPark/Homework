#include <stdio.h>

/*8. 양의 정수를 입력받아 그 정수까지의 소수의 개수를 구하는 프로그램을
	작성하세요. 소수 : 약수가 1과 자기 자신 뿐인 수*/
int input;

void InputInt() {
	printf("양의 정수를 입력하세요. >> ");
	scanf_s("%d", &input);
	printf("입력한 숫자는 %d 입니다.\n", input);
}

int IsPrimeNum() {
	int num_div = input;
	int isPrimeNum = 1;

	while (num_div > 2)
	{
		// 2 3 5 7 11 13 17 ...
		num_div--;
		if (!(input % num_div))
			isPrimeNum = 0;
	}

	return isPrimeNum;
}

void PrintPrimeNum() {
	while(input > 1)
	{
		if (IsPrimeNum())
			printf("%d\n", input);
		input--;
	}
}

void main() {
	InputInt();
	PrintPrimeNum();
}