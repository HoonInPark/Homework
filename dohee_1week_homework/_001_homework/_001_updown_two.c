#include <stdio.h>

int main() {
    int num1, num2;

   
    printf("���ڸ� �Է��Ͻÿ�: ");
    scanf_s("%d", &num1);

    printf("�ι�° ���ڸ� �Է��Ͻÿ�: ");
    scanf_s("%d", &num2);

   
    int largerNumber = (num1 > num2) ? num1 : num2;


    printf("�ΰ� �� ū ���ڴ�: %d\n", largerNumber);

    return 0;
}