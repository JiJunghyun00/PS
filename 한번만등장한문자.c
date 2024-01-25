#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
char* solution(const char* s) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    char* answer = (char*)malloc(1001);
    int result[26] = { 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0 };
    for (int i = 0;i < strlen(s);i++) {
        if (s[i] == 'a') {
            result[0]++;
        }
        if (s[i] == 'b') {
            result[1]++;
        }
        if (s[i] == 'c') {
            result[2]++;
        }
        if (s[i] == 'd') {
            result[3]++;
        }
        if (s[i] == 'e') {
            result[4]++;
        }
        if (s[i] == 'f') {
            result[5]++;
        }
        if (s[i] == 'g') {
            result[6]++;
        }
        if (s[i] == 'h') {
            result[7]++;
        }
        if (s[i] == 'i') {
            result[8]++;
        }
        if (s[i] == 'j') {
            result[9]++;
        }
        if (s[i] == 'k') {
            result[10]++;
        }
        if (s[i] == 'l') {
            result[11]++;
        }
        if (s[i] == 'm') {
            result[12]++;
        }
        if (s[i] == 'n') {
            result[13]++;
        }
        if (s[i] == 'o') {
            result[14]++;
        }
        if (s[i] == 'p') {
            result[15]++;
        }
        if (s[i] == 'q') {
            result[16]++;
        }
        if (s[i] == 'r') {
            result[17]++;
        }
        if (s[i] == 's') {
            result[18]++;
        }
        if (s[i] == 't') {
            result[19]++;
        }
        if (s[i] == 'u') {
            result[20]++;
        }
        if (s[i] == 'v') {
            result[21]++;
        }
        if (s[i] == 'w') {
            result[22]++;
        }
        if (s[i] == 'x') {
            result[23]++;
        }
        if (s[i] == 'y') {
            result[24]++;
        }
        if (s[i] == 'z') {
            result[25]++;
        }
    }
    int counter = 0;
    if (result[0] == 1) {
        *(answer + counter) = 'a';
        counter++;
    }
    if (result[1] == 1) {
        *(answer + counter) = 'b';
        counter++;
    }
    if (result[2] == 1) {
        *(answer + counter) = 'c';
        counter++;
    }
    if (result[3] == 1) {
        *(answer + counter) = 'd';
        counter++;
    }
    if (result[4] == 1) {
        *(answer + counter) = 'e';
        counter++;
    }
    if (result[5] == 1) {
        *(answer + counter) = 'f';
        counter++;
    }
    if (result[6] == 1) {
        *(answer + counter) = 'g';
        counter++;
    }
    if (result[7] == 1) {
        *(answer + counter) = 'h';
        counter++;
    }
    if (result[8] == 1) {
        *(answer + counter) = 'i';
        counter++;
    }
    if (result[9] == 1) {
        *(answer + counter) = 'j';
        counter++;
    }
    if (result[10] == 1) {
        *(answer + counter) = 'k';
        counter++;
    }
    if (result[11] == 1) {
        *(answer + counter) = 'l';
        counter++;
    }
    if (result[12] == 1) {
        *(answer + counter) = 'm';
        counter++;
    }
    if (result[13] == 1) {
        *(answer + counter) = 'n';
        counter++;
    }
    if (result[14] == 1) {
        *(answer + counter) = 'o';
        counter++;
    }
    if (result[15] == 1) {
        *(answer + counter) = 'p';
        counter++;
    }
    if (result[16] == 1) {
        *(answer + counter) = 'q';
        counter++;
    }
    if (result[17] == 1) {
        *(answer + counter) = 'r';
        counter++;
    }
    if (result[18] == 1) {
        *(answer + counter) = 's';
        counter++;
    }
    if (result[19] == 1) {
        *(answer + counter) = 't';
        counter++;
    }
    if (result[20] == 1) {
        *(answer + counter) = 'u';
        counter++;
    }
    if (result[21] == 1) {
        *(answer + counter) = 'v';
        counter++;
    }
    if (result[22] == 1) {
        *(answer + counter) = 'w';
        counter++;
    }
    if (result[23] == 1) {
        *(answer + counter) = 'x';
        counter++;
    }
    if (result[24] == 1) {
        *(answer + counter) = 'y';
        counter++;
    }
    if (result[25] == 1) {
        *(answer + counter) = 'z';
        counter++;
    }
    *(answer + counter) = '\0';
    return answer;
}