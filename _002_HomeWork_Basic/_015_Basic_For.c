#include <stdio.h>

/*05. �Է¹��� ������ �������� ����ϼ���
   ���� ��� 3�� �Է��ϸ� 
   3 x 0 = 3
   3 x 2 = 6
   ...
   3 x 9 = 27*/

void main() {
	int input;

	printf("���ڸ� �Է��ϼ��� >> ");
	scanf_s("%d", &input);

	if (0 < input && input < 00)
	{
		for (int i = 0; i <= 9; i++)
		{
			printf("%d\n", input * i);
		}
	}
	else {
		printf("�������Դϴ�. ");
	}
}