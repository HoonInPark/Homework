//�� ���� ������ �޾Ƽ�, �� ���� ���� ���밪�� ����Ͽ� ����ϴ� �޼����
//�� �޼��带 ����غ�����.�޼��� ȣ�� �� ���޵Ǵ� ���� ������ �������
//���밪�� ���Ǿ ��µǾ�� �մϴ�

#include <stdio.h>

// Function to calculate the absolute value of the difference between two integers
int absoluteDifference(int num1, int num2)
{
    int difference = num1 - num2;
    return (difference >= 0) ? difference : -difference;
}

int main()
{
    int a, b;

    printf("Enter two integers: ");
    scanf_s("%d %d", &a, &b);

    int absDiff = absoluteDifference(a, b);

    printf("The absolute value of the difference is: %d\n", absDiff);

    return 0;
}
