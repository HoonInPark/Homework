/*369������ ��� �ݺ���Ű����.
    �� 0�� �Է��ϸ� �����Ű���� */
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
            printf("¦!");
        }
        
  }
}