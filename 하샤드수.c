#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

bool solution(int x) {
    int sum = 0, copy_x = x;
    while (copy_x > 0) {
        sum += copy_x % 10;
        copy_x = copy_x / 10;
    }

    if (x % sum == 0) {
        return true;
    }
    else {
        return false;
    }
}