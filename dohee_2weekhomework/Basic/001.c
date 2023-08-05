//do~while문을 이용해서 1부터 100까지 출력하세요 

#include <stdio.h>

int main()

{
    int num = 1;

    do
    {
        printf("%d ", num);
        num++;
    } 
    while (num <= 100);

    return 0;
}
