#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

char* solution(int a, int b) {
    // 2016년 1월 1일은 금요일
    char* days[] = { "FRI", "SAT", "SUN", "MON", "TUE", "WED", "THU" };

    int daysInMonth[] = { 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

    int totalDays = 0;
    for (int i = 1; i < a; i++) {
        totalDays += daysInMonth[i - 1];
    }

    totalDays += b - 1;

    int dayIndex = totalDays % 7;

    return days[dayIndex];
}