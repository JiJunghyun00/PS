#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// emergency_len�� �迭 emergency�� �����Դϴ�.
int* solution(int emergency[], size_t emergency_len) {
    // return ���� malloc �� ���� �Ҵ��� ������ּ���. �Ҵ� ���̴� ��Ȳ�� �°� �������ּ���.
    int* answer = (int*)malloc(sizeof(int) * emergency_len);
    for (int i = 0;i < emergency_len;i++) {
        answer[i] = 1;
    }
    for (int i = 0;i < emergency_len;i++) {
        for (int j = 0;j < emergency_len;j++) {
            if (emergency[i] < emergency[j]) {
                answer[i]++;
            }
        }
    }
    return answer;
}