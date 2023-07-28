#include <stdio.h>

void main() {
	//int i = 1;
	//while (i <= 10) // 만약 1을넣는다면 계속 실행이됨, 메모리누수 : 메모리상 너무많은 값들이 올라가서 문제가 생김
	//{
	//	printf("%d\n", i++); // i++ == i = i + 1;
	//}

	int i = 1;

	while (1)
	{
		printf("%d\n", i++);
		if (i > 10)
			break;
	}
}