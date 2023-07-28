/*세개의 숫자를 입력받아서 가장 큰 수를 출력하는 프로그램을 구현하라*/
#include "stdio.h"

void main() {
	double a, b, c;
	double max = 0;
	printf("세 수를 입력하시오.>>> ");
	scanf_s("%lf %lf %lf", &a, &b, &c);
	if (a > b && a > c) {
		max = a;
		printf("%lf", max);
	}
	else if (b > a && b > c) {
		max = b;
		printf("%lf", max);
	}
	else if(c > a && c >b){
		max = c; 
		printf("%lf", max);
	}
	else {
		printf("세 수가 같다");
	}
	
}