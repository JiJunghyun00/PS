#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// num_list_len�� �迭 num_list�� �����Դϴ�.
int* solution(int num_list[], size_t num_list_len) {
    // return ���� malloc �� ���� �Ҵ��� ������ּ���. �Ҵ� ���̴� ��Ȳ�� �°� �������ּ���.

    int* answer = (int*)malloc(100);
    *answer = 0;
    *(answer + 1) = 0;
    for (int i = 0;i < num_list_len;i++) {
        if (num_list[i] % 2 == 0) {
            *answer += 1;
        }
        else {
            *(answer + 1) += 1;
        }
    }


    return answer;
}