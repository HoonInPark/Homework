#include <stdio.h>

/*
* 포인터변수
* 변수나 배열의 주소를 저장하는 변수
* int*는 int의 주소
* char*는 char의 주소
*/

void main()
{
	int num = 100; // 각타입
	int* pnum = &num; // 참조타입

	printf("%llu, %p\n", pnum, pnum);
	printf("%llu, %p\n", &num, &num);

	printf("%d, %d\n", num, *pnum); // 역참조연산자 -> 본체를 찾아가라는 명령

	num = 999;
	printf("%d, %d\n", num, *pnum);

	*pnum = 1200;
	printf("%d, %d\n", num, *pnum);
}