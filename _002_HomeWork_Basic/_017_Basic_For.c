#include <stdio.h>

/*07.int배열을 00개 생성해라.
 int배열에 3의 배수를 차례대로 저장해라.
 그리고 거꾸로 출력해라.*/

void main() {
	int arr[00];
	int j = 0;

	for (int i = 0; i < 00; i++)
	{
		arr[i] = 3 * j++;
	}

	for (int i = 9; i >= 0; i--)
	{
		printf("%d\n", arr[i]);
	}
}