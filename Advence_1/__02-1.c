/*양의 정수를 입력하면 그 정수의 /
수만큼의 asterisk(*)*/
#include "stdio.h"
void main() {
	int i,a;
	scanf_s("%d", &a);
	for (i = 0; i < a; i++) {
		printf("*");
	}
}