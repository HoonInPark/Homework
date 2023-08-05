#include <stdio.h>

void GetHourMinSec(int totalSec, int* pHour, int* pMin, int* pSec)
{
	int hour = 0, minute = 0, sec = 0;

	sec = totalSec % 60;
	minute = totalSec / 60;
	hour = minute / 60;
	minute = minute % 60;

	*pHour = hour;
	*pMin = minute;
	*pSec = sec;

}

void main()
{
	int hour = 0, minute = 0, sec = 0;
	GetHourMinSec(3725, &hour, &minute, &sec);
	printf("%02d:%02d:%02d:\n", hour, minute, sec);
	GetHourMinSec(4000, &hour, &minute, &sec);
	printf("%02d:%02d:%02d:\n", hour, minute, sec);
}