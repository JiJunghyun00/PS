#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
int k = 0;

int** solution(int num_list[], size_t num_list_len, int n) {
 
    int** answer = (int**)malloc(sizeof(int*) * (num_list_len / n));
    for (int i = 0;i < num_list_len / n;i++) {
        answer[i] = (int*)malloc(sizeof(int) * n);
        for (int j = 0;j < n;j++) {
            answer[i][j] = num_list[k];
            k++;
        }
    }

    return answer;
}