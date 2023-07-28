#include "stdio.h"

/*4. 사용자로부터 정수를 입력받습니다.
   입력 받은 값을 계속 더합니다
   사용자가 0을 입력하면 합을 출력합니다
   프로그램을 종료합니다.*/

void main() {
	int sum = 0;

	while (1)
	{
		int num;
		printf("정수를 입력하세요. >> : ");
		scanf_s("%d", &num);
		sum += num;
		printf("현재 더한 정수들의 합 : %d\n", sum);
		if (num == 0)
		{
			printf("입력한 숫자의 합 : %d\n", sum);
			printf("프로그램을 종료합니다.");
			break;
		}
	}
}