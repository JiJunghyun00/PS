#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
// �Ķ���ͷ� �־����� ���ڿ��� const�� �־����ϴ�. �����Ϸ��� ���ڿ��� �����ؼ� ����ϼ���.
char* solution(const char* s) {
    // return ���� malloc �� ���� �Ҵ��� ������ּ���. �Ҵ� ���̴� ��Ȳ�� �°� �������ּ���.
    int len = strlen(s);
    char* answer = (char*)malloc(1 + len);
    int index = 0;
    for (int i = 0;i < (len);i++) {
        if (isalpha(s[i])) {
            if (index % 2 == 0) {
                answer[i] = toupper(s[i]);
            }
            else {
                answer[i] = tolower(s[i]);
            }
            index++;
        }
        else {
            answer[i] = s[i];
            index = 0;
        }
    }
    answer[len] = '\0';
    return answer;
}