

#include <stdio.h>
#include <stdlib.h>
#include <time.h>


// ���� �����κ�
// �迭�� ���Ͻ�ų�� �ִ°�?

int NanSu()
{

	srand(time(NULL));
	int random [3];
	for (int i = 0; i < 3; i++)
	{
		random [i] = rand() % 9 + 1;
	}
	return random;
}

int main()
{
	int first = Nansu();
	printf("%d", random[0]);


}