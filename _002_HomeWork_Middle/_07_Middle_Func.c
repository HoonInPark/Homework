#include <stdio.h>

/*7. �� ���� ������ �޾Ƽ�, �� ���� ���� ���밪�� ����Ͽ� ����ϴ� �޼����
   �� �޼��带 ����غ�����. �޼��� ȣ�� �� ���޵Ǵ� ���� ������ �������
    ���밪�� ���Ǿ ��µǾ�� �մϴ�*/

int AbsoluteValue(int input1 ,int input2) {
    
    int sub = 0;
    sub = input1 - input2;

    if (sub < 0)
    {
        sub = -1 * sub;
        return sub;
    }
    else
    {
        return sub;
    }
}

void main() {
    int input1, input2;

    printf("�� ���� ������ �Է��ϼ��� >> ");
    scanf_s("%d %d", &input1, &input2);

    printf("�� ���� ���� ���밪�� %d", AbsoluteValue(input1, input2));
}