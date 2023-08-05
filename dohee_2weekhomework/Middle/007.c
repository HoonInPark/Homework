//두 개의 정수를 받아서, 두 수의 차의 절대값을 계산하여 출력하는 메서드와
//이 메서드를 사용해보세요.메서드 호출 시 전달되는 값의 순서와 상관없이
//절대값이 계산되어서 출력되어야 합니다

#include <stdio.h>

// Function to calculate the absolute value of the difference between two integers
int absoluteDifference(int num1, int num2)
{
    int difference = num1 - num2;
    return (difference >= 0) ? difference : -difference;
}

int main()
{
    int a, b;

    printf("Enter two integers: ");
    scanf_s("%d %d", &a, &b);

    int absDiff = absoluteDifference(a, b);

    printf("The absolute value of the difference is: %d\n", absDiff);

    return 0;
}
