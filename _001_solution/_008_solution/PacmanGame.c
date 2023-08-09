#include <stdio.h>
#include <time.h>
#include <windows.h>

/// num�� ����ŭ ���� �׸��� Ű�Է��� ���� ������ ���� ������Ʈ���ش�.
/// \param _num

void MakeEmptyGridArr(int _num, int** _Grid_ver) {
    int** Grid = (int**)calloc(_num, sizeof(int*));
    for (int i = 0; i < _num; ++i) {
        Grid[i] = (int*)calloc(_num, sizeof(int));
    }
    _Grid_ver = Grid;
}

void DrawWalls(int _num, int** _Grid_ver) {
    // outer wall
    for (int i = 0; i < _num; ++i) {
        _Grid_ver[i][0] = 1;
        _Grid_ver[0][i] = 1;
    }
    // inner walls
    srand(time(NULL));
    for (int i = 0; i < _num; ++i) {
    }
}

void main() {
    int gridNum = 0;
    int** Grid_ver;

    while (gridNum < 30) {
        printf("Plz insert size of pacman's map >> ");
        scanf_s("%d", gridNum);
        MakeEmptyGridArr(gridNum, Grid_ver);
    }

    // the former index is the y axis value...
    for (int i = 0; i < sizeof(Grid_ver) / sizeof(*Grid_ver); ++i) {
        for (int j = 0; j < sizeof(*Grid_ver) / sizeof(**Grid_ver); ++j) {
            printf("%d", Grid_ver[i][j]);
        }
    }

    free(Grid_ver);
    free(*Grid_ver);
}

/*
 * �ʿ��� ��ɵ�
 * 1. ���� ����. ��� ����ִ� �κ��� �ϳ��� ����� �־�� �Ѵ�.
 * 2. �̶� ��������� ���� ��� �������� ����.
 * 3, ��������� ���� ũ�⵵ ����ڰ� ���� �� �ִ�.
 */