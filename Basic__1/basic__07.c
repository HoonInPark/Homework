/*while문을 이용해서 100부터 1까지 홀수만 출력하세요*/

#include "stdio.h"

void main() {

	int count = 100;

	while (count>1)
	{
		count--;
		if (count % 2 != 0) {
			printf("%d ", count);
		}else{
		}	
	}
}