#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(long long num) {
    int answer = 0;
    if (num == 1) {
        return 0;
    }
    while (true) {
        if (answer >= 500) {
            return -1;
        }
        if (num % 2 == 0) {
            num = num / 2;
        }
        else {
            num = num * 3 + 1;
        }
        answer++;
        if (num == 1) {
            return answer;
        }
    }
}