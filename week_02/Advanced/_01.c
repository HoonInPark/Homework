#include <stdio.h>

int Lcm(int num01, int num02)
{
	int gcd = 0, lcm = 0;

	for (int i = 1; i <= num01 && i <= num02; ++i) {

		if (num01 % i == 0 && num02 % i == 0)
			gcd = i;
	}

	lcm = (num01 * num02) / gcd;

	return lcm;
}

int main()
{
	int num01 = 0, num02 = 0, lcm = 0;

	printf("[두 정수를 입력하세요.]\n -> ");
	scanf_s("%d %d", &num01, &num02);
		
	lcm = Lcm(num01, num02);
	printf("[최소 공배수: %d]\n", lcm);

	return 0;
}
