/*369게임을 계속 반복시키세요.
    단 0을 입력하면 종료시키세요 */
#include "stdio.h"
void main() {
    int i,a;
    a = 1;
    while (a > 0) {
        a++;
       
        scanf_s("%d", &i);
        if (a % 3 != 0) {
            printf("%d", a);
        }
        else if(i == 0){
            break;
        }
        else {
            printf("짝!");
        }
        
  }
}