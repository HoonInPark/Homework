#include "stdio.h"

/*점수를 입력받고 A ~ F학점으로 출력하는 예제를 구글에서 찾으세요.
   (if~else구분으로 되어 있습니다.)
   이를 switch case문으로 바꾸세요.*/


/*
int main (void)
{
    int score;

    scanf("%d", &score);

    if( score >= 90 && score <= 100)
    {
        printf("A\n");
    }
    else if( score >= 80 && score <= 89)
    {
        printf("B\n");
    }
    else if( score >= 70 && score <= 79)
    {
        printf("C\n");
    }
    else if( score >= 60 && score <= 69)
    {
        printf("D\n");
    }
    else
    {
        printf("F\n");
    }
}*/
void main() {
    int score;

    printf("성적을 입력하세요.(자기자신의 솔직한 점수를 입력해주세요.) >> : ");
    scanf_s("%d", &score);

    switch (score/10)
    {
    case 10:
        printf("A학점입니다.");
        break;
    case 9:
        printf("A학점입니다.");
        break;
    case 8:
        printf("B학점입니다.");
        break;
    case 7:
        printf("C학점입니다.");
        break;
    case 6:
        printf("D학점입니다.");
        break;
    default:
        printf("망했습니다. F학점입니다.");
        break;
    }
}