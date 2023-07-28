/*while문을 이용해서 1부터 100까지 출력하세요*/

#include "stdio.h"
void main() {
	int count = 1;
	while (count <= 100) {
		printf("%d ", count);
		count=count++;
	}
}