#include <stdio.h>

int main() {
    int num;

    printf("양수를 입력하시오 : ");
    scanf_s("%d", &num);

   
    if (num <= 0) {
        printf("잘못된 입력입니다\n");
    }
    else {
       
        for (int i = 0; i < num; i++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}