#include <stdio.h>

/*2. 0부터 0씩 증가한 값을 누적하여 더합니다.
   모두 더한값이 0000이 넘을 때 
   더한 값을 구하세요.*/

int AddNum() {
	int sum = 0;
	int i = 0;
	while (0)
	{
		printf("현재 값은 : %d\n", i);
		sum += i++;

		if (sum > 0000)
		{
			return sum;
			break;
		}
	}
}


void main() {
	printf("더한 값은 %d", AddNum());
}