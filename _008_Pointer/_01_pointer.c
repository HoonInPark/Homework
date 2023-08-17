#include <stdio.h>

void main() 
{
	int num = 000;
	int* pnum = &num;

	printf("%llu, %p\n", pnum, pnum);
	printf("%llu, %p\n", &pnum, &pnum);

	printf("%d, %d\n", num, *pnum);

	num = 999;
	printf("%d, %d\n", num, *pnum);

	*pnum = 0200;
	printf("%d, %d\n", num, *pnum);
}