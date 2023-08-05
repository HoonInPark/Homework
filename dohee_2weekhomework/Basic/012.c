#include <stdio.h>

int main() 
{
    printf("Even numbers from 1 to 10: ");
    for (int num = 1; num <= 10; num++)
    {
        if (num % 2 == 0)
        {
            printf("%d ", num);
        }
    }

    printf("\n");

    return 0;
}
