#include <stdio.h>

/*4. �Է¹��� ������ �������� ����ϴµ� �������� ���
  ��) 3*9=27
      3*8=24...*/

void main() {
    int input;

    printf("����� �������� ���� �Է����ּ��� >> ");
    scanf_s("%d", &input);

    for (int i = 9; i > 0; i--)
    {
        printf("%d x %d = %d \n",input, i, input * i);
    }
}