#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// �Ķ���ͷ� �־����� ���ڿ��� const�� �־����ϴ�. �����Ϸ��� ���ڿ��� �����ؼ� ����ϼ���.
int solution(const char* s) {
    int answer = 0;
    char* token = strtok((char*)s, " ");
    int pre_num = 0;

    while (token != NULL) {
        if (strcmp(token, "Z") == 0) {
            answer -= pre_num;
        }
        else {
            int now = atoi(token);  // ���ڿ��� ������ ��ȯ atoi
            answer += now;
            pre_num = now;
        }
        token = strtok(NULL, " ");
    }

    return answer;
}