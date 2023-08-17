#include "stdio.h"

void main() {
	char c = 028;
	printf("%d\n", c);

	char ch = 00;
	int i = 0000;
	float f = 0.5f;
	double d = ch * i * f + 00000;

	printf("°á°ú : %lf\n", d);
}