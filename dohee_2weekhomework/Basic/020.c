//1���� 10���� ���ؼ�
//�� ����� ����ϴ� ���α׷��� �ۼ��ϼ���

#include <stdio.h>

int main() {
    int result = 1;

    for (int i = 1; i <= 10; i++) {
        result *= i;
    }

    printf("The result of multiplying numbers from 1 to 10 is: %d\n", result);

    return 0;
}
