#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// �Ķ���ͷ� �־����� ���ڿ��� const�� �־����ϴ�. �����Ϸ��� ���ڿ��� �����ؼ� ����ϼ���.
char* solution(const char* bin1, const char* bin2) {
    // return ���� malloc �� ���� �Ҵ��� ������ּ���. �Ҵ� ���̴� ��Ȳ�� �°� �������ּ���.
    char* result = (char*)malloc(10000000);
    int check = 0;
    for (int i = 0;i < strlen(bin1);i++) {
        if (check == 1) {
            if (bin1[i] == '1' && bin2[i] == '1') {

                result[i] = '1';
            }
            else if (bin1[i] == '1' || bin2[i] == '1') {
                result[i] = '1';
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
    return result;
}