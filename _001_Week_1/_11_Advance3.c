#include <stdio.h>

void main() {
	int a, b, c;
	int max;

	printf("������ ������ �Է��ϼ��� >> ");
	scanf_s("%d %d %d", &a, &b, &c);

	max = (a > b && a >= c) ? a :
		(b >= a && b >= c) ? b : c;

	//if (a > b && a > c) return a;
	//else if (b > a && b > c) return b; else return c;

	printf("max = %d\n", max);
}