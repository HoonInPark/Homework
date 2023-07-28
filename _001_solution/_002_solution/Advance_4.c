#include "stdio.h"

void main() {
	double Won_Gum = 24.0;

	for (int i = 0; i < (2010 - 1627); i++)
	{
		Won_Gum *= 1.08;
	}

	printf("%lf", Won_Gum);
}