/*while���� �̿��ؼ� 100���� 1���� Ȧ���� ����ϼ���*/

#include "stdio.h"

void main() {

	int count = 100;

	while (count>1)
	{
		count--;
		if (count % 2 != 0) {
			printf("%d ", count);
		}else{
		}	
	}
}