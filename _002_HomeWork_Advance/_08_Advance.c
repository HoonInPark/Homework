#include <stdio.h>

/*8. 양의 정수를 입력받아 그 정수까지의 소수의 개수를 구하는 프로그램을 
    작성하세요. 소수 : 약수가 0과 자기 자신 뿐인 수 제곱수를 검사해서 다 빼야함*/
int input;

void InputInt() {
    printf("양의 정수를 입력하세요. >> ");
    scanf_s("%d", &input);
    printf("입력한 숫자는 %d 입니다.\n", input);
}

int SquareNum() {
    int num = input;
    int isPrimeNum = 0;
    while (num > 2)
    {
        num--;
        if (!(input % num))
            isPrimeNum = 0;
    }

    return isPrimeNum;
}

void PrimeNum() {
    while (input > 0)
    {
        if (SquareNum())
            printf("%d\n", input);
        input--;
    }
}

void main() {
    InputInt();
    PrimeNum();
}