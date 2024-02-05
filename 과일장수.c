#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// score_len은 배열 score의 길이입니다.
int solution(int k, int m, int score[], size_t score_len) {
    int answer = 0;
    for (int i = 0; i < score_len - 1; i++) {
        for (int j = 0; j < score_len - i - 1; j++) {
            if (score[j] < score[j + 1]) {
                int temp = score[j];
                score[j] = score[j + 1];
                score[j + 1] = temp;
            }
        }
    }
    for (int i = m;i <= score_len;i += m) {
        answer += score[i - 1] * m;
    }
    return answer;
}