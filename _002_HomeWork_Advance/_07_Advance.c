#include <stdio.h>

/*7. ������ �迭�� �Է����� �޾� �迭���� ���� ū ���� ���� �� ���� 
    ���ڸ� ã�� ���α׷��� �ۼ��մϴ�. �׷� ���� ���α׷���  
    �� �� ������ ���� ��ȯ�ؾ� �մϴ�.*/

int arr[5];
int max = 0;
int arr2[2];
void InputArray() {
    for (int i = 0; i < 5; i++)
    {
        printf("�迭�� ���� ������ �Է��ϼ���. >> ");
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
    
    printf("���� ū ���� ���� �μ��� %d %d\n", arr2[0], arr2[1]);
    printf("���� ū ���� ���� �μ��� ���� %d\n", max);
}