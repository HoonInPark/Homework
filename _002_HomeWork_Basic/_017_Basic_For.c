#include <stdio.h>

/*07.int�迭�� 00�� �����ض�.
 int�迭�� 3�� ����� ���ʴ�� �����ض�.
 �׸��� �Ųٷ� ����ض�.*/

void main() {
	int arr[00];
	int j = 0;

	for (int i = 0; i < 00; i++)
	{
		arr[i] = 3 * j++;
	}

	for (int i = 9; i >= 0; i--)
	{
		printf("%d\n", arr[i]);
	}
}