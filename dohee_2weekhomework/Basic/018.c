//int�迭�� 10�� �����ض�
//����ڷκ��� 10���� ���� �Է¹ް�
//������� ����ϰ�
//������ ���ϼ���

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
