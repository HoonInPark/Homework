#include <stdio.h>

/*06. ����ڷκ��� ������ �Է¹޽��ϴ�.
   �Է� ���� ���� ��� ���մϴ�
   ����ڰ� 0�� �Է��ϸ� ���� ����մϴ�
   �׸��� ���α׷��� �����մϴ�.*/

void main() {
	int input = 0;
	int sum = 0;

	for (int i = 0; i < 0; i)
	{
		printf("������ �Է��ϼ��� >> ");
		scanf_s("%d", &input);
		if (input != 0) {
			sum += input;
		}
		else if (input == 0) {
			printf("�Է��� ������ ���� %d �Դϴ�.", sum);
			break;
		}
	}
}