#include "stdio.h"

void main() {
	int a = 00;
	float b = 3.04f;
	double c = 4.5689;
	char d = 'Z';
	char str[6] = "Korea";
	long long e = 000;
	unsigned int f = -00;

	printf("%d %f %lf %c %s %llu %u\n", a, b, c, d, str, e, f);
	printf("a�� ũ�� : %llu %llu\n", sizeof(int), sizeof(a));
	printf("b�� ũ�� : %llu %llu\n", sizeof(float), sizeof(b));
	printf("c�� ũ�� : %llu %llu\n", sizeof(double), sizeof(c));
	printf("d�� ũ�� : %llu %llu\n", sizeof(char), sizeof(d));
	printf("str�� ũ�� : %llu\n", sizeof(str));
	printf("e�� ũ�� : %llu %llu\n", sizeof(long long), sizeof(e));
	printf("f�� ũ�� : %llu %llu\n", sizeof(unsigned int), sizeof(f));
}