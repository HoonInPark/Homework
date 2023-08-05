#include <stdio.h>
#include <string.h>

void main()
{
	char name[20];
	int age;
	float height;

	printf("이름 >> ");
	fgets(name, sizeof(name), stdin);

	name[strlen(name) - 1] = '\0';
	printf("나이 >> ");
	scanf_s("%d", &age);
	printf("키 >> ");
	scanf_s("%f", &height);

	printf("****************\n");
	printf("이름 : %s\n", name);
	printf("나이 : %d\n", age);
	printf("키 : %.2f\n", height);
	printf("****************\n");
}