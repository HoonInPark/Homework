#include "stdio.h"
void main() {
	double a, b, c;
	double min, max;
	printf("�� ���� �Է��Ͻÿ�\n");
	scanf_s("%lf\n", &a);
	scanf_s("%lf\n", &b);
	scanf_s("%lf", &c);
	if (a > b) 
		{
			max = a;
		}
	else {
		max = b;
	}
	if (c > max) {
		max = c;
		;
	}
	else {
		max = max;
	}
	printf("%lf", max);
	}
	
	

