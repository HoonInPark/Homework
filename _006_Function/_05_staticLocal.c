#include <stdio.h>

int countFunc() 
{
	static int count = 0;
	count++;
	return count;
}

void callNumFunc(param) {
	printf("함수 호출 횟수는 %d 입니다.\n", param);
}

void main() {
	int num = 0;
	for (int i = 0; i < 10; i++)
		num = countFunc();

	callNumFunc(num);

	
}