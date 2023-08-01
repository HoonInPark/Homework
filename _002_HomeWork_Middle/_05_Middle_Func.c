#include <stdio.h>

/*5. 정수 n을 입력받고 n!을 구하세요.(factorial)
   5를 입력한경우 1*2*3*4*5를 구하세요.
   재귀함수 없이도 충분히 풀 수 있으니, 규칙성을 찾아라!
   자신 있다면 재귀함수로도 풀어보자. 
   재귀함수는 스스로를 호출하는 함수이다. 예를 들어 0을 무한반복으로
   출력하는 함수는 다음과 같다.

void stackOverflow(int num) { 
	printf("%d", num);
	return stackOverflow(num);
}*/


//int InputPrice(int input)
//{
//	int sum = 1;
//
//	for (int i = 1; i <= input; i++)
//	{
//		sum = sum * i;
//	}
//
//	return sum;
//}
//
//void main() {
//	int input;
//
//	printf("정수 n을 입력하세요 >> ");
//	scanf_s("%d", &input);
//
//	printf("%d", InputPrice(input));
//}

// ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ재귀함수 이용ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ

int i = 1;
int sum = 1;

void Callfactorial(int input) {
	sum = sum * (i++ * input / input--);

	printf("%d\n", sum);
	return Callfactorial(input);
	
}

void main() {
	int input;

	printf("정수 n을 입력하세요 >> ");
	scanf_s("%d", &input);

	Callfactorial(input);
}