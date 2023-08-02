#include <stdio.h>

int main()
{
	int num[10]{};

	for (int i = 0; i < 10; i++) {
		num[i] = (i + 1) * 3;
	}
		
	for (int i = 9; i >= 0; i--) {
		printf("%d\n", num[i]);
	}

	return 0;
}
