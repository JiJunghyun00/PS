#include <string>
#include <vector>

using namespace std;

int solution(string my_string) {
    int answer = 0;
    for (int i = 0;i < my_string.size();i++) {
        if ((int)my_string[i] >= '0' && (int)my_string[i] <= '9') {
            answer += (int)my_string[i] - '0';
        }
    }