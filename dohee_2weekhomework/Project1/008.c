//���� ������ �Է¹޾� �� ���������� �Ҽ��� ������ ���ϴ� ���α׷���
//�ۼ��ϼ���.

#include <stdio.h>

// Function to check if a number is prime
int isPrime(int num) {
    if (num <= 1) {
        return 0;
    }

    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return 0;
        }
    }

    return 1;
}

// Function to calculate the number of primes up to a given integer
int countPrimesUpTo(int n) {
    int count = 0;

    for (int i = 2; i <= n; i++) {
        if (isPrime(i)) {
            count++;
        }
    }

    return count;
}

int main() {
    int n;

    printf("Enter a positive integer: ");
    scanf_s("%d", &n);

    if (n <= 0) {
        printf("Please enter a positive integer.\n");
    }
    else {
        int result = countPrimesUpTo(n);
        printf("Number of prime numbers up to %d: %d\n", n, result);
    }

    return 0;
}
