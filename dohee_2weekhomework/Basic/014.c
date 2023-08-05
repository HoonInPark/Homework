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
        printf("Multiples of 3 up to %d: ", num * 3);
        for (int i = 1; i <= num; i++)
        {
            printf("%d ", i * 3);
        }
        printf("\n");
    }

    return 0;
}
