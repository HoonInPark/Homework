/*나무를 찍을 회수와 몇번마다 "쿵"을 반복할지 입력받고
   출력하세요*/
#include "stdio.h"
void main() {
	int i,cut,rep;
	
	printf("나무를 몇번 찍을 건가요?>>>");
	scanf_s("%d", &cut);//몇번 찍을 것인지
	printf("몇번마다 쿵을 반복하실 건가요?>>>");
	scanf_s("%d", &rep);//몇번마다 "쿵" 반복

	for (i = 1; i <= cut; i++ ) {
		if (i % rep == 0) {
			printf("쿵");
		}
	}
	

}