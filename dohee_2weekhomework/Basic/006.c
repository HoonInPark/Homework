//���� ���� �Է¹ް� �� ����ŭ 3�� ��� ����ϼ���
//���� ��� 5�� �Է¹����� 3 6 9 12 15�� ����ϸ� �˴ϴ�

#include <stdio.h>

int main()

{
    int num;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    if (num <= 0)
    {
        printf("Please enter a positive integer.\n");
    }
    
    else
    {
        printf("Multiples of 3 up to %d: ", num * 3);
        for (int i = 1; i <= num; i++) {
            printf("%d ", i * 3);
        }
        printf("\n");
    }

    return 0;
}
