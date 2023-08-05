

#include <stdio.h>
#include <stdlib.h>
#include <time.h>


// 난수 생성부분
// 배열을 리턴시킬수 있는가?

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