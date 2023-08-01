#include <stdio.h>

/*7. 두 개의 정수를 받아서, 두 수의 차의 절대값을 계산하여 출력하는 메서드와
   이 메서드를 사용해보세요. 메서드 호출 시 전달되는 값의 순서와 상관없이
    절대값이 계산되어서 출력되어야 합니다*/

int AbsoluteValue(int input1 ,int input2) {
    
    int sub = 0;
    sub = input1 - input2;

    if (sub < 0)
    {
        sub = -1 * sub;
        return sub;
    }
    else
    {
        return sub;
    }
}

void main() {
    int input1, input2;

    printf("두 개의 정수를 입력하세요 >> ");
    scanf_s("%d %d", &input1, &input2);

    printf("두 수의 차의 절대값은 %d", AbsoluteValue(input1, input2));
}