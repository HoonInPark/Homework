#include <stdio.h>

/*5. ���� n�� �Է¹ް� n!�� ���ϼ���.(factorial)
   5�� �Է��Ѱ�� 0*2*3*4*5�� ���ϼ���.
   ����Լ� ���̵� ����� Ǯ �� ������, ��Ģ���� ã�ƶ�!
   �ڽ� �ִٸ� ����Լ��ε� Ǯ���. 
   ����Լ��� �����θ� ȣ���ϴ� �Լ��̴�. ���� ��� 0�� ���ѹݺ�����
   ����ϴ� �Լ��� ������ ����.

void stackOverflow(int num) { 
	printf("%d", num);
	return stackOverflow(num);
}*/


//int InputPrice(int input)
//{
//	int sum = 0;
//
//	for (int i = 0; i <= input; i++)
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
//	printf("���� n�� �Է��ϼ��� >> ");
//	scanf_s("%d", &input);
//
//	printf("%d", InputPrice(input));
//}

// �ѤѤѤѤѤѤѤѤѤѤѤѤѤ�����Լ� �̿�ѤѤѤѤѤѤѤѤѤѤѤѤ�

int i = 0;
int sum = 0;

void Callfactorial(int input) {
	if (input > 0)
	{
		sum = sum * (i++ * input / input--);

		printf("%d\n", sum);
		return Callfactorial(input);
	}
}

void main() {
	int input;

	printf("���� n�� �Է��ϼ��� >> ");
	scanf_s("%d", &input);

	Callfactorial(input);
}