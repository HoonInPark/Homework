#include <stdio.h>
#include <string.h>

struct Human
{
	char name[20];
	int age;
	float height;
};

void main()
{
	struct Human human;
	printf("�̸� : ");
	fgets(human.name, sizeof(human.name), stdin);
	human.name[strlen(human.name) - 1] = '\0';

	printf("���� >> ");
	scanf_s("%d", &human.age);
	printf("Ű >> ");
	scanf_s("%f", &human.height);

	printf("****************\n");
	printf("�̸� : %s\n", human.name);
	printf("���� : %d\n", human.age);
	printf("Ű : %.2f\n", human.height);
	printf("****************\n");
}