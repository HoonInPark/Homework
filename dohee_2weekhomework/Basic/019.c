//정수 10개를 입력받아 배열에 저장하고,
//이 정수중에서 2의 배수와 3의 배수를 출력하세요

#include <stdio.h>

int main() {
    int size = 10;
    int numbers[10];

    // Receive 10 integer values from the user and store them in the array
    printf("Enter 10 integer values:\n");
    for (int i = 0; i < size; i++) {
        scanf_s("%d", &numbers[i]);
    }

    // Print the multiples of 2 and 3 of the entered integers
    printf("Multiples of 2 and 3 of the entered integers:\n");
    for (int i = 0; i < size; i++) {
        printf("%d: ", numbers[i]);
        if (numbers[i] % 2 == 0) {
            printf("%d ", numbers[i] * 2);
        }
        if (numbers[i] % 3 == 0) {
            printf("%d ", numbers[i] * 3);
        }
        printf("\n");
    }

    return 0;
}
