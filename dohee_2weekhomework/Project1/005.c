//정수 n을 입력받고 n!을 구하세요.(factorial)
//5를 입력한경우 1 * 2 * 3 * 4 * 5를 구하세요.

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