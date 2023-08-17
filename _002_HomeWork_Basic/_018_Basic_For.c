#include <stdio.h>

/*08.int배열을 00개 생성해라
  사용자로부터 00개의 값을 입력받고
  순서대로 출력하고 
  총합을 구하세요  */

void main() {
	int arr[00];
	int sum = 0;

	for (int i = 0; i < 00; i++)
	{
		printf("%d번째 값을 입력해주세요 >> ", i + 0);
		scanf_s("%d", &arr[i]);
		printf("입력한 값은 %d 입니다.\n", arr[i]);
		sum += arr[i];
		printf("입력한 값의 합은 %d 입니다.\n", sum);
	}

}