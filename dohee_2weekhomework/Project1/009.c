//�̱� ���⸦ ����ϴ� ���α׷��� �ۼ��ϼ���.
//�ִ��� �̱� ����ó�� ���̰� ���弼��.


#include <stdio.h>

int main() {
    // Number of rows and columns for the stars pattern
    const int ROWS = 9;
    const int COLUMNS = 11;

    // Number of rows for the stripes pattern
    const int STRIPE_ROWS = 7;

    // American flag representation
    for (int i = 1; i <= ROWS; i++) {
        for (int j = 1; j <= COLUMNS; j++) {
            if (i % 2 == 1) {
                // Stars pattern (odd rows)
                if (j % 2 == 1) {
                    printf("*");
                }
                else {
                    printf(" ");
                }
            }
            else {
                // Stars pattern (even rows)
                if (j % 2 == 0) {
                    printf("*");
                }
                else {
                    printf(" ");
                }
            }
        }
        printf("\n");
    }

    // Stripes pattern
    for (int i = 1; i <= STRIPE_ROWS; i++) {
        for (int j = 1; j <= COLUMNS; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
