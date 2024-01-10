#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
char* solution(int n) {
    // 리턴할 값은 메모리를 동적 할당해주세요.
    char* answer = (char*)malloc(30000);
    int i = 0;
    while (n != 0) {
        n--;
        if (i % 2 == 0) {
            strcat(answer, "수");
        }
        else {
            strcat(answer, "박");
        }
        i++;

    }
    return answer;
}