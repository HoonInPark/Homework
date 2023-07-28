#include "stdio.h"

void main() {
	int num = 0;
	int isRun_num = 1;
	int isRun = 1;

	printf("369 게임을 시작합니다.\n");

	while (isRun) {
		++num;
		int num_temp = num;

		while (num_temp % 10 != 3 && num_temp != 0)
			num_temp = num_temp / 10;
		if (num_temp != 0 || num % 3 == 0)
			printf("짝");
		else
			printf("%d", num);

		printf("\n계속하시겠습니까?");
		scanf_s("%d", &isRun_num);
		if (isRun_num == 0)
			isRun = 0;
	}
}