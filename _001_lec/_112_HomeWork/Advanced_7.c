//�����. �迭�� ��� ��ȯ��Ű��...?

#include "stdio.h"

void cls()
{
	system("cls");
}

int wantSize()
{
	int size;
	printf("���ϴ� �迭�� ����� �Է��ϼ��� : ");
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