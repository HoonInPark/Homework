#include <stdio.h>

/*17.int�迭�� 10�� �����ض�.
 int�迭�� 3�� ����� ���ʴ�� �����ض�.
 �׸��� �Ųٷ� ����ض�.*/

void main() {
	int arr[10];
	int j = 1;

	for (int i = 0; i < 10; i++)
	{
		arr[i] = 3 * j++;
	}

	for (int i = 9; i >= 0; i--)
	{
		printf("%d\n", arr[i]);
	}
}