#include <stdio.h>

/*19. ���� 10���� �Է¹޾� �迭�� �����ϰ�, 
�� �����߿��� 2�� ����� 3�� ����� ����ϼ���*/

void main() {
	int arr[10];

	for (int i = 0; i < 10; i++)
	{
		printf("%d��° ������ �Է��ϼ��� >> ", i + 1);
		scanf_s("%d", &arr[i]);
	}
	printf("�Է��� �� : ");
	for (int i = 0; i < 10; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
	printf("2�� ����� 3�� ��� : ");
	for (int i = 0; i < 10; i++)
	{
		if (arr[i] % 2 == 0 || arr[i] % 3 == 0)
		{
			printf("%d ", arr[i]);
		}
	}
}