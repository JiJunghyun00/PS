#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> answer = arr;
    if (answer.size() == 1) {
        answer.erase(answer.begin());
        answer.push_back(-1);
        return answer;
    }
    int min = answer[0];
    int min_index = 0;
    for (int i = 0;i < arr.size();i++) {
        if (min > answer[i]) {
            min = answer[i];
            min_index = i;
        }
    }
    answer.erase(answer.begin() + min_index);
    return answer;
}