#include <stdio.h>

/*�Լ����) �Է¹��� ������ �������� ����ϴµ� �������� ���
  ��) 3*9=27
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

    printf("�������� ���� �Է����ּ��� >> ");
    scanf_s("%d", &input);

    MulTables(input);
}