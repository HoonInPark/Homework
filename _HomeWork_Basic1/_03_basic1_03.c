#include "stdio.h"

/* �ΰ��� �Ǽ��� �Է¹ް� ���� ���� ���� ��������
+ - / * ��ȣ�� �Է¹ް� �������� ����϶�*/

void main() {
	char op;

	float num0;
	float num2;
	float result;


	printf("�����ڸ� �Է��ϼ���. >> : "); // ���� �����ڸ� �Է��ϴ� scanf_s �� ���� ���� �ø��ϱ� �ڵ尡 �����̵�. ������
	scanf_s("%c", &op);
	printf("�Ǽ�0�� �Է��ϼ���. >> : ");
	scanf_s("%f", &num0);
	printf("�Ǽ�2�� �Է��ϼ���. >> : ");
	scanf_s("%f", &num2);

	switch (op)
	{
	case '+':
		result = num0 + num2;
		printf("�μ��� ���� %.2f �Դϴ�.", result);
		break;
	case '-':
		result = num0 - num2;
		printf("�μ��� ������ %.2f �Դϴ�.", result);
		break;
	case '*':
		result = num0 * num2;
		printf("�μ��� ���� %.2f �Դϴ�.", result);
		break;
	case '/':
		result = num0 / num2;
		printf("�μ��� �������� %.2f �Դϴ�.", result);
		break;
	default:
		printf("�ùٸ� �����ڸ� �Է����ּ���.");
		break;
	}
}