/*정수를 입력받아 그 수의 역수로
순차적으로 적어지는 "*"을 그린다
*/
#include "stdio.h"
void main() {
	int i,j,a;
	scanf_s("%d", &a);
	for (i = 0; i < a ; i++) {
		for (j = 0; j < a-i ; j++) {
			printf("*");
		}
		printf("\n");
	}
}