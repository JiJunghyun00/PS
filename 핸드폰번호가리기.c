#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
char* solution(const char* phone_number) {
    char* copy_phone_number = phone_number;
    char* check = phone_number;
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    char* answer = (char*)malloc(12);
    answer = phone_number;
    while (*copy_phone_number != '\0') {
        copy_phone_number++;
    }
    copy_phone_number = copy_phone_number - 4;
    while (check != copy_phone_number) {
        *check = '*';
        check++;
    }
    return answer;
}