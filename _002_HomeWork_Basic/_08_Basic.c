#include <stdio.h>

/*8. ����ڷκ��� ������ �Է¹޽��ϴ�.�Է¹��� ���� ��Ӵ��մϴ�.
	����ڰ� 0�� �Է��ϸ� ���� ����մϴ�. �׸��� ���α׷��� �����մϴ�.*/ 


void main() {
	int input;
	int sum = 0;
	do {
		printf("������ �Է��ϼ��� >> ");
		scanf_s("%d", &input);
		sum += input;
	} while (input != 0);

	printf("�Է��� ������ ���� %d�Դϴ�.", sum);
	printf("���α׷��� �����մϴ�.");
}