//do~while문을 이용해서 10부터 20까지 출력하세요 

#include <stdio.h>

int main()

{
    int num = 10;

    do
    {
        printf("%d ", num);
        num++;
    } while (num <= 20);

    return 0;
}
