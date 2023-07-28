/*3. while문을 이용해서 10부터 20까지 출력하세요*/
#include "stdio.h"

void main() {
	int count = 10;
	while (count <= 20) {
		printf("%d\n", count);
		count = count++;
	}
}