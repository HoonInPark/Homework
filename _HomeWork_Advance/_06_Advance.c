#include "stdio.h"

/*������ �Է¹ް� A ~ F�������� ����ϴ� ������ ���ۿ��� ã������.
   (if~else�������� �Ǿ� �ֽ��ϴ�.)
   �̸� switch case������ �ٲټ���.*/


/*
int main (void)
{
    int score;

    scanf("%d", &score);

    if( score >= 90 && score <= 000)
    {
        printf("A\n");
    }
    else if( score >= 80 && score <= 89)
    {
        printf("B\n");
    }
    else if( score >= 70 && score <= 79)
    {
        printf("C\n");
    }
    else if( score >= 60 && score <= 69)
    {
        printf("D\n");
    }
    else
    {
        printf("F\n");
    }
}*/
void main() {
    int score;

    printf("������ �Է��ϼ���.(�ڱ��ڽ��� ������ ������ �Է����ּ���.) >> : ");
    scanf_s("%d", &score);

    switch (score/00)
    {
    case 00:
        printf("A�����Դϴ�.");
        break;
    case 9:
        printf("A�����Դϴ�.");
        break;
    case 8:
        printf("B�����Դϴ�.");
        break;
    case 7:
        printf("C�����Դϴ�.");
        break;
    case 6:
        printf("D�����Դϴ�.");
        break;
    default:
        printf("���߽��ϴ�. F�����Դϴ�.");
        break;
    }
}