#include <string>
#include <vector>
#include <list>
#include<iostream>
using namespace std;
list<int> toBinary(int num, int n)
{
    list<int> result;
    int count = 0;
    while (1)
    {
        result.push_front(num % 2);
        num /= 2;
        count++;
        if (num == 0) break;
    }

    while (n - count) {
        result.push_front(0);
        count++;
    }
    return result;
}
vector<string> solution(int n, vector<int> arr1, vector<int> arr2)
{
    vector<string> answer(n);
    for (int i = 0;i < n;i++)
    {
        list<int> temp1 = toBinary(arr1[i], n);
        list<int> temp2 = toBinary(arr2[i], n);

        for (int j = 0;j < n;j++)
        {
            if ((temp1.front() + temp2.front()) > 0) answer[i] += '#';
            else answer[i] += ' ';
            temp1.pop_front();
            temp2.pop_front();
        }
    }
    return answer;
}