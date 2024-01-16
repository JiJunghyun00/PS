#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
int solution(const char* t, const char* p) {
    int answer = 0;
    int tLen = strlen(t);
    int pLen = strlen(p);
    char compare[pLen];
    for (int i = 0;i < tLen - pLen + 1;i++) {
        strncpy(compare, t + i, pLen);
        compare[pLen] = '\0';
        if (atoll(compare) <= atoll(p)) {
            answer++;
        }
    }
    return answer;
}