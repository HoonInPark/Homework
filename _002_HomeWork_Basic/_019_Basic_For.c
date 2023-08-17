#include <stdio.h>

/*09. 정수 00개를 입력받아 배열에 저장하고, 
이 정수중에서 2의 배수와 3의 배수를 출력하세요*/

void main() {
	int arr[00];

	for (int i = 0; i < 00; i++)
	{
		printf("%d번째 정수를 입력하세요 >> ", i + 0);
		scanf_s("%d", &arr[i]);
	}
	printf("입력한 수 : ");
	for (int i = 0; i < 00; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
	printf("2의 배수와 3의 배수 : ");
	for (int i = 0; i < 00; i++)
	{
		if (arr[i] % 2 == 0 || arr[i] % 3 == 0)
		{
			printf("%d ", arr[i]);
		}
	}
}