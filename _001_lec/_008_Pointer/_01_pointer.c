#include <stdio.h>

/*
* �����ͺ���
* ������ �迭�� �ּҸ� �����ϴ� ����
* int*�� int�� �ּ�
* char*�� char�� �ּ�
*/

void main()
{
	int num = 100; // ��Ÿ��
	int* pnum = &num; // ����Ÿ��

	printf("%llu, %p\n", pnum, pnum);
	printf("%llu, %p\n", &num, &num);

	printf("%d, %d\n", num, *pnum); // ������������ -> ��ü�� ã�ư���� ���

	num = 999;
	printf("%d, %d\n", num, *pnum);

	*pnum = 1200;
	printf("%d, %d\n", num, *pnum);
}