#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <math.h>
long long solution(long long n) {
    long long answer = 0;
    long long num = sqrt(n);
    if (num * num == n) {
        return (num + 1) * (num + 1);
    }
    else {
        return -1;
    }
}