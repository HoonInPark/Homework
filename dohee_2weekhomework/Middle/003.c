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
        printf("Multiples of 5 up to %d: ", num * 5);
        for (int i = 1; i <= num; i++) 
        {
            printf("%d ", i * 5);
        }
        printf("\n");
    }

    return 0;
}
