//0부터 1씩 증가한 값을 누적하여 더합니다.
//모두 더한값이 1000이 넘을 때 의 총합과
//더한 값을 구하세요.


#include <stdio.h>


int main()
{
	int sum = 0;
	int value = 0;

	while (sum <= 1000)
	{
		sum += value;
		value++;
	}

	printf("Sum: %d \n", sum);
	printf("Value: %d \n", value);

	return 0;


}