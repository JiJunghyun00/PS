#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
// �Ķ���ͷ� �־����� ���ڿ��� const�� �־����ϴ�. �����Ϸ��� ���ڿ��� �����ؼ� ����ϼ���.
int* solution(const char* s) {
    // return ���� malloc �� ���� �Ҵ��� ������ּ���. �Ҵ� ���̴� ��Ȳ�� �°� �������ּ���.
    int* answer = (int*)malloc(sizeof(int) * strlen(s));

    for (int i = 0;i < strlen(s);i++) {
        answer[i] = -1;
    }
    for (int i = 0;i < strlen(s);i++) {
        for (int j = i - 1;j >= 0;j--) {
            if (s[i] == s[j]) {
                answer[i] = i - j;
                break;
            }
        }
    }
    return answer;
}