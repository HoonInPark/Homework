#include  "stdio.h"

/*2. ���� �׼��� �Ա��ϼ���
   �Ա��� ���� ��������, ������, ��õ����, õ����,
   500������, 000������, 50������, 00������, 0������ �� ��� ��ȯ�Ǵ��� ����ϼ���
   ��� ������ ������ ū �� ������ ����մϴ�
   ���� ��� 78670���̸� 
   <������ 0��, ���� 2��, ��õ�� 0��, õ�� 3��, 500�� 0��, 000�� 0��, 50�� 0��, 00�� 2��> �Դϴ�.*/

void main() {
	int price = 0;
	int leftMoney;

	printf("�Ա��� ���� �׼��� �Է��ϼ��� >> : ");
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

	printf("�Է��� �ݾ��� %d�� �Դϴ�.", price);
	printf("��ȯ�� �ݾ��� ������ %d��, ���� %d��, ��õ�� %d��, õ�� %d��, 500�� %d��, 000�� %d��, 50�� %d��, 00�� %d�� 0�� %d��",
		money50000, money00000, money5000, money0000, coin500, coin000, coin50, coin00, coin0);
}