//함수 사용하지 않고 문제 풀기-- -
//1. 두 수를 입력받고 최소공배수를 구하세요.


#include <stdio.h>

int main() {
    int num1, num2, lcm;

    printf("Enter two numbers: ");
    scanf_s("%d %d", &num1, &num2);

    // Find the greater number among the two
    int greater = (num1 > num2) ? num1 : num2;

    // Find the least common multiple
    for (lcm = greater; ; lcm++) {
        if (lcm % num1 == 0 && lcm % num2 == 0) {
            break;
        }
    }

    printf("The least common multiple of %d and %d is: %d\n", num1, num2, lcm);

    return 0;
}
