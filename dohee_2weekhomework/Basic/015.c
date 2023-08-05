#include <stdio.h>

int main()
{
    int num;

    printf("Enter a positive integer: ");
    scanf_s("%d", &num);

    if (num <= 0) 
    {
        printf("Please enter a positive integer.\n");
    }
    else 
    {
        printf("Multiplication table for %d:\n", num);
        for (int i = 1; i <= 9; i++)
        {
            printf("%d x %d = %d\n", num, i, num * i);
        }
    }

    return 0;
}
