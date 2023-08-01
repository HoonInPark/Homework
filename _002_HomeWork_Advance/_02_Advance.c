#include <stdio.h>

/*2. 0부터 1씩 증가한 값을 누적하여 더합니다.
   모두 더한값이 1000이 넘을 때 
   더한 값을 구하세요.*/

int AddNum() {
	int sum = 0;
	int i = 0;
	while (1)
	{
		printf("현재 값은 : %d\n", i);
		sum += i++;

		if (sum > 1000)
		{
			return sum;
			break;
		}
	}
}


void main() {
	printf("더한 값은 %d", AddNum());
}