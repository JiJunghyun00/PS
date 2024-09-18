#include <string>
#include <vector>
using namespace std;

string solution(string s, int n) {
    string answer = "";
    for (char c : s) 
    {
        if ('a' <= c && c <= 'z') 
        {
            char shifted = (c - 'a' + n) % 26 + 'a';
            answer += shifted;
        }
        else if ('A' <= c && c <= 'Z') 
        {
            char shifted = (c - 'A' + n) % 26 + 'A';
            answer += shifted;
        }
        else 
        {
            answer += c;
        }
    }

    return answer;
}