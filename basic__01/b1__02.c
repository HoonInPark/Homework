/*������ ���ڸ� �Է¹޾Ƽ� ���� ū ���� ����ϴ� ���α׷��� �����϶�*/
#include "stdio.h"

void main() {
	double a, b, c;
	double max = 0;
	printf("�� ���� �Է��Ͻÿ�.>>> ");
	scanf_s("%lf %lf %lf", &a, &b, &c);
	if (a > b && a > c) {
		max = a;
		printf("%lf", max);
	}
	else if (b > a && b > c) {
		max = b;
		printf("%lf", max);
	}
	else if(c > a && c >b){
		max = c; 
		printf("%lf", max);
	}
	else {
		printf("�� ���� ����");
	}
	
}