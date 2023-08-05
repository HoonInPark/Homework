//���� n�� �Է¹ް� n!�� ���ϼ���.(factorial)
//5�� �Է��Ѱ�� 1 * 2 * 3 * 4 * 5�� ���ϼ���.
//����Լ� ���̵� ����� Ǯ �� ������, ��Ģ���� ã�ƶ�!
//�ڽ� �ִٸ� ����Լ��ε� Ǯ���.
//����Լ��� �����θ� ȣ���ϴ� �Լ��̴�.���� ��� 0�� ���ѹݺ�����
//����ϴ� �Լ��� ������ ����.

#include <stdio.h>

int main()
{
    int n, factorial = 1;

    printf("Enter a positive integer: ");
    scanf_s("%d", &n);

    if (n < 0)
    {
        printf("Factorial is not defined for negative numbers.\n");
    }
    else 
    {
        for (int i = 1; i <= n; i++)
        {
            factorial *= i;
        }

        printf("%d! = %d\n", n, factorial);
    }

    return 0;
}
