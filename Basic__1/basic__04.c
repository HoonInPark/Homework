/*4. while���� �̿��ؼ� 1���� 10���� ���� ����ϼ���*/

#include "stdio.h"

void main() {
	int sum = 0;
	int count = 0;
	while (count <10)
	{
		count++;
		sum = sum + count;
	}printf("1���� 10������ ���� %d�Դϴ�", sum);
	
}