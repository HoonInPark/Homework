//정수 n을 입력받고 n!을 구하세요.(factorial)
//5를 입력한경우 1 * 2 * 3 * 4 * 5를 구하세요.
//재귀함수 없이도 충분히 풀 수 있으니, 규칙성을 찾아라!
//자신 있다면 재귀함수로도 풀어보자.
//재귀함수는 스스로를 호출하는 함수이다.예를 들어 0을 무한반복으로
//출력하는 함수는 다음과 같다.

#include <stdio.h>

int main()
{
    int n, factorial = 1;

    printf("Enter a positive integer: ");
    scanf_s("%d", &n);

    if (n < 0)
    {
        printf("Factorial is not defined for negative numbers.\n");
    }
    else 
    {
        for (int i = 1; i <= n; i++)
        {
            factorial *= i;
        }

        printf("%d! = %d\n", n, factorial);
    }

    return 0;
}
