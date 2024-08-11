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
// score_len�� �迭 score�� �����Դϴ�.
int* solution(int k, int score[], size_t score_len) {
    // return ���� malloc �� ���� �Ҵ��� ������ּ���. �Ҵ� ���̴� ��Ȳ�� �°� �������ּ���.
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