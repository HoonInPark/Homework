//입력받은 숫자의 구구단을 출력하는데 역순으로 출력
//예) 3 * 9 = 27
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