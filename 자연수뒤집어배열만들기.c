#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int* solution(long long n) {
    int* answer = (int*)malloc(sizeof(int) * sizeof(n));
    int i = 0;
    while (n > 0) {
        *(answer + i) = n % 10;
        i++;
        n = n / 10;
    }
    return answer;
}