#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
// �Ķ���ͷ� �־����� ���ڿ��� const�� �־����ϴ�. �����Ϸ��� ���ڿ��� �����ؼ� ����ϼ���.
char* solution(const char* myString) {
    // return ���� malloc �� ���� �Ҵ��� ������ּ���. �Ҵ� ���̴� ��Ȳ�� �°� �������ּ���.
    char* answer = (char*)malloc(1000000);
    for (int i = 0;i < strlen(myString);i++) {
        if (myString[i] >= 'A' && myString[i] <= 'Z') {
            answer[i] = myString[i] + ('a' - 'A');
        }
        else {
            answer[i] = myString[i];
        }
    }
    return answer;
}