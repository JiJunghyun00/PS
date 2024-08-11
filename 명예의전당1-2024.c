#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
int compare(const void* a, const void* b) {
    int int_a = *((int*)a);
    int int_b = *((int*)b);

    if (int_a == int_b) return 0;
    else if (int_a < int_b) return -1;
    else return 1;
}
// score_len은 배열 score의 길이입니다.
int* solution(int k, int score[], size_t score_len) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    int* answer = (int*)malloc(sizeof(int) * score_len);
    int* temp = (int*)malloc(sizeof(int) * k);
    memset(temp, 2001, sizeof(int) * k);
    for (int i = 0; i < k; i++) {
        if (i >= score_len) break;
        temp[i] = score[i];
        qsort(temp, i + 1, sizeof(int), compare);
        answer[i] = temp[0];
    }
    for (int i = k; i < score_len; i++) {
        if (score[i] > temp[0]) {
            temp[0] = score[i];
            qsort(temp, k, sizeof(int), compare);
        }
        answer[i] = temp[0];
    }

    return answer;
}