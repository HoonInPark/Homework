#include <stdio.h>

int main() {
    int tree, action;

    printf("³ª¹«¸¦ ¸î¹ø ÂïÀ»°ÍÀÎ°¡?: ");
    scanf_s("%d", &tree);

    printf("-1ÀÌ¿Ü´Â ÂïÀ½): ");
    scanf_s("%d", &action);

    for (int i = 1; i <= tree; i++) {
        printf("\n³ª¹«¸¦ %d ¹øÂï¾ú´Ù:\n", i);

        int repeat = 0;
        while (repeat < action) {
            int answer;
            printf("³ª¹«¸¦ ÂïÀ»°Ç°¡? (Enter 1 for Yes, 0 for No, -1 to stop): ");
            scanf_s("%d", &answer);

            if (answer == -1) {
                break;
            }

            if (answer == 1) {
                printf("Äô\n");
            }
            else if (answer == 0) {
                printf("¾Æ¹«ÀÏµµ ¾ø¾ú´Ù\n");
            }
            else {
                printf("¸Ø­Ÿ´Ù\n");
            }

            repeat++;
        }
    }

    return 0;
}