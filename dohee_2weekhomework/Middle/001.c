//�Լ� ������� �ʰ� ���� Ǯ��-- -
//1. �� ���� �Է¹ް� �ּҰ������ ���ϼ���.


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
