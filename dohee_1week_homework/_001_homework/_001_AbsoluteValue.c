#include <stdio.h>


int main() {
    int num;

       printf("���ڸ� �Է��Ͻÿ�: ");
    scanf_s("%d", &num);

    int absoluteValue = abs(num);

    
    printf("���밪�� : %d\n", absoluteValue);

    return 0;
}