//���� ���� �Է¹ް�, �� ����ŭ 5�� ����� ����ϼ���.
//��) 7 -> 5 10 15 20 25 30 35

#include <stdio.h>

int main()

{
	int num;


	printf("Enter positive integer : ");
	scanf_s("%d", &num);

	if (num <= 0)
	{
		printf("plz enter positive integer \n");
	}
	else
	{
		printf("multiple of %d up to ", num);
		for (int i = 1; i <= num; i++)
		{
			printf("%d", num * i);

			if (i < num)
			{
				printf("  ");
			}
		}
	}

	return 0;

}