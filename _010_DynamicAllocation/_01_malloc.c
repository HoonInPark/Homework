#include <stdio.h>
#include <stdlib.h>
#include <cstring>

#define KOR_NUM 3


// 동적할당 리소스를 줄이기 위해서 동적할당을 한다.
void main()
{
	int people;
	printf("학생인원수를 입력하세요 >> ");
	scanf_s("%d", &people);

	int* pKor = (int*)malloc(sizeof(int) * people);
	memset(pKor, 0, sizeof(int) * KOR_NUM); // 메모리상의 위치를 임의로 정해줌 이 두줄이 calloc 한줄이랑 같다.

	for (int i = 0; i < people; i++)
	{
		printf("%d번째 국어점수 입력 >> ", i + 1);
		scanf_s("%d", &pKor[i]); // (pKor + 1)를 써줘도 된다.
	}
	printf("\n");

	for (int i = 0; i < people; i++)
	{
		printf("%d번째 국어점수 : %d\n", i + 1, pKor[i]);
	}

	free(pKor);
}