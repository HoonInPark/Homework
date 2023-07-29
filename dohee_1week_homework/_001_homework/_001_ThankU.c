#include <stdio.h>

int main() {
    int num;


    printf("양수를 입력하시오: ");
    scanf_s("%d", &num);

    
    if (num <= 0) {
        printf("Error: Please enter a positive integer.\n");
        return 1; 
    }


    for (int i = 0; i < num; i++) {
        printf("감사합니다\n");
    }

    return 0;
}