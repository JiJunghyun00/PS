#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// score_len�� �迭 score�� �����Դϴ�.
int* solution(int k, int score[], size_t score_len) {
    // return ���� malloc �� ���� �Ҵ��� ������ּ���. �Ҵ� ���̴� ��Ȳ�� �°� �������ּ���.
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