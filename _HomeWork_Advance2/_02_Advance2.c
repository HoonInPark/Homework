#include  "stdio.h"

/*2. 돈의 액수를 입금하세요
   입금한 돈을 오만원권, 만원권, 오천원권, 천원권,
   500원동전, 100원동전, 50원동전, 10원동전, 1원동전 각 몇개로 변환되는지 출력하세요
   출력 개수는 단위가 큰 것 순서로 계산합니다
   예를 들어 78670원이면 
   <오만원 1매, 만원 2매, 오천원 1매, 천원 3매, 500원 1개, 100원 1개, 50원 1개, 10원 2개> 입니다.*/

void main() {
	int price = 0;
	int leftMoney;

	printf("입금할 돈의 액수를 입력하세요 >> : ");
	scanf_s("%d", &price);

	int money50000 = price / 50000;
	leftMoney = price % 50000;
	int money10000 = leftMoney / 10000;
	leftMoney %= 10000;
	int money5000 = leftMoney / 5000;
	leftMoney %= 5000;
	int money1000 = leftMoney / 1000;
	leftMoney %= 1000;
	int coin500 = leftMoney / 500;
	leftMoney %= 500;
	int coin100 = leftMoney / 100;
	leftMoney %= 100;
	int coin50 = leftMoney / 50;
	leftMoney %= 50;
	int coin10 = leftMoney / 10;
	leftMoney %= 10;
	int coin1 = leftMoney / 1;
	leftMoney %= 1;

	printf("입력한 금액은 %d원 입니다.", price);
	printf("변환된 금액은 오만원 %d매, 만원 %d매, 오천원 %d매, 천원 %d매, 500원 %d개, 100원 %d개, 50원 %d개, 10원 %d개 1원 %d개",
		money50000, money10000, money5000, money1000, coin500, coin100, coin50, coin10, coin1);
}