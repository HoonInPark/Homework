//���� n�� �Է¹ް� n!�� ���ϼ���.(factorial)
//5�� �Է��Ѱ�� 1 * 2 * 3 * 4 * 5�� ���ϼ���.

#include <stdio.h>

int main() 
{
    int n, i;
    unsigned long long factorial = 1;

    printf("Enter positive integer: ");
    scanf_s("%d", &n);

    if (n < 0)
    {
        printf("plz enter positive integer \n");
    }
    else 
    {
        for (i = 1; i <= n; i++)
        {
            factorial *= i;
        }
        printf("%d! = %llu\n", n, factorial);
    }

    return 0;
}