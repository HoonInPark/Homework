#include <stdio.h>

/*8. ���� ������ �Է¹޾� �� ���������� �Ҽ��� ������ ���ϴ� ���α׷���
	�ۼ��ϼ���. �Ҽ� : ����� 1�� �ڱ� �ڽ� ���� ��*/
int input;

void InputInt() {
	printf("���� ������ �Է��ϼ���. >> ");
	scanf_s("%d", &input);
	printf("�Է��� ���ڴ� %d �Դϴ�.\n", input);
}

int IsPrimeNum() {
	int num_div = input;
	int isPrimeNum = 1;

	while (num_div > 2)
	{
		// 2 3 5 7 11 13 17 ...
		num_div--;
		if (!(input % num_div))
			isPrimeNum = 0;
	}

	return isPrimeNum;
}

void PrintPrimeNum() {
	while(input > 1)
	{
		if (IsPrimeNum())
			printf("%d\n", input);
		input--;
	}
}

void main() {
	InputInt();
	PrintPrimeNum();
}