#include <stdio.h>

/*18.int�迭�� 10�� �����ض�
  ����ڷκ��� 10���� ���� �Է¹ް�
  ������� ����ϰ� 
  ������ ���ϼ���  */

void main() {
	int arr[10];
	int sum = 0;

	for (int i = 0; i < 10; i++)
	{
		printf("%d��° ���� �Է����ּ��� >> ", i + 1);
		scanf_s("%d", &arr[i]);
		printf("�Է��� ���� %d �Դϴ�.\n", arr[i]);
		sum += arr[i];
		printf("�Է��� ���� ���� %d �Դϴ�.\n", sum);
	}

}