#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// score_len�� �迭 score�� �����Դϴ�.
int solution(int k, int m, int score[], size_t score_len) {
    int answer = 0;
    int check = 0;
    int max = 0;

    for (int i = 0;i < score_len;i++) {
        if (score[i] > max) {
            max = score[i];
            check = i;
        }
    }
    score[check] = 0;
    return answer;
}