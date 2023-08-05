//양의 정수를 입력받고 그 수만큼 "감사합니다"를 출력하세요

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
        for (int i = 0; i < num; i++)
        {
            printf("thank you\n");
        }
    }

    return 0;
}
