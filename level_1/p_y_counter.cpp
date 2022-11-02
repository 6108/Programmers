//문자열 내 p와 y의 개수
#include <string>
#include <iostream>
using namespace std;

bool solution(string s)
{
    int count = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == 'P' || s[i] == 'p')
            count++;
        if (s[i] == 'Y' || s[i] == 'y')
            count--;
    }
    return (count == 0) ? true : false;
}