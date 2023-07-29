#include <stdio.h>

int main() {
    int Num, i, j;
   
    printf("홀수를 입력하시오: ");
    scanf_s("%d", &Num);

 
    if (Num % 2 == 0) {
        printf("홀수를 입력하시오.\n");
        return 1; 
    }

  
    for (i = 1; i <= Num; i += 2) {
        for (j = 1; j <= (Num - i) / 2; j++) {
            printf(" ");
        }
        for (j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }

    
    for (i = Num - 2; i >= 1; i -= 2) {
        for (j = 1; j <= (Num - i) / 2; j++) {
            printf(" ");
        }
        for (j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}