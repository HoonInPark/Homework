/*�ΰ��� �Ǽ��� �Է¹ް� ���� ���� ���� �������� 
    + - * / ��ȣ�� �Է¹ް� �������� ����϶�*/
#include "stdio.h"

void main() {
    double a, b;
    char s1[10];
    printf("insert 1st num>>> ");
    scanf_s("%lf", &a);
    printf("insert 2nd num>>> ");
    scanf_s("%lf", &b);
    printf("insert char>>> ");
    scanf_s("%s", &s1, 10);
   
    printf("%lf %s %lf = %lf", a, s1, b,a+b);
  

}