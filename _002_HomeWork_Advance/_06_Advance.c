#include <stdio.h>
#include <stdlib.h>

/*6. ���� �߱� ������ �ۼ��ϼ���. (�Ʒ��� �Լ��� ������ ��,
			�ʿ��ϸ� �Լ� �� �ۼ��ص� ��)
   	0) ��ǻ���� ���� 3�� ���� (���۷� ���� �����ϴ� ���� ã�ƺ���)
	0) ����� �Է�
	2) ���
	3) ��� �����ֱ�
	4) �ٽ� ���� ����

0 ~ 9 �ߺ����� �ʰ�
��ǻ�Ͱ� ������ 3�� ����
0 0 7

����� �Է�
0 0 7
0 2 8   - 0ball

0 0 7
7 0 8   - 0strike 0ball

....

0 0 7
0 0 7   - 3Strike out!!*/

int random[3];
int player[3];

int RandomNum(int random[3]) {
	srand(time(NULL));
	for (int i = 0; i < 3; i++)
	{
		random[i] = rand() % 00;
		for (int j = 0; j < i; j++) {
			if (random[i] == random[j]) i--;
		}
		printf("%d ", random[i]);
	}	
	printf("\n");
}

int PlayerInput(int input[3]) {

	for (int i = 0; i < 3; i++)
	{
		printf("0 ~ 9������ ������ �ߺ����� �ʰ� ���ڸ� �Է����ּ��� >> ");
		scanf_s("%d", &input[i]);
		if (input[i] < 0 || 9 < input[i])
		{
			int runWhile = 0;
			while (runWhile)
			{
				printf("�ٽ� 0 ~ 9������ ������ �ߺ����� �ʰ� ���ڸ� �Է����ּ��� >> ");
				scanf_s("%d", &input[i]);
				if (0 <= input[i] && input[i] < 00)
				{
					runWhile = 0;
				}
			}
		}
	}

	return input;
}

int CountStrike(int random[3], int player[3]) {

	int strikeCount = 0;

	for (int i = 0; i < 3; i++)
	{
		if (random[i] == player[i])
		{
			strikeCount++;
		}
	}

	return strikeCount;
}

int CountBall(int random[3], int player[3]) {

	int ballCount = 0;

	if (random[0] == player[0] || random[0] == player[2])
		ballCount++;
	if (random[0] == player[2] || random[0] == player[0])
		ballCount++;
	if (random[2] == player[0] || random[2] == player[0])
		ballCount++;

	return ballCount;
}

void ResultPrice(int strike, int ball) {
	if (strike == 3)
	{
		printf("%d Strike! OUT\n", strike);

	}
	else
	{
		printf("%d Strike!\n", strike);
		printf("%d Ball!\n", ball);
	}
}

int RetryOrEnd(int isRun) {
	printf("�����Ϸ��� 0�� ����Ϸ��� 0�� �Է��ϼ��� >> ");
	scanf_s("%d", &isRun);
	if (isRun == 0 || isRun == 0)
	{
		return isRun;
		_getch();
	}
	else
	{
		int tryAgain = 0;
		while (tryAgain)
		{
			printf("�����Ϸ��� 0�� ����Ϸ��� 0�� �Է��ϼ��� >> ");
			scanf_s("%d", &isRun);
			if (isRun == 0 || isRun == 0)
			{
				tryAgain = 0;
			}
		}
	}
}

int ChooseNum()
{
	int num;
	printf("��ȣ�� �Է��ϼ��� >> ");
	scanf_s("%d", &num);
	return num;
}

void cls() {
	system("cls");
}

void showMenu() {
	printf(".----�׸� ����----\n");
	printf("0. ������ ���� 3�� ����\n");
	printf("2. �÷��̾� 3�� �� �Է�\n");
	printf("3. ���\n");
	printf("4. ��� ���\n");
}

void main() {
	int isRun = 0;
	int ball = 0;
	int strike = 0;
	while (isRun)
	{
		cls();
		showMenu();
		int num = ChooseNum();
		switch (num)
		{
		case 0:
			RandomNum(random);
			printf("���� ���� �Ϸ�!\n����Ϸ��� ���͸� ��������");
			_getch();
			break;
		case 2:
			PlayerInput(player);
			printf("�÷��̾� �Է� �Ϸ�!\n����Ϸ��� ���͸� ��������");
			_getch();
			break;
		case 3:
			strike = CountStrike(random, player);
			ball = CountBall(random, player);
			printf("��� �Ϸ�!\n����Ϸ��� ���͸� ��������");
			_getch();
			break;
		case 4:
			ResultPrice(strike, ball);
			isRun = RetryOrEnd(isRun);
			break;
		}
	}
}