#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// numbers_len�� �迭 numbers�� �����Դϴ�.
int* solution(int numbers[], size_t numbers_len) {
    // return ���� malloc �� ���� �Ҵ��� ������ּ���. �Ҵ� ���̴� ��Ȳ�� �°� �������ּ���.
    int* answer = (int*)malloc(sizeof(int) * 10000);
    int r = 0;
    for (int i = 0;i < 10000;i++) {
        answer[i] = -1;
    }
    for (int i = 0;i < numbers_len;i++) {
        for (int j = i + 1;j < numbers_len;j++) {
            int temp = numbers[i] + numbers[j];
            for (int k = 0;k < 10000;k++) {
                if (answer[k] == temp) {
                    break;
                }
                if (k == 9999) {
                    answer[r] = temp;
                    r++;
                }
            }
        }
    }

    for (int i = 0; i < r - 1; i++) {
        for (int j = 0; j < r - i - 1; j++) {
            if (answer[j] > answer[j + 1]) {
                int temp = answer[j];
                answer[j] = answer[j + 1];
                answer[j + 1] = temp;
            }
        }
    }
    return answer;
}