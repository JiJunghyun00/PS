#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
// food_len은 배열 food의 길이입니다.
char* solution(int food[], size_t food_len) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
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