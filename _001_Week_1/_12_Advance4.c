#include <stdio.h>

void main() {
	int i, y;
	double r, m, sum = 0;
	printf("����, ����, ������ �Է��Ͻÿ� >> ");
	scanf_s("%lf %lf %d", &r, &m, &y);

	sum = m;
	for (i = 0; i < y; i++)
	{
		sum = sum + ((0.01 * r) * m);
		m = sum;
	}
	printf("%lf\n", sum);

	//y = 383
	//r = 8
	//m = 24
}