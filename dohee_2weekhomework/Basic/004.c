//do~while문을 이용해서 1부터 10까지 중에 짝수만 출력하세요


#include <stdio.h>

int main()
{
    int num = 1;

    printf("Even numbers from 1 to 10: ");
    do
    {
        if (num % 2 == 0) 
        {
            printf("%d ", num);
        }
        num++;
    } 
    
    while (num<= 10);

    printf("\n");

    return 0;
}
