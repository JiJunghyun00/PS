#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// score_len은 배열 score의 길이입니다.
int* solution(int k, int score[], size_t score_len) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    int* answer = (int*)malloc(sizeof(int) * score_len);

    int temp[100] = { 0 };  // 크기가 100인 배열을 초기화
    int check = 0;

    for (int i = 0; i < k; i++) {
        if (i == 0) {
            temp[0] = score[0];
            check++;
        }
        else {
            for (int j = 0; j < check; j++) {
                if (temp[j] < score[i]) {
                    int temp1 = temp[j];
                    temp[j] = score[i];
                    temp[j + 1] = temp1;
                }
            }
            check++;
        }
    }

    for (size_t i = k; i < score_len; i++) {
        // 명예의 전당 갱신
        for (int j = 0; j < k; j++) {
            if (temp[j] < score[i]) {
                int temp1 = temp[j];
                temp[j] = score[i];
                temp[j + 1] = temp1;
            }
        }

        // 명예의 전당의 최하위 점수를 answer 배열에 저장
        answer[i] = temp[k - 1];
    }

    return answer;
}