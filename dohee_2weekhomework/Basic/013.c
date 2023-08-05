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
        for (int i = 1; i <= num; i++) 
        {
            printf("thank you\n");
        }
    }

    return 0;
}
