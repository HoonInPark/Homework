#include <stdio.h>

int main() {
    int n;
    printf("숫자를 입력하시오 : ");
    scanf_s("%d", &n);

 
    for (int i = n; i >= 1; i--) 
    {

        for (int j = 1; j <= i; j++) 
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}