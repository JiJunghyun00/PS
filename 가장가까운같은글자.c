#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// �Ķ���ͷ� �־����� ���ڿ��� const�� �־����ϴ�. �����Ϸ��� ���ڿ��� �����ؼ� ����ϼ���.
int* solution(const char* s) {
    // return ���� malloc �� ���� �Ҵ��� ������ּ���. �Ҵ� ���̴� ��Ȳ�� �°� �������ּ���.
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