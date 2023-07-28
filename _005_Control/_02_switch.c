#include "stdio.h"
// 주석을 사용할때 왠만하면 영어로 사용 언리얼 사용시 파일명이 한글이라 오류가 생기는 경우가 있음
void main(){
	char ch;

	printf("scan operator (+, -, *, /, %) >> ");
	scanf_s("%c", &ch);

	switch (ch)
	{
	case '+':
		printf("+ operator\n");
		break;
	case '-':
		printf("- operator\n");
		break;
	case '*':
		printf("* operator\n");
		break;
	case '/':
		printf("/ operator\n");
		break;
	case '%':
		printf("% operator\n");
		break;
	default:
		printf("not an operator!\n");
		break;
	}
}