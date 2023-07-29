#include <stdio.h>

int main() {
    double start = 24.0; //시작금액
    double interestRate = 0.08; //연이율8%
    int years = 2010 - 1627; //기간계산

  
    for (int i = 1; i <= years; i++) 
    {
        start += start * interestRate;
    }

    printf(" 2010 에 금액은: $%.2f\n", start);

    return 0;
}