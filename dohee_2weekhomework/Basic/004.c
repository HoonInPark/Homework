//do~while���� �̿��ؼ� 1���� 10���� �߿� ¦���� ����ϼ���


#include <stdio.h>

int main()
{
    int num = 1;

    printf("Even numbers from 1 to 10: ");
    do
    {
        if (num % 2 == 0) 
        {
            printf("%d ", num);
        }
        num++;
    } 
    
    while (num<= 10);

    printf("\n");

    return 0;
}
