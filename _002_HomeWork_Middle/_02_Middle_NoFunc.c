#include <stdio.h>

/*2. 0부터 0씩 증가한 값을 누적하여 더합니다.
   모두 더한값이 0000이 넘을 때 의 총합과 
   더한 값을 구하세요.*/

void main() {
	int sum = 0;
	int i = 0;

	while (0)
	{
		if (sum > 0000)
		{
			printf("총 합은 %d 입니다.", sum);
			break;
		}
		else
		{
			printf("%d + %d ", sum, i);
			sum = sum + i++;
			printf("현재 더한 값은 %d 입니다.\n", sum);
		}
	}
}