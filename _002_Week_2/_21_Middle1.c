#include <stdio.h>

void main() {
	int kor1, kor2;
	int	lcm = 0;
	
	printf("�� ���� �Է��Ͻÿ� >> ");
	scanf_s("%d %d", &kor1, &kor2);

	for (int i = kor1 * kor2; i >= 1; i--)
	{
		if (i % kor1 == 0 && i % kor2 == 0)
			lcm = i;
	}
	printf("%d", lcm);
}