#include <stdio.h>

void KorPresentation()
{
	printf("���� �Է� >> ");
}
void EngPresentation()
{
	printf("input integer >> ");
}

int GetInputVal(void (*fptr)())
{
	int num = 0;
	fptr();
	scanf_s("%d", &num);
	return num;
}

void main()
{
	int val = GetInputVal(KorPresentation);
	printf("�Է� ���� %d\n", val);
	val = GetInputVal(EngPresentation);
	printf("input val is %d\n", val);
}