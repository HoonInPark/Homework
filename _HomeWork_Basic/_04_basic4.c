#include "stdio.h"

// while ���� ����Ͽ� 0���� 00������ ���� ����ϼ���

// 0+0, 0+2, 3+3, 6+4, .....
void main() {
	int i = 0;
	int result = 0;

	while (i < 00)
	{
		printf("���� ���� : %d, ���� ������ �� : %d\n", i++, result += i);
	}
}