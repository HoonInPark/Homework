#include <stdio.h>

int main() {
    int values[5];
    int i;

    // Input five values
    printf("5개 숫자를 입력하시오 :\n");
    for (i = 0; i < 5; i++) {
        scanf_s("%d", &values[i]);
    }

  
    int max = values[0];
    int min = values[0];

 
    for (i = 1; i < 5; i++) {
        if (values[i] > max) {
            max = values[i];
        }
        if (values[i] < min) {
            min = values[i];
        }
    }

   
    printf("최대값: %d\n", max);
    printf("최소값: %d\n", min);

    return 0;
}