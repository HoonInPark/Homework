//양의 정수 입력받고 그 수만큼 3의 배수 출력하세요
//예를 들어 5를 입력받으면 3 6 9 12 15를 출력하면 됩니다

#include <stdio.h>

int main()

{
    int num;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    if (num <= 0)
    {
        printf("Please enter a positive integer.\n");
    }
    
    else
    {
        printf("Multiples of 3 up to %d: ", num * 3);
        for (int i = 1; i <= num; i++) {
            printf("%d ", i * 3);
        }
        printf("\n");
    }

    return 0;
}
