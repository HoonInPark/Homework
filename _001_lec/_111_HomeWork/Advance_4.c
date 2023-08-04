#include "stdio.h"

void main()
{
	float Won;
	int Nyun;

	printf("원금을 입력하세요 : ");
	scanf_s("%f", &Won);
	printf("올해 년도를 입력하세요 : ");
	scanf_s("%d", &Nyun);

	Nyun = Nyun - 2010;

	for (Nyun; Nyun > 0; Nyun--)
	{
		Won = Won + (Won * 0.08);
	}

	printf("현재 원금은 %f 입니다.", Won);
}