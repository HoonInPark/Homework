//1부터 10까지 곱해서
//그 결과를 출력하는 프로그램을 작성하세요

#include <stdio.h>

int main() {
    int result = 1;

    for (int i = 1; i <= 10; i++) {
        result *= i;
    }

    printf("The result of multiplying numbers from 1 to 10 is: %d\n", result);

    return 0;
}
