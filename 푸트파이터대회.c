#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// food_len�� �迭 food�� �����Դϴ�.
char* solution(int food[], size_t food_len) {
    // return ���� malloc �� ���� �Ҵ��� ������ּ���. �Ҵ� ���̴� ��Ȳ�� �°� �������ּ���.
    char* answer = (char*)malloc(10000);
    int answerlen = 1;
    for (int i = 1;i < food_len;i++) {
        if (food[i] % 2 == 1) {
            food[i] = food[i] - 1;
        }
    }
    for (int i = 1;i < food_len;i++) {
        answerlen += food[i];
    }
    //�̿ϼ�
    return answer;
}