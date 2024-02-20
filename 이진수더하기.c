#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
char* solution(const char* bin1, const char* bin2) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    char* result = (char*)malloc(10000000);
    char* result2 = result;
    int check = 0;

    for (int i = strlen(bin1) - 1;i >= 0;i--) {
        if (check == 1) {
            if (bin1[i] == '1' && bin2[i] == '1') {

                result[i] = '1';
            }
            else if (bin1[i] == '1' || bin2[i] == '1') {
                result[i] = '0';
            }
            else {
                result[i] = '1';
                check = 0;
            }
        }
        else {
            if (bin1[i] == '1' && bin2[i] == '1') {
                check = 1;
                result[i] = '0';
            }
            else if (bin1[i] == '1' || bin2[i] == '1') {
                result[i] = '1';
            }
            else {
                result[i] = '0';
            }
        }
    }
    if (result[0] == '0') {
        char* result = (char*)malloc(10000000);
        result[0] = '1';
        char temp;
        for (int i = strlen(bin1);i > 0;i--) {
            result[i] = result2[i - 1];
        }
    }
    return result;
}