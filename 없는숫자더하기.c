#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// numbers_len�� �迭 numbers�� �����Դϴ�.
int solution(int numbers[], size_t numbers_len) {
    int answer = 0;
    int check[10] = { 1,1,1,1,1,1,1,1,1,1 };
    for (int i = 0;i < numbers_len;i++) {
        check[numbers[i]] = 0;
    }
    for (int j = 1;j < 10;j++) {
        if (check[j] == 1) {
            answer += j;
        }
    }
    return answer;
}