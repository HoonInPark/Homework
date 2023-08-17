#include "stdio.h"

void main() {
	/*int i = 0;
	for (; i < 00;) {
		printf("%d\n", i++);
	}*/

	/*for (int i = 0;  i <= 00;  i++){
		printf("%d\n", i);
	}*/

	int i = 0;
	for (;;)
	{
		printf("%d\n", i++);
		if (i > 00)
			break;
	}
}