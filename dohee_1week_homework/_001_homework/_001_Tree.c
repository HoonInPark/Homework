#include <stdio.h>

int main() {
    int tree, action;

    printf("������ ��� �������ΰ�?: ");
    scanf_s("%d", &tree);

    printf("-1�ܴ̿� ����): ");
    scanf_s("%d", &action);

    for (int i = 1; i <= tree; i++) {
        printf("\n������ %d �������:\n", i);

        int repeat = 0;
        while (repeat < action) {
            int answer;
            printf("������ �����ǰ�? (Enter 1 for Yes, 0 for No, -1 to stop): ");
            scanf_s("%d", &answer);

            if (answer == -1) {
                break;
            }

            if (answer == 1) {
                printf("��\n");
            }
            else if (answer == 0) {
                printf("�ƹ��ϵ� ������\n");
            }
            else {
                printf("�ح���\n");
            }

            repeat++;
        }
    }

    return 0;
}