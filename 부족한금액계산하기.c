#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

long long solution(int price, long long money, int count) {
    long long answer = 0;
    long long totalPrice = 0;
    for (int i = 1;i <= count;i++) {
        totalPrice += price * i;
    }
    if (money >= totalPrice) {
        return 0;
    }
    answer = (totalPrice - money);
    return answer;
}