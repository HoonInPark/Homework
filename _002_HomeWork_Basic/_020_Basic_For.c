#include <stdio.h>

/*20. 1부터 10까지 곱해서 
그 결과를 출력하는 프로그램을 작성하세요*/

void main() {
	int sum = 1;

	for (int i = 1; i < 11; i++)
	{
		printf("%d x %d\n", sum, i);
		sum *= i;
		printf("%d번째 sum의 값 : %d \n",i, sum);
	}
}