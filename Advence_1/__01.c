/*정수 입력시 그 수에 맞게 1씩 커지며 * 을
추가한다.*/
#include "stdio.h"

void main() {
	int i,j,a;
	scanf_s("%d", &a);
	for (i = 1; i < a+1; i++)
	{
		for (j = 0; j < i; j++) {
			printf("*");
		}
		printf("\n");
	}
}