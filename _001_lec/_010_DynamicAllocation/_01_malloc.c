#include <stdio.h>
#include <stdlib.h>

#define KOR_NUM 3

void main()
{
	// malloc == memory allocation (�޸𸮸� Heap�� �Ҵ��Ѵ�) => malloc(�Ҵ��� ����Ʈũ��)
	int* pKor = (int*)malloc(sizeof(int) * KOR_NUM);
	for (int i = 0; i < KOR_NUM; i++)
	{
		printf("%d��° �������� �Է� >>", i+1);
		scanf_s("%d", &pKor[i]);
	}

	printf("\n");

	for (int i = 0; i < KOR_NUM; i++)
	{
		printf("%d��° �������� >> %d\n", i+1, pKor[i]);
	}

	free(pKor);
	//int * pKor;
	//int *pKor;
	//int num1 = 10, num2 = 20; num;
	//num = num1 * num2;

}