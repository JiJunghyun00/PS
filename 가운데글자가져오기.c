#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
// �Ķ���ͷ� �־����� ���ڿ��� const�� �־����ϴ�. �����Ϸ��� ���ڿ��� �����ؼ� ����ϼ���.
char* solution(const char* s) {
    // return ���� malloc �� ���� �Ҵ��� ������ּ���. �Ҵ� ���̴� ��Ȳ�� �°� �������ּ���.
    char* answer = (char*)malloc(3);
    int len = strlen(s);
    if (len % 2 == 1) {
        answer = (s + len / 2);
        *(answer + 1) = '\0';
    }
    else {
        answer = (s + (len / 2 - 1));
        *(answer + 2) = '\0';
    }
    return answer;
}