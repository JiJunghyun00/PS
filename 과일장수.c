#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
void quicksort(int arr[], int low, int high) {
    if (low < high) {
        // 피벗을 설정하고 분할하는 과정
        int pivot = arr[high]; // 피벗을 배열의 마지막 요소로 선택
        int i = low - 1; // 분할 지점 초기화

        // 배열을 피벗을 기준으로 분할
        for (int j = low; j < high; j++) {
            if (arr[j] >= pivot) { // 내림차순으로 정렬
                i++;
                // 현재 요소를 피벗보다 큰 부분으로 이동
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }

        // 피벗을 올바른 위치로 이동
        int temp = arr[i + 1];
        arr[i + 1] = arr[high];
        arr[high] = temp;

        int partitionIndex = i + 1;

        // 분할된 부분을 재귀적으로 정렬
        quicksort(arr, low, partitionIndex - 1); // 왼쪽 부분 배열 정렬
        quicksort(arr, partitionIndex + 1, high); // 오른쪽 부분 배열 정렬
    }
}
// score_len은 배열 score의 길이입니다.
int solution(int k, int m, int score[], size_t score_len) {
    int answer = 0;
    /*  for (int i = 0; i < score_len - 1; i++) {
          for (int j = 0; j < score_len -i - 1; j++) {
              if (score[j] < score[j + 1]) {
                  int temp = score[j];
                  score[j] = score[j + 1];
                  score[j + 1] = temp;
              }
          }
      }*/
    quicksort(score, 0, score_len - 1);
    for (int i = m;i <= score_len;i += m) {
        answer += score[i - 1] * m;
    }
    return answer;
}