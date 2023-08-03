#include <stdio.h>

int _nValue = 0;
int _nTotal = 0;

int Total(int nTotal, int nValue, int nEnd)
{
	nTotal += nValue;
	if (nTotal >= nEnd)
	{
		_nTotal = nTotal;
		_nValue = nValue;

		return nTotal;
	}
	nValue++;

	return Total(nTotal, nValue, nEnd);;
}

int main() 
{
	int nTotal = 0, nValue = 0, nEnd = 1000;

	Total(nTotal, nValue, nEnd);
	printf("[총합 : %d / 더한 값 : %d]\n", _nTotal, _nValue);

	return 0;
}
