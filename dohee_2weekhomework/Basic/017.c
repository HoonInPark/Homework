#include <stdio.h>

int main() 
{
    int size = 10;
    int multiplesOfThree[10];

    // Store multiples of 3 in the array
    for (int i = 0; i < size; i++)
    {
        multiplesOfThree[i] = (i + 1) * 3;
    }

    // Print the array in reverse order
    printf("Multiples of 3 in reverse order: ");
    for (int i = size - 1; i >= 0; i--)
    {
        printf("%d ", multiplesOfThree[i]);
    }
    printf("\n");

    return 0;
}
