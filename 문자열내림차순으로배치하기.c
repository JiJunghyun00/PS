#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
// �Ķ���ͷ� �־����� ���ڿ��� const�� �־����ϴ�. �����Ϸ��� ���ڿ��� �����ؼ� ����ϼ���.
char* solution(const char* s) {
    // return ���� malloc �� ���� �Ҵ��� ������ּ���. �Ҵ� ���̴� ��Ȳ�� �°� �������ּ���.
    char* answer = (char*)malloc(10000);
    char* copy_s = s;
    int len = strlen(s);
    char max = '@';
    char temp = '@';
    char* address = NULL;
    int add_address = 0;
    for (int k = 0;k < len;k++) {
        for (int i = k;i < len;i++) {
            temp = *(copy_s + i);
            if (max < temp) {
                max = temp;
                add_address = i;
            }

        }
        *(copy_s + add_address) = *(copy_s + k);
        *(answer + k) = max;
        max = '@';
    }
    return answer;
}