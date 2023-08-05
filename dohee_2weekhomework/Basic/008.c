#include <stdio.h>

int main()
{
    int input, sum = 0;

    do 
    {
        printf("Enter an integer (if enter 0 to exit): ");
        scanf("%d", &input);

        sum += input;
    }
    
    while (input != 0);

    printf("The sum is: %d\n", sum);

    return 0;
}
