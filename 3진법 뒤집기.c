#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
unsigned long long solution(int n) {
    unsigned long long answer = 0;
    unsigned long long remain = 0;
    unsigned long long len = 1;
    int temp = n;
    while (temp >= 3) {
        temp = temp / 3;
        len = len * 10;
    }

    while (n >= 3) {
        remain += (n % 3) * len;
        n = n / 3;
        len = len / 10;
    }
    remain += n;

    char buffer[100];
    snprintf(buffer, sizeof(buffer), "%llu", remain);
    int check = strlen(buffer);
    int i = 0;
    while (check > 0) {
        check--;
        answer += (unsigned long long)(buffer[check] - '0') * (unsigned long long)pow(3, i);
        i++;

    }
    return answer;
}