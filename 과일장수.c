#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
void quicksort(int arr[], int low, int high) {
    if (low < high) {
        // �ǹ��� �����ϰ� �����ϴ� ����
        int pivot = arr[high]; // �ǹ��� �迭�� ������ ��ҷ� ����
        int i = low - 1; // ���� ���� �ʱ�ȭ

        // �迭�� �ǹ��� �������� ����
        for (int j = low; j < high; j++) {
            if (arr[j] >= pivot) { // ������������ ����
                i++;
                // ���� ��Ҹ� �ǹ����� ū �κ����� �̵�
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }

        // �ǹ��� �ùٸ� ��ġ�� �̵�
        int temp = arr[i + 1];
        arr[i + 1] = arr[high];
        arr[high] = temp;

        int partitionIndex = i + 1;

        // ���ҵ� �κ��� ��������� ����
        quicksort(arr, low, partitionIndex - 1); // ���� �κ� �迭 ����
        quicksort(arr, partitionIndex + 1, high); // ������ �κ� �迭 ����
    }
}
// score_len�� �迭 score�� �����Դϴ�.
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