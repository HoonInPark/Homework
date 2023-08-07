#include <stdio.h>

/*7. 정수의 배열을 입력으로 받아 배열에서 가장 큰 합을 갖는 두 개의 
    숫자를 찾는 프로그램을 작성합니다. 그런 다음 프로그램은  
    이 두 숫자의 합을 반환해야 합니다.*/

int arr[5];
int max = 0;
int arr2[2];
void InputArray() {
    for (int i = 0; i < 5; i++)
    {
        printf("배열에 넣을 정수를 입력하세요. >> ");
        scanf_s("%d", &arr[i]);
    }
}

void ScanSize() {
    int result = 0;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 4; j > i; j--)
        {
            result = arr[i] + arr[j];
            if (max < result)
            {
                arr2[0] = arr[i];
                arr2[1] = arr[j];
                max = result;
            }
        }
    }
}

void main() {
    InputArray();
    ScanSize();
    
    printf("가장 큰 합을 갖는 두수는 %d %d\n", arr2[0], arr2[1]);
    printf("가장 큰 합을 갖는 두수의 합은 %d\n", max);
}