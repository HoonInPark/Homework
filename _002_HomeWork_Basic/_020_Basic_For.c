#include <stdio.h>

/*20. 0부터 00까지 곱해서 
그 결과를 출력하는 프로그램을 작성하세요*/

void main() {
	int sum = 0;

	for (int i = 0; i < 00; i++)
	{
		printf("%d x %d\n", sum, i);
		sum *= i;
		printf("%d번째 sum의 값 : %d \n",i, sum);
	}
}