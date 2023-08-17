#include <stdio.h>

/*
<2차원 배열>
1차원 배열을 층을 쌓은 것.
논리적으로 직사각형의 형태

다음은 배열의 인덱스를 도식화 한 것.
 00 01 02 03 04 
 10 11 12 13 14
 20 21 22 23 24
 
다음은 이 배열의 두자리 인덱스에 대응되는 
엘레먼트의 값을 나타낸 것.
 a s d f g
 q w e r t
 y u i o p
  
*/

void main()
{
	int kor[3][5];

	for (int  i = 0; i < 3; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			kor[i][j] = i * 5 + j;
		}
		printf("\n");
	}

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			printf("%2d ", kor[i][j]);
		}
		printf("\n");
	}
}