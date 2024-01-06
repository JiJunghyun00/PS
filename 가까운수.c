#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// array_len�� �迭 array�� �����Դϴ�.
int solution(int array[], size_t array_len, int n) {
    int answer = 0, compare = 0, compare_result = 100;
    for (int i = 0;i < array_len;i++) {
        compare = abs(array[i] - n);
        if (compare_result > compare) {
            answer = array[i];
            compare_result = compare;
        }
        if (compare_result == compare) {
            if (array[i] < n) {
                answer = array[i];
                compare_result = compare;
            }
        }
    }
    return answer;
}