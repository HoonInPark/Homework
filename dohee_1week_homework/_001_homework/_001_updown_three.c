#include <stdio.h>

int main() {
    int num1, num2, num3;


    printf("���ڸ� �Է��Ͻÿ�: ");
    scanf_s("%d", &num1);

    printf("�ι�° ���ڸ� �Է��Ͻÿ�: ");
    scanf_s("%d", &num2);

    printf("����° ���ڸ� �Է��Ͻÿ�: ");
    scanf_s("%d", &num3);

 
    int largestNumber;

    if (num1 >= num2 && num1 >= num3) {
        largestNumber = num1;
    }
    else if (num2 >= num1 && num2 >= num3) {
        largestNumber = num2;
    }
    else {
        largestNumber = num3;
    }

 
    printf("���� �� ū ���ڴ�: %d\n", largestNumber);

    return 0;
}