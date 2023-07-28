/*while문을 이용해서 1부터 10까지 중에 짝수만 출력하세요*/
#include "stdio.h"
void main() {
	int count = 0;

	while ( count < 10)
	{
		count++;
		if (count % 2 == 0) {
			printf("%d", count);
		}
		else {
		}
		
	}
}