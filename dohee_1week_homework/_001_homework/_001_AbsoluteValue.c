#include <stdio.h>


int main() {
    int num;

       printf("숫자를 입력하시오: ");
    scanf_s("%d", &num);

    int absoluteValue = abs(num);

    
    printf("절대값은 : %d\n", absoluteValue);

    return 0;
}