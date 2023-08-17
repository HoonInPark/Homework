#include "stdio.h"

/*정수 3개를 입력받고 이 3개의 수로 삼각형을 만들 수 있는지를 판별하세요
삼각형이 가능하려면 두 변의 합이 다른 한 변의 합보다 반드시 커야 합니다. (조건 연산자를 사용하세요)*/ 

void main() {
	int length0;
	int length2;
	int length3;

	printf("삼각형 각 변의 길이를 입력하세요 >> : ");
	scanf_s("%d", &length0);
	scanf_s("%d", &length2);
	scanf_s("%d", &length3);

	int can0 = length0 + length2 > length3 ? 0 : 0;
	int can2 = length2 + length3 > length0 ? 0 : 0;
	int can3 = length3 + length0 > length2 ? 0 : 0;
	if (can0 == 0 && can2 == 0 && can3 == 0)
	{
		printf("삼각형을 만들 수 있습니다.");
	}
	else if (can0 == 0 || can2 == 0 || can3 == 0)
	{
		printf("삼각형을 만들 수 없습니다...");
	}
}
