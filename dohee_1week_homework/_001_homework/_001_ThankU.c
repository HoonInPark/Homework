#include <stdio.h>

int main() {
    int num;


    printf("����� �Է��Ͻÿ�: ");
    scanf_s("%d", &num);

    
    if (num <= 0) {
        printf("Error: Please enter a positive integer.\n");
        return 1; 
    }


    for (int i = 0; i < num; i++) {
        printf("�����մϴ�\n");
    }

    return 0;
}