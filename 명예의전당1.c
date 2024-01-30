#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// score_len�� �迭 score�� �����Դϴ�.
int* solution(int k, int score[], size_t score_len) {
    // return ���� malloc �� ���� �Ҵ��� ������ּ���. �Ҵ� ���̴� ��Ȳ�� �°� �������ּ���.
    int* answer = (int*)malloc(sizeof(int) * score_len);

    int temp[100] = { 0 };  // ũ�Ⱑ 100�� �迭�� �ʱ�ȭ
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
        // ���� ���� ����
        for (int j = 0; j < k; j++) {
            if (temp[j] < score[i]) {
                int temp1 = temp[j];
                temp[j] = score[i];
                temp[j + 1] = temp1;
            }
        }

        // ���� ������ ������ ������ answer �迭�� ����
        answer[i] = temp[k - 1];
    }

    return answer;
}