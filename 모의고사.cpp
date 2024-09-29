#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

vector<int> solution(vector<int> answers) {
    vector<int> answer;
    int one_answer = 1;
    int two_idx = 0;
    int three_idx = 0;
    int two_answer[8] = { 2,1,2,3,2,4,2,5 };
    int three_answer[10] = { 3, 3, 1, 1, 2, 2, 4, 4, 5, 5 };
    int one = 0, two = 0, three = 0;
    for (int i = 0;i < answers.size();i++)
    {
        if (one_answer == 6) one_answer = 1;
        if (answers[i] == one_answer) one++;
        one_answer++;

        if (two_idx == 8) two_idx = 0;
        if (answers[i] == two_answer[two_idx]) two++;
        two_idx++;

        if (three_idx == 10) three_idx = 0;
        if (answers[i] == three_answer[three_idx]) three++;
        three_idx++;
    }
    int max = 0;

    if (one > max) max = one;
    if (two > max)  max = two;
    if (three > max) max = three;
    if (max == one) answer.push_back(1);
    if (max == two) answer.push_back(2);
    if (max == three) answer.push_back(3);
    return answer;
}