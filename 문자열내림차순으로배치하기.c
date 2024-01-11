#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
char* solution(const char* s) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    char* answer = (char*)malloc(10000);
    char* copy_s = s;
    int len = strlen(s);
    char max = '@';
    char temp = '@';
    char* address = NULL;
    int add_address = 0;
    for (int k = 0;k < len;k++) {
        for (int i = k;i < len;i++) {
            temp = *(copy_s + i);
            if (max < temp) {
                max = temp;
                add_address = i;
            }

        }
        *(copy_s + add_address) = *(copy_s + k);
        *(answer + k) = max;
        max = '@';
    }
    return answer;
}