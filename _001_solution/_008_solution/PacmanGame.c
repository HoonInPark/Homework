#include <stdio.h>
#include <time.h>
#include <windows.h>

/// num의 수만큼 맵을 그리고 키입력이 있을 때마다 맵을 업데이트해준다.
/// \param _num

void MakeEmptyGridArr(int _num, int*** _Grid_ver) {
    int** Grid_temp = (int**)calloc(_num, sizeof(int*));

    for (int i = 0; i < _num; ++i) 
        Grid_temp[i] = (int*)calloc(_num, sizeof(int) * _num);

    *_Grid_ver = Grid_temp;
}

void DrawWalls(int _num, int*** _Grid_ver) {
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

    for (int i = 0; i < gridNum; i++)
    {
	    free(Grid_ver[i]);
    }
    free(Grid_ver);
}

/*
 * 필요한 기능들
 * 1. 맵의 구조. 모든 비어있는 부분은 하나로 연결돼 있어야 한다.
 * 2. 이때 만들어지는 길은 모두 무작위로 생성.
 * 3, 만들어지는 맵의 크기도 사용자가 정할 수 있다.
 */