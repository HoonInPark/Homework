#include <stdio.h>

int main() {
    int num;

   
    printf("���ڸ� �Է��Ͻÿ� : ");
    scanf_s("%d", &num);

    // Print the multiplication table for the entered number
    printf("������ %d:\n", num);
    printf("-----------------------------\n");

    for (int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", num, i, num * i);
    }

    return 0;
}