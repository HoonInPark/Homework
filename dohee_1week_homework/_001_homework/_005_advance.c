#include <stdio.h>

int main() {
    int n;
    printf("숫자를 입력하시오 : ");
    scanf_s("%d", &n);

    
    for (int i = 0; i < n; i++) {
    
        for (int j = 0; j <= i; j++) {
            if (j < i) {
                printf("*");
            }
            else {
                printf("o");
            }
        }
        printf("\n");
    }

    return 0;
}