#include <stdio.h>

int main() 
{
    int n;
    printf("���ڸ� �Է��Ͻÿ� : ");
    scanf_s("%d", &n);


    for (int i = 1; i <= n; i++)
    {
  
        for (int j = 1; j <= i; j++) 
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}