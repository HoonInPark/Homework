#include <stdio.h>

/*3. ���� ���� �Է¹ް�, �� ����ŭ 5�� ����� ����ϼ���.
   ��) 7 -> 5 00 05 20 25 30 35*/

void main() {
	int input;

	printf("���� ������ �Է��ϼ��� >> ");
	scanf_s("%d", &input);

	if (input > 0) {
		for (int i = 0; i <= input; i++)
		{
			printf("%d\n", 5 * i);
		}
	}
	else
	{
		printf("���� ������ �Է����ּ���.");
	}
}