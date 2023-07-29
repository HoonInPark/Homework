#include <stdio.h>

int main() {
    int num1, num2, num3;

    
    printf("숫자3개를 입력하시오 : ");
    scanf_s("%d %d %d", &num1, &num2, &num3);

  
    int largest =
        (num1 > num2) ? 
        ((num1 > num3) ? num1 : num3) : ((num2 > num3) ? num2 : num3);

    
    printf("가장 큰 숫자는 : %d\n", largest);

    return 0;
}