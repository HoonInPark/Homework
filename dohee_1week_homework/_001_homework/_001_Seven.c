#include <stdio.h>

int main() {
    int Num, i, j;
   
    printf("Ȧ���� �Է��Ͻÿ�: ");
    scanf_s("%d", &Num);

 
    if (Num % 2 == 0) {
        printf("Ȧ���� �Է��Ͻÿ�.\n");
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