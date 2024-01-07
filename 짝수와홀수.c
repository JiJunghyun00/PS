#include <stdbool.h>
#include <stdlib.h>

char* solution(int num) {
    if (abs(num) % 2 == 1) {
        return "Odd";
    }
    else {
        return "Even";
    }
}