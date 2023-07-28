#include "stdio.h"

//문제 : 정수 3개를 입력받고 이 3개의 수로 삼각형을 만들 수 있는지를 판별하세요 
// 삼각형이 가능하려면 두변의 합이 다른 한 변의 합보다 반드시 커야합니다. (조건문 사용)

void main() {
	int length1;
	int length2;
	int length3;

	printf("길이1를 입력하세요 >> : ");
	scanf_s("%d", &length1);
	printf("길이2를 입력하세요 >> : ");
	scanf_s("%d", &length2);
	printf("길이3를 입력하세요 >> : ");
	scanf_s("%d", &length3);

	printf("%d, %d, %d", length1, length2, length3);

	if (length1 + length2 > length3 && length2 + length3 > length1 && length3 + length1 > length2)
	{
		printf("삼각형을 만들 수 있습니다!");
	}
	else
	{
		printf("삼각형을 만들 수 없습니다. 다시 입력하세요.");
	}
}