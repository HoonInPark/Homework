#include <stdio.h>

void main() {
	int i;

	printf("<369����> \n\n");
	printf("1~99������ ���� �Է� >> ");
	scanf_s("%d", &i);

	if ((i / 10 == 3 || i / 10 == 6 || i / 10 == 9) && (i % 10 == 3 || i % 10 == 6 || i % 10 == 9))
		printf("�ڼ�¦¦");
	else if ((i / 10 == 3 || i / 10 == 6 || i / 10 == 9) || (i % 10 == 3 || i % 10 == 6 || i % 10 == 9))
		printf("�ڼ�¦");

}