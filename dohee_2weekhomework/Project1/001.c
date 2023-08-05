//두 수를 입력받고 최소공배수를 구하세요.

#include <stdio.h>

int findGCD(int a, int b) 
{
    int temp;
    while (b != 0)
    {
        temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int findLCM(int a, int b) 
{
    return (a * b) / findGCD(a, b);
}

int main()
{
    int num1, num2;

    printf("plz enter first number: ");
    scanf_s("%d", &num1);

    printf("Plz enter second number: ");
    scanf_s("%d", &num2);

    int lcm = findLCM(num1, num2);
    printf("Least common multiple of %d and %d: %d\n", num1, num2, lcm);

    return 0;
}