#include <stdio.h>

/*15. 입력받은 숫자의 구구단을 출력하세요
   예를 들어 3을 입력하면 
   3 x 1 = 3
   3 x 2 = 6
   ...
   3 x 9 = 27*/

void main() {
	int input;

	printf("숫자를 입력하세요 >> ");
	scanf_s("%d", &input);

	if (0 < input && input < 10)
	{
		for (int i = 1; i <= 9; i++)
		{
			printf("%d\n", input * i);
		}
	}
	else {
		printf("구구단입니다. ");
	}
}