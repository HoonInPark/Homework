#include <stdio.h>
#include <stdlib.h>

#define KOR_NUM 3

void main()
{
	// malloc == memory allocation (메모리를 Heap에 할당한다) => malloc(할당할 바이트크기)
	int* pKor = (int*)malloc(sizeof(int) * KOR_NUM);
	for (int i = 0; i < KOR_NUM; i++)
	{
		printf("%d번째 국어점수 입력 >>", i+1);
		scanf_s("%d", &pKor[i]);
	}

	printf("\n");

	for (int i = 0; i < KOR_NUM; i++)
	{
		printf("%d번째 국어점수 >> %d\n", i+1, pKor[i]);
	}

	free(pKor);
	//int * pKor;
	//int *pKor;
	//int num1 = 10, num2 = 20; num;
	//num = num1 * num2;

}