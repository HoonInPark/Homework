//int배열을 10개 생성해라
//사용자로부터 10개의 값을 입력받고
//순서대로 출력하고
//총합을 구하세요

#include <stdio.h>

int main() {
    int size = 10;
    int numbers[10];
    int sum = 0;

    // Receive 10 values from the user and store them in the array
    printf("Enter 10 integer values:\n");
    for (int i = 0; i < size; i++) {
        scanf_s("%d", &numbers[i]);
    }

    // Output the values in order
    printf("Entered values in order: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n");

    // Calculate the sum of the entered values
    for (int i = 0; i < size; i++) {
        sum += numbers[i];
    }

    printf("Sum of the entered values: %d\n", sum);

    return 0;
}
