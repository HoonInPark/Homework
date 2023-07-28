#include "stdio.h"

void main() {
	int Swing_num;
	int Koong_interval;

	printf("How many time you wanna swing??? >> ");
	scanf_s("%d", &Swing_num);
	printf("How many time you wanna swing before Koong??? >> ");
	scanf_s("%d", &Koong_interval);

	int sweep_count = Koong_interval;
	for (int i = 0; i < Swing_num; i++)
	{
		printf("Sweep!\n");
		sweep_count--;
		if (sweep_count == 0) {
			printf("Koong!\n");
			sweep_count = Koong_interval;
		}
	}
}