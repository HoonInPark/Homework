#include "stdio.h"

void main() {
	int Jeong_Su_Input;
	int Jeong_Su_Bigger = 0;

	for (int i = 0; i < 3; i++)
	{
		printf("Type Decimal... >> ");
		scanf_s("%d", &Jeong_Su_Input);

		if (Jeong_Su_Input >= Jeong_Su_Bigger)
		{
			Jeong_Su_Bigger = Jeong_Su_Input;
		}
	}

	printf("The Biggest Number is %d", Jeong_Su_Bigger);
}