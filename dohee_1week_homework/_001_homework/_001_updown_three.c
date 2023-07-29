#include <stdio.h>

int main() {
    int num1, num2, num3;


    printf("숫자를 입력하시오: ");
    scanf_s("%d", &num1);

    printf("두번째 숫자를 입력하시오: ");
    scanf_s("%d", &num2);

    printf("세번째 숫자를 입력하시오: ");
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

 
    printf("세개 중 큰 숫자는: %d\n", largestNumber);

    return 0;
}