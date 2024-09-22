#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
int idx = 0;

bool customCompare(const string& a, const string& b) {
    int n = idx;
    if (a[n] == b[n]) {
        n = 0;
        for (int i = n;i <= a.size();i++) {
            if (a[n] == b[n]) n += 1;
            else break;
        }
    }
    return a[n] < b[n]; // n번째 인덱스의 문자 기준으로 비교
}

vector<string> solution(vector<string> strings, int n) {
    idx = n;
    sort(strings.begin(), strings.end(), customCompare);
    return strings;
}