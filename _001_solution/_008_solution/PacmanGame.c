#include <stdio.h>
#include <stdlib.h> // �ʿ��� ��� �߰�
#include <time.h>
#include <windows.h>

// num�� ����ŭ �׸��� Ű�Է��� ���� ������ ���� ������Ʈ���ش�.
void MakeEmptyGridArr(int _num, int*** _Grid_ver) {
    int** Grid_temp = calloc(_num, sizeof(int*));

    for (int i = 0; i < _num; ++i)
        Grid_temp[i] = calloc(_num, sizeof(int));

    for (int i = 0; i < _num; ++i) {
        Grid_temp[i][0] = 1;
        Grid_temp[0][i] = 1;
        Grid_temp[_num - i - 1][i] = 1;
        Grid_temp[i][_num - i - 1] = 1;
    }

    *_Grid_ver = Grid_temp;
}

int main() {
    int gridNum = 0;

    printf("Plz insert size of pacman's map >> ");
    scanf_s("%d", &gridNum); 

    int** Grid_ver = (int**)calloc(gridNum, sizeof(int*));
    MakeEmptyGridArr(gridNum, &Grid_ver); // Grid_ver�� �ּҸ� �ѱ�.

    // the former index is the y axis value...
    for (int i = 0; i < gridNum; ++i) {
        for (int j = 0; j < gridNum; ++j) {
            printf("%d ", Grid_ver[i][j]); // �� �ڿ� ���� �߰�
        }
        printf("\n"); // �� ���� ������ �� �ٲ�
    }

    for (int i = 0; i < gridNum; i++)
    {
        free(Grid_ver[i]);
    }
    free(Grid_ver);

    return 0; // main �Լ��� ��ȯ��
}

