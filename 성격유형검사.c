#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// survey_len은 배열 survey의 길이입니다.
// choices_len은 배열 choices의 길이입니다.
// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
char* solution(const char* survey[], size_t survey_len, int choices[], size_t choices_len) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    char* answer = (char*)malloc(5 * sizeof(char));
    int a = 0, n = 0, c = 0, f = 0, j = 0, m = 0, r = 0, t = 0;
    for (int i = 0;i < choices_len;i++) {
        switch (survey[i][0]) {
        case 'R':
            if (choices[i] == 1) r += 3;
            if (choices[i] == 2) r += 2;
            if (choices[i] == 3) r += 1;
            if (choices[i] == 5) t += 1;
            if (choices[i] == 6) t += 2;
            if (choices[i] == 7) t += 3;
            break;
        case 'T':
            if (choices[i] == 1) t += 3;
            if (choices[i] == 2) t += 2;
            if (choices[i] == 3) t += 1;
            if (choices[i] == 5) r += 1;
            if (choices[i] == 6) r += 2;
            if (choices[i] == 7) r += 3;
            break;
        case 'C':
            if (choices[i] == 1) c += 3;
            if (choices[i] == 2) c += 2;
            if (choices[i] == 3) c += 1;
            if (choices[i] == 5) f += 1;
            if (choices[i] == 6) f += 2;
            if (choices[i] == 7) f += 3;
            break;
        case 'F':
            if (choices[i] == 1) f += 3;
            if (choices[i] == 2) f += 2;
            if (choices[i] == 3) f += 1;
            if (choices[i] == 5) c += 1;
            if (choices[i] == 6) c += 2;
            if (choices[i] == 7) c += 3;
            break;
        case 'J':
            if (choices[i] == 1) j += 3;
            if (choices[i] == 2) j += 2;
            if (choices[i] == 3) j += 1;
            if (choices[i] == 5) m += 1;
            if (choices[i] == 6) m += 2;
            if (choices[i] == 7) m += 3;
            break;
        case 'M':
            if (choices[i] == 1) m += 3;
            if (choices[i] == 2) m += 2;
            if (choices[i] == 3) m += 1;
            if (choices[i] == 5) j += 1;
            if (choices[i] == 6) j += 2;
            if (choices[i] == 7) j += 3;
            break;
        case 'A':
            if (choices[i] == 1) a += 3;
            if (choices[i] == 2) a += 2;
            if (choices[i] == 3) a += 1;
            if (choices[i] == 5) n += 1;
            if (choices[i] == 6) n += 2;
            if (choices[i] == 7) n += 3;
            break;
        case 'N':
            if (choices[i] == 1) n += 3;
            if (choices[i] == 2) n += 2;
            if (choices[i] == 3) n += 1;
            if (choices[i] == 5) a += 1;
            if (choices[i] == 6) a += 2;
            if (choices[i] == 7) a += 3;
            break;
        default:break;
        }

    }
    if (r >= t) answer[0] = 'R';
    else answer[0] = 'T';
    if (c >= f) answer[1] = 'C';
    else answer[1] = 'F';
    if (j >= m) answer[2] = 'J';
    else answer[2] = 'M';
    if (a >= n) answer[3] = 'A';
    else answer[3] = 'N';
    answer[4] = '\0';
    return answer;
}