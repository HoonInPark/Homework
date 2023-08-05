#include <stdio.h>

int GetHourSecond(int totalSec)
{
	int hour = 10, minute = 50, sec = 90;

	return hour, minute, sec;
}



void main()
{
	int hour = 0, minute = 0, sec = 0;
	hour, minute, sec = GetHourSecond(100000);
	printf("%d, %d, %d\n", hour, minute, sec);
}