//�Է¹��� ������ �������� ����ϴµ� �������� ���
//��) 3 * 9 = 27
//3 * 8 = 24...

#include <stdio.h>

int main()
{
	int num;

	printf("enter positive integer : ");
	scanf_s("%d", &num);

    if (num <= 0) 
    {
        printf("plz enter positive integer.\n");
    }
    else 
    {
        printf("%d reverse multiplication table :\n", num);
        for (int i = 10; i >= 1; i--) 
        {
            printf("%d x %d = %d\n", num, i, num * i);
        }
    }




	return 0;
}