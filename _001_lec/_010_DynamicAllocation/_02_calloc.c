#include <stdio.h>
# include <stdlib.h>

#define KOR_NUM 3

void main()
{
	/*
	* 동적할당을 하고나서 할당한 모든 메모리를 0으로 초기화한다.
	* 아래 두 줄의 코드와 calloc의 1줄이 동일한 코드이다.
	* int* pKor = (int*)malloc(KOR_NUM * sizeof(int)); => 
	여기서는 메모리를 얼마나 할당할지 정해줬을뿐,
	메모리상에 어디에 위치해 있는지는 정해주지 않았다. 
	그래서 컴퓨터는 이전의 다른 변수가 사용했던 주소 값을 집어넣는다. 
	memset없이 malloc을 쓰면 다른 변수를 참조하는 버그가 생긴다. 
	포인트의 쓰레기 값인 것이다. 
	* memset(pKor, 0, sizeof(int) * KOR_NUM);
	* 이것의 의미는, pKor의 메모리 시작위치를 0으로 해주고,
	거기서부터 얼마만큼 변수가 메모리를 차지하는지 범위를 써준 것.
	*/

	int* pKor = (int*)calloc(KOR_NUM, sizeof(int)); //calloc을 쓰면, 주소값에 쓰레기 값이 들어갈일이 없다. 추천!
	for (int i = 0; i < KOR_NUM; i++)
	{
		printf("%d번째 국어점수 입력 >> ", i+1);
		scnaf_s("%d", &pKor[i]);
	}

	printf("\n");

	for (int i = 0; i < KOR_NUM; i++)
	{
		printf("%d번째 국어점수 %d\n", i + 1, pKor[i]);
	}
}