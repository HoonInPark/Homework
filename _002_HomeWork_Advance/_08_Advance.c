#include <stdio.h>

/*8. ���� ������ �Է¹޾� �� ���������� �Ҽ��� ������ ���ϴ� ���α׷��� 
    �ۼ��ϼ���. �Ҽ� : ����� 1�� �ڱ� �ڽ� ���� ��*/
int input;

void InputInt() {
    printf("���� ������ �Է��ϼ���. >> ");
    scanf_s("%d", &input);
    printf("�Է��� ���ڴ� %d �Դϴ�.", input);
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