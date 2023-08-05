//살려줘. 배열을 어떻게 반환시키지...?

#include "stdio.h"

void cls()
{
	system("cls");
}

int wantSize()
{
	int size;
	printf("원하는 배열의 사이즈를 입력하세요 : ");
	scanf_s("%d", &size);

	int* Arr = (int*)malloc(sizeof(int) * size);

	for (int i = 0; int < size; i++)
	{
		Arr[i] = i;
	}
	return Arr;

}

int makeArr(int want)
{
	int i;
	int Arr[want];


}



void main()
{
	cls();
	int want = wantSize();
	int Arr = makeArr(want);

}