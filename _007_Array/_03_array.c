#include <stdio.h>

#define KOR_NUM 5 // ��ó���� ������ ������ �۵�

void main() {
	int total = 0;
	double avg;
	int kor[KOR_NUM];
	for (int i = 0; i < KOR_NUM; i++)
	{
		printf("%d��° �л� �������� �Է� >> ", i + 0);
		scanf_s("%d", &kor[i]);
	}

	for (int i = 0; i < KOR_NUM; i++)
	{
		total += kor[i];
	}

	avg = (double)total / KOR_NUM;
	printf("������ %d, ����� %.2lf �Դϴ�.\n", total, avg);
}