#include <stdio.h>

int main() 
{
    int sum = 0;
    int value = 0;

    while (sum <= 1000)
    {
        value++;
        sum += value;
    }

    printf("The added value is: %d\n", value);

    return 0;
}
