#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
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
    int i = 0;
    int j = 0;
    int check = 0;
    for (i = 1;i < food_len;i++) {
        for (j = check;j < (check + (food[i] / 2));j++) {
            answer[j] = (i + '0');
        }
        check = j;
    }
    //check++;
    //answer[check]='0';
    return answer;
}