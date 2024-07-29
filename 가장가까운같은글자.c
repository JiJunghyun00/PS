#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
int* solution(const char* s) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    int* answer = (int*)malloc(strlen(s) * sizeof(int));
    *answer = -1;
    char* copy = s;
    short result = 0;
    for (int i = 1;i < strlen(s);i++) {
        copy = copy + i;
        for (int j = 1;j <= i;j++) {
            if (s[i] == s[i - j]) {
                *(answer + i) = j;
                result = 1;
                break;
            }
        }
        if (result == 0) {
            *(answer + i) = -1;
        }
        else {
            result = 0;
        }

    }
    return answer;
}