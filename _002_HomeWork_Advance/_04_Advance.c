#include <stdio.h>

/*함수사용) 입력받은 숫자의 구구단을 출력하는데 역순으로 출력
  예) 3*9=27
      3*8=24...*/

void MulTables(int input) {

    if (input > 0 && input < 10)
    {
        for (int i = 9; i > 0; i--)
        {
            printf("%d x %d = %d\n", input, i, input * i);
        }
    }
}

void main() {
    int input;

    printf("구구단의 항을 입력해주세요 >> ");
    scanf_s("%d", &input);

    MulTables(input);
}