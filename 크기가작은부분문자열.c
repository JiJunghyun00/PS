#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
// �Ķ���ͷ� �־����� ���ڿ��� const�� �־����ϴ�. �����Ϸ��� ���ڿ��� �����ؼ� ����ϼ���.
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