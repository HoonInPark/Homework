#include <stdio.h>

void KorPresentation()
{
	printf("���� �Է� >> ");
}

void EngPresentation()
{
	printf("Input integer >> ");
}

int GetInputValue(void (*fptr)())
{
	int num = 0;
	fptr();
	scanf_s("%d", &num);
	
	return num;
}

void main()
{
	int val = GetInputValue(KorPresentation);
	printf("�Է°��� %d\n", val);
	val = GetInputValue(EngPresentation);
	printf("Input Value is %d\n", val);
}