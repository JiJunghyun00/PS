#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// score_len은 배열 score의 길이입니다.
int* solution(int k, int score[], size_t score_len) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    int* answer = (int*)malloc(sizeof(int) * score_len);

    int* temp = (int*)malloc(sizeof(int) * score_len);
    int* tempOriginAddress = temp;
    temp[0] = score[0];
    temp[1] = score[1];
    temp[2] = score[2];
    for (int i = 0;i < score_len;i++) {
        for (int j = 0;j <= i;j++) {
            score[]
        }
        *temp = score[i];
        temp++;

    }
    return answer;
}