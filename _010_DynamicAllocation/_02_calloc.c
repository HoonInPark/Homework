#include <stdio.h>
#include <stdlib.h>

#define KOR_NUM 3

void main()
{
	int* pKor = (int*)calloc(KOR_NUM, sizeof(int)); // calloc는 메모리 상의 위치를 알아서 정해줌
	
	for (int i = 0; i < KOR_NUM; i++)
	{
		printf("%d번째 국어점수 입력 >> ", i + 1);
		scanf_s("%d", &pKor[i]);
	}
	printf("\n");

	for (int i = 0; i < KOR_NUM ; i++)
	{
		printf("%d번째 국어점수 : %d\n", i + 1, pKor[i]);
	}
	
	free(pKor);
}