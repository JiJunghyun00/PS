#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// score_len�� �迭 score�� �����Դϴ�.
int* solution(int k, int score[], size_t score_len) {
    // return ���� malloc �� ���� �Ҵ��� ������ּ���. �Ҵ� ���̴� ��Ȳ�� �°� �������ּ���.
    int* answer = (int*)malloc(sizeof(int) * score_len);

    int* temp = answer;
    for (int i = 0;i < score_len;i++) {

        *temp = score[i];
        temp++;
    }
    return answer;
}