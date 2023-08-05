//������ �迭�� �Է����� �޾� �迭���� ���� ū ���� ���� �� ����
//���ڸ� ã�� ���α׷��� �ۼ��մϴ�.�׷� ���� ���α׷���
//�� �� ������ ���� ��ȯ�ؾ� �մϴ�.

#include <stdio.h>

int findGreatestSum(int arr[], int size) {
    int largest1 = arr[0];
    int largest2 = arr[1];

    if (largest2 > largest1) {
        int temp = largest1;
        largest1 = largest2;
        largest2 = temp;
    }

    for (int i = 2; i < size; i++) {
        if (arr[i] > largest1) {
            largest2 = largest1;
            largest1 = arr[i];
        }
        else if (arr[i] > largest2) {
            largest2 = arr[i];
        }
    }

    return largest1 + largest2;
}

int main() {
    int size;
    printf("Enter the size of the array: ");
    scanf_s("%d", &size);

    int arr[size];
    printf("Enter %d integers:\n", size);
    for (int i = 0; i < size; i++) {
        scanf_s("%d", &arr[i]);
    }

    int sum = findGreatestSum(arr, size);
    printf("The sum of the two numbers with the greatest sum is: %d\n", sum);

    return 0;
}
