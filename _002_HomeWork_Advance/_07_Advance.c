#include <stdio.h>

/*7. 정수의 배열을 입력으로 받아 배열에서 가장 큰 합을 갖는 두 개의 
    숫자를 찾는 프로그램을 작성합니다. 그런 다음 프로그램은  
    이 두 숫자의 합을 반환해야 합니다.*/

int arr[4];
int first = 0;
int second = 0;

void InputArray() {
    for (int i = 0; i < 4; i++)
    {
        printf("배열에 넣을 정수를 입력하세요. >> ");
        scanf_s("%d", &arr[i]);
    }
}

void ScanSize() {
    first = second = arr[0];
    for (int i = 0; i < 4; i++)
    {
        if (first < arr[i])
        {
            first = arr[i];
        }
        if (second < arr[i] && arr[i] < first)
        {
            second = arr[i];
        }
        printf("%d\n", arr[i]);
    }
}

void main() {
    InputArray();
    ScanSize(first, second);

    printf("가장 큰 수는 %d\n", first);
    printf("두번째로 큰 수는 %d\n", second);
}