#include <stdio.h>
# include <stdlib.h>

#define KOR_NUM 3

void main()
{
	/*
	* �����Ҵ��� �ϰ��� �Ҵ��� ��� �޸𸮸� 0���� �ʱ�ȭ�Ѵ�.
	* �Ʒ� �� ���� �ڵ�� calloc�� 1���� ������ �ڵ��̴�.
	* int* pKor = (int*)malloc(KOR_NUM * sizeof(int)); => 
	���⼭�� �޸𸮸� �󸶳� �Ҵ����� ����������,
	�޸𸮻� ��� ��ġ�� �ִ����� �������� �ʾҴ�. 
	�׷��� ��ǻ�ʹ� ������ �ٸ� ������ ����ߴ� �ּ� ���� ����ִ´�. 
	memset���� malloc�� ���� �ٸ� ������ �����ϴ� ���װ� �����. 
	����Ʈ�� ������ ���� ���̴�. 
	* memset(pKor, 0, sizeof(int) * KOR_NUM);
	* �̰��� �ǹ̴�, pKor�� �޸� ������ġ�� 0���� ���ְ�,
	�ű⼭���� �󸶸�ŭ ������ �޸𸮸� �����ϴ��� ������ ���� ��.
	*/

	int* pKor = (int*)calloc(KOR_NUM, sizeof(int)); //calloc�� ����, �ּҰ��� ������ ���� ������ ����. ��õ!
	for (int i = 0; i < KOR_NUM; i++)
	{
		printf("%d��° �������� �Է� >> ", i+1);
		scnaf_s("%d", &pKor[i]);
	}

	printf("\n");

	for (int i = 0; i < KOR_NUM; i++)
	{
		printf("%d��° �������� %d\n", i + 1, pKor[i]);
	}
}