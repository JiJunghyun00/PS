#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
char* solution(const char* my_string, int n) {
    char* answer = (char*)malloc(sizeof(char) * (n + 1));
    int k = 0;
    for (int i = (strlen(my_string) - n);i < strlen(my_string);i++) {
        answer[k] = my_string[i];
        k++;
    }
    answer[k] = '\0';
    return answer;
}