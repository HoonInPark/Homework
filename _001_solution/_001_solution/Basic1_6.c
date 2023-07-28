#include "stdio.h"

void main() {
	int JJick;
	int Koong;

	printf("how many time do you wanna JJick before Koong? >> ");
	scanf_s("%d", &JJick);

	int count = 0;
	int isRun = 1;

	while (isRun)
	{
		count++;
		printf("JJick!!!\n");

		if (count == JJick)
		{
			printf("Koong!!!\n");
			count = 0;
		}

		printf("Wanna continue? (if not, inpput -1) >> ");
		scanf_s("%d", &isRun);
		isRun++;
	}
}