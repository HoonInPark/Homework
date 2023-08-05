#include <stdio.h>

// Function to return the larger value among two integers
int findLarger(int num1, int num2) {
    return (num1 > num2) ? num1 : num2;
}

int main()
{
    int a, b;

    printf("Enter two integers: ");
    scanf_s("%d %d", &a, &b);

    int larger = findLarger(a, b);

    printf("The larger value is: %d\n", larger);

    return 0;
}
