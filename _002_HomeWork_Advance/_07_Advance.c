#include <stdio.h>

/*7. ������ �迭�� �Է����� �޾� �迭���� ���� ū ���� ���� �� ���� 
    ���ڸ� ã�� ���α׷��� �ۼ��մϴ�. �׷� ���� ���α׷���  
    �� �� ������ ���� ��ȯ�ؾ� �մϴ�.*/

int arr[4];
int first = 0;
int second = 0;

void InputArray() {
    for (int i = 0; i < 4; i++)
    {
        printf("�迭�� ���� ������ �Է��ϼ���. >> ");
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

    printf("���� ū ���� %d\n", first);
    printf("�ι�°�� ū ���� %d\n", second);
}