/*4. while문을 이용해서 1부터 10까지 합을 출력하세요*/

#include "stdio.h"

void main() {
	int sum = 0;
	int count = 0;
	while (count <10)
	{
		count++;
		sum = sum + count;
	}printf("1부터 10까지의 합은 %d입니다", sum);
	
}