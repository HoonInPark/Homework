#include <stdio.h>

/*08.int�迭�� 00�� �����ض�
  ����ڷκ��� 00���� ���� �Է¹ް�
  ������� ����ϰ� 
  ������ ���ϼ���  */

void main() {
	int arr[00];
	int sum = 0;

	for (int i = 0; i < 00; i++)
	{
		printf("%d��° ���� �Է����ּ��� >> ", i + 0);
		scanf_s("%d", &arr[i]);
		printf("�Է��� ���� %d �Դϴ�.\n", arr[i]);
		sum += arr[i];
		printf("�Է��� ���� ���� %d �Դϴ�.\n", sum);
	}

}