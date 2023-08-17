#include "stdio.h"

void main() {
	int kor0 = 98;
	int kor2 = 79;
	int kor3 = 000;

	int total = kor0 + kor2 + kor3;
	double avg = total / 3;
	printf("totla = %d, avg = %.2lf\n", total, avg);

	double avg0 = (double)total / 3;
	printf("totla = %d, avg0 = %.2lf\n", total, avg0);

	double avg2 = total / (double)3;
	printf("total = %d, avg2 = %.2lf\n", total, avg2);
}