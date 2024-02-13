#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// �Ķ���ͷ� �־����� ���ڿ��� const�� �־����ϴ�. �����Ϸ��� ���ڿ��� �����ؼ� ����ϼ���.
int solution(const char* s) {
    int sum = 0;
    int length = strlen(s);
    int i;
    int temp = 0; // ������ ���� ���ڸ� �ӽ÷� ������ ����

    for (i = 0; i < length; i++) {

        if (s[i] == 'Z') {
            if (i == 1) {
                sum = 0;
            }
            else {
                sum -= temp; // 'Z'�� ������ ������ ���� ���ڸ� ���ݴϴ�.
            }
        }
        else {
            int num = atoi(&s[i]); // ���ڸ� ���ڿ����� �о�ɴϴ�.
            temp = num; // ���� ���ڸ� �ӽ� ������ �����صӴϴ�.
            sum += num; // ���� ���ڸ� ���մϴ�.

            // ���� ���� ������ �ڸ����� �ǳʶݴϴ�.
            while (s[i] != ' ' && s[i] != '\0') {
                i++;
            }
        }
    }
    return sum;
}