//���� �߱� ������ �ۼ��ϼ���. (�Ʒ��� �Լ��� ������ ��,
//	�ʿ��ϸ� �Լ� �� �ۼ��ص� ��)
//	0) ��ǻ���� ���� 3�� ����(���۷� ���� �����ϴ� ���� ã�ƺ���)
//	1) ����� �Է�
//	2) ���
//	3) ��� �����ֱ�
//	4) �ٽ� ���� ����

//0 ~9 �ߺ����� �ʰ�
//��ǻ�Ͱ� ������ 3�� ����
//0 1 7
//
//����� �Է�
//0 1 7
//1 2 8 - 1ball
//
//0 1 7
//7 1 8 - 1strike 1ball
//
//....
//
//0 1 7
//0 1 7 - 3Strike out!!



//#define _CRT_SECURE_NO_WARNINGS 

#include <stdio.h> 

#include <stdlib.h> // rand �Լ��� ���� ��� ���� 

#include <time.h> // time �Լ��� ���� ��� ���� 

int main()

{

    int computerBall[3]; // ��ǻ���� ���� ������ int�� �迭 

    int i, j; // �ݺ��� ���� ���� 

    int temp; // ���� �ߺ� üũ�� ���� ���� 

    int userBall[3]; // ������� ���� ������ int�� �迭 

    int count = 1; // ȸ���� Ȯ���� ���� 9ȸ���� ���� 

    int strike; // ��Ʈ����ũ�� ���� ���� ���� ���� 

    int ball; // ���� ���� ���� ���� ���� 

    // ���� ���� �� �ߺ� üũ 

    srand((unsigned)time(NULL));

    for (i = 0; i < 3; i++)

    {

        temp = (rand() % 9) + 1; // temp������ ���� ���� ���� ���� 

        computerBall[i] = temp; // temp���� ��ǻ���� ���� ���� 

        for (j = 0; j < i; j++) // ���� �߰��� ��ŭ �ݺ��ϸ� 

            if (temp == computerBall[j] && i != j) // ���� ���� temp���� ������ ���� �� �� ������ �� �ִٸ� 

                i--; // i�� ���� �ٿ� �ٽ� �������� ���ư����� 

    }



    while (1) // ���ھ߱� ���� ���� 

    {

        printf("[%dȸ�� ���ھ߱�]\n", count);

        while (1) // �������� ���ڸ� �Է¹ޱ� ���� �ݺ� 

        {

            printf("1���� 9������ ���ڸ� �Է��ϼ��� : ");

            scanf_s("%d %d %d", &userBall[0], &userBall[1], &userBall[2]);

            if (userBall[0] < 1 || userBall[0] > 9 || userBall[1] < 1 || userBall[1] > 9 || userBall[2] < 1 || userBall[2] > 9)

            { // �Է��� ���ڰ� 1 ~ 9 ���ڰ� �ƴϸ� �ٽ� �Է¹޵��� 

                printf("���� ���� ���ڸ� �Է��Ͻø� �ȵ˴ϴ�.\n");

                continue;

            }

            else if (userBall[0] == userBall[1] || userBall[0] == userBall[2] || userBall[1] == userBall[2])

            { // �Է��� ���� �߿� �ߺ��� �� ������ �ٽ� �Է¹޵��� 

                printf("�ߺ��� ���ڸ� �Է��Ͻø� �ȵ˴ϴ�.\n");

                continue;

            }

            break; // �ƹ� ���� ���� ��� �ݺ� ���� 

        }

        ball = 0;

        strike = 0;

        for (i = 0; i < 3; i++) // computerBall 1~3��°�� ���� �� userBall 1~3��°�� Ȯ���ϱ� ���� �ݺ� 

            for (j = 0; j < 3; j++)

                if (computerBall[i] == userBall[j]) // computerBall�� userBall�� ���� ���ٸ� 

                    if (i == j) // ���� ��ġ�� ��� 

                        strike++; // ��Ʈ����ũ ���� ���� 

                    else // �ٸ� ��ġ�� ��� 

                        ball++; // �� ���� ���� 

        // Ȯ���� ����� ��� 

        printf("[���]��Ʈ����ũ : %d, �� : %d\n\n", strike, ball);

        if (strike == 3) // ���� ��Ʈ����ũ ������ 3���̸� �¸� 

        {

            printf("***** �¸��߽��ϴ�. *****\n\n");

            break;

        }

        else if (count == 9) // ���� 9ȸ���ε��� �¸����� ���ϸ� �й� 

        {

            printf("***** �й��߽��ϴ�.. ���� : %d %d %d *****\n\n", computerBall[0], computerBall[1], computerBall[2]);

            break;

        }

        count++;

    }

    return 0;

}