//3. do~while문을 이용해서 1부터 10까지 합을 출력하세요 


#include <stdio.h>

int main()
{
    int num = 1;
    int sum = 0;

    do
    {
        sum += num;
        num++;
    } 
    
    while (num <= 10);

    printf("The sum 1 to 10 is: %d\n", sum);

    return 0;
}
