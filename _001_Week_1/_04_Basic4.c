#include <stdio.h>

void main() {
	int i = 1, num = 0;

	while (i <= 10)
	{
		num += i;
		i++;
	}
	printf("합은 %d 입니다.", num);
}