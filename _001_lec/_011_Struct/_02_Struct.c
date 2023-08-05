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
	printf("이름 : ");
	fgets(human.name, sizeof(human.name), stdin);
	human.name[strlen(human.name) - 1] = '\0';

	printf("나이 >> ");
	scanf_s("%d", &human.age);
	printf("키 >> ");
	scanf_s("%f", &human.height);

	printf("****************\n");
	printf("이름 : %s\n", human.name);
	printf("나이 : %d\n", human.age);
	printf("키 : %.2f\n", human.height);
	printf("****************\n");
}