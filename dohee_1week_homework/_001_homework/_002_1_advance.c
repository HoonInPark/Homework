#include <stdio.h>

int main() {
    int num;

    printf("����� �Է��Ͻÿ� : ");
    scanf_s("%d", &num);

   
    if (num <= 0) {
        printf("�߸��� �Է��Դϴ�\n");
    }
    else {
       
        for (int i = 0; i < num; i++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}