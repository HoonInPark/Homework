//3. do~while���� �̿��ؼ� 1���� 10���� ���� ����ϼ��� 


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
