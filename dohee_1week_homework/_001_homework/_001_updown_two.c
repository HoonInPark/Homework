#include <stdio.h>

int main() {
    int num1, num2;

   
    printf("숫자를 입력하시오: ");
    scanf_s("%d", &num1);

    printf("두번째 숫자를 입력하시오: ");
    scanf_s("%d", &num2);

   
    int largerNumber = (num1 > num2) ? num1 : num2;


    printf("두개 중 큰 숫자는: %d\n", largerNumber);

    return 0;
}