#include <stdio.h>

/*17.int배열을 10개 생성해라.
 int배열에 3의 배수를 차례대로 저장해라.
 그리고 거꾸로 출력해라.*/

void main() {
	int arr[10];
	int j = 1;

	for (int i = 0; i < 10; i++)
	{
		arr[i] = 3 * j++;
	}

	for (int i = 9; i >= 0; i--)
	{
		printf("%d\n", arr[i]);
	}
}