#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
char* solution(int n) {
    // ������ ���� �޸𸮸� ���� �Ҵ����ּ���.
    char* answer = (char*)malloc(30000);
    int i = 0;
    while (n != 0) {
        n--;
        if (i % 2 == 0) {
            strcat(answer, "��");
        }
        else {
            strcat(answer, "��");
        }
        i++;

    }
    return answer;
}