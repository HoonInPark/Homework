#include <stdio.h>
#include <string.h>

void main()
{
	char name[20];
	int age;
	float height;

	printf("�̸� >> ");
	fgets(name, sizeof(name), stdin);

	name[strlen(name) - 1] = '\0';
	printf("���� >> ");
	scanf_s("%d", &age);
	printf("Ű >> ");
	scanf_s("%f", &height);

	printf("****************\n");
	printf("�̸� : %s\n", name);
	printf("���� : %d\n", age);
	printf("Ű : %.2f\n", height);
	printf("****************\n");
}