#include <stdio.h>
#include <stdlib.h>
#include <cstring>

#define KOR_NUM 3


// �����Ҵ� ���ҽ��� ���̱� ���ؼ� �����Ҵ��� �Ѵ�.
void main()
{
	int people;
	printf("�л��ο����� �Է��ϼ��� >> ");
	scanf_s("%d", &people);

	int* pKor = (int*)malloc(sizeof(int) * people);
	memset(pKor, 0, sizeof(int) * KOR_NUM); // �޸𸮻��� ��ġ�� ���Ƿ� ������ �� ������ calloc �����̶� ����.

	for (int i = 0; i < people; i++)
	{
		printf("%d��° �������� �Է� >> ", i + 1);
		scanf_s("%d", &pKor[i]); // (pKor + 1)�� ���൵ �ȴ�.
	}
	printf("\n");

	for (int i = 0; i < people; i++)
	{
		printf("%d��° �������� : %d\n", i + 1, pKor[i]);
	}

	free(pKor);
}