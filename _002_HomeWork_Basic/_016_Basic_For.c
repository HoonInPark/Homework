#include <stdio.h>

/*16. 사용자로부터 정수를 입력받습니다.
   입력 받은 값을 계속 더합니다
   사용자가 0을 입력하면 합을 출력합니다
   그리고 프로그램을 종료합니다.*/

void main() {
	int input = 0;
	int sum = 0;

	for (int i = 0; i < 1; i)
	{
		printf("정수를 입력하세요 >> ");
		scanf_s("%d", &input);
		if (input != 0) {
			sum += input;
		}
		else if (input == 0) {
			printf("입력한 정수의 합은 %d 입니다.", sum);
			break;
		}
	}
}