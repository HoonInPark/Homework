#include <stdio.h>

int main() {
    int num1, num2, num3;

    
    printf("����3���� �Է��Ͻÿ� : ");
    scanf_s("%d %d %d", &num1, &num2, &num3);

  
    int largest =
        (num1 > num2) ? 
        ((num1 > num3) ? num1 : num3) : ((num2 > num3) ? num2 : num3);

    
    printf("���� ū ���ڴ� : %d\n", largest);

    return 0;
}