#include <stdio.h>
#include <time.h>
#include <windows.h>

/// num의 수만큼 맵을 그리고 키입력이 있을 때마다 맵을 업데이트해준다.
/// \param num

void makeGrid(int num){
    int** Grid = (int**)calloc(num, sizeof(int*) * num);
    for (int i = 0; i < num; ++i) {
        Grid[i] = (int*)calloc(num, sizeof(int) * num);
    }
}

void main() {
    int gridNum;
    while(gridNum > 10){
        printf("팩맨 게임의 맵 크기를 정해주세요 >> ");
        scanf_s("%d", gridNum);
    }

    while (1){

    }
}

/*
 * 필요한 기능들
 * 1. 맵의 구조. 모든 비어있는 부분은 하나로 연결돼 있어야 한다.
 * 2. 이때 만들어지는 길은 모두 무작위로 생성.
 * 3, 만들어지는 맵의 크기도 사용자가 정할 수 있다.
 */