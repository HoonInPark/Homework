#include <stdio.h>

/*8. 사용자로부터 정수를 입력받습니다.입력받은 값을 계속더합니다.
	사용자가 0을 입력하면 합을 출력합니다. 그리고 프로그램을 종료합니다.*/ 


void main() {
	int input;
	int sum = 0;
	do {
		printf("정수를 입력하세요 >> ");
		scanf_s("%d", &input);
		sum += input;
	} while (input != 0);

	printf("입력한 숫자의 합은 %d입니다.", sum);
	printf("프로그램을 종료합니다.");
}