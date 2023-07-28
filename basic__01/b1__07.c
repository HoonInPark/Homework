/*양의 정수를 입력받고 그 수만큼 "감사합니다"를 출력하세요.*/
#include "stdio.h"
void main() {
	int a,i;
	printf("양의 정수를 입력하시오>>>");
	scanf_s("%d", &a);
	for (i = 0; i < a; i++) {
		printf("감사합니다 ");//i가 a만큼 반복하는 동안 "감사합니다"출력. 
	}
}