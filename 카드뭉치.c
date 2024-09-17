#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
// cards1_len�� �迭 cards1�� �����Դϴ�.
// cards2_len�� �迭 cards2�� �����Դϴ�.
// goal_len�� �迭 goal�� �����Դϴ�.
// �Ķ���ͷ� �־����� ���ڿ��� const�� �־����ϴ�. �����Ϸ��� ���ڿ��� �����ؼ� ����ϼ���.
char* solution(const char* cards1[], size_t cards1_len, const char* cards2[], size_t cards2_len, const char* goal[], size_t goal_len) {
    // return ���� malloc �� ���� �Ҵ��� ������ּ���. �Ҵ� ���̴� ��Ȳ�� �°� �������ּ���.
    int counter = 0;
    int counter_backup = 0;
    int cards1_idx = 0;
    int cards2_idx = 0;
    for (int j = 0;j < goal_len;j++)
    {
        if (cards1_idx < cards1_len) {
            if (strcmp(cards1[cards1_idx], goal[j]) == 0)
            {
                cards1_idx++;
                counter++;
            }
        }
        if (cards2_idx < cards2_len) {
            if (strcmp(cards2[cards2_idx], goal[j]) == 0)
            {
                cards2_idx++;
                counter++;
            }
        }
        if (counter_backup == counter)
        {
            return "No";
        }
        else
        {
            counter_backup = counter;
        }
    }
    return "Yes";
}