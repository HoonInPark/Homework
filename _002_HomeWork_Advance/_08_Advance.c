#include <stdio.h>

/*8. 양의 정수를 입력받아 그 정수까지의 소수의 개수를 구하는 프로그램을 
    작성하세요. 소수 : 약수가 1과 자기 자신 뿐인 수*/
int input;

void InputInt() {
    printf("양의 정수를 입력하세요. >> ");
    scanf_s("%d", &input);
    printf("입력한 숫자는 %d 입니다.", input);
}

void PrimeNum() {
    for (int i = 1; i <= input; i++)
    {
        if ((i % 2 != 0 && i % 3 != 0 && i % 5 != 0 && i % 7 != 0 && i != 1)
            || (i == 2 || i == 3 || i == 5 || i == 7))
        {
            printf("%d ", i);
        }
    }
}

void main() {
    InputInt();
    PrimeNum();
}