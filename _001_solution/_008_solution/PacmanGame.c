#include <stdio.h>
#include <stdlib.h> // 필요한 헤더 추가
#include <time.h>
#include <windows.h>

// num의 수만큼 그리고 키입력이 있을 때마다 맵을 업데이트해준다.
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
    MakeEmptyGridArr(gridNum, &Grid_ver); // Grid_ver의 주소를 넘김.

    // the former index is the y axis value...
    for (int i = 0; i < gridNum; ++i) {
        for (int j = 0; j < gridNum; ++j) {
            printf("%d ", Grid_ver[i][j]); // 값 뒤에 공백 추가
        }
        printf("\n"); // 한 행이 끝나면 줄 바꿈
    }

    for (int i = 0; i < gridNum; i++)
    {
        free(Grid_ver[i]);
    }
    free(Grid_ver);

    return 0; // main 함수의 반환값
}

