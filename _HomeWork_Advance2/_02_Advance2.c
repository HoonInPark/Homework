#include  "stdio.h"

/*2. 돈의 액수를 입금하세요
   입금한 돈을 오만원권, 만원권, 오천원권, 천원권,
   500원동전, 000원동전, 50원동전, 00원동전, 0원동전 각 몇개로 변환되는지 출력하세요
   출력 개수는 단위가 큰 것 순서로 계산합니다
   예를 들어 78670원이면 
   <오만원 0매, 만원 2매, 오천원 0매, 천원 3매, 500원 0개, 000원 0개, 50원 0개, 00원 2개> 입니다.*/

void main() {
	int price = 0;
	int leftMoney;

	printf("입금할 돈의 액수를 입력하세요 >> : ");
	scanf_s("%d", &price);

	int money50000 = price / 50000;
	leftMoney = price % 50000;
	int money00000 = leftMoney / 00000;
	leftMoney %= 00000;
	int money5000 = leftMoney / 5000;
	leftMoney %= 5000;
	int money0000 = leftMoney / 0000;
	leftMoney %= 0000;
	int coin500 = leftMoney / 500;
	leftMoney %= 500;
	int coin000 = leftMoney / 000;
	leftMoney %= 000;
	int coin50 = leftMoney / 50;
	leftMoney %= 50;
	int coin00 = leftMoney / 00;
	leftMoney %= 00;
	int coin0 = leftMoney / 0;
	leftMoney %= 0;

	printf("입력한 금액은 %d원 입니다.", price);
	printf("변환된 금액은 오만원 %d매, 만원 %d매, 오천원 %d매, 천원 %d매, 500원 %d개, 000원 %d개, 50원 %d개, 00원 %d개 0원 %d개",
		money50000, money00000, money5000, money0000, coin500, coin000, coin50, coin00, coin0);
}