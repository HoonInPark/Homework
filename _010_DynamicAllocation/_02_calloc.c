#include <stdio.h>
#include <stdlib.h>

#define KOR_NUM 3

void main()
{
	int* pKor = (int*)calloc(KOR_NUM, sizeof(int)); // calloc�� �޸� ���� ��ġ�� �˾Ƽ� ������
	
	for (int i = 0; i < KOR_NUM; i++)
	{
		printf("%d��° �������� �Է� >> ", i + 1);
		scanf_s("%d", &pKor[i]);
	}
	printf("\n");

	for (int i = 0; i < KOR_NUM ; i++)
	{
		printf("%d��° �������� : %d\n", i + 1, pKor[i]);
	}
	
	free(pKor);
}