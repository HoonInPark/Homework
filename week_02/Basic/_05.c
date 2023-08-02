#include <stdio.h>

int main()
{
	int num = 0, i = 0;

	printf("[양의 정수를 입력하세요.]\n -> ");
	scanf_s("%d", &num);

	if (num > 0)
	{
		do
		{
			printf("[감사합니다.]\n");
			i++;
		} while (i < num);
	}
	else
	{
		printf("[종료되었습니다.]\n");
	}

	return 0;
}
