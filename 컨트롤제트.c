#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
int solution(const char* s) {
    int sum = 0;
    int length = strlen(s);
    int i;
    int temp = 0; // 이전에 더한 숫자를 임시로 저장할 변수

    for (i = 0; i < length; i++) {

        if (s[i] == 'Z') {
            if (i == 1) {
                sum = 0;
            }
            else {
                sum -= temp; // 'Z'가 나오면 이전에 더한 숫자를 빼줍니다.
            }
        }
        else {
            int num = atoi(&s[i]); // 숫자를 문자열에서 읽어옵니다.
            temp = num; // 현재 숫자를 임시 변수에 저장해둡니다.
            sum += num; // 현재 숫자를 더합니다.

            // 현재 읽은 숫자의 자릿수를 건너뜁니다.
            while (s[i] != ' ' && s[i] != '\0') {
                i++;
            }
        }
    }
    return sum;
}