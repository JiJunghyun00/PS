#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

long long solution(int a, int b) {
    long long answer = 0;
    long long smallNum = 0, bigNum = 0;
    if (a > b) {
        smallNum = b;
        bigNum = a;
    }
    else if (b > a) {
        smallNum = a;
        bigNum = b;
    }
    else {
        return a;
    }

    for (int i = smallNum;i <= bigNum;i++) {
        answer += i;
    }
    return answer;
}