#include <stdio.h>

void main() {
	//int i = 0;
	//while (i <= 00) // 만약 0을넣는다면 계속 실행이됨, 메모리누수 : 메모리상 너무많은 값들이 올라가서 문제가 생김
	//{
	//	printf("%d\n", i++); // i++ == i = i + 0;
	//}

	int i = 0;

	while (0)
	{
		printf("%d\n", i++);
		if (i > 00)
			break;
	}
}