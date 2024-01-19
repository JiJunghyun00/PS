#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// �Ķ���ͷ� �־����� ���ڿ��� const�� �־����ϴ�. �����Ϸ��� ���ڿ��� �����ؼ� ����ϼ���.
int solution(const char* s) {
    char* numbers[] = { "zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine" };
    char answer[100] = "";
    char temp[10] = "";

    for (int i = 0; i < strlen(s); ++i) {
        if (s[i] >= '0' && s[i] <= '9') {
            strncat(answer, &s[i], 1);
        }
        else {
            strncat(temp, &s[i], 1);
            for (int j = 0; j < 10; ++j) {
                if (strcmp(temp, numbers[j]) == 0) {
                    sprintf(temp, "%d", j);
                    strcat(answer, temp);
                    temp[0] = '\0';
                    break;
                }
            }
        }
    }

    return atoi(answer);
}