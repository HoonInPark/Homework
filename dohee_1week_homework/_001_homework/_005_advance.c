#include <stdio.h>

int main() {
    int n;
    printf("���ڸ� �Է��Ͻÿ� : ");
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