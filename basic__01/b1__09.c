/*양의 정수 입력받고 그 수만큼 3의 배수 출력하세요.
예를 들어 5를 입력받으면 3 6 9 12 15를 출력하면 됩니다 */
#include "stdio.h"
void main() {
	int i,a;
	printf("양의 정수를 입력하시오.>>>");
	scanf_s("%d", &a);
	for (i = 1; i <= a; i++) {
		if (a > 0) {
			printf("%d ", 3 * i);
		}
	}
}