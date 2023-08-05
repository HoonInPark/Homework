#include <stdio.h>

int main() {
    int input, sum = 0;

    for (;;) {
        printf("Enter an integer (or 0 to exit): ");
        scanf_s("%d", &input);

        if (input == 0) {
            break;
        }

        sum += input;
    }

    printf("The sum is: %d\n", sum);

    return 0;
}
