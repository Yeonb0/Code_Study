#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand((unsigned int)time(NULL));
    char *rsp[3] = {"바위", "가위", "보"};

    int computer, player;
    int win = 0, lose = 0, draw = 0;

    do {
        printf("바위는 0, 가위는 1, 보는 2: ");
        scanf("%d", &player);

        if (player < 0 || player > 2) {
            printf("잘못된 입력입니다. 다시 입력하세요.\n");
            continue;
        }

        computer = rand() % 3;
        printf("당신은 %s 선택, 컴퓨터는 %s 선택, ", rsp[player], rsp[computer]);

        if (player == computer) {
            printf("비겼습니다!\n");
            draw++;
        } else if ((player == 0 && computer == 1) || (player == 1 && computer == 2) || (player == 2 && computer == 0)) {
            printf("이겼습니다!\n");
            win++;
        } else {
            printf("졌습니다!\n");
            lose++;
        }
    } while (lose == 0);

    printf("게임의 결과 : %d승, %d무\n", win, draw);
    return 0;
}
