#include <stdio.h>

/*9. 미국 국기를 출력하는 프로그램을 작성하세요. 
    최대한 미국 국기처럼 보이게 만드세요.*/

/*
 * * * * * * --------------- 15개
  * * * * *  --------------- 15개
 * * * * * * --------------- 15개
  * * * * *  --------------- 15개
 * * * * * * --------------- 15개
 --------------------------- 37개
 --------------------------- 37개
 --------------------------- 37개
 --------------------------- 37개
 */

void FiveLine() {
	for (int i = 1; i < 6; i++)
	{
		if (i % 2 == 1)
		{
			printf("* * * * * * ---------------\n");
		}
		else if (i % 2 == 0)
		{
			printf(" * * * * *  ---------------\n");
		}
	}

}

void UnderLine() {
	for (int i = 1; i < 5; i++)
	{
		printf("---------------------------\n");
	}
}

void main() {
	FiveLine();
	UnderLine();
}