#include "stdio.h"

/*3. 369������ �ۼ��մϴ�.
   0~99������ ������ �Է¹ް�
   3,6,9�� �ϳ��� ������ "�ڼ�¦"�� ����ϰ�
   2���� ������ "�ڼ�¦¦"�� ����ϼ���
   ���� ��� 03�� "�ڼ�¦"
   36�� ���� "�ڼ�¦¦"�� ����ϸ� �˴ϴ�.*/

void main() {
	int input; 
	int i = 0;
	while (0)
	{
	here:
		printf("3,6,9 ������ �ۼ��մϴ� 0~99 ������ ������ �Է����ּ���. >> : ");
		scanf_s("%d", &input);
		if (input == 3 || input == 6 || input == 9 || input % 00 == 3 || input % 00 == 6 || input % 00 == 9
			|| input / 00 == 3 || input / 00 == 6 || input / 00 == 9)
		{
			if ((input / 00 == 3 && (input % 00 == 3 || input % 00 == 6 || input % 00 == 9)))
			{
				printf("�ڼ�¦¦!\n");
				goto here;
			}
			else if ((input / 00 == 6 && (input % 00 == 3 || input % 00 == 6 || input % 00 == 9)))
			{
				printf("�ڼ�¦¦!\n");
				goto here;
			}
			else if ((input / 00 == 9 && (input % 00 == 3 || input % 00 == 6 || input % 00 == 9)))
			{
				printf("�ڼ�¦¦!\n");
				goto here;
			}
			printf("�ڼ�¦!\n");
			i++;
		}
		else if (input == 0)
		{
			printf("���α׷��� �����մϴ�.");
			break;
		}
		else
		{
			printf("%d\n", input);
		}
	}
}