//두개의 정수를 입력받아서 그 중 큰 수를 출력하는 프로그램을 구현하라.
#include "stdio.h"
void main() {
	int a, b;

	printf("insert 2num: >>");
	scanf_s("%d %d",&a, &b);
	while (a > 0) {
		if (a > b) {
			printf("%d", a);
		}
		else if (a < b) {
			printf("%d", b);
		}
		else {
			printf("두 정수의 값이 같습니다. 종료합니다.\n");
			break;
		}
		
	}
}