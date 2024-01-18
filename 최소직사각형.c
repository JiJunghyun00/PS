#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// sizes_rows는 2차원 배열 sizes의 행 길이, sizes_cols는 2차원 배열 sizes의 열 길이입니다.
int solution(int** sizes, size_t sizes_rows, size_t sizes_cols) {
    for (int i = 0;i < sizes_rows;i++) {
        for (int j = 0;j < 2;j++) {
            if (sizes[i][0] < sizes[i][1]) {
                int temp = sizes[i][0];
                sizes[i][0] = sizes[i][1];
                sizes[i][1] = temp;
            }
        }

    }
    int maxW = 0;
    int maxH = 0;
    for (int k = 0;k < sizes_rows;k++) {
        if (sizes[k][0] > maxW) {
            maxW = sizes[k][0];
        }
        if (sizes[k][1] > maxH)
            maxH = sizes[k][1];
    }
    return maxW * maxH;
}