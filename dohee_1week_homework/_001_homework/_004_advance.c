#include <stdio.h>

int main() {
    double start = 24.0; //���۱ݾ�
    double interestRate = 0.08; //������8%
    int years = 2010 - 1627; //�Ⱓ���

  
    for (int i = 1; i <= years; i++) 
    {
        start += start * interestRate;
    }

    printf(" 2010 �� �ݾ���: $%.2f\n", start);

    return 0;
}