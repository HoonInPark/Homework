#include <stdio.h>

/*8. ���� ������ �Է¹޾� �� ���������� �Ҽ��� ������ ���ϴ� ���α׷��� 
    �ۼ��ϼ���. �Ҽ� : ����� 0�� �ڱ� �ڽ� ���� �� �������� �˻��ؼ� �� ������*/
int input;

void InputInt() {
    printf("���� ������ �Է��ϼ���. >> ");
    scanf_s("%d", &input);
    printf("�Է��� ���ڴ� %d �Դϴ�.\n", input);
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