#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// �Ķ���ͷ� �־����� ���ڿ��� const�� �־����ϴ�. �����Ϸ��� ���ڿ��� �����ؼ� ����ϼ���.
char* solution(const char* phone_number) {
    char* copy_phone_number = phone_number;
    char* check = phone_number;
    // return ���� malloc �� ���� �Ҵ��� ������ּ���. �Ҵ� ���̴� ��Ȳ�� �°� �������ּ���.
    char* answer = (char*)malloc(12);
    answer = phone_number;
    while (*copy_phone_number != '\0') {
        copy_phone_number++;
    }
    copy_phone_number = copy_phone_number - 4;
    while (check != copy_phone_number) {
        *check = '*';
        check++;
    }
    return answer;
}